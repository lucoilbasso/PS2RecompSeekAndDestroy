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

// Function: GdCellUvOffsetInit__6WcFont
// Address: 0x183de0 - 0x183e38
void GdCellUvOffsetInit__6WcFont_0x183de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GdCellUvOffsetInit__6WcFont_0x183de0");
#endif

    switch (ctx->pc) {
        case 0x183df8u: goto label_183df8;
        case 0x183e00u: goto label_183e00;
        default: break;
    }

    ctx->pc = 0x183de0u;

    // 0x183de0: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x183de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x183de4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183de8: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x183DE8u;
    {
        const bool branch_taken_0x183de8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x183DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183DE8u;
        // 0x183dec: 0x8c830040  lw          $v1, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183de8) {
            ctx->pc = 0x183E30u;
            goto label_183e30;
        }
    }
    ctx->pc = 0x183DF0u;
    // 0x183df0: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x183df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x183df4: 0x0  nop
    ctx->pc = 0x183df4u;
    // NOP
label_183df8:
    // 0x183df8: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x183DF8u;
    {
        const bool branch_taken_0x183df8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x183DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183DF8u;
        // 0x183dfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183df8) {
            ctx->pc = 0x183E1Cu;
            goto label_183e1c;
        }
    }
    ctx->pc = 0x183E00u;
label_183e00:
    // 0x183e00: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x183e00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x183e04: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x183e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x183e08: 0xa0600007  sb          $zero, 0x7($v1)
    ctx->pc = 0x183e08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x183e0c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x183e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x183e10: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x183e10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x183e14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x183E14u;
    {
        const bool branch_taken_0x183e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183E14u;
        // 0x183e18: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183e14) {
            ctx->pc = 0x183E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183e00;
        }
    }
    ctx->pc = 0x183E1Cu;
label_183e1c:
    // 0x183e1c: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x183e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x183e20: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x183e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x183e24: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x183e24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x183e28: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x183E28u;
    {
        const bool branch_taken_0x183e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x183e28) {
            ctx->pc = 0x183E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183E28u;
            // 0x183e2c: 0x8c820030  lw          $v0, 0x30($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183df8;
        }
    }
    ctx->pc = 0x183E30u;
label_183e30:
    // 0x183e30: 0x3e00008  jr          $ra
    ctx->pc = 0x183E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183E38u;
}
