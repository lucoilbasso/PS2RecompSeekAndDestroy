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

// Function: entry_001cdf5c
// Address: 0x1cdf5c - 0x1cdf80
void entry_001cdf5c_0x1cdf5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdf5c_0x1cdf5c");
#endif

    switch (ctx->pc) {
        case 0x1cdf74u: goto label_1cdf74;
        default: break;
    }

    ctx->pc = 0x1cdf5cu;

    // 0x1cdf5c: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CDF5Cu;
    {
        const bool branch_taken_0x1cdf5c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF5Cu;
        // 0x1cdf60: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf5c) {
            ctx->pc = 0x1CDF80u;
            return;
        }
    }
    ctx->pc = 0x1CDF64u;
    // 0x1cdf64: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1cdf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1cdf68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cdf68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdf6c: 0xc0736e0  jal         func_1CDB80
    ctx->pc = 0x1CDF6Cu;
    SET_GPR_U32(ctx, 31, 0x1CDF74u);
    ctx->pc = 0x1CDF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF6Cu;
    // 0x1cdf70: 0x27a80d80  addiu       $t0, $sp, 0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 3456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDB80u, 0x1CDF6Cu, 0x1CDF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF74u;
label_1cdf74:
    // 0x1cdf74: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1cdf74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1cdf78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1CDF78u;
    {
        const bool branch_taken_0x1cdf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF78u;
        // 0x1cdf7c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf78) {
            ctx->pc = 0x1CDFA8u;
            return;
        }
    }
    ctx->pc = 0x1CDF80u;
}
