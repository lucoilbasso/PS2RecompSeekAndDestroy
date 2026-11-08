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

// Function: entry_0013fb64
// Address: 0x13fb64 - 0x13fb80
void entry_0013fb64_0x13fb64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fb64_0x13fb64");
#endif

    ctx->pc = 0x13fb64u;

    // 0x13fb64: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x13fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x13fb68: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x13FB68u;
    {
        const bool branch_taken_0x13fb68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB68u;
        // 0x13fb6c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fb68) {
            ctx->pc = 0x13FBA8u;
            return;
        }
    }
    ctx->pc = 0x13FB70u;
    // 0x13fb70: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x13FB70u;
    {
        const bool branch_taken_0x13fb70 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB70u;
        // 0x13fb74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fb70) {
            ctx->pc = 0x13FB80u;
            return;
        }
    }
    ctx->pc = 0x13FB78u;
    // 0x13fb78: 0xc0618c2  jal         func_186308
    ctx->pc = 0x13FB78u;
    SET_GPR_U32(ctx, 31, 0x13FB80u);
    ctx->pc = 0x13FB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FB78u;
    // 0x13fb7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13FB78u, 0x13FB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB80u;
}
