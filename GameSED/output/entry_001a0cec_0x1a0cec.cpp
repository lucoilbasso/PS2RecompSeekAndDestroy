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

// Function: entry_001a0cec
// Address: 0x1a0cec - 0x1a0d10
void entry_001a0cec_0x1a0cec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0cec_0x1a0cec");
#endif

    switch (ctx->pc) {
        case 0x1a0cf8u: goto label_1a0cf8;
        case 0x1a0d08u: goto label_1a0d08;
        default: break;
    }

    ctx->pc = 0x1a0cecu;

    // 0x1a0cec: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1a0cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1a0cf0: 0xc0683b6  jal         func_1A0ED8
    ctx->pc = 0x1A0CF0u;
    SET_GPR_U32(ctx, 31, 0x1A0CF8u);
    ctx->pc = 0x1A0CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0CF0u;
    // 0x1a0cf4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x1A0CF0u, 0x1A0CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0CF8u;
label_1a0cf8:
    // 0x1a0cf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0CF8u;
    {
        const bool branch_taken_0x1a0cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CF8u;
        // 0x1a0cfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0cf8) {
            ctx->pc = 0x1A0D10u;
            return;
        }
    }
    ctx->pc = 0x1A0D00u;
    // 0x1a0d00: 0xc06837c  jal         func_1A0DF0
    ctx->pc = 0x1A0D00u;
    SET_GPR_U32(ctx, 31, 0x1A0D08u);
    ctx->pc = 0x1A0D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0D00u;
    // 0x1a0d04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0DF0u, 0x1A0D00u, 0x1A0D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0D08u;
label_1a0d08:
    // 0x1a0d08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0D08u;
    {
        const bool branch_taken_0x1a0d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D08u;
        // 0x1a0d0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d08) {
            ctx->pc = 0x1A0D28u;
            return;
        }
    }
    ctx->pc = 0x1A0D10u;
}
