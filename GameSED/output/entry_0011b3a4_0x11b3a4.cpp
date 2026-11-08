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

// Function: entry_0011b3a4
// Address: 0x11b3a4 - 0x11b3bc
void entry_0011b3a4_0x11b3a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b3a4_0x11b3a4");
#endif

    switch (ctx->pc) {
        case 0x11b3acu: goto label_11b3ac;
        default: break;
    }

    ctx->pc = 0x11b3a4u;

    // 0x11b3a4: 0xc046d96  jal         func_11B658
    ctx->pc = 0x11B3A4u;
    SET_GPR_U32(ctx, 31, 0x11B3ACu);
    ctx->pc = 0x11B3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B3A4u;
    // 0x11b3a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B658u, 0x11B3A4u, 0x11B3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B3ACu;
label_11b3ac:
    // 0x11b3ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b3acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b3b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11b3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x11B3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3B4u;
        // 0x11b3b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B3BCu;
}
