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

// Function: entry_00114870
// Address: 0x114870 - 0x11489c
void entry_00114870_0x114870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114870_0x114870");
#endif

    switch (ctx->pc) {
        case 0x114888u: goto label_114888;
        default: break;
    }

    ctx->pc = 0x114870u;

    // 0x114870: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x114870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x114874: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x114874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114878: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x114878u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11487c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x11487cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x114880: 0xc05dfc4  jal         func_177F10
    ctx->pc = 0x114880u;
    SET_GPR_U32(ctx, 31, 0x114888u);
    ctx->pc = 0x114884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114880u;
    // 0x114884: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177F10u, 0x114880u, 0x114888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114888u;
label_114888:
    // 0x114888: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x114888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11488c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11488cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x114890: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x114890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114894: 0x3e00008  jr          $ra
    ctx->pc = 0x114894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114894u;
        // 0x114898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11489Cu;
}
