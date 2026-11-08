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

// Function: entry_00186880
// Address: 0x186880 - 0x1868a0
void entry_00186880_0x186880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186880_0x186880");
#endif

    switch (ctx->pc) {
        case 0x18689cu: goto label_18689c;
        default: break;
    }

    ctx->pc = 0x186880u;

    // 0x186880: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x186880u;
    {
        const bool branch_taken_0x186880 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x186884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186880u;
        // 0x186884: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186880) {
            ctx->pc = 0x1868A0u;
            return;
        }
    }
    ctx->pc = 0x186888u;
    // 0x186888: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x186888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x18688c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18688cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186890: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x186890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186894: 0xc068866  jal         func_1A2198
    ctx->pc = 0x186894u;
    SET_GPR_U32(ctx, 31, 0x18689Cu);
    ctx->pc = 0x186898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186894u;
    // 0x186898: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x186894u, 0x18689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18689Cu;
label_18689c:
    // 0x18689c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18689cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1868a0u;
}
