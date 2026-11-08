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

// Function: entry_001cc420
// Address: 0x1cc420 - 0x1cc460
void entry_001cc420_0x1cc420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc420_0x1cc420");
#endif

    switch (ctx->pc) {
        case 0x1cc454u: goto label_1cc454;
        default: break;
    }

    ctx->pc = 0x1cc420u;

    // 0x1cc420: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cc420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc424: 0x1462ffb0  bne         $v1, $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x1CC424u;
    {
        const bool branch_taken_0x1cc424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CC428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC424u;
        // 0x1cc428: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc424) {
            ctx->pc = 0x1CC2E8u;
            return;
        }
    }
    ctx->pc = 0x1CC42Cu;
    // 0x1cc42c: 0x54600010  bnel        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CC42Cu;
    {
        const bool branch_taken_0x1cc42c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc42c) {
            ctx->pc = 0x1CC430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC42Cu;
            // 0x1cc430: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC470u;
            return;
        }
    }
    ctx->pc = 0x1CC434u;
    // 0x1cc434: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1cc434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc438: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1cc438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cc43c: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC43Cu;
    {
        const bool branch_taken_0x1cc43c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC43Cu;
        // 0x1cc440: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc43c) {
            ctx->pc = 0x1CC460u;
            return;
        }
    }
    ctx->pc = 0x1CC444u;
    // 0x1cc444: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CC444u;
    {
        const bool branch_taken_0x1cc444 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC444u;
        // 0x1cc448: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc444) {
            ctx->pc = 0x1CC464u;
            return;
        }
    }
    ctx->pc = 0x1CC44Cu;
    // 0x1cc44c: 0xc072f28  jal         func_1CBCA0
    ctx->pc = 0x1CC44Cu;
    SET_GPR_U32(ctx, 31, 0x1CC454u);
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CC44Cu, 0x1CC454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC454u;
label_1cc454:
    // 0x1cc454: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CC454u;
    {
        const bool branch_taken_0x1cc454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc454) {
            ctx->pc = 0x1CC458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC454u;
            // 0x1cc458: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC470u;
            return;
        }
    }
    ctx->pc = 0x1CC45Cu;
    // 0x1cc45c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cc45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1cc460u;
}
