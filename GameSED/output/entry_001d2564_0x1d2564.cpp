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

// Function: entry_001d2564
// Address: 0x1d2564 - 0x1d25c4
void entry_001d2564_0x1d2564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2564_0x1d2564");
#endif

    switch (ctx->pc) {
        case 0x1d25b4u: goto label_1d25b4;
        default: break;
    }

    ctx->pc = 0x1d2564u;

    // 0x1d2564: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1d2564u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1d2568: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x1d2568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1d256c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d256cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d2570: 0xa3a301c0  sb          $v1, 0x1C0($sp)
    ctx->pc = 0x1d2570u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d2574: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x1d2574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1d2578: 0xa3a401c1  sb          $a0, 0x1C1($sp)
    ctx->pc = 0x1d2578u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d257c: 0xae650004  sw          $a1, 0x4($s3)
    ctx->pc = 0x1d257cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
    // 0x1d2580: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d2580u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d2584: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d2584u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d2588: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d2588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d258c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d258cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2590: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2594: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1d2594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1d2598: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d2598u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d259c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d259cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d25a0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D25A0u;
    {
        const bool branch_taken_0x1d25a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D25A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D25A0u;
        // 0x1d25a4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25a0) {
            ctx->pc = 0x1D25C4u;
            return;
        }
    }
    ctx->pc = 0x1D25A8u;
    // 0x1d25a8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d25a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d25ac: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D25ACu;
    SET_GPR_U32(ctx, 31, 0x1D25B4u);
    ctx->pc = 0x1D25B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D25ACu;
    // 0x1d25b0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D25ACu, 0x1D25B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D25B4u;
label_1d25b4:
    // 0x1d25b4: 0x144000cf  bnez        $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x1D25B4u;
    {
        const bool branch_taken_0x1d25b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D25B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D25B4u;
        // 0x1d25b8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25b4) {
            ctx->pc = 0x1D28F4u;
            return;
        }
    }
    ctx->pc = 0x1D25BCu;
    // 0x1d25bc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1d25bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d25c0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d25c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d25c4u;
}
