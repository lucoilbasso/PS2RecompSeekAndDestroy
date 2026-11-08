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

// Function: entry_00100b3c
// Address: 0x100b3c - 0x100b60
void entry_00100b3c_0x100b3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100b3c_0x100b3c");
#endif

    switch (ctx->pc) {
        case 0x100b44u: goto label_100b44;
        default: break;
    }

    ctx->pc = 0x100b3cu;

    // 0x100b3c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x100B3Cu;
    SET_GPR_U32(ctx, 31, 0x100B44u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x100B3Cu, 0x100B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100B44u;
label_100b44:
    // 0x100b44: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x100B44u;
    {
        const bool branch_taken_0x100b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B44u;
        // 0x100b48: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b44) {
            ctx->pc = 0x100B60u;
            return;
        }
    }
    ctx->pc = 0x100B4Cu;
    // 0x100b4c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x100b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x100b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100b54: 0x24a51950  addiu       $a1, $a1, 0x1950
    ctx->pc = 0x100b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6480));
    // 0x100b58: 0xc068186  jal         func_1A0618
    ctx->pc = 0x100B58u;
    SET_GPR_U32(ctx, 31, 0x100B60u);
    ctx->pc = 0x100B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100B58u;
    // 0x100b5c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x100B58u, 0x100B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100B60u;
}
