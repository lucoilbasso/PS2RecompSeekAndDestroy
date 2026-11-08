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

// Function: ApDebugVisible__Fb
// Address: 0x16faa0 - 0x16fad8
void ApDebugVisible__Fb_0x16faa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDebugVisible__Fb_0x16faa0");
#endif

    switch (ctx->pc) {
        case 0x16faa0u: goto label_16faa0;
        case 0x16faa4u: goto label_16faa4;
        case 0x16faa8u: goto label_16faa8;
        case 0x16faacu: goto label_16faac;
        case 0x16fab0u: goto label_16fab0;
        case 0x16fab4u: goto label_16fab4;
        case 0x16fab8u: goto label_16fab8;
        case 0x16fabcu: goto label_16fabc;
        case 0x16fac0u: goto label_16fac0;
        case 0x16fac4u: goto label_16fac4;
        case 0x16fac8u: goto label_16fac8;
        case 0x16faccu: goto label_16facc;
        case 0x16fad0u: goto label_16fad0;
        case 0x16fad4u: goto label_16fad4;
        default: break;
    }

    ctx->pc = 0x16faa0u;

label_16faa0:
    // 0x16faa0: 0x8f868b58  lw          $a2, -0x74A8($gp)
    ctx->pc = 0x16faa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937432)));
label_16faa4:
    // 0x16faa4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16faa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16faa8:
    // 0x16faa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16faa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16faac:
    // 0x16faac: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_16fab0:
    if (ctx->pc == 0x16FAB0u) {
        ctx->pc = 0x16FAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAACu;
        // 0x16fab0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FAB4u;
        goto label_16fab4;
    }
    ctx->pc = 0x16FAACu;
    {
        const bool branch_taken_0x16faac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAACu;
        // 0x16fab0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16faac) {
            ctx->pc = 0x16FACCu;
            goto label_16facc;
        }
    }
    ctx->pc = 0x16FAB4u;
label_16fab4:
    // 0x16fab4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16fab8:
    // 0x16fab8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x16fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_16fabc:
    // 0x16fabc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16fabcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16fac0:
    // 0x16fac0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16fac4:
    // 0x16fac4: 0x60f809  jalr        $v1
label_16fac8:
    if (ctx->pc == 0x16FAC8u) {
        ctx->pc = 0x16FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAC4u;
        // 0x16fac8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FACCu;
        goto label_16facc;
    }
    ctx->pc = 0x16FAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16FACCu);
        ctx->pc = 0x16FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAC4u;
        // 0x16fac8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FAC4u, 0x16FACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FACCu;
label_16facc:
    // 0x16facc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16faccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16fad0:
    // 0x16fad0: 0x3e00008  jr          $ra
label_16fad4:
    if (ctx->pc == 0x16FAD4u) {
        ctx->pc = 0x16FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAD0u;
        // 0x16fad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FAD8u;
        goto label_fallthrough_0x16fad0;
    }
    ctx->pc = 0x16FAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAD0u;
        // 0x16fad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16fad0:
    ctx->pc = 0x16FAD8u;
}
