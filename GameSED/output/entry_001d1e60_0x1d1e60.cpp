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

// Function: entry_001d1e60
// Address: 0x1d1e60 - 0x1d1eb0
void entry_001d1e60_0x1d1e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1e60_0x1d1e60");
#endif

    switch (ctx->pc) {
        case 0x1d1e9cu: goto label_1d1e9c;
        default: break;
    }

    ctx->pc = 0x1d1e60u;

    // 0x1d1e60: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x1d1e60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x1d1e64: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d1e64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d1e68: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d1e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d1e6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d1e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1e70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1e74: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d1e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d1e78: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x1d1e78u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d1e7c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1d1e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1d1e80: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D1E80u;
    {
        const bool branch_taken_0x1d1e80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E80u;
        // 0x1d1e84: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e80) {
            ctx->pc = 0x1D1EB0u;
            return;
        }
    }
    ctx->pc = 0x1D1E88u;
    // 0x1d1e88: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d1e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d1e8c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1d1e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d1e90: 0x7fa60220  sq          $a2, 0x220($sp)
    ctx->pc = 0x1d1e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    // 0x1d1e94: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D1E94u;
    SET_GPR_U32(ctx, 31, 0x1D1E9Cu);
    ctx->pc = 0x1D1E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1E94u;
    // 0x1d1e98: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D1E94u, 0x1D1E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1E9Cu;
label_1d1e9c:
    // 0x1d1e9c: 0x7ba60220  lq          $a2, 0x220($sp)
    ctx->pc = 0x1d1e9cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1d1ea0: 0x14400293  bnez        $v0, . + 4 + (0x293 << 2)
    ctx->pc = 0x1D1EA0u;
    {
        const bool branch_taken_0x1d1ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1EA0u;
        // 0x1d1ea4: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ea0) {
            ctx->pc = 0x1D28F0u;
            return;
        }
    }
    ctx->pc = 0x1D1EA8u;
    // 0x1d1ea8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d1ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d1eac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d1eacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d1eb0u;
}
