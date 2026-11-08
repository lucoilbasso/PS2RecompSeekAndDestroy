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

// Function: entry_0013cc24
// Address: 0x13cc24 - 0x13cc40
void entry_0013cc24_0x13cc24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cc24_0x13cc24");
#endif

    switch (ctx->pc) {
        case 0x13cc34u: goto label_13cc34;
        default: break;
    }

    ctx->pc = 0x13cc24u;

    // 0x13cc24: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x13cc24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x13cc28: 0x8f858a38  lw          $a1, -0x75C8($gp)
    ctx->pc = 0x13cc28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937144)));
    // 0x13cc2c: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x13CC2Cu;
    SET_GPR_U32(ctx, 31, 0x13CC34u);
    ctx->pc = 0x13CC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CC2Cu;
    // 0x13cc30: 0x248468c8  addiu       $a0, $a0, 0x68C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x13CC2Cu, 0x13CC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CC34u;
label_13cc34:
    // 0x13cc34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13cc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cc38: 0x3e00008  jr          $ra
    ctx->pc = 0x13CC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC38u;
        // 0x13cc3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CC40u;
}
