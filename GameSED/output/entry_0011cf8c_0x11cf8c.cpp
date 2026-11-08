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

// Function: entry_0011cf8c
// Address: 0x11cf8c - 0x11cfa4
void entry_0011cf8c_0x11cf8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cf8c_0x11cf8c");
#endif

    switch (ctx->pc) {
        case 0x11cf94u: goto label_11cf94;
        default: break;
    }

    ctx->pc = 0x11cf8cu;

    // 0x11cf8c: 0xc05e588  jal         func_179620
    ctx->pc = 0x11CF8Cu;
    SET_GPR_U32(ctx, 31, 0x11CF94u);
    ctx->pc = 0x11CF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CF8Cu;
    // 0x11cf90: 0x8c440048  lw          $a0, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179620u, 0x11CF8Cu, 0x11CF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF94u;
label_11cf94:
    // 0x11cf94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11cf94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cf98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11cf98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11cf9c: 0x3e00008  jr          $ra
    ctx->pc = 0x11CF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF9Cu;
        // 0x11cfa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CFA4u;
}
