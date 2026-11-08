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

// Function: entry_001d2888
// Address: 0x1d2888 - 0x1d28bc
void entry_001d2888_0x1d2888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2888_0x1d2888");
#endif

    switch (ctx->pc) {
        case 0x1d28b4u: goto label_1d28b4;
        default: break;
    }

    ctx->pc = 0x1d2888u;

    // 0x1d2888: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1d2888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1d288c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1d288cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d2890: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d2890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2894: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x1d2894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x1d2898: 0xc2200a  movz        $a0, $a2, $v0
    ctx->pc = 0x1d2898u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x1d289c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1d289cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d28a0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D28A0u;
    {
        const bool branch_taken_0x1d28a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28A0u;
        // 0x1d28a4: 0xafa501ec  sw          $a1, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28a0) {
            ctx->pc = 0x1D28BCu;
            return;
        }
    }
    ctx->pc = 0x1D28A8u;
    // 0x1d28a8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d28a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d28ac: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D28ACu;
    SET_GPR_U32(ctx, 31, 0x1D28B4u);
    ctx->pc = 0x1D28B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28ACu;
    // 0x1d28b0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D28ACu, 0x1D28B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28B4u;
label_1d28b4:
    // 0x1d28b4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D28B4u;
    {
        const bool branch_taken_0x1d28b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D28B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28B4u;
        // 0x1d28b8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28b4) {
            ctx->pc = 0x1D28F4u;
            return;
        }
    }
    ctx->pc = 0x1D28BCu;
}
