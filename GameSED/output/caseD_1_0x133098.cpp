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

// Function: caseD_1
// Address: 0x133098 - 0x1330bc
void caseD_1_0x133098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x133098");
#endif

    ctx->pc = 0x133098u;

    // 0x133098: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x133098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13309c: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x13309cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x1330a0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1330a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1330a4: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1330A4u;
    {
        const bool branch_taken_0x1330a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1330A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1330A4u;
        // 0x1330a8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1330a4) {
            ctx->pc = 0x1330BCu;
            return;
        }
    }
    ctx->pc = 0x1330ACu;
    // 0x1330ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1330acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1330b0: 0x24a563e8  addiu       $a1, $a1, 0x63E8
    ctx->pc = 0x1330b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25576));
    // 0x1330b4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1330B4u;
    SET_GPR_U32(ctx, 31, 0x1330BCu);
    ctx->pc = 0x1330B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1330B4u;
    // 0x1330b8: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1330B4u, 0x1330BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1330BCu;
}
