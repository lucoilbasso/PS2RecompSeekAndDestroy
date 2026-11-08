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

// Function: GaugeFlicker__15ApPanelBarGauge9_barFlick
// Address: 0x15aea8 - 0x15afc0
void GaugeFlicker__15ApPanelBarGauge9_barFlick_0x15aea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GaugeFlicker__15ApPanelBarGauge9_barFlick_0x15aea8");
#endif

    switch (ctx->pc) {
        case 0x15aea8u: goto label_15aea8;
        case 0x15aeacu: goto label_15aeac;
        case 0x15aeb0u: goto label_15aeb0;
        case 0x15aeb4u: goto label_15aeb4;
        case 0x15aeb8u: goto label_15aeb8;
        case 0x15aebcu: goto label_15aebc;
        case 0x15aec0u: goto label_15aec0;
        case 0x15aec4u: goto label_15aec4;
        case 0x15aec8u: goto label_15aec8;
        case 0x15aeccu: goto label_15aecc;
        case 0x15aed0u: goto label_15aed0;
        case 0x15aed4u: goto label_15aed4;
        case 0x15aed8u: goto label_15aed8;
        case 0x15aedcu: goto label_15aedc;
        case 0x15aee0u: goto label_15aee0;
        case 0x15aee4u: goto label_15aee4;
        case 0x15aee8u: goto label_15aee8;
        case 0x15aeecu: goto label_15aeec;
        case 0x15aef0u: goto label_15aef0;
        case 0x15aef4u: goto label_15aef4;
        case 0x15aef8u: goto label_15aef8;
        case 0x15aefcu: goto label_15aefc;
        case 0x15af00u: goto label_15af00;
        case 0x15af04u: goto label_15af04;
        case 0x15af08u: goto label_15af08;
        case 0x15af0cu: goto label_15af0c;
        case 0x15af10u: goto label_15af10;
        case 0x15af14u: goto label_15af14;
        case 0x15af18u: goto label_15af18;
        case 0x15af1cu: goto label_15af1c;
        case 0x15af20u: goto label_15af20;
        case 0x15af24u: goto label_15af24;
        case 0x15af28u: goto label_15af28;
        case 0x15af2cu: goto label_15af2c;
        case 0x15af30u: goto label_15af30;
        case 0x15af34u: goto label_15af34;
        case 0x15af38u: goto label_15af38;
        case 0x15af3cu: goto label_15af3c;
        case 0x15af40u: goto label_15af40;
        case 0x15af44u: goto label_15af44;
        case 0x15af48u: goto label_15af48;
        case 0x15af4cu: goto label_15af4c;
        case 0x15af50u: goto label_15af50;
        case 0x15af54u: goto label_15af54;
        case 0x15af58u: goto label_15af58;
        case 0x15af5cu: goto label_15af5c;
        case 0x15af60u: goto label_15af60;
        case 0x15af64u: goto label_15af64;
        case 0x15af68u: goto label_15af68;
        case 0x15af6cu: goto label_15af6c;
        case 0x15af70u: goto label_15af70;
        case 0x15af74u: goto label_15af74;
        case 0x15af78u: goto label_15af78;
        case 0x15af7cu: goto label_15af7c;
        case 0x15af80u: goto label_15af80;
        case 0x15af84u: goto label_15af84;
        case 0x15af88u: goto label_15af88;
        case 0x15af8cu: goto label_15af8c;
        case 0x15af90u: goto label_15af90;
        case 0x15af94u: goto label_15af94;
        case 0x15af98u: goto label_15af98;
        case 0x15af9cu: goto label_15af9c;
        case 0x15afa0u: goto label_15afa0;
        case 0x15afa4u: goto label_15afa4;
        case 0x15afa8u: goto label_15afa8;
        case 0x15afacu: goto label_15afac;
        case 0x15afb0u: goto label_15afb0;
        case 0x15afb4u: goto label_15afb4;
        case 0x15afb8u: goto label_15afb8;
        case 0x15afbcu: goto label_15afbc;
        default: break;
    }

    ctx->pc = 0x15aea8u;

label_15aea8:
    // 0x15aea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15aea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_15aeac:
    // 0x15aeac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15aeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15aeb0:
    // 0x15aeb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15aeb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15aeb4:
    // 0x15aeb4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x15aeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_15aeb8:
    // 0x15aeb8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15aebc:
    // 0x15aebc: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x15aebcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
label_15aec0:
    // 0x15aec0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15aec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15aec4:
    // 0x15aec4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_15aec8:
    if (ctx->pc == 0x15AEC8u) {
        ctx->pc = 0x15AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEC4u;
        // 0x15aec8: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AECCu;
        goto label_15aecc;
    }
    ctx->pc = 0x15AEC4u;
    {
        const bool branch_taken_0x15aec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aec4) {
            ctx->pc = 0x15AEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15AEC4u;
            // 0x15aec8: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15AED0u;
            goto label_15aed0;
        }
    }
    ctx->pc = 0x15AECCu;
label_15aecc:
    // 0x15aecc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15aeccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15aed0:
    // 0x15aed0: 0x10c00037  beqz        $a2, . + 4 + (0x37 << 2)
label_15aed4:
    if (ctx->pc == 0x15AED4u) {
        ctx->pc = 0x15AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AED0u;
        // 0x15aed4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AED8u;
        goto label_15aed8;
    }
    ctx->pc = 0x15AED0u;
    {
        const bool branch_taken_0x15aed0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AED0u;
        // 0x15aed4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aed0) {
            ctx->pc = 0x15AFB0u;
            goto label_15afb0;
        }
    }
    ctx->pc = 0x15AED8u;
label_15aed8:
    // 0x15aed8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15aed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15aedc:
    // 0x15aedc: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x15aedcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
label_15aee0:
    // 0x15aee0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15aee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15aee4:
    // 0x15aee4: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x15aee4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_15aee8:
    // 0x15aee8: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
label_15aeec:
    if (ctx->pc == 0x15AEECu) {
        ctx->pc = 0x15AEF0u;
        goto label_15aef0;
    }
    ctx->pc = 0x15AEE8u;
    {
        const bool branch_taken_0x15aee8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x15aee8) {
            ctx->pc = 0x15AF18u;
            goto label_15af18;
        }
    }
    ctx->pc = 0x15AEF0u;
label_15aef0:
    // 0x15aef0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15aef4:
    // 0x15aef4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15aef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15aef8:
    // 0x15aef8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15aefc:
    // 0x15aefc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15aefcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15af00:
    // 0x15af00: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15af00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15af04:
    // 0x15af04: 0x60f809  jalr        $v1
label_15af08:
    if (ctx->pc == 0x15AF08u) {
        ctx->pc = 0x15AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF04u;
        // 0x15af08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF0Cu;
        goto label_15af0c;
    }
    ctx->pc = 0x15AF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15AF0Cu);
        ctx->pc = 0x15AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF04u;
        // 0x15af08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AF04u, 0x15AF0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15AF0Cu;
label_15af0c:
    // 0x15af0c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x15af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_15af10:
    // 0x15af10: 0x10000027  b           . + 4 + (0x27 << 2)
label_15af14:
    if (ctx->pc == 0x15AF14u) {
        ctx->pc = 0x15AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF10u;
        // 0x15af14: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF18u;
        goto label_15af18;
    }
    ctx->pc = 0x15AF10u;
    {
        const bool branch_taken_0x15af10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF10u;
        // 0x15af14: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af10) {
            ctx->pc = 0x15AFB0u;
            goto label_15afb0;
        }
    }
    ctx->pc = 0x15AF18u;
label_15af18:
    // 0x15af18: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
label_15af1c:
    if (ctx->pc == 0x15AF1Cu) {
        ctx->pc = 0x15AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF18u;
        // 0x15af1c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF20u;
        goto label_15af20;
    }
    ctx->pc = 0x15AF18u;
    {
        const bool branch_taken_0x15af18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF18u;
        // 0x15af1c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af18) {
            ctx->pc = 0x15AF90u;
            goto label_15af90;
        }
    }
    ctx->pc = 0x15AF20u;
label_15af20:
    // 0x15af20: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x15af20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_15af24:
    // 0x15af24: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x15af24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_15af28:
    // 0x15af28: 0xa81826  xor         $v1, $a1, $t0
    ctx->pc = 0x15af28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 8));
label_15af2c:
    // 0x15af2c: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x15af2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_15af30:
    // 0x15af30: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x15af30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_15af34:
    // 0x15af34: 0x43380b  movn        $a3, $v0, $v1
    ctx->pc = 0x15af34u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_15af38:
    // 0x15af38: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x15af38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_15af3c:
    // 0x15af3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_15af40:
    if (ctx->pc == 0x15AF40u) {
        ctx->pc = 0x15AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF3Cu;
        // 0x15af40: 0xae04003c  sw          $a0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF44u;
        goto label_15af44;
    }
    ctx->pc = 0x15AF3Cu;
    {
        const bool branch_taken_0x15af3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF3Cu;
        // 0x15af40: 0xae04003c  sw          $a0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af3c) {
            ctx->pc = 0x15AF58u;
            goto label_15af58;
        }
    }
    ctx->pc = 0x15AF44u;
label_15af44:
    // 0x15af44: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15af44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15af48:
    // 0x15af48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15af48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15af4c:
    // 0x15af4c: 0x10000008  b           . + 4 + (0x8 << 2)
label_15af50:
    if (ctx->pc == 0x15AF50u) {
        ctx->pc = 0x15AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF4Cu;
        // 0x15af50: 0xae08003c  sw          $t0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF54u;
        goto label_15af54;
    }
    ctx->pc = 0x15AF4Cu;
    {
        const bool branch_taken_0x15af4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF4Cu;
        // 0x15af50: 0xae08003c  sw          $t0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af4c) {
            ctx->pc = 0x15AF70u;
            goto label_15af70;
        }
    }
    ctx->pc = 0x15AF54u;
label_15af54:
    // 0x15af54: 0x0  nop
    ctx->pc = 0x15af54u;
    // NOP
label_15af58:
    // 0x15af58: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x15af58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_15af5c:
    // 0x15af5c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x15af5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15af60:
    // 0x15af60: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_15af64:
    if (ctx->pc == 0x15AF64u) {
        ctx->pc = 0x15AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF60u;
        // 0x15af64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF68u;
        goto label_15af68;
    }
    ctx->pc = 0x15AF60u;
    {
        const bool branch_taken_0x15af60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF60u;
        // 0x15af64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af60) {
            ctx->pc = 0x15AFB4u;
            goto label_15afb4;
        }
    }
    ctx->pc = 0x15AF68u;
label_15af68:
    // 0x15af68: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15af68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15af6c:
    // 0x15af6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15af6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15af70:
    // 0x15af70: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15af70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15af74:
    // 0x15af74: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15af74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15af78:
    // 0x15af78: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15af78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15af7c:
    // 0x15af7c: 0x60f809  jalr        $v1
label_15af80:
    if (ctx->pc == 0x15AF80u) {
        ctx->pc = 0x15AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF7Cu;
        // 0x15af80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF84u;
        goto label_15af84;
    }
    ctx->pc = 0x15AF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15AF84u);
        ctx->pc = 0x15AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF7Cu;
        // 0x15af80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AF7Cu, 0x15AF84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15AF84u;
label_15af84:
    // 0x15af84: 0x1000000b  b           . + 4 + (0xB << 2)
label_15af88:
    if (ctx->pc == 0x15AF88u) {
        ctx->pc = 0x15AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF84u;
        // 0x15af88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF8Cu;
        goto label_15af8c;
    }
    ctx->pc = 0x15AF84u;
    {
        const bool branch_taken_0x15af84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF84u;
        // 0x15af88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af84) {
            ctx->pc = 0x15AFB4u;
            goto label_15afb4;
        }
    }
    ctx->pc = 0x15AF8Cu;
label_15af8c:
    // 0x15af8c: 0x0  nop
    ctx->pc = 0x15af8cu;
    // NOP
label_15af90:
    // 0x15af90: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15af90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15af94:
    // 0x15af94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15af94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15af98:
    // 0x15af98: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15af98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15af9c:
    // 0x15af9c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15af9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15afa0:
    // 0x15afa0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15afa4:
    // 0x15afa4: 0x60f809  jalr        $v1
label_15afa8:
    if (ctx->pc == 0x15AFA8u) {
        ctx->pc = 0x15AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFA4u;
        // 0x15afa8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AFACu;
        goto label_15afac;
    }
    ctx->pc = 0x15AFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15AFACu);
        ctx->pc = 0x15AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFA4u;
        // 0x15afa8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AFA4u, 0x15AFACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15AFACu;
label_15afac:
    // 0x15afac: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x15afacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_15afb0:
    // 0x15afb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15afb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15afb4:
    // 0x15afb4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x15afb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15afb8:
    // 0x15afb8: 0x3e00008  jr          $ra
label_15afbc:
    if (ctx->pc == 0x15AFBCu) {
        ctx->pc = 0x15AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFB8u;
        // 0x15afbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AFC0u;
        goto label_fallthrough_0x15afb8;
    }
    ctx->pc = 0x15AFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFB8u;
        // 0x15afbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15afb8:
    ctx->pc = 0x15AFC0u;
}
