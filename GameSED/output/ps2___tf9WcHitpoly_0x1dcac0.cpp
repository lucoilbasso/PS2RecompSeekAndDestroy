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

// Function: __tf9WcHitpoly
// Address: 0x1dcac0 - 0x1dcb10
void ps2___tf9WcHitpoly_0x1dcac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf9WcHitpoly_0x1dcac0");
#endif

    switch (ctx->pc) {
        case 0x1dcae4u: goto label_1dcae4;
        case 0x1dcafcu: goto label_1dcafc;
        default: break;
    }

    ctx->pc = 0x1dcac0u;

    // 0x1dcac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dcac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dcac4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1dcac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1dcac8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dcac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dcacc: 0x24501550  addiu       $s0, $v0, 0x1550
    ctx->pc = 0x1dcaccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5456));
    // 0x1dcad0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dcad0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411550u));
    // 0x1dcad4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DCAD4u;
    {
        const bool branch_taken_0x1dcad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCAD4u;
        // 0x1dcad8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcad4) {
            ctx->pc = 0x1DCAFCu;
            goto label_1dcafc;
        }
    }
    ctx->pc = 0x1DCADCu;
    // 0x1dcadc: 0xc0771d4  jal         func_1DC750
    ctx->pc = 0x1DCADCu;
    SET_GPR_U32(ctx, 31, 0x1DCAE4u);
    ctx->pc = 0x1DC750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC750u, 0x1DCADCu, 0x1DCAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCAE4u;
label_1dcae4:
    // 0x1dcae4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1dcae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1dcae8: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1dcae8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1dcaec: 0x24a57dc8  addiu       $a1, $a1, 0x7DC8
    ctx->pc = 0x1dcaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32200));
    // 0x1dcaf0: 0x24c61510  addiu       $a2, $a2, 0x1510
    ctx->pc = 0x1dcaf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5392));
    // 0x1dcaf4: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DCAF4u;
    SET_GPR_U32(ctx, 31, 0x1DCAFCu);
    ctx->pc = 0x1DCAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCAF4u;
    // 0x1dcaf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DCAF4u, 0x1DCAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCAFCu;
label_1dcafc:
    // 0x1dcafc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dcafcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcb00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dcb00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcb04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dcb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dcb08: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB08u;
        // 0x1dcb0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCB10u;
}
