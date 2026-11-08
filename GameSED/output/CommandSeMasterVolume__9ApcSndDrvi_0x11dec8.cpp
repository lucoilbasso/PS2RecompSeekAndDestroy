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

// Function: CommandSeMasterVolume__9ApcSndDrvi
// Address: 0x11dec8 - 0x11dee8
void CommandSeMasterVolume__9ApcSndDrvi_0x11dec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandSeMasterVolume__9ApcSndDrvi_0x11dec8");
#endif

    switch (ctx->pc) {
        case 0x11dedcu: goto label_11dedc;
        default: break;
    }

    ctx->pc = 0x11dec8u;

    // 0x11dec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11dec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11decc: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11deccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11ded0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ded0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ded4: 0xc05ed12  jal         func_17B448
    ctx->pc = 0x11DED4u;
    SET_GPR_U32(ctx, 31, 0x11DEDCu);
    ctx->pc = 0x11DED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DED4u;
    // 0x11ded8: 0x8c44003c  lw          $a0, 0x3C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B448u, 0x11DED4u, 0x11DEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DEDCu;
label_11dedc:
    // 0x11dedc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11dedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dee0: 0x3e00008  jr          $ra
    ctx->pc = 0x11DEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DEE0u;
        // 0x11dee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DEE8u;
}
