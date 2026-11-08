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

// Function: ClassJobRegist__9ApcShadow
// Address: 0x1db358 - 0x1db37c
void ClassJobRegist__9ApcShadow_0x1db358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClassJobRegist__9ApcShadow_0x1db358");
#endif

    switch (ctx->pc) {
        case 0x1db370u: goto label_1db370;
        default: break;
    }

    ctx->pc = 0x1db358u;

    // 0x1db358: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1db358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db35c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1db35cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1db360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db368: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1DB368u;
    SET_GPR_U32(ctx, 31, 0x1DB370u);
    ctx->pc = 0x1DB36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB368u;
    // 0x1db36c: 0x24841220  addiu       $a0, $a0, 0x1220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1DB368u, 0x1DB370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB370u;
label_1db370:
    // 0x1db370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db374: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB374u;
        // 0x1db378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB37Cu;
}
