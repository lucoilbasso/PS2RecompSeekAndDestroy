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

// Function: __tf9WcBgPanel
// Address: 0x1deb68 - 0x1debb8
void ps2___tf9WcBgPanel_0x1deb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf9WcBgPanel_0x1deb68");
#endif

    switch (ctx->pc) {
        case 0x1deb8cu: goto label_1deb8c;
        case 0x1deba4u: goto label_1deba4;
        default: break;
    }

    ctx->pc = 0x1deb68u;

    // 0x1deb68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1deb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1deb6c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1deb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1deb70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1deb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1deb74: 0x24501668  addiu       $s0, $v0, 0x1668
    ctx->pc = 0x1deb74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5736));
    // 0x1deb78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1deb78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411668u));
    // 0x1deb7c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DEB7Cu;
    {
        const bool branch_taken_0x1deb7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB7Cu;
        // 0x1deb80: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb7c) {
            ctx->pc = 0x1DEBA4u;
            goto label_1deba4;
        }
    }
    ctx->pc = 0x1DEB84u;
    // 0x1deb84: 0xc077340  jal         func_1DCD00
    ctx->pc = 0x1DEB84u;
    SET_GPR_U32(ctx, 31, 0x1DEB8Cu);
    ctx->pc = 0x1DCD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD00u, 0x1DEB84u, 0x1DEB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB8Cu;
label_1deb8c:
    // 0x1deb8c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1deb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1deb90: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1deb90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1deb94: 0x24a57ff8  addiu       $a1, $a1, 0x7FF8
    ctx->pc = 0x1deb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32760));
    // 0x1deb98: 0x24c61580  addiu       $a2, $a2, 0x1580
    ctx->pc = 0x1deb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5504));
    // 0x1deb9c: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DEB9Cu;
    SET_GPR_U32(ctx, 31, 0x1DEBA4u);
    ctx->pc = 0x1DEBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB9Cu;
    // 0x1deba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DEB9Cu, 0x1DEBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEBA4u;
label_1deba4:
    // 0x1deba4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1deba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1deba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1debac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1debacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1debb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEBB0u;
        // 0x1debb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEBB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEBB8u;
}
