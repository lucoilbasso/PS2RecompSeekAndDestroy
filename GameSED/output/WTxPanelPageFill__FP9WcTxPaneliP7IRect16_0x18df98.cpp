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

// Function: WTxPanelPageFill__FP9WcTxPaneliP7IRect16
// Address: 0x18df98 - 0x18e088
void WTxPanelPageFill__FP9WcTxPaneliP7IRect16_0x18df98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTxPanelPageFill__FP9WcTxPaneliP7IRect16_0x18df98");
#endif

    switch (ctx->pc) {
        case 0x18dfd0u: goto label_18dfd0;
        case 0x18dfe0u: goto label_18dfe0;
        case 0x18e040u: goto label_18e040;
        default: break;
    }

    ctx->pc = 0x18df98u;

    // 0x18df98: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x18DF98u;
    {
        const bool branch_taken_0x18df98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF98u;
        // 0x18df9c: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df98) {
            ctx->pc = 0x18E028u;
            goto label_18e028;
        }
    }
    ctx->pc = 0x18DFA0u;
    // 0x18dfa0: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x18dfa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18dfa4: 0x8d030208  lw          $v1, 0x208($t0)
    ctx->pc = 0x18dfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 520)));
    // 0x18dfa8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x18dfa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x18dfac: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x18dfacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x18dfb0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18dfb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dfb4: 0x8d070214  lw          $a3, 0x214($t0)
    ctx->pc = 0x18dfb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 532)));
    // 0x18dfb8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x18dfb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18dfbc: 0x84c30006  lh          $v1, 0x6($a2)
    ctx->pc = 0x18dfbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x18dfc0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18dfc4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18dfc8: 0x18600015  blez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x18DFC8u;
    {
        const bool branch_taken_0x18dfc8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x18DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFC8u;
        // 0x18dfcc: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dfc8) {
            ctx->pc = 0x18E020u;
            goto label_18e020;
        }
    }
    ctx->pc = 0x18DFD0u;
label_18dfd0:
    // 0x18dfd0: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x18dfd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x18dfd4: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18DFD4u;
    {
        const bool branch_taken_0x18dfd4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFD4u;
        // 0x18dfd8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dfd4) {
            ctx->pc = 0x18E000u;
            goto label_18e000;
        }
    }
    ctx->pc = 0x18DFDCu;
    // 0x18dfdc: 0x0  nop
    ctx->pc = 0x18dfdcu;
    // NOP
label_18dfe0:
    // 0x18dfe0: 0xa4e50000  sh          $a1, 0x0($a3)
    ctx->pc = 0x18dfe0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x18dfe4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18dfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18dfe8: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x18dfe8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x18dfec: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x18dfecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18dff0: 0x0  nop
    ctx->pc = 0x18dff0u;
    // NOP
    // 0x18dff4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18DFF4u;
    {
        const bool branch_taken_0x18dff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFF4u;
        // 0x18dff8: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dff4) {
            ctx->pc = 0x18DFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18dfe0;
        }
    }
    ctx->pc = 0x18DFFCu;
    // 0x18dffc: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x18dffcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_18e000:
    // 0x18e000: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x18e000u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x18e004: 0x8d030208  lw          $v1, 0x208($t0)
    ctx->pc = 0x18e004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 520)));
    // 0x18e008: 0x84c40006  lh          $a0, 0x6($a2)
    ctx->pc = 0x18e008u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x18e00c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x18e00cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18e010: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18e010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18e014: 0x124202a  slt         $a0, $t1, $a0
    ctx->pc = 0x18e014u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18e018: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x18E018u;
    {
        const bool branch_taken_0x18e018 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E018u;
        // 0x18e01c: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e018) {
            ctx->pc = 0x18DFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18dfd0;
        }
    }
    ctx->pc = 0x18E020u;
label_18e020:
    // 0x18e020: 0x3e00008  jr          $ra
    ctx->pc = 0x18E020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E028u;
label_18e028:
    // 0x18e028: 0x8c860210  lw          $a2, 0x210($a0)
    ctx->pc = 0x18e028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 528)));
    // 0x18e02c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x18e02cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x18e030: 0x18c0000a  blez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x18E030u;
    {
        const bool branch_taken_0x18e030 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x18E034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E030u;
        // 0x18e034: 0x8c820214  lw          $v0, 0x214($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e030) {
            ctx->pc = 0x18E05Cu;
            goto label_18e05c;
        }
    }
    ctx->pc = 0x18E038u;
    // 0x18e038: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18e038u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e03c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x18e03cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18e040:
    // 0x18e040: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18e040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18e044: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x18e044u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x18e048: 0x0  nop
    ctx->pc = 0x18e048u;
    // NOP
    // 0x18e04c: 0x0  nop
    ctx->pc = 0x18e04cu;
    // NOP
    // 0x18e050: 0x0  nop
    ctx->pc = 0x18e050u;
    // NOP
    // 0x18e054: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18E054u;
    {
        const bool branch_taken_0x18e054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E054u;
        // 0x18e058: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e054) {
            ctx->pc = 0x18E040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e040;
        }
    }
    ctx->pc = 0x18E05Cu;
label_18e05c:
    // 0x18e05c: 0x2482023c  addiu       $v0, $a0, 0x23C
    ctx->pc = 0x18e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 572));
    // 0x18e060: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x18e060u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e064: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x18e064u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e068: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x18e068u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x18e06c: 0xa4800244  sh          $zero, 0x244($a0)
    ctx->pc = 0x18e06cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 580), (uint16_t)GPR_U32(ctx, 0));
    // 0x18e070: 0xa4800246  sh          $zero, 0x246($a0)
    ctx->pc = 0x18e070u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 582), (uint16_t)GPR_U32(ctx, 0));
    // 0x18e074: 0xac80024c  sw          $zero, 0x24C($a0)
    ctx->pc = 0x18e074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 588), GPR_U32(ctx, 0));
    // 0x18e078: 0x8c820244  lw          $v0, 0x244($a0)
    ctx->pc = 0x18e078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 580)));
    // 0x18e07c: 0xac820248  sw          $v0, 0x248($a0)
    ctx->pc = 0x18e07cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 584), GPR_U32(ctx, 2));
    // 0x18e080: 0x3e00008  jr          $ra
    ctx->pc = 0x18E080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E088u;
}
