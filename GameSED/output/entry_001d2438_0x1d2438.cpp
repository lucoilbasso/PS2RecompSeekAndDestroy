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

// Function: entry_001d2438
// Address: 0x1d2438 - 0x1d2488
void entry_001d2438_0x1d2438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2438_0x1d2438");
#endif

    switch (ctx->pc) {
        case 0x1d2474u: goto label_1d2474;
        default: break;
    }

    ctx->pc = 0x1d2438u;

    // 0x1d2438: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x1d2438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1d243c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1d243cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1d2440: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d2440u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d2444: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d2444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d2448: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d2448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d244c: 0x8fa701dc  lw          $a3, 0x1DC($sp)
    ctx->pc = 0x1d244cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1d2450: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d2454: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x1d2454u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d2458: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1d2458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1d245c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1d245cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1d2460: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2460u;
    {
        const bool branch_taken_0x1d2460 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2460u;
        // 0x1d2464: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2460) {
            ctx->pc = 0x1D2488u;
            return;
        }
    }
    ctx->pc = 0x1D2468u;
    // 0x1d2468: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d2468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d246c: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D246Cu;
    SET_GPR_U32(ctx, 31, 0x1D2474u);
    ctx->pc = 0x1D2470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D246Cu;
    // 0x1d2470: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D246Cu, 0x1D2474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2474u;
label_1d2474:
    // 0x1d2474: 0x1440011f  bnez        $v0, . + 4 + (0x11F << 2)
    ctx->pc = 0x1D2474u;
    {
        const bool branch_taken_0x1d2474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2474u;
        // 0x1d2478: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2474) {
            ctx->pc = 0x1D28F4u;
            return;
        }
    }
    ctx->pc = 0x1D247Cu;
    // 0x1d247c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1d247cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d2480: 0x8fa701dc  lw          $a3, 0x1DC($sp)
    ctx->pc = 0x1d2480u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1d2484: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1d2484u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d2488u;
}
