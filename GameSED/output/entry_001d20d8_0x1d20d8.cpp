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

// Function: entry_001d20d8
// Address: 0x1d20d8 - 0x1d2134
void entry_001d20d8_0x1d20d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d20d8_0x1d20d8");
#endif

    switch (ctx->pc) {
        case 0x1d2124u: goto label_1d2124;
        default: break;
    }

    ctx->pc = 0x1d20d8u;

    // 0x1d20d8: 0x1c600079  bgtz        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x1D20D8u;
    {
        const bool branch_taken_0x1d20d8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1D20DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20D8u;
        // 0x1d20dc: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20d8) {
            ctx->pc = 0x1D22C0u;
            return;
        }
    }
    ctx->pc = 0x1D20E0u;
    // 0x1d20e0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1d20e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d20e4: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d20e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d20e8: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x1d20e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x1d20ec: 0x2442c448  addiu       $v0, $v0, -0x3BB8
    ctx->pc = 0x1d20ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952008));
    // 0x1d20f0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d20f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d20f4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d20f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d20f8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d20f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d20fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d20fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2100: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2104: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d2108: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d2108u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d210c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d210cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d2110: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2110u;
    {
        const bool branch_taken_0x1d2110 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2110u;
        // 0x1d2114: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2110) {
            ctx->pc = 0x1D2134u;
            return;
        }
    }
    ctx->pc = 0x1D2118u;
    // 0x1d2118: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d2118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d211c: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D211Cu;
    SET_GPR_U32(ctx, 31, 0x1D2124u);
    ctx->pc = 0x1D2120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D211Cu;
    // 0x1d2120: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D211Cu, 0x1D2124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2124u;
label_1d2124:
    // 0x1d2124: 0x144001f3  bnez        $v0, . + 4 + (0x1F3 << 2)
    ctx->pc = 0x1D2124u;
    {
        const bool branch_taken_0x1d2124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2124u;
        // 0x1d2128: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2124) {
            ctx->pc = 0x1D28F4u;
            return;
        }
    }
    ctx->pc = 0x1D212Cu;
    // 0x1d212c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1d212cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d2130: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1d2130u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d2134u;
}
