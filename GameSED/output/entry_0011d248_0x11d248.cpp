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

// Function: entry_0011d248
// Address: 0x11d248 - 0x11d26c
void entry_0011d248_0x11d248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d248_0x11d248");
#endif

    switch (ctx->pc) {
        case 0x11d258u: goto label_11d258;
        default: break;
    }

    ctx->pc = 0x11d248u;

    // 0x11d248: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11d248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d24c: 0x24053333  addiu       $a1, $zero, 0x3333
    ctx->pc = 0x11d24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13107));
    // 0x11d250: 0xc0477a2  jal         func_11DE88
    ctx->pc = 0x11D250u;
    SET_GPR_U32(ctx, 31, 0x11D258u);
    ctx->pc = 0x11D254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D250u;
    // 0x11d254: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DE88u, 0x11D250u, 0x11D258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D258u;
label_11d258:
    // 0x11d258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11d258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d25c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11d25cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11d260: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11d260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d264: 0x3e00008  jr          $ra
    ctx->pc = 0x11D264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D264u;
        // 0x11d268: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D26Cu;
}
