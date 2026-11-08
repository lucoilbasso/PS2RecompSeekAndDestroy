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

// Function: entry_001d27e0
// Address: 0x1d27e0 - 0x1d2828
void entry_001d27e0_0x1d27e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d27e0_0x1d27e0");
#endif

    switch (ctx->pc) {
        case 0x1d2818u: goto label_1d2818;
        default: break;
    }

    ctx->pc = 0x1d27e0u;

    // 0x1d27e0: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x1d27e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x1d27e4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d27e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d27e8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d27e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d27ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d27ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d27f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d27f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d27f4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d27f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d27f8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x1d27f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d27fc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1d27fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1d2800: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2800u;
    {
        const bool branch_taken_0x1d2800 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2800u;
        // 0x1d2804: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2800) {
            ctx->pc = 0x1D2828u;
            return;
        }
    }
    ctx->pc = 0x1D2808u;
    // 0x1d2808: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d2808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d280c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1d280cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d2810: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D2810u;
    SET_GPR_U32(ctx, 31, 0x1D2818u);
    ctx->pc = 0x1D2814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2810u;
    // 0x1d2814: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D2810u, 0x1D2818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2818u;
label_1d2818:
    // 0x1d2818: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1D2818u;
    {
        const bool branch_taken_0x1d2818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2818u;
        // 0x1d281c: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2818) {
            ctx->pc = 0x1D28F0u;
            return;
        }
    }
    ctx->pc = 0x1D2820u;
    // 0x1d2820: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d2820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d2824: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d2824u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d2828u;
}
