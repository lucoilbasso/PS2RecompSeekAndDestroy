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

// Function: ApDebugPageClose__Fv
// Address: 0x16f998 - 0x16f9d0
void ApDebugPageClose__Fv_0x16f998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDebugPageClose__Fv_0x16f998");
#endif

    switch (ctx->pc) {
        case 0x16f998u: goto label_16f998;
        case 0x16f99cu: goto label_16f99c;
        case 0x16f9a0u: goto label_16f9a0;
        case 0x16f9a4u: goto label_16f9a4;
        case 0x16f9a8u: goto label_16f9a8;
        case 0x16f9acu: goto label_16f9ac;
        case 0x16f9b0u: goto label_16f9b0;
        case 0x16f9b4u: goto label_16f9b4;
        case 0x16f9b8u: goto label_16f9b8;
        case 0x16f9bcu: goto label_16f9bc;
        case 0x16f9c0u: goto label_16f9c0;
        case 0x16f9c4u: goto label_16f9c4;
        case 0x16f9c8u: goto label_16f9c8;
        case 0x16f9ccu: goto label_16f9cc;
        default: break;
    }

    ctx->pc = 0x16f998u;

label_16f998:
    // 0x16f998: 0x8f868b58  lw          $a2, -0x74A8($gp)
    ctx->pc = 0x16f998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937432)));
label_16f99c:
    // 0x16f99c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16f99cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16f9a0:
    // 0x16f9a0: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_16f9a4:
    if (ctx->pc == 0x16F9A4u) {
        ctx->pc = 0x16F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F9A0u;
        // 0x16f9a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F9A8u;
        goto label_16f9a8;
    }
    ctx->pc = 0x16F9A0u;
    {
        const bool branch_taken_0x16f9a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F9A0u;
        // 0x16f9a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f9a0) {
            ctx->pc = 0x16F9C4u;
            goto label_16f9c4;
        }
    }
    ctx->pc = 0x16F9A8u;
label_16f9a8:
    // 0x16f9a8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16f9ac:
    // 0x16f9ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f9b0:
    // 0x16f9b0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x16f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_16f9b4:
    // 0x16f9b4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16f9b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16f9b8:
    // 0x16f9b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16f9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16f9bc:
    // 0x16f9bc: 0x60f809  jalr        $v1
label_16f9c0:
    if (ctx->pc == 0x16F9C0u) {
        ctx->pc = 0x16F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F9BCu;
        // 0x16f9c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F9C4u;
        goto label_16f9c4;
    }
    ctx->pc = 0x16F9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16F9C4u);
        ctx->pc = 0x16F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F9BCu;
        // 0x16f9c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F9BCu, 0x16F9C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F9C4u;
label_16f9c4:
    // 0x16f9c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16f9c8:
    // 0x16f9c8: 0x3e00008  jr          $ra
label_16f9cc:
    if (ctx->pc == 0x16F9CCu) {
        ctx->pc = 0x16F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F9C8u;
        // 0x16f9cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F9D0u;
        goto label_fallthrough_0x16f9c8;
    }
    ctx->pc = 0x16F9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F9C8u;
        // 0x16f9cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16f9c8:
    ctx->pc = 0x16F9D0u;
}
