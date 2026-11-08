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

// Function: entry_001d1c88
// Address: 0x1d1c88 - 0x1d1ce0
void entry_001d1c88_0x1d1c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1c88_0x1d1c88");
#endif

    switch (ctx->pc) {
        case 0x1d1cccu: goto label_1d1ccc;
        default: break;
    }

    ctx->pc = 0x1d1c88u;

    // 0x1d1c88: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D1C88u;
    {
        const bool branch_taken_0x1d1c88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C88u;
        // 0x1d1c8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c88) {
            ctx->pc = 0x1D1CE0u;
            return;
        }
    }
    ctx->pc = 0x1D1C90u;
    // 0x1d1c90: 0x27a301d1  addiu       $v1, $sp, 0x1D1
    ctx->pc = 0x1d1c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 465));
    // 0x1d1c94: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1d1c94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1d1c98: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1d1c98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1d1c9c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d1c9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d1ca0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d1ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d1ca4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d1ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1ca8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d1ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d1cac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1cb0: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d1cb0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d1cb4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d1cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d1cb8: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D1CB8u;
    {
        const bool branch_taken_0x1d1cb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1CB8u;
        // 0x1d1cbc: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1cb8) {
            ctx->pc = 0x1D1D44u;
            return;
        }
    }
    ctx->pc = 0x1D1CC0u;
    // 0x1d1cc0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d1cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d1cc4: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D1CC4u;
    SET_GPR_U32(ctx, 31, 0x1D1CCCu);
    ctx->pc = 0x1D1CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1CC4u;
    // 0x1d1cc8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D1CC4u, 0x1D1CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1CCCu;
label_1d1ccc:
    // 0x1d1ccc: 0x14400309  bnez        $v0, . + 4 + (0x309 << 2)
    ctx->pc = 0x1D1CCCu;
    {
        const bool branch_taken_0x1d1ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1CCCu;
        // 0x1d1cd0: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ccc) {
            ctx->pc = 0x1D28F4u;
            return;
        }
    }
    ctx->pc = 0x1D1CD4u;
    // 0x1d1cd4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d1cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d1cd8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1D1CD8u;
    {
        const bool branch_taken_0x1d1cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1CD8u;
        // 0x1d1cdc: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1cd8) {
            ctx->pc = 0x1D1D44u;
            return;
        }
    }
    ctx->pc = 0x1D1CE0u;
}
