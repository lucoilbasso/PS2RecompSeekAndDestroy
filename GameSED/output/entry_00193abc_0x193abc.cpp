#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00193abc
// Address: 0x193abc - 0x193ad4
void entry_00193abc_0x193abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193abc_0x193abc");
#endif

    switch (ctx->pc) {
        case 0x193ad0u: goto label_193ad0;
        default: break;
    }

    ctx->pc = 0x193abcu;

    // 0x193abc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x193abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x193ac0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x193AC0u;
    {
        const bool branch_taken_0x193ac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x193AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AC0u;
        // 0x193ac4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ac0) {
            ctx->pc = 0x193AD4u;
            return;
        }
    }
    ctx->pc = 0x193AC8u;
    // 0x193ac8: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x193AC8u;
    SET_GPR_U32(ctx, 31, 0x193AD0u);
    ctx->pc = 0x193ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193AC8u;
    // 0x193acc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x193AC8u, 0x193AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193AD0u;
label_193ad0:
    // 0x193ad0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x193ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x193ad4u;
}
