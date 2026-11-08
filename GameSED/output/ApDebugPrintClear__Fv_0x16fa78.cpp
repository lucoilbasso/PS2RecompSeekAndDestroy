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

// Function: ApDebugPrintClear__Fv
// Address: 0x16fa78 - 0x16faa0
void ApDebugPrintClear__Fv_0x16fa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDebugPrintClear__Fv_0x16fa78");
#endif

    switch (ctx->pc) {
        case 0x16fa94u: goto label_16fa94;
        default: break;
    }

    ctx->pc = 0x16fa78u;

    // 0x16fa78: 0x8f828b58  lw          $v0, -0x74A8($gp)
    ctx->pc = 0x16fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937432)));
    // 0x16fa7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16fa7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16fa80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16fa80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16fa84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16FA84u;
    {
        const bool branch_taken_0x16fa84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA84u;
        // 0x16fa88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fa84) {
            ctx->pc = 0x16FA94u;
            goto label_16fa94;
        }
    }
    ctx->pc = 0x16FA8Cu;
    // 0x16fa8c: 0xc063b56  jal         func_18ED58
    ctx->pc = 0x16FA8Cu;
    SET_GPR_U32(ctx, 31, 0x16FA94u);
    ctx->pc = 0x18ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ED58u, 0x16FA8Cu, 0x16FA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FA94u;
label_16fa94:
    // 0x16fa94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16fa94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fa98: 0x3e00008  jr          $ra
    ctx->pc = 0x16FA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA98u;
        // 0x16fa9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FAA0u;
}
