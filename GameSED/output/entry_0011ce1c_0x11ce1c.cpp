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

// Function: entry_0011ce1c
// Address: 0x11ce1c - 0x11ce34
void entry_0011ce1c_0x11ce1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ce1c_0x11ce1c");
#endif

    switch (ctx->pc) {
        case 0x11ce24u: goto label_11ce24;
        default: break;
    }

    ctx->pc = 0x11ce1cu;

    // 0x11ce1c: 0xc05e5d8  jal         func_179760
    ctx->pc = 0x11CE1Cu;
    SET_GPR_U32(ctx, 31, 0x11CE24u);
    ctx->pc = 0x11CE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE1Cu;
    // 0x11ce20: 0x8c440048  lw          $a0, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179760u, 0x11CE1Cu, 0x11CE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE24u;
label_11ce24:
    // 0x11ce24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11ce24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ce28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11ce28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11ce2c: 0x3e00008  jr          $ra
    ctx->pc = 0x11CE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE2Cu;
        // 0x11ce30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CE34u;
}
