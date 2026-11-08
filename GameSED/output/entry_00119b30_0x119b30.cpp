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

// Function: entry_00119b30
// Address: 0x119b30 - 0x119b4c
void entry_00119b30_0x119b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119b30_0x119b30");
#endif

    switch (ctx->pc) {
        case 0x119b38u: goto label_119b38;
        default: break;
    }

    ctx->pc = 0x119b30u;

    // 0x119b30: 0xc0458a4  jal         func_116290
    ctx->pc = 0x119B30u;
    SET_GPR_U32(ctx, 31, 0x119B38u);
    ctx->pc = 0x119B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119B30u;
    // 0x119b34: 0xac4000b0  sw          $zero, 0xB0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116290u, 0x119B30u, 0x119B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119B38u;
label_119b38:
    // 0x119b38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119b38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119b3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x119b3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119b40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x119b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119b44: 0x3e00008  jr          $ra
    ctx->pc = 0x119B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B44u;
        // 0x119b48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119B4Cu;
}
