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

// Function: entry_00125800
// Address: 0x125800 - 0x125824
void entry_00125800_0x125800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125800_0x125800");
#endif

    switch (ctx->pc) {
        case 0x125808u: goto label_125808;
        default: break;
    }

    ctx->pc = 0x125800u;

    // 0x125800: 0xc068086  jal         func_1A0218
    ctx->pc = 0x125800u;
    SET_GPR_U32(ctx, 31, 0x125808u);
    ctx->pc = 0x125804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125800u;
    // 0x125804: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x125800u, 0x125808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125808u;
label_125808:
    // 0x125808: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x125808u;
    {
        const bool branch_taken_0x125808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125808u;
        // 0x12580c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125808) {
            ctx->pc = 0x125824u;
            return;
        }
    }
    ctx->pc = 0x125810u;
    // 0x125810: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x125810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x125814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x125814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125818: 0x24a55d00  addiu       $a1, $a1, 0x5D00
    ctx->pc = 0x125818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23808));
    // 0x12581c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x12581Cu;
    SET_GPR_U32(ctx, 31, 0x125824u);
    ctx->pc = 0x125820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12581Cu;
    // 0x125820: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x12581Cu, 0x125824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125824u;
}
