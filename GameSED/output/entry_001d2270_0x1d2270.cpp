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

// Function: entry_001d2270
// Address: 0x1d2270 - 0x1d22c0
void entry_001d2270_0x1d2270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2270_0x1d2270");
#endif

    switch (ctx->pc) {
        case 0x1d22acu: goto label_1d22ac;
        default: break;
    }

    ctx->pc = 0x1d2270u;

    // 0x1d2270: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1d2270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d2274: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1d2274u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1d2278: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d2278u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d227c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d227cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d2280: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d2280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2284: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x1d2284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d2288: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d228c: 0x28450008  slti        $a1, $v0, 0x8
    ctx->pc = 0x1d228cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d2290: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1d2290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1d2294: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d2294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d2298: 0x14a00143  bnez        $a1, . + 4 + (0x143 << 2)
    ctx->pc = 0x1D2298u;
    {
        const bool branch_taken_0x1d2298 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2298u;
        // 0x1d229c: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2298) {
            ctx->pc = 0x1D27A8u;
            return;
        }
    }
    ctx->pc = 0x1D22A0u;
    // 0x1d22a0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d22a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d22a4: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D22A4u;
    SET_GPR_U32(ctx, 31, 0x1D22ACu);
    ctx->pc = 0x1D22A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D22A4u;
    // 0x1d22a8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D22A4u, 0x1D22ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D22ACu;
label_1d22ac:
    // 0x1d22ac: 0x14400191  bnez        $v0, . + 4 + (0x191 << 2)
    ctx->pc = 0x1D22ACu;
    {
        const bool branch_taken_0x1d22ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22ACu;
        // 0x1d22b0: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22ac) {
            ctx->pc = 0x1D28F4u;
            return;
        }
    }
    ctx->pc = 0x1D22B4u;
    // 0x1d22b4: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1d22b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d22b8: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x1D22B8u;
    {
        const bool branch_taken_0x1d22b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D22BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22B8u;
        // 0x1d22bc: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22b8) {
            ctx->pc = 0x1D27A8u;
            return;
        }
    }
    ctx->pc = 0x1D22C0u;
}
