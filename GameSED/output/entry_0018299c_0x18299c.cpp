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

// Function: entry_0018299c
// Address: 0x18299c - 0x1829b4
void entry_0018299c_0x18299c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018299c_0x18299c");
#endif

    switch (ctx->pc) {
        case 0x1829a4u: goto label_1829a4;
        default: break;
    }

    ctx->pc = 0x18299cu;

    // 0x18299c: 0xc05f3c8  jal         func_17CF20
    ctx->pc = 0x18299Cu;
    SET_GPR_U32(ctx, 31, 0x1829A4u);
    ctx->pc = 0x1829A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18299Cu;
    // 0x1829a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF20u, 0x18299Cu, 0x1829A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1829A4u;
label_1829a4:
    // 0x1829a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1829a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1829a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1829a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1829ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1829ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1829B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1829ACu;
        // 0x1829b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1829ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1829B4u;
}
