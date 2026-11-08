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

// Function: entry_001bb7a8
// Address: 0x1bb7a8 - 0x1bb7d0
void entry_001bb7a8_0x1bb7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb7a8_0x1bb7a8");
#endif

    switch (ctx->pc) {
        case 0x1bb7c4u: goto label_1bb7c4;
        default: break;
    }

    ctx->pc = 0x1bb7a8u;

    // 0x1bb7a8: 0x3c080041  lui         $t0, 0x41
    ctx->pc = 0x1bb7a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65 << 16));
    // 0x1bb7ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bb7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7b0: 0x2508d918  addiu       $t0, $t0, -0x26E8
    ctx->pc = 0x1bb7b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957336));
    // 0x1bb7b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bb7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bb7b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7bc: 0xc06ee1c  jal         func_1BB870
    ctx->pc = 0x1BB7BCu;
    SET_GPR_U32(ctx, 31, 0x1BB7C4u);
    ctx->pc = 0x1BB7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB7BCu;
    // 0x1bb7c0: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB870u, 0x1BB7BCu, 0x1BB7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB7C4u;
label_1bb7c4:
    // 0x1bb7c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7C8u;
        // 0x1bb7cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB7D0u;
}
