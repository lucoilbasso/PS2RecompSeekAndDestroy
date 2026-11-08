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

// Function: entry_001a0850
// Address: 0x1a0850 - 0x1a0874
void entry_001a0850_0x1a0850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0850_0x1a0850");
#endif

    switch (ctx->pc) {
        case 0x1a0870u: goto label_1a0870;
        default: break;
    }

    ctx->pc = 0x1a0850u;

    // 0x1a0850: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A0850u;
    {
        const bool branch_taken_0x1a0850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0850u;
        // 0x1a0854: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0850) {
            ctx->pc = 0x1A0888u;
            return;
        }
    }
    ctx->pc = 0x1A0858u;
    // 0x1a0858: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x1a0858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1a085c: 0x8f8790e8  lw          $a3, -0x6F18($gp)
    ctx->pc = 0x1a085cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
    // 0x1a0860: 0x24a59068  addiu       $a1, $a1, -0x6F98
    ctx->pc = 0x1a0860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938728));
    // 0x1a0864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0868: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x1A0868u;
    SET_GPR_U32(ctx, 31, 0x1A0870u);
    ctx->pc = 0x1A086Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0868u;
    // 0x1a086c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x1A0868u, 0x1A0870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0870u;
label_1a0870:
    // 0x1a0870: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a0870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a0874u;
}
