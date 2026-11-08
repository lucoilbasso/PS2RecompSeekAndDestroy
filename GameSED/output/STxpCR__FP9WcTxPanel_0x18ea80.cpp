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

// Function: STxpCR__FP9WcTxPanel
// Address: 0x18ea80 - 0x18eac4
void STxpCR__FP9WcTxPanel_0x18ea80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("STxpCR__FP9WcTxPanel_0x18ea80");
#endif

    ctx->pc = 0x18ea80u;

    // 0x18ea80: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x18ea80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea84: 0x94a60246  lhu         $a2, 0x246($a1)
    ctx->pc = 0x18ea84u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 582)));
    // 0x18ea88: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x18ea88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x18ea8c: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x18ea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x18ea90: 0xa4a00244  sh          $zero, 0x244($a1)
    ctx->pc = 0x18ea90u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 580), (uint16_t)GPR_U32(ctx, 0));
    // 0x18ea94: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x18ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x18ea98: 0xa4a30246  sh          $v1, 0x246($a1)
    ctx->pc = 0x18ea98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 582), (uint16_t)GPR_U32(ctx, 3));
    // 0x18ea9c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18ea9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x18eaa0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18eaa4: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x18eaa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18eaa8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18EAA8u;
    {
        const bool branch_taken_0x18eaa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18eaa8) {
            ctx->pc = 0x18EAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EAA8u;
            // 0x18eaac: 0x8ca20254  lw          $v0, 0x254($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EAB8u;
            goto label_18eab8;
        }
    }
    ctx->pc = 0x18EAB0u;
    // 0x18eab0: 0x3e00008  jr          $ra
    ctx->pc = 0x18EAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EAB0u;
        // 0x18eab4: 0xa4a60246  sh          $a2, 0x246($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 582), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EAB8u;
label_18eab8:
    // 0x18eab8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18eabc: 0x3e00008  jr          $ra
    ctx->pc = 0x18EABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EABCu;
        // 0x18eac0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EAC4u;
}
