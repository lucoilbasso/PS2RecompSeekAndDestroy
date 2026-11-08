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

// Function: entry_00100f30
// Address: 0x100f30 - 0x100f58
void entry_00100f30_0x100f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100f30_0x100f30");
#endif

    switch (ctx->pc) {
        case 0x100f38u: goto label_100f38;
        default: break;
    }

    ctx->pc = 0x100f30u;

    // 0x100f30: 0xc068086  jal         func_1A0218
    ctx->pc = 0x100F30u;
    SET_GPR_U32(ctx, 31, 0x100F38u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x100F30u, 0x100F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F38u;
label_100f38:
    // 0x100f38: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x100F38u;
    {
        const bool branch_taken_0x100f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F38u;
        // 0x100f3c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f38) {
            ctx->pc = 0x100F58u;
            return;
        }
    }
    ctx->pc = 0x100F40u;
    // 0x100f40: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x100f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x100f44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x100f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f48: 0x24a519b0  addiu       $a1, $a1, 0x19B0
    ctx->pc = 0x100f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6576));
    // 0x100f4c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x100f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x100f50: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x100F50u;
    SET_GPR_U32(ctx, 31, 0x100F58u);
    ctx->pc = 0x100F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100F50u;
    // 0x100f54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x100F50u, 0x100F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F58u;
}
