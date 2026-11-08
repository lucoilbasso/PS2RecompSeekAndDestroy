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

// Function: __tf7WcLight
// Address: 0x1dddd8 - 0x1dde28
void ps2___tf7WcLight_0x1dddd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf7WcLight_0x1dddd8");
#endif

    switch (ctx->pc) {
        case 0x1dddfcu: goto label_1dddfc;
        case 0x1dde14u: goto label_1dde14;
        default: break;
    }

    ctx->pc = 0x1dddd8u;

    // 0x1dddd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dddd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ddddc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1ddddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1ddde0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ddde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ddde4: 0x24501628  addiu       $s0, $v0, 0x1628
    ctx->pc = 0x1ddde4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5672));
    // 0x1ddde8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ddde8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411628u));
    // 0x1dddec: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DDDECu;
    {
        const bool branch_taken_0x1dddec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDDECu;
        // 0x1dddf0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dddec) {
            ctx->pc = 0x1DDE14u;
            goto label_1dde14;
        }
    }
    ctx->pc = 0x1DDDF4u;
    // 0x1dddf4: 0xc077340  jal         func_1DCD00
    ctx->pc = 0x1DDDF4u;
    SET_GPR_U32(ctx, 31, 0x1DDDFCu);
    ctx->pc = 0x1DCD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD00u, 0x1DDDF4u, 0x1DDDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDDFCu;
label_1dddfc:
    // 0x1dddfc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1dddfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1dde00: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1dde00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1dde04: 0x24a57f58  addiu       $a1, $a1, 0x7F58
    ctx->pc = 0x1dde04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32600));
    // 0x1dde08: 0x24c61580  addiu       $a2, $a2, 0x1580
    ctx->pc = 0x1dde08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5504));
    // 0x1dde0c: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DDE0Cu;
    SET_GPR_U32(ctx, 31, 0x1DDE14u);
    ctx->pc = 0x1DDE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDE0Cu;
    // 0x1dde10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DDE0Cu, 0x1DDE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDE14u;
label_1dde14:
    // 0x1dde14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dde14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dde18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dde18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dde1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dde1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dde20: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE20u;
        // 0x1dde24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDE28u;
}
