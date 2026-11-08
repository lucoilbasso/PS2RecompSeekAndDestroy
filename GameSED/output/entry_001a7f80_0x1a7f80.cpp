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

// Function: entry_001a7f80
// Address: 0x1a7f80 - 0x1a7f9c
void entry_001a7f80_0x1a7f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7f80_0x1a7f80");
#endif

    switch (ctx->pc) {
        case 0x1a7f98u: goto label_1a7f98;
        default: break;
    }

    ctx->pc = 0x1a7f80u;

    // 0x1a7f80: 0x145e000b  bne         $v0, $fp, . + 4 + (0xB << 2)
    ctx->pc = 0x1A7F80u;
    {
        const bool branch_taken_0x1a7f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x1A7F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F80u;
        // 0x1a7f84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f80) {
            ctx->pc = 0x1A7FB0u;
            return;
        }
    }
    ctx->pc = 0x1A7F88u;
    // 0x1a7f88: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7F88u;
    {
        const bool branch_taken_0x1a7f88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7f88) {
            ctx->pc = 0x1A7F9Cu;
            return;
        }
    }
    ctx->pc = 0x1A7F90u;
    // 0x1a7f90: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1A7F90u;
    SET_GPR_U32(ctx, 31, 0x1A7F98u);
    ctx->pc = 0x1A7F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F90u;
    // 0x1a7f94: 0x26a4d8f8  addiu       $a0, $s5, -0x2708 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1A7F90u, 0x1A7F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F98u;
label_1a7f98:
    // 0x1a7f98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a7f9cu;
}
