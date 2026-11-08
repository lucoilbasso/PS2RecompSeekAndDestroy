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

// Function: entry_0011cc78
// Address: 0x11cc78 - 0x11cc94
void entry_0011cc78_0x11cc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cc78_0x11cc78");
#endif

    switch (ctx->pc) {
        case 0x11cc80u: goto label_11cc80;
        default: break;
    }

    ctx->pc = 0x11cc78u;

    // 0x11cc78: 0xc06cac4  jal         func_1B2B10
    ctx->pc = 0x11CC78u;
    SET_GPR_U32(ctx, 31, 0x11CC80u);
    ctx->pc = 0x11CC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC78u;
    // 0x11cc7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2B10u, 0x11CC78u, 0x11CC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC80u;
label_11cc80:
    // 0x11cc80: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x11cc80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11cc84: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x11cc84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11cc88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11cc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11cc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x11CC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC8Cu;
        // 0x11cc90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CC94u;
}
