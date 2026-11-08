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

// Function: entry_001885b0
// Address: 0x1885b0 - 0x1885d4
void entry_001885b0_0x1885b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001885b0_0x1885b0");
#endif

    switch (ctx->pc) {
        case 0x1885b8u: goto label_1885b8;
        default: break;
    }

    ctx->pc = 0x1885b0u;

    // 0x1885b0: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1885B0u;
    SET_GPR_U32(ctx, 31, 0x1885B8u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1885B0u, 0x1885B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1885B8u;
label_1885b8:
    // 0x1885b8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1885B8u;
    {
        const bool branch_taken_0x1885b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1885BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885B8u;
        // 0x1885bc: 0xae4201bc  sw          $v0, 0x1BC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885b8) {
            ctx->pc = 0x1885D4u;
            return;
        }
    }
    ctx->pc = 0x1885C0u;
    // 0x1885c0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1885c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1885c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1885c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1885c8: 0x24a57f30  addiu       $a1, $a1, 0x7F30
    ctx->pc = 0x1885c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32560));
    // 0x1885cc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1885CCu;
    SET_GPR_U32(ctx, 31, 0x1885D4u);
    ctx->pc = 0x1885D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1885CCu;
    // 0x1885d0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1885CCu, 0x1885D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1885D4u;
}
