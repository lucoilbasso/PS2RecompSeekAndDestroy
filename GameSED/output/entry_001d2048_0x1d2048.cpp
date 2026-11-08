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

// Function: entry_001d2048
// Address: 0x1d2048 - 0x1d2090
void entry_001d2048_0x1d2048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2048_0x1d2048");
#endif

    switch (ctx->pc) {
        case 0x1d2080u: goto label_1d2080;
        default: break;
    }

    ctx->pc = 0x1d2048u;

    // 0x1d2048: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x1d2048u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x1d204c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d204cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d2050: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d2050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d2054: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d2054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2058: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d205c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d205cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d2060: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x1d2060u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d2064: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1d2064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1d2068: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2068u;
    {
        const bool branch_taken_0x1d2068 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2068u;
        // 0x1d206c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2068) {
            ctx->pc = 0x1D2090u;
            return;
        }
    }
    ctx->pc = 0x1D2070u;
    // 0x1d2070: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d2070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d2074: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1d2074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d2078: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D2078u;
    SET_GPR_U32(ctx, 31, 0x1D2080u);
    ctx->pc = 0x1D207Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2078u;
    // 0x1d207c: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D2078u, 0x1D2080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2080u;
label_1d2080:
    // 0x1d2080: 0x1440021b  bnez        $v0, . + 4 + (0x21B << 2)
    ctx->pc = 0x1D2080u;
    {
        const bool branch_taken_0x1d2080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2080u;
        // 0x1d2084: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2080) {
            ctx->pc = 0x1D28F0u;
            return;
        }
    }
    ctx->pc = 0x1D2088u;
    // 0x1d2088: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1d2088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d208c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d208cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d2090u;
}
