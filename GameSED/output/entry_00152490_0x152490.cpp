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

// Function: entry_00152490
// Address: 0x152490 - 0x1524c0
void entry_00152490_0x152490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152490_0x152490");
#endif

    switch (ctx->pc) {
        case 0x1524a4u: goto label_1524a4;
        case 0x1524b8u: goto label_1524b8;
        default: break;
    }

    ctx->pc = 0x152490u;

    // 0x152490: 0x26050220  addiu       $a1, $s0, 0x220
    ctx->pc = 0x152490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x152494: 0x26060230  addiu       $a2, $s0, 0x230
    ctx->pc = 0x152494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x152498: 0x26070240  addiu       $a3, $s0, 0x240
    ctx->pc = 0x152498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x15249c: 0xc06f060  jal         func_1BC180
    ctx->pc = 0x15249Cu;
    SET_GPR_U32(ctx, 31, 0x1524A4u);
    ctx->pc = 0x1524A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15249Cu;
    // 0x1524a0: 0x260801e0  addiu       $t0, $s0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC180u, 0x15249Cu, 0x1524A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1524A4u;
label_1524a4:
    // 0x1524a4: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x1524a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1524a8: 0x26070210  addiu       $a3, $s0, 0x210
    ctx->pc = 0x1524a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x1524ac: 0x260501f0  addiu       $a1, $s0, 0x1F0
    ctx->pc = 0x1524acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x1524b0: 0xc06f030  jal         func_1BC0C0
    ctx->pc = 0x1524B0u;
    SET_GPR_U32(ctx, 31, 0x1524B8u);
    ctx->pc = 0x1524B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1524B0u;
    // 0x1524b4: 0x26060200  addiu       $a2, $s0, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC0C0u, 0x1524B0u, 0x1524B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1524B8u;
label_1524b8:
    // 0x1524b8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1524B8u;
    {
        const bool branch_taken_0x1524b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1524BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1524B8u;
        // 0x1524bc: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1524b8) {
            ctx->pc = 0x152560u;
            return;
        }
    }
    ctx->pc = 0x1524C0u;
}
