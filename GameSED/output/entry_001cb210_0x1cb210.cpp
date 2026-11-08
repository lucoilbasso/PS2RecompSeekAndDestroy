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

// Function: entry_001cb210
// Address: 0x1cb210 - 0x1cb238
void entry_001cb210_0x1cb210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb210_0x1cb210");
#endif

    switch (ctx->pc) {
        case 0x1cb224u: goto label_1cb224;
        default: break;
    }

    ctx->pc = 0x1cb210u;

label_1cb210:
    // 0x1cb210: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cb210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb214: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1cb214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cb218: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x1cb218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1cb21c: 0xc072c0e  jal         func_1CB038
    ctx->pc = 0x1CB21Cu;
    SET_GPR_U32(ctx, 31, 0x1CB224u);
    ctx->pc = 0x1CB220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB21Cu;
    // 0x1cb220: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB038u, 0x1CB21Cu, 0x1CB224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB224u;
label_1cb224:
    // 0x1cb224: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb228: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CB228u;
    {
        const bool branch_taken_0x1cb228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB228u;
        // 0x1cb22c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb228) {
            ctx->pc = 0x1CB210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb210;
        }
    }
    ctx->pc = 0x1CB230u;
    // 0x1cb230: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB230u;
    {
        const bool branch_taken_0x1cb230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB230u;
        // 0x1cb234: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb230) {
            ctx->pc = 0x1CB250u;
            return;
        }
    }
    ctx->pc = 0x1CB238u;
}
