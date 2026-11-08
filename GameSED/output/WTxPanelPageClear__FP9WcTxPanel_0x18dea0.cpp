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

// Function: WTxPanelPageClear__FP9WcTxPanel
// Address: 0x18dea0 - 0x18df94
void WTxPanelPageClear__FP9WcTxPanel_0x18dea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTxPanelPageClear__FP9WcTxPanel_0x18dea0");
#endif

    switch (ctx->pc) {
        case 0x18deb8u: goto label_18deb8;
        case 0x18dee8u: goto label_18dee8;
        case 0x18df20u: goto label_18df20;
        case 0x18df70u: goto label_18df70;
        default: break;
    }

    ctx->pc = 0x18dea0u;

    // 0x18dea0: 0x8c850210  lw          $a1, 0x210($a0)
    ctx->pc = 0x18dea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 528)));
    // 0x18dea4: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x18DEA4u;
    {
        const bool branch_taken_0x18dea4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x18DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DEA4u;
        // 0x18dea8: 0x8c820214  lw          $v0, 0x214($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dea4) {
            ctx->pc = 0x18DED8u;
            goto label_18ded8;
        }
    }
    ctx->pc = 0x18DEACu;
    // 0x18deac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18deacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18deb0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x18deb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18deb4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x18deb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18deb8:
    // 0x18deb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18debc: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x18debcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x18dec0: 0x0  nop
    ctx->pc = 0x18dec0u;
    // NOP
    // 0x18dec4: 0x0  nop
    ctx->pc = 0x18dec4u;
    // NOP
    // 0x18dec8: 0x0  nop
    ctx->pc = 0x18dec8u;
    // NOP
    // 0x18decc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18DECCu;
    {
        const bool branch_taken_0x18decc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DECCu;
        // 0x18ded0: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18decc) {
            ctx->pc = 0x18DEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18deb8;
        }
    }
    ctx->pc = 0x18DED4u;
    // 0x18ded4: 0x8c850210  lw          $a1, 0x210($a0)
    ctx->pc = 0x18ded4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 528)));
label_18ded8:
    // 0x18ded8: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x18DED8u;
    {
        const bool branch_taken_0x18ded8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x18DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DED8u;
        // 0x18dedc: 0x8c820218  lw          $v0, 0x218($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ded8) {
            ctx->pc = 0x18DF04u;
            goto label_18df04;
        }
    }
    ctx->pc = 0x18DEE0u;
    // 0x18dee0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18dee0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dee4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x18dee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18dee8:
    // 0x18dee8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18deec: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x18deecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x18def0: 0x0  nop
    ctx->pc = 0x18def0u;
    // NOP
    // 0x18def4: 0x0  nop
    ctx->pc = 0x18def4u;
    // NOP
    // 0x18def8: 0x0  nop
    ctx->pc = 0x18def8u;
    // NOP
    // 0x18defc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18DEFCu;
    {
        const bool branch_taken_0x18defc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DEFCu;
        // 0x18df00: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18defc) {
            ctx->pc = 0x18DEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18dee8;
        }
    }
    ctx->pc = 0x18DF04u;
label_18df04:
    // 0x18df04: 0x8c83021c  lw          $v1, 0x21C($a0)
    ctx->pc = 0x18df04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 540)));
    // 0x18df08: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x18DF08u;
    {
        const bool branch_taken_0x18df08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF08u;
        // 0x18df0c: 0x2482023c  addiu       $v0, $a0, 0x23C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 572));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df08) {
            ctx->pc = 0x18DF40u;
            goto label_18df40;
        }
    }
    ctx->pc = 0x18DF10u;
    // 0x18df10: 0x8c820210  lw          $v0, 0x210($a0)
    ctx->pc = 0x18df10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 528)));
    // 0x18df14: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18DF14u;
    {
        const bool branch_taken_0x18df14 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18df14) {
            ctx->pc = 0x18DF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DF14u;
            // 0x18df18: 0x2482023c  addiu       $v0, $a0, 0x23C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 572));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DF40u;
            goto label_18df40;
        }
    }
    ctx->pc = 0x18DF1Cu;
    // 0x18df1c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x18df1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18df20:
    // 0x18df20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18df20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18df24: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x18df24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x18df28: 0x0  nop
    ctx->pc = 0x18df28u;
    // NOP
    // 0x18df2c: 0x0  nop
    ctx->pc = 0x18df2cu;
    // NOP
    // 0x18df30: 0x0  nop
    ctx->pc = 0x18df30u;
    // NOP
    // 0x18df34: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18DF34u;
    {
        const bool branch_taken_0x18df34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF34u;
        // 0x18df38: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df34) {
            ctx->pc = 0x18DF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18df20;
        }
    }
    ctx->pc = 0x18DF3Cu;
    // 0x18df3c: 0x2482023c  addiu       $v0, $a0, 0x23C
    ctx->pc = 0x18df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 572));
label_18df40:
    // 0x18df40: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x18df40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x18df44: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x18df44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x18df48: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x18df48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x18df4c: 0xa4800244  sh          $zero, 0x244($a0)
    ctx->pc = 0x18df4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 580), (uint16_t)GPR_U32(ctx, 0));
    // 0x18df50: 0xa4800246  sh          $zero, 0x246($a0)
    ctx->pc = 0x18df50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 582), (uint16_t)GPR_U32(ctx, 0));
    // 0x18df54: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x18df54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x18df58: 0x8c820244  lw          $v0, 0x244($a0)
    ctx->pc = 0x18df58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 580)));
    // 0x18df5c: 0xac80024c  sw          $zero, 0x24C($a0)
    ctx->pc = 0x18df5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 588), GPR_U32(ctx, 0));
    // 0x18df60: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x18DF60u;
    {
        const bool branch_taken_0x18df60 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x18DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF60u;
        // 0x18df64: 0xac820248  sw          $v0, 0x248($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df60) {
            ctx->pc = 0x18DF8Cu;
            goto label_18df8c;
        }
    }
    ctx->pc = 0x18DF68u;
    // 0x18df68: 0x8c820254  lw          $v0, 0x254($a0)
    ctx->pc = 0x18df68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 596)));
    // 0x18df6c: 0x0  nop
    ctx->pc = 0x18df6cu;
    // NOP
label_18df70:
    // 0x18df70: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18df70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18df74: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x18df74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x18df78: 0x0  nop
    ctx->pc = 0x18df78u;
    // NOP
    // 0x18df7c: 0x0  nop
    ctx->pc = 0x18df7cu;
    // NOP
    // 0x18df80: 0x0  nop
    ctx->pc = 0x18df80u;
    // NOP
    // 0x18df84: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18DF84u;
    {
        const bool branch_taken_0x18df84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF84u;
        // 0x18df88: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df84) {
            ctx->pc = 0x18DF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18df70;
        }
    }
    ctx->pc = 0x18DF8Cu;
label_18df8c:
    // 0x18df8c: 0x3e00008  jr          $ra
    ctx->pc = 0x18DF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DF94u;
}
