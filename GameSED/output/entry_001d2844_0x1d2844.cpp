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

// Function: entry_001d2844
// Address: 0x1d2844 - 0x1d2880
void entry_001d2844_0x1d2844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2844_0x1d2844");
#endif

    switch (ctx->pc) {
        case 0x1d2878u: goto label_1d2878;
        default: break;
    }

    ctx->pc = 0x1d2844u;

    // 0x1d2844: 0x24e2c3c0  addiu       $v0, $a3, -0x3C40
    ctx->pc = 0x1d2844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951872));
    // 0x1d2848: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d2848u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d284c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d284cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d2850: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d2850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2854: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2858: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d2858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d285c: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d285cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d2860: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d2860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d2864: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D2864u;
    {
        const bool branch_taken_0x1d2864 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2864u;
        // 0x1d2868: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2864) {
            ctx->pc = 0x1D2880u;
            return;
        }
    }
    ctx->pc = 0x1D286Cu;
    // 0x1d286c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d286cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d2870: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D2870u;
    SET_GPR_U32(ctx, 31, 0x1D2878u);
    ctx->pc = 0x1D2874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2870u;
    // 0x1d2874: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D2870u, 0x1D2878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2878u;
label_1d2878:
    // 0x1d2878: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D2878u;
    {
        const bool branch_taken_0x1d2878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2878u;
        // 0x1d287c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2878) {
            ctx->pc = 0x1D28F4u;
            return;
        }
    }
    ctx->pc = 0x1D2880u;
}
