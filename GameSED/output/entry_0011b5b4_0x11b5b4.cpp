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

// Function: entry_0011b5b4
// Address: 0x11b5b4 - 0x11b5cc
void entry_0011b5b4_0x11b5b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b5b4_0x11b5b4");
#endif

    switch (ctx->pc) {
        case 0x11b5bcu: goto label_11b5bc;
        default: break;
    }

    ctx->pc = 0x11b5b4u;

    // 0x11b5b4: 0xc06bca0  jal         func_1AF280
    ctx->pc = 0x11B5B4u;
    SET_GPR_U32(ctx, 31, 0x11B5BCu);
    ctx->pc = 0x11B5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B5B4u;
    // 0x11b5b8: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF280u, 0x11B5B4u, 0x11B5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B5BCu;
label_11b5bc:
    // 0x11b5bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b5bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b5c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11b5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x11B5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5C4u;
        // 0x11b5c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B5CCu;
}
