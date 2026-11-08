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

// Function: caseD_d
// Address: 0x1cb888 - 0x1cb8a8
void caseD_d_0x1cb888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x1cb888");
#endif

    switch (ctx->pc) {
        case 0x1cb894u: goto label_1cb894;
        default: break;
    }

    ctx->pc = 0x1cb888u;

    // 0x1cb888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb88c: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB88Cu;
    SET_GPR_U32(ctx, 31, 0x1CB894u);
    ctx->pc = 0x1CB890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB88Cu;
    // 0x1cb890: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB88Cu, 0x1CB894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB894u;
label_1cb894:
    // 0x1cb894: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb898: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x1cb898u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1cb89c: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1CB89Cu;
    {
        const bool branch_taken_0x1cb89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB89Cu;
        // 0x1cb8a0: 0xa62203f8  sh          $v0, 0x3F8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1016), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb89c) {
            ctx->pc = 0x1CBA90u;
            return;
        }
    }
    ctx->pc = 0x1CB8A4u;
    // 0x1cb8a4: 0x0  nop
    ctx->pc = 0x1cb8a4u;
    // NOP
    ctx->pc = 0x1cb8a8u;
}
