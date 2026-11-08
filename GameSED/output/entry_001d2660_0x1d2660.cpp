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

// Function: entry_001d2660
// Address: 0x1d2660 - 0x1d26a8
void entry_001d2660_0x1d2660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2660_0x1d2660");
#endif

    switch (ctx->pc) {
        case 0x1d2698u: goto label_1d2698;
        default: break;
    }

    ctx->pc = 0x1d2660u;

    // 0x1d2660: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x1d2660u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x1d2664: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d2664u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d2668: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d2668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d266c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d266cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2670: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d2674: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d2674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d2678: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x1d2678u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d267c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1d267cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1d2680: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2680u;
    {
        const bool branch_taken_0x1d2680 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2680u;
        // 0x1d2684: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2680) {
            ctx->pc = 0x1D26A8u;
            return;
        }
    }
    ctx->pc = 0x1D2688u;
    // 0x1d2688: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d2688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d268c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1d268cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d2690: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D2690u;
    SET_GPR_U32(ctx, 31, 0x1D2698u);
    ctx->pc = 0x1D2694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2690u;
    // 0x1d2694: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D2690u, 0x1D2698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2698u;
label_1d2698:
    // 0x1d2698: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x1D2698u;
    {
        const bool branch_taken_0x1d2698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2698u;
        // 0x1d269c: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2698) {
            ctx->pc = 0x1D28F0u;
            return;
        }
    }
    ctx->pc = 0x1D26A0u;
    // 0x1d26a0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1d26a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d26a4: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1d26a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d26a8u;
}
