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

// Function: entry_001a7a58
// Address: 0x1a7a58 - 0x1a7a84
void entry_001a7a58_0x1a7a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7a58_0x1a7a58");
#endif

    ctx->pc = 0x1a7a58u;

    // 0x1a7a58: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A7A58u;
    {
        const bool branch_taken_0x1a7a58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A58u;
        // 0x1a7a5c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a58) {
            ctx->pc = 0x1A7AA0u;
            return;
        }
    }
    ctx->pc = 0x1A7A60u;
    // 0x1a7a60: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1a7a60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a7a64: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a7a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a7a68: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1a7a68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a7a6c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7A6Cu;
    {
        const bool branch_taken_0x1a7a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A6Cu;
        // 0x1a7a70: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a6c) {
            ctx->pc = 0x1A7A84u;
            return;
        }
    }
    ctx->pc = 0x1A7A74u;
    // 0x1a7a74: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a7a74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a7a78: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a7a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a7a7c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A7A7Cu;
    SET_GPR_U32(ctx, 31, 0x1A7A84u);
    ctx->pc = 0x1A7A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A7Cu;
    // 0x1a7a80: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A7A7Cu, 0x1A7A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A84u;
}
