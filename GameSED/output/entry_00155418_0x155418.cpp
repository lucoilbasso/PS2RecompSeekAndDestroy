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

// Function: entry_00155418
// Address: 0x155418 - 0x155434
void entry_00155418_0x155418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155418_0x155418");
#endif

    ctx->pc = 0x155418u;

    // 0x155418: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x155418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x15541c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15541Cu;
    {
        const bool branch_taken_0x15541c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15541Cu;
        // 0x155420: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15541c) {
            ctx->pc = 0x155434u;
            return;
        }
    }
    ctx->pc = 0x155424u;
    // 0x155424: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x155424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155428: 0x26a56e00  addiu       $a1, $s5, 0x6E00
    ctx->pc = 0x155428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 28160));
    // 0x15542c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x15542Cu;
    SET_GPR_U32(ctx, 31, 0x155434u);
    ctx->pc = 0x155430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15542Cu;
    // 0x155430: 0x24060037  addiu       $a2, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x15542Cu, 0x155434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155434u;
}
