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

// Function: entry_0017f1c4
// Address: 0x17f1c4 - 0x17f1f0
void entry_0017f1c4_0x17f1c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f1c4_0x17f1c4");
#endif

    switch (ctx->pc) {
        case 0x17f1ccu: goto label_17f1cc;
        case 0x17f1ecu: goto label_17f1ec;
        default: break;
    }

    ctx->pc = 0x17f1c4u;

    // 0x17f1c4: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17F1C4u;
    SET_GPR_U32(ctx, 31, 0x17F1CCu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17F1C4u, 0x17F1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F1CCu;
label_17f1cc:
    // 0x17f1cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17f1ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f1d0: 0x56800007  bnel        $s4, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F1D0u;
    {
        const bool branch_taken_0x17f1d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f1d0) {
            ctx->pc = 0x17F1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F1D0u;
            // 0x17f1d4: 0x121100  sll         $v0, $s2, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F1F0u;
            return;
        }
    }
    ctx->pc = 0x17F1D8u;
    // 0x17f1d8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17f1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17f1dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17f1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f1e0: 0x24a57d00  addiu       $a1, $a1, 0x7D00
    ctx->pc = 0x17f1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32000));
    // 0x17f1e4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17F1E4u;
    SET_GPR_U32(ctx, 31, 0x17F1ECu);
    ctx->pc = 0x17F1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F1E4u;
    // 0x17f1e8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17F1E4u, 0x17F1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F1ECu;
label_17f1ec:
    // 0x17f1ec: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x17f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    ctx->pc = 0x17f1f0u;
}
