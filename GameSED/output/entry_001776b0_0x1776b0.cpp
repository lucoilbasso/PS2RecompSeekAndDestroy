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

// Function: entry_001776b0
// Address: 0x1776b0 - 0x1776c8
void entry_001776b0_0x1776b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001776b0_0x1776b0");
#endif

    ctx->pc = 0x1776b0u;

    // 0x1776b0: 0x56420006  bnel        $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1776B0u;
    {
        const bool branch_taken_0x1776b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1776b0) {
            ctx->pc = 0x1776B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1776B0u;
            // 0x1776b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1776CCu;
            return;
        }
    }
    ctx->pc = 0x1776B8u;
    // 0x1776b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1776b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1776bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1776bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1776c0: 0xc06e57e  jal         func_1B95F8
    ctx->pc = 0x1776C0u;
    SET_GPR_U32(ctx, 31, 0x1776C8u);
    ctx->pc = 0x1776C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1776C0u;
    // 0x1776c4: 0x26060054  addiu       $a2, $s0, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B95F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B95F8u, 0x1776C0u, 0x1776C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1776C8u;
}
