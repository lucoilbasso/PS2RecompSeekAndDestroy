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

// Function: entry_001526e0
// Address: 0x1526e0 - 0x152710
void entry_001526e0_0x1526e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001526e0_0x1526e0");
#endif

    switch (ctx->pc) {
        case 0x1526f4u: goto label_1526f4;
        case 0x152708u: goto label_152708;
        default: break;
    }

    ctx->pc = 0x1526e0u;

    // 0x1526e0: 0x26050220  addiu       $a1, $s0, 0x220
    ctx->pc = 0x1526e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x1526e4: 0x26060230  addiu       $a2, $s0, 0x230
    ctx->pc = 0x1526e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x1526e8: 0x26070240  addiu       $a3, $s0, 0x240
    ctx->pc = 0x1526e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x1526ec: 0xc06f060  jal         func_1BC180
    ctx->pc = 0x1526ECu;
    SET_GPR_U32(ctx, 31, 0x1526F4u);
    ctx->pc = 0x1526F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1526ECu;
    // 0x1526f0: 0x260801e0  addiu       $t0, $s0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC180u, 0x1526ECu, 0x1526F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1526F4u;
label_1526f4:
    // 0x1526f4: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x1526f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1526f8: 0x26070210  addiu       $a3, $s0, 0x210
    ctx->pc = 0x1526f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x1526fc: 0x260501f0  addiu       $a1, $s0, 0x1F0
    ctx->pc = 0x1526fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x152700: 0xc06f030  jal         func_1BC0C0
    ctx->pc = 0x152700u;
    SET_GPR_U32(ctx, 31, 0x152708u);
    ctx->pc = 0x152704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152700u;
    // 0x152704: 0x26060200  addiu       $a2, $s0, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC0C0u, 0x152700u, 0x152708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152708u;
label_152708:
    // 0x152708: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x152708u;
    {
        const bool branch_taken_0x152708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152708u;
        // 0x15270c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152708) {
            ctx->pc = 0x1527B0u;
            return;
        }
    }
    ctx->pc = 0x152710u;
}
