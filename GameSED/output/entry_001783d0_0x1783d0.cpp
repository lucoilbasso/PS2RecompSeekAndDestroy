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

// Function: entry_001783d0
// Address: 0x1783d0 - 0x1783f8
void entry_001783d0_0x1783d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001783d0_0x1783d0");
#endif

    switch (ctx->pc) {
        case 0x1783d8u: goto label_1783d8;
        default: break;
    }

    ctx->pc = 0x1783d0u;

    // 0x1783d0: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1783D0u;
    SET_GPR_U32(ctx, 31, 0x1783D8u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1783D0u, 0x1783D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1783D8u;
label_1783d8:
    // 0x1783d8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1783d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1783dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1783dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783e0: 0x24a57978  addiu       $a1, $a1, 0x7978
    ctx->pc = 0x1783e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31096));
    // 0x1783e4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1783E4u;
    {
        const bool branch_taken_0x1783e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1783E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1783E4u;
        // 0x1783e8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1783e4) {
            ctx->pc = 0x1783F8u;
            return;
        }
    }
    ctx->pc = 0x1783ECu;
    // 0x1783ec: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1783ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1783f0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1783F0u;
    SET_GPR_U32(ctx, 31, 0x1783F8u);
    ctx->pc = 0x1783F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1783F0u;
    // 0x1783f4: 0x8c440024  lw          $a0, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1783F0u, 0x1783F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1783F8u;
}
