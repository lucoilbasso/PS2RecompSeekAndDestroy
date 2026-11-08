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

// Function: ApDebugLocate__Fii
// Address: 0x16f9d0 - 0x16fa00
void ApDebugLocate__Fii_0x16f9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDebugLocate__Fii_0x16f9d0");
#endif

    switch (ctx->pc) {
        case 0x16f9f4u: goto label_16f9f4;
        default: break;
    }

    ctx->pc = 0x16f9d0u;

    // 0x16f9d0: 0x8f828b58  lw          $v0, -0x74A8($gp)
    ctx->pc = 0x16f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937432)));
    // 0x16f9d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16f9d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16f9d8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x16f9d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f9dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16f9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f9e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f9e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F9E4u;
    {
        const bool branch_taken_0x16f9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F9E4u;
        // 0x16f9e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f9e4) {
            ctx->pc = 0x16F9F4u;
            goto label_16f9f4;
        }
    }
    ctx->pc = 0x16F9ECu;
    // 0x16f9ec: 0xc063a9a  jal         func_18EA68
    ctx->pc = 0x16F9ECu;
    SET_GPR_U32(ctx, 31, 0x16F9F4u);
    ctx->pc = 0x18EA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA68u, 0x16F9ECu, 0x16F9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F9F4u;
label_16f9f4:
    // 0x16f9f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x16F9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F9F8u;
        // 0x16f9fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FA00u;
}
