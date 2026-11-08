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

// Function: STxPanelPutChar__FP9WcTxPanelPUsi
// Address: 0x18cee8 - 0x18d0f8
void STxPanelPutChar__FP9WcTxPanelPUsi_0x18cee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("STxPanelPutChar__FP9WcTxPanelPUsi_0x18cee8");
#endif

    switch (ctx->pc) {
        case 0x18cee8u: goto label_18cee8;
        case 0x18ceecu: goto label_18ceec;
        case 0x18cef0u: goto label_18cef0;
        case 0x18cef4u: goto label_18cef4;
        case 0x18cef8u: goto label_18cef8;
        case 0x18cefcu: goto label_18cefc;
        case 0x18cf00u: goto label_18cf00;
        case 0x18cf04u: goto label_18cf04;
        case 0x18cf08u: goto label_18cf08;
        case 0x18cf0cu: goto label_18cf0c;
        case 0x18cf10u: goto label_18cf10;
        case 0x18cf14u: goto label_18cf14;
        case 0x18cf18u: goto label_18cf18;
        case 0x18cf1cu: goto label_18cf1c;
        case 0x18cf20u: goto label_18cf20;
        case 0x18cf24u: goto label_18cf24;
        case 0x18cf28u: goto label_18cf28;
        case 0x18cf2cu: goto label_18cf2c;
        case 0x18cf30u: goto label_18cf30;
        case 0x18cf34u: goto label_18cf34;
        case 0x18cf38u: goto label_18cf38;
        case 0x18cf3cu: goto label_18cf3c;
        case 0x18cf40u: goto label_18cf40;
        case 0x18cf44u: goto label_18cf44;
        case 0x18cf48u: goto label_18cf48;
        case 0x18cf4cu: goto label_18cf4c;
        case 0x18cf50u: goto label_18cf50;
        case 0x18cf54u: goto label_18cf54;
        case 0x18cf58u: goto label_18cf58;
        case 0x18cf5cu: goto label_18cf5c;
        case 0x18cf60u: goto label_18cf60;
        case 0x18cf64u: goto label_18cf64;
        case 0x18cf68u: goto label_18cf68;
        case 0x18cf6cu: goto label_18cf6c;
        case 0x18cf70u: goto label_18cf70;
        case 0x18cf74u: goto label_18cf74;
        case 0x18cf78u: goto label_18cf78;
        case 0x18cf7cu: goto label_18cf7c;
        case 0x18cf80u: goto label_18cf80;
        case 0x18cf84u: goto label_18cf84;
        case 0x18cf88u: goto label_18cf88;
        case 0x18cf8cu: goto label_18cf8c;
        case 0x18cf90u: goto label_18cf90;
        case 0x18cf94u: goto label_18cf94;
        case 0x18cf98u: goto label_18cf98;
        case 0x18cf9cu: goto label_18cf9c;
        case 0x18cfa0u: goto label_18cfa0;
        case 0x18cfa4u: goto label_18cfa4;
        case 0x18cfa8u: goto label_18cfa8;
        case 0x18cfacu: goto label_18cfac;
        case 0x18cfb0u: goto label_18cfb0;
        case 0x18cfb4u: goto label_18cfb4;
        case 0x18cfb8u: goto label_18cfb8;
        case 0x18cfbcu: goto label_18cfbc;
        case 0x18cfc0u: goto label_18cfc0;
        case 0x18cfc4u: goto label_18cfc4;
        case 0x18cfc8u: goto label_18cfc8;
        case 0x18cfccu: goto label_18cfcc;
        case 0x18cfd0u: goto label_18cfd0;
        case 0x18cfd4u: goto label_18cfd4;
        case 0x18cfd8u: goto label_18cfd8;
        case 0x18cfdcu: goto label_18cfdc;
        case 0x18cfe0u: goto label_18cfe0;
        case 0x18cfe4u: goto label_18cfe4;
        case 0x18cfe8u: goto label_18cfe8;
        case 0x18cfecu: goto label_18cfec;
        case 0x18cff0u: goto label_18cff0;
        case 0x18cff4u: goto label_18cff4;
        case 0x18cff8u: goto label_18cff8;
        case 0x18cffcu: goto label_18cffc;
        case 0x18d000u: goto label_18d000;
        case 0x18d004u: goto label_18d004;
        case 0x18d008u: goto label_18d008;
        case 0x18d00cu: goto label_18d00c;
        case 0x18d010u: goto label_18d010;
        case 0x18d014u: goto label_18d014;
        case 0x18d018u: goto label_18d018;
        case 0x18d01cu: goto label_18d01c;
        case 0x18d020u: goto label_18d020;
        case 0x18d024u: goto label_18d024;
        case 0x18d028u: goto label_18d028;
        case 0x18d02cu: goto label_18d02c;
        case 0x18d030u: goto label_18d030;
        case 0x18d034u: goto label_18d034;
        case 0x18d038u: goto label_18d038;
        case 0x18d03cu: goto label_18d03c;
        case 0x18d040u: goto label_18d040;
        case 0x18d044u: goto label_18d044;
        case 0x18d048u: goto label_18d048;
        case 0x18d04cu: goto label_18d04c;
        case 0x18d050u: goto label_18d050;
        case 0x18d054u: goto label_18d054;
        case 0x18d058u: goto label_18d058;
        case 0x18d05cu: goto label_18d05c;
        case 0x18d060u: goto label_18d060;
        case 0x18d064u: goto label_18d064;
        case 0x18d068u: goto label_18d068;
        case 0x18d06cu: goto label_18d06c;
        case 0x18d070u: goto label_18d070;
        case 0x18d074u: goto label_18d074;
        case 0x18d078u: goto label_18d078;
        case 0x18d07cu: goto label_18d07c;
        case 0x18d080u: goto label_18d080;
        case 0x18d084u: goto label_18d084;
        case 0x18d088u: goto label_18d088;
        case 0x18d08cu: goto label_18d08c;
        case 0x18d090u: goto label_18d090;
        case 0x18d094u: goto label_18d094;
        case 0x18d098u: goto label_18d098;
        case 0x18d09cu: goto label_18d09c;
        case 0x18d0a0u: goto label_18d0a0;
        case 0x18d0a4u: goto label_18d0a4;
        case 0x18d0a8u: goto label_18d0a8;
        case 0x18d0acu: goto label_18d0ac;
        case 0x18d0b0u: goto label_18d0b0;
        case 0x18d0b4u: goto label_18d0b4;
        case 0x18d0b8u: goto label_18d0b8;
        case 0x18d0bcu: goto label_18d0bc;
        case 0x18d0c0u: goto label_18d0c0;
        case 0x18d0c4u: goto label_18d0c4;
        case 0x18d0c8u: goto label_18d0c8;
        case 0x18d0ccu: goto label_18d0cc;
        case 0x18d0d0u: goto label_18d0d0;
        case 0x18d0d4u: goto label_18d0d4;
        case 0x18d0d8u: goto label_18d0d8;
        case 0x18d0dcu: goto label_18d0dc;
        case 0x18d0e0u: goto label_18d0e0;
        case 0x18d0e4u: goto label_18d0e4;
        case 0x18d0e8u: goto label_18d0e8;
        case 0x18d0ecu: goto label_18d0ec;
        case 0x18d0f0u: goto label_18d0f0;
        case 0x18d0f4u: goto label_18d0f4;
        default: break;
    }

    ctx->pc = 0x18cee8u;

label_18cee8:
    // 0x18cee8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18cee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18ceec:
    // 0x18ceec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x18ceecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_18cef0:
    // 0x18cef0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18cef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18cef4:
    // 0x18cef4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x18cef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_18cef8:
    // 0x18cef8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18cef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18cefc:
    // 0x18cefc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x18cefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_18cf00:
    // 0x18cf00: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x18cf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_18cf04:
    // 0x18cf04: 0x86020244  lh          $v0, 0x244($s0)
    ctx->pc = 0x18cf04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 580)));
label_18cf08:
    // 0x18cf08: 0x8e030208  lw          $v1, 0x208($s0)
    ctx->pc = 0x18cf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
label_18cf0c:
    // 0x18cf0c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x18cf0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_18cf10:
    // 0x18cf10: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_18cf14:
    if (ctx->pc == 0x18CF14u) {
        ctx->pc = 0x18CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF10u;
        // 0x18cf14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CF18u;
        goto label_18cf18;
    }
    ctx->pc = 0x18CF10u;
    {
        const bool branch_taken_0x18cf10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF10u;
        // 0x18cf14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf10) {
            ctx->pc = 0x18CF80u;
            goto label_18cf80;
        }
    }
    ctx->pc = 0x18CF18u;
label_18cf18:
    // 0x18cf18: 0x8602023c  lh          $v0, 0x23C($s0)
    ctx->pc = 0x18cf18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 572)));
label_18cf1c:
    // 0x18cf1c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_18cf20:
    if (ctx->pc == 0x18CF20u) {
        ctx->pc = 0x18CF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF1Cu;
        // 0x18cf20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CF24u;
        goto label_18cf24;
    }
    ctx->pc = 0x18CF1Cu;
    {
        const bool branch_taken_0x18cf1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF1Cu;
        // 0x18cf20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf1c) {
            ctx->pc = 0x18CF80u;
            goto label_18cf80;
        }
    }
    ctx->pc = 0x18CF24u;
label_18cf24:
    // 0x18cf24: 0x96050246  lhu         $a1, 0x246($s0)
    ctx->pc = 0x18cf24u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 582)));
label_18cf28:
    // 0x18cf28: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x18cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_18cf2c:
    // 0x18cf2c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x18cf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_18cf30:
    // 0x18cf30: 0xa6000244  sh          $zero, 0x244($s0)
    ctx->pc = 0x18cf30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 580), (uint16_t)GPR_U32(ctx, 0));
label_18cf34:
    // 0x18cf34: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x18cf34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_18cf38:
    // 0x18cf38: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x18cf38u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_18cf3c:
    // 0x18cf3c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x18cf3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_18cf40:
    // 0x18cf40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_18cf44:
    if (ctx->pc == 0x18CF44u) {
        ctx->pc = 0x18CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF40u;
        // 0x18cf44: 0xa6030246  sh          $v1, 0x246($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 582), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CF48u;
        goto label_18cf48;
    }
    ctx->pc = 0x18CF40u;
    {
        const bool branch_taken_0x18cf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF40u;
        // 0x18cf44: 0xa6030246  sh          $v1, 0x246($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 582), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf40) {
            ctx->pc = 0x18CF50u;
            goto label_18cf50;
        }
    }
    ctx->pc = 0x18CF48u;
label_18cf48:
    // 0x18cf48: 0x10000005  b           . + 4 + (0x5 << 2)
label_18cf4c:
    if (ctx->pc == 0x18CF4Cu) {
        ctx->pc = 0x18CF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF48u;
        // 0x18cf4c: 0xa6050246  sh          $a1, 0x246($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 582), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CF50u;
        goto label_18cf50;
    }
    ctx->pc = 0x18CF48u;
    {
        const bool branch_taken_0x18cf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF48u;
        // 0x18cf4c: 0xa6050246  sh          $a1, 0x246($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 582), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf48) {
            ctx->pc = 0x18CF60u;
            goto label_18cf60;
        }
    }
    ctx->pc = 0x18CF50u;
label_18cf50:
    // 0x18cf50: 0x8e030254  lw          $v1, 0x254($s0)
    ctx->pc = 0x18cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
label_18cf54:
    // 0x18cf54: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x18cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18cf58:
    // 0x18cf58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18cf5c:
    // 0x18cf5c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x18cf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_18cf60:
    // 0x18cf60: 0x84c20246  lh          $v0, 0x246($a2)
    ctx->pc = 0x18cf60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 582)));
label_18cf64:
    // 0x18cf64: 0x8cc30208  lw          $v1, 0x208($a2)
    ctx->pc = 0x18cf64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 520)));
label_18cf68:
    // 0x18cf68: 0x84c40244  lh          $a0, 0x244($a2)
    ctx->pc = 0x18cf68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 580)));
label_18cf6c:
    // 0x18cf6c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x18cf6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_18cf70:
    // 0x18cf70: 0x8cc50214  lw          $a1, 0x214($a2)
    ctx->pc = 0x18cf70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_18cf74:
    // 0x18cf74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18cf78:
    // 0x18cf78: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18cf78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_18cf7c:
    // 0x18cf7c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x18cf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_18cf80:
    // 0x18cf80: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18cf80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18cf84:
    // 0x18cf84: 0x12400056  beqz        $s2, . + 4 + (0x56 << 2)
label_18cf88:
    if (ctx->pc == 0x18CF88u) {
        ctx->pc = 0x18CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF84u;
        // 0x18cf88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CF8Cu;
        goto label_18cf8c;
    }
    ctx->pc = 0x18CF84u;
    {
        const bool branch_taken_0x18cf84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF84u;
        // 0x18cf88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf84) {
            ctx->pc = 0x18D0E0u;
            goto label_18d0e0;
        }
    }
    ctx->pc = 0x18CF8Cu;
label_18cf8c:
    // 0x18cf8c: 0x8602023c  lh          $v0, 0x23C($s0)
    ctx->pc = 0x18cf8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 572)));
label_18cf90:
    // 0x18cf90: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_18cf94:
    if (ctx->pc == 0x18CF94u) {
        ctx->pc = 0x18CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF90u;
        // 0x18cf94: 0x8e020228  lw          $v0, 0x228($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CF98u;
        goto label_18cf98;
    }
    ctx->pc = 0x18CF90u;
    {
        const bool branch_taken_0x18cf90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cf90) {
            ctx->pc = 0x18CF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CF90u;
            // 0x18cf94: 0x8e020228  lw          $v0, 0x228($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CFB0u;
            goto label_18cfb0;
        }
    }
    ctx->pc = 0x18CF98u;
label_18cf98:
    // 0x18cf98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18cf98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18cf9c:
    // 0x18cf9c: 0xc0632e6  jal         func_18CB98
label_18cfa0:
    if (ctx->pc == 0x18CFA0u) {
        ctx->pc = 0x18CFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF9Cu;
        // 0x18cfa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CFA4u;
        goto label_18cfa4;
    }
    ctx->pc = 0x18CF9Cu;
    SET_GPR_U32(ctx, 31, 0x18CFA4u);
    ctx->pc = 0x18CFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CF9Cu;
    // 0x18cfa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CB98u, 0x18CF9Cu, 0x18CFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CFA4u;
label_18cfa4:
    // 0x18cfa4: 0x1000004a  b           . + 4 + (0x4A << 2)
label_18cfa8:
    if (ctx->pc == 0x18CFA8u) {
        ctx->pc = 0x18CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CFA4u;
        // 0x18cfa8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CFACu;
        goto label_18cfac;
    }
    ctx->pc = 0x18CFA4u;
    {
        const bool branch_taken_0x18cfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CFA4u;
        // 0x18cfa8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cfa4) {
            ctx->pc = 0x18D0D0u;
            goto label_18d0d0;
        }
    }
    ctx->pc = 0x18CFACu;
label_18cfac:
    // 0x18cfac: 0x0  nop
    ctx->pc = 0x18cfacu;
    // NOP
label_18cfb0:
    // 0x18cfb0: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x18cfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
label_18cfb4:
    // 0x18cfb4: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x18cfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
label_18cfb8:
    // 0x18cfb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18cfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_18cfbc:
    // 0x18cfbc: 0x5444001c  bnel        $v0, $a0, . + 4 + (0x1C << 2)
label_18cfc0:
    if (ctx->pc == 0x18CFC0u) {
        ctx->pc = 0x18CFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CFBCu;
        // 0x18cfc0: 0x8e030250  lw          $v1, 0x250($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CFC4u;
        goto label_18cfc4;
    }
    ctx->pc = 0x18CFBCu;
    {
        const bool branch_taken_0x18cfbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x18cfbc) {
            ctx->pc = 0x18CFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CFBCu;
            // 0x18cfc0: 0x8e030250  lw          $v1, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D030u;
            goto label_18d030;
        }
    }
    ctx->pc = 0x18CFC4u;
label_18cfc4:
    // 0x18cfc4: 0x8e060238  lw          $a2, 0x238($s0)
    ctx->pc = 0x18cfc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
label_18cfc8:
    // 0x18cfc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18cfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18cfcc:
    // 0x18cfcc: 0x8e040250  lw          $a0, 0x250($s0)
    ctx->pc = 0x18cfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_18cfd0:
    // 0x18cfd0: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x18cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_18cfd4:
    // 0x18cfd4: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x18cfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_18cfd8:
    // 0x18cfd8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x18cfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_18cfdc:
    // 0x18cfdc: 0x14850009  bne         $a0, $a1, . + 4 + (0x9 << 2)
label_18cfe0:
    if (ctx->pc == 0x18CFE0u) {
        ctx->pc = 0x18CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CFDCu;
        // 0x18cfe0: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CFE4u;
        goto label_18cfe4;
    }
    ctx->pc = 0x18CFDCu;
    {
        const bool branch_taken_0x18cfdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x18CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CFDCu;
        // 0x18cfe0: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cfdc) {
            ctx->pc = 0x18D004u;
            goto label_18d004;
        }
    }
    ctx->pc = 0x18CFE4u;
label_18cfe4:
    // 0x18cfe4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x18cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_18cfe8:
    // 0x18cfe8: 0x3228ffff  andi        $t0, $s1, 0xFFFF
    ctx->pc = 0x18cfe8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_18cfec:
    // 0x18cfec: 0x84c7001c  lh          $a3, 0x1C($a2)
    ctx->pc = 0x18cfecu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 28)));
label_18cff0:
    // 0x18cff0: 0x8cc50020  lw          $a1, 0x20($a2)
    ctx->pc = 0x18cff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_18cff4:
    // 0x18cff4: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x18cff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_18cff8:
    // 0x18cff8: 0xc05f292  jal         func_17CA48
label_18cffc:
    if (ctx->pc == 0x18CFFCu) {
        ctx->pc = 0x18CFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CFF8u;
        // 0x18cffc: 0x84c60018  lh          $a2, 0x18($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D000u;
        goto label_18d000;
    }
    ctx->pc = 0x18CFF8u;
    SET_GPR_U32(ctx, 31, 0x18D000u);
    ctx->pc = 0x18CFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CFF8u;
    // 0x18cffc: 0x84c60018  lh          $a2, 0x18($a2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CA48u, 0x18CFF8u, 0x18D000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D000u;
label_18d000:
    // 0x18d000: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x18d000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_18d004:
    // 0x18d004: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18d004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_18d008:
    // 0x18d008: 0x1222001a  beq         $s1, $v0, . + 4 + (0x1A << 2)
label_18d00c:
    if (ctx->pc == 0x18D00Cu) {
        ctx->pc = 0x18D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D008u;
        // 0x18d00c: 0x86020246  lh          $v0, 0x246($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 582)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D010u;
        goto label_18d010;
    }
    ctx->pc = 0x18D008u;
    {
        const bool branch_taken_0x18d008 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x18D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D008u;
        // 0x18d00c: 0x86020246  lh          $v0, 0x246($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 582)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d008) {
            ctx->pc = 0x18D074u;
            goto label_18d074;
        }
    }
    ctx->pc = 0x18D010u;
label_18d010:
    // 0x18d010: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x18d010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d014:
    // 0x18d014: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18d014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18d018:
    // 0x18d018: 0xc60001b8  lwc1        $f0, 0x1B8($s0)
    ctx->pc = 0x18d018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d01c:
    // 0x18d01c: 0x8e030254  lw          $v1, 0x254($s0)
    ctx->pc = 0x18d01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
label_18d020:
    // 0x18d020: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18d020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18d024:
    // 0x18d024: 0x10000016  b           . + 4 + (0x16 << 2)
label_18d028:
    if (ctx->pc == 0x18D028u) {
        ctx->pc = 0x18D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D024u;
        // 0x18d028: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D02Cu;
        goto label_18d02c;
    }
    ctx->pc = 0x18D024u;
    {
        const bool branch_taken_0x18d024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D024u;
        // 0x18d028: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d024) {
            ctx->pc = 0x18D080u;
            goto label_18d080;
        }
    }
    ctx->pc = 0x18D02Cu;
label_18d02c:
    // 0x18d02c: 0x0  nop
    ctx->pc = 0x18d02cu;
    // NOP
label_18d030:
    // 0x18d030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d034:
    // 0x18d034: 0x54620027  bnel        $v1, $v0, . + 4 + (0x27 << 2)
label_18d038:
    if (ctx->pc == 0x18D038u) {
        ctx->pc = 0x18D038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D034u;
        // 0x18d038: 0x96030244  lhu         $v1, 0x244($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D03Cu;
        goto label_18d03c;
    }
    ctx->pc = 0x18D034u;
    {
        const bool branch_taken_0x18d034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18d034) {
            ctx->pc = 0x18D038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D034u;
            // 0x18d038: 0x96030244  lhu         $v1, 0x244($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D0D4u;
            goto label_18d0d4;
        }
    }
    ctx->pc = 0x18D03Cu;
label_18d03c:
    // 0x18d03c: 0x8e020238  lw          $v0, 0x238($s0)
    ctx->pc = 0x18d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
label_18d040:
    // 0x18d040: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x18d040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_18d044:
    // 0x18d044: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_18d048:
    if (ctx->pc == 0x18D048u) {
        ctx->pc = 0x18D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D044u;
        // 0x18d048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D04Cu;
        goto label_18d04c;
    }
    ctx->pc = 0x18D044u;
    {
        const bool branch_taken_0x18d044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D044u;
        // 0x18d048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d044) {
            ctx->pc = 0x18D060u;
            goto label_18d060;
        }
    }
    ctx->pc = 0x18D04Cu;
label_18d04c:
    // 0x18d04c: 0x40f809  jalr        $v0
label_18d050:
    if (ctx->pc == 0x18D050u) {
        ctx->pc = 0x18D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D04Cu;
        // 0x18d050: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D054u;
        goto label_18d054;
    }
    ctx->pc = 0x18D04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D054u);
        ctx->pc = 0x18D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D04Cu;
        // 0x18d050: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D04Cu, 0x18D054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D054u;
label_18d054:
    // 0x18d054: 0x10000003  b           . + 4 + (0x3 << 2)
label_18d058:
    if (ctx->pc == 0x18D058u) {
        ctx->pc = 0x18D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D054u;
        // 0x18d058: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D05Cu;
        goto label_18d05c;
    }
    ctx->pc = 0x18D054u;
    {
        const bool branch_taken_0x18d054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D054u;
        // 0x18d058: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d054) {
            ctx->pc = 0x18D064u;
            goto label_18d064;
        }
    }
    ctx->pc = 0x18D05Cu;
label_18d05c:
    // 0x18d05c: 0x0  nop
    ctx->pc = 0x18d05cu;
    // NOP
label_18d060:
    // 0x18d060: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x18d060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_18d064:
    // 0x18d064: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18d064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_18d068:
    // 0x18d068: 0x5482000b  bnel        $a0, $v0, . + 4 + (0xB << 2)
label_18d06c:
    if (ctx->pc == 0x18D06Cu) {
        ctx->pc = 0x18D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D068u;
        // 0x18d06c: 0x8e0201a8  lw          $v0, 0x1A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D070u;
        goto label_18d070;
    }
    ctx->pc = 0x18D068u;
    {
        const bool branch_taken_0x18d068 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x18d068) {
            ctx->pc = 0x18D06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D068u;
            // 0x18d06c: 0x8e0201a8  lw          $v0, 0x1A8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D098u;
            goto label_18d098;
        }
    }
    ctx->pc = 0x18D070u;
label_18d070:
    // 0x18d070: 0x86020246  lh          $v0, 0x246($s0)
    ctx->pc = 0x18d070u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 582)));
label_18d074:
    // 0x18d074: 0x8e030254  lw          $v1, 0x254($s0)
    ctx->pc = 0x18d074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
label_18d078:
    // 0x18d078: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18d078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18d07c:
    // 0x18d07c: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x18d07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d080:
    // 0x18d080: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d084:
    // 0x18d084: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x18d084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d088:
    // 0x18d088: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18d088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_18d08c:
    // 0x18d08c: 0x10000010  b           . + 4 + (0x10 << 2)
label_18d090:
    if (ctx->pc == 0x18D090u) {
        ctx->pc = 0x18D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D08Cu;
        // 0x18d090: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D094u;
        goto label_18d094;
    }
    ctx->pc = 0x18D08Cu;
    {
        const bool branch_taken_0x18d08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D08Cu;
        // 0x18d090: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d08c) {
            ctx->pc = 0x18D0D0u;
            goto label_18d0d0;
        }
    }
    ctx->pc = 0x18D094u;
label_18d094:
    // 0x18d094: 0x0  nop
    ctx->pc = 0x18d094u;
    // NOP
label_18d098:
    // 0x18d098: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18d098u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_18d09c:
    // 0x18d09c: 0xc60201b8  lwc1        $f2, 0x1B8($s0)
    ctx->pc = 0x18d09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18d0a0:
    // 0x18d0a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18d0a4:
    // 0x18d0a4: 0x86030246  lh          $v1, 0x246($s0)
    ctx->pc = 0x18d0a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 582)));
label_18d0a8:
    // 0x18d0a8: 0x80440007  lb          $a0, 0x7($v0)
    ctx->pc = 0x18d0a8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
label_18d0ac:
    // 0x18d0ac: 0x8e050254  lw          $a1, 0x254($s0)
    ctx->pc = 0x18d0acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
label_18d0b0:
    // 0x18d0b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18d0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18d0b4:
    // 0x18d0b4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x18d0b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18d0b8:
    // 0x18d0b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18d0b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18d0bc:
    // 0x18d0bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18d0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_18d0c0:
    // 0x18d0c0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x18d0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d0c4:
    // 0x18d0c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x18d0c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_18d0c8:
    // 0x18d0c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18d0c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_18d0cc:
    // 0x18d0cc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x18d0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_18d0d0:
    // 0x18d0d0: 0x96030244  lhu         $v1, 0x244($s0)
    ctx->pc = 0x18d0d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 580)));
label_18d0d4:
    // 0x18d0d4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x18d0d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18d0d8:
    // 0x18d0d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_18d0dc:
    // 0x18d0dc: 0xa6030244  sh          $v1, 0x244($s0)
    ctx->pc = 0x18d0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 580), (uint16_t)GPR_U32(ctx, 3));
label_18d0e0:
    // 0x18d0e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x18d0e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18d0e4:
    // 0x18d0e4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x18d0e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_18d0e8:
    // 0x18d0e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x18d0e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18d0ec:
    // 0x18d0ec: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x18d0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_18d0f0:
    // 0x18d0f0: 0x3e00008  jr          $ra
label_18d0f4:
    if (ctx->pc == 0x18D0F4u) {
        ctx->pc = 0x18D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0F0u;
        // 0x18d0f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D0F8u;
        goto label_fallthrough_0x18d0f0;
    }
    ctx->pc = 0x18D0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0F0u;
        // 0x18d0f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18d0f0:
    ctx->pc = 0x18D0F8u;
}
