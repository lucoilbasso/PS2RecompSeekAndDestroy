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

// Function: entry_00106d60
// Address: 0x106d60 - 0x106d80
void entry_00106d60_0x106d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106d60_0x106d60");
#endif

    ctx->pc = 0x106d60u;

    // 0x106d60: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x106d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x106d64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x106d64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x106d68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x106d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x106d6c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x106d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x106d70: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x106D70u;
    {
        const bool branch_taken_0x106d70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x106D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D70u;
        // 0x106d74: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d70) {
            ctx->pc = 0x106D80u;
            return;
        }
    }
    ctx->pc = 0x106D78u;
    // 0x106d78: 0xc065764  jal         func_195D90
    ctx->pc = 0x106D78u;
    SET_GPR_U32(ctx, 31, 0x106D80u);
    ctx->pc = 0x106D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106D78u;
    // 0x106d7c: 0x8c850244  lw          $a1, 0x244($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 580)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195D90u, 0x106D78u, 0x106D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106D80u;
}
