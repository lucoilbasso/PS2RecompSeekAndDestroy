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

// Function: entry_001100d0
// Address: 0x1100d0 - 0x1100f4
void entry_001100d0_0x1100d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001100d0_0x1100d0");
#endif

    switch (ctx->pc) {
        case 0x1100e0u: goto label_1100e0;
        default: break;
    }

    ctx->pc = 0x1100d0u;

    // 0x1100d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1100d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1100d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100d8: 0xc0618c2  jal         func_186308
    ctx->pc = 0x1100D8u;
    SET_GPR_U32(ctx, 31, 0x1100E0u);
    ctx->pc = 0x1100DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1100D8u;
    // 0x1100dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x1100D8u, 0x1100E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1100E0u;
label_1100e0:
    // 0x1100e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1100e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1100e4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1100e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1100e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1100e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1100ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1100ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1100F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1100ECu;
        // 0x1100f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1100ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1100F4u;
}
