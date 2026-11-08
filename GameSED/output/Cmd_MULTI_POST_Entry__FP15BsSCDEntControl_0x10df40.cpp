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

// Function: Cmd_MULTI_POST_Entry__FP15BsSCDEntControl
// Address: 0x10df40 - 0x10e248
void Cmd_MULTI_POST_Entry__FP15BsSCDEntControl_0x10df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MULTI_POST_Entry__FP15BsSCDEntControl_0x10df40");
#endif

    switch (ctx->pc) {
        case 0x10df40u: goto label_10df40;
        case 0x10df44u: goto label_10df44;
        case 0x10df48u: goto label_10df48;
        case 0x10df4cu: goto label_10df4c;
        case 0x10df50u: goto label_10df50;
        case 0x10df54u: goto label_10df54;
        case 0x10df58u: goto label_10df58;
        case 0x10df5cu: goto label_10df5c;
        case 0x10df60u: goto label_10df60;
        case 0x10df64u: goto label_10df64;
        case 0x10df68u: goto label_10df68;
        case 0x10df6cu: goto label_10df6c;
        case 0x10df70u: goto label_10df70;
        case 0x10df74u: goto label_10df74;
        case 0x10df78u: goto label_10df78;
        case 0x10df7cu: goto label_10df7c;
        case 0x10df80u: goto label_10df80;
        case 0x10df84u: goto label_10df84;
        case 0x10df88u: goto label_10df88;
        case 0x10df8cu: goto label_10df8c;
        case 0x10df90u: goto label_10df90;
        case 0x10df94u: goto label_10df94;
        case 0x10df98u: goto label_10df98;
        case 0x10df9cu: goto label_10df9c;
        case 0x10dfa0u: goto label_10dfa0;
        case 0x10dfa4u: goto label_10dfa4;
        case 0x10dfa8u: goto label_10dfa8;
        case 0x10dfacu: goto label_10dfac;
        case 0x10dfb0u: goto label_10dfb0;
        case 0x10dfb4u: goto label_10dfb4;
        case 0x10dfb8u: goto label_10dfb8;
        case 0x10dfbcu: goto label_10dfbc;
        case 0x10dfc0u: goto label_10dfc0;
        case 0x10dfc4u: goto label_10dfc4;
        case 0x10dfc8u: goto label_10dfc8;
        case 0x10dfccu: goto label_10dfcc;
        case 0x10dfd0u: goto label_10dfd0;
        case 0x10dfd4u: goto label_10dfd4;
        case 0x10dfd8u: goto label_10dfd8;
        case 0x10dfdcu: goto label_10dfdc;
        case 0x10dfe0u: goto label_10dfe0;
        case 0x10dfe4u: goto label_10dfe4;
        case 0x10dfe8u: goto label_10dfe8;
        case 0x10dfecu: goto label_10dfec;
        case 0x10dff0u: goto label_10dff0;
        case 0x10dff4u: goto label_10dff4;
        case 0x10dff8u: goto label_10dff8;
        case 0x10dffcu: goto label_10dffc;
        case 0x10e000u: goto label_10e000;
        case 0x10e004u: goto label_10e004;
        case 0x10e008u: goto label_10e008;
        case 0x10e00cu: goto label_10e00c;
        case 0x10e010u: goto label_10e010;
        case 0x10e014u: goto label_10e014;
        case 0x10e018u: goto label_10e018;
        case 0x10e01cu: goto label_10e01c;
        case 0x10e020u: goto label_10e020;
        case 0x10e024u: goto label_10e024;
        case 0x10e028u: goto label_10e028;
        case 0x10e02cu: goto label_10e02c;
        case 0x10e030u: goto label_10e030;
        case 0x10e034u: goto label_10e034;
        case 0x10e038u: goto label_10e038;
        case 0x10e03cu: goto label_10e03c;
        case 0x10e040u: goto label_10e040;
        case 0x10e044u: goto label_10e044;
        case 0x10e048u: goto label_10e048;
        case 0x10e04cu: goto label_10e04c;
        case 0x10e050u: goto label_10e050;
        case 0x10e054u: goto label_10e054;
        case 0x10e058u: goto label_10e058;
        case 0x10e05cu: goto label_10e05c;
        case 0x10e060u: goto label_10e060;
        case 0x10e064u: goto label_10e064;
        case 0x10e068u: goto label_10e068;
        case 0x10e06cu: goto label_10e06c;
        case 0x10e070u: goto label_10e070;
        case 0x10e074u: goto label_10e074;
        case 0x10e078u: goto label_10e078;
        case 0x10e07cu: goto label_10e07c;
        case 0x10e080u: goto label_10e080;
        case 0x10e084u: goto label_10e084;
        case 0x10e088u: goto label_10e088;
        case 0x10e08cu: goto label_10e08c;
        case 0x10e090u: goto label_10e090;
        case 0x10e094u: goto label_10e094;
        case 0x10e098u: goto label_10e098;
        case 0x10e09cu: goto label_10e09c;
        case 0x10e0a0u: goto label_10e0a0;
        case 0x10e0a4u: goto label_10e0a4;
        case 0x10e0a8u: goto label_10e0a8;
        case 0x10e0acu: goto label_10e0ac;
        case 0x10e0b0u: goto label_10e0b0;
        case 0x10e0b4u: goto label_10e0b4;
        case 0x10e0b8u: goto label_10e0b8;
        case 0x10e0bcu: goto label_10e0bc;
        case 0x10e0c0u: goto label_10e0c0;
        case 0x10e0c4u: goto label_10e0c4;
        case 0x10e0c8u: goto label_10e0c8;
        case 0x10e0ccu: goto label_10e0cc;
        case 0x10e0d0u: goto label_10e0d0;
        case 0x10e0d4u: goto label_10e0d4;
        case 0x10e0d8u: goto label_10e0d8;
        case 0x10e0dcu: goto label_10e0dc;
        case 0x10e0e0u: goto label_10e0e0;
        case 0x10e0e4u: goto label_10e0e4;
        case 0x10e0e8u: goto label_10e0e8;
        case 0x10e0ecu: goto label_10e0ec;
        case 0x10e0f0u: goto label_10e0f0;
        case 0x10e0f4u: goto label_10e0f4;
        case 0x10e0f8u: goto label_10e0f8;
        case 0x10e0fcu: goto label_10e0fc;
        case 0x10e100u: goto label_10e100;
        case 0x10e104u: goto label_10e104;
        case 0x10e108u: goto label_10e108;
        case 0x10e10cu: goto label_10e10c;
        case 0x10e110u: goto label_10e110;
        case 0x10e114u: goto label_10e114;
        case 0x10e118u: goto label_10e118;
        case 0x10e11cu: goto label_10e11c;
        case 0x10e120u: goto label_10e120;
        case 0x10e124u: goto label_10e124;
        case 0x10e128u: goto label_10e128;
        case 0x10e12cu: goto label_10e12c;
        case 0x10e130u: goto label_10e130;
        case 0x10e134u: goto label_10e134;
        case 0x10e138u: goto label_10e138;
        case 0x10e13cu: goto label_10e13c;
        case 0x10e140u: goto label_10e140;
        case 0x10e144u: goto label_10e144;
        case 0x10e148u: goto label_10e148;
        case 0x10e14cu: goto label_10e14c;
        case 0x10e150u: goto label_10e150;
        case 0x10e154u: goto label_10e154;
        case 0x10e158u: goto label_10e158;
        case 0x10e15cu: goto label_10e15c;
        case 0x10e160u: goto label_10e160;
        case 0x10e164u: goto label_10e164;
        case 0x10e168u: goto label_10e168;
        case 0x10e16cu: goto label_10e16c;
        case 0x10e170u: goto label_10e170;
        case 0x10e174u: goto label_10e174;
        case 0x10e178u: goto label_10e178;
        case 0x10e17cu: goto label_10e17c;
        case 0x10e180u: goto label_10e180;
        case 0x10e184u: goto label_10e184;
        case 0x10e188u: goto label_10e188;
        case 0x10e18cu: goto label_10e18c;
        case 0x10e190u: goto label_10e190;
        case 0x10e194u: goto label_10e194;
        case 0x10e198u: goto label_10e198;
        case 0x10e19cu: goto label_10e19c;
        case 0x10e1a0u: goto label_10e1a0;
        case 0x10e1a4u: goto label_10e1a4;
        case 0x10e1a8u: goto label_10e1a8;
        case 0x10e1acu: goto label_10e1ac;
        case 0x10e1b0u: goto label_10e1b0;
        case 0x10e1b4u: goto label_10e1b4;
        case 0x10e1b8u: goto label_10e1b8;
        case 0x10e1bcu: goto label_10e1bc;
        case 0x10e1c0u: goto label_10e1c0;
        case 0x10e1c4u: goto label_10e1c4;
        case 0x10e1c8u: goto label_10e1c8;
        case 0x10e1ccu: goto label_10e1cc;
        case 0x10e1d0u: goto label_10e1d0;
        case 0x10e1d4u: goto label_10e1d4;
        case 0x10e1d8u: goto label_10e1d8;
        case 0x10e1dcu: goto label_10e1dc;
        case 0x10e1e0u: goto label_10e1e0;
        case 0x10e1e4u: goto label_10e1e4;
        case 0x10e1e8u: goto label_10e1e8;
        case 0x10e1ecu: goto label_10e1ec;
        case 0x10e1f0u: goto label_10e1f0;
        case 0x10e1f4u: goto label_10e1f4;
        case 0x10e1f8u: goto label_10e1f8;
        case 0x10e1fcu: goto label_10e1fc;
        case 0x10e200u: goto label_10e200;
        case 0x10e204u: goto label_10e204;
        case 0x10e208u: goto label_10e208;
        case 0x10e20cu: goto label_10e20c;
        case 0x10e210u: goto label_10e210;
        case 0x10e214u: goto label_10e214;
        case 0x10e218u: goto label_10e218;
        case 0x10e21cu: goto label_10e21c;
        case 0x10e220u: goto label_10e220;
        case 0x10e224u: goto label_10e224;
        case 0x10e228u: goto label_10e228;
        case 0x10e22cu: goto label_10e22c;
        case 0x10e230u: goto label_10e230;
        case 0x10e234u: goto label_10e234;
        case 0x10e238u: goto label_10e238;
        case 0x10e23cu: goto label_10e23c;
        case 0x10e240u: goto label_10e240;
        case 0x10e244u: goto label_10e244;
        default: break;
    }

    ctx->pc = 0x10df40u;

label_10df40:
    // 0x10df40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10df40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_10df44:
    // 0x10df44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10df44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10df48:
    // 0x10df48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10df48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_10df4c:
    // 0x10df4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10df4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_10df50:
    // 0x10df50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10df50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10df54:
    // 0x10df54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10df54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_10df58:
    // 0x10df58: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10df58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10df5c:
    // 0x10df5c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10df5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_10df60:
    // 0x10df60: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x10df60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10df64:
    // 0x10df64: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x10df64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_10df68:
    // 0x10df68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10df68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10df6c:
    // 0x10df6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10df6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_10df70:
    // 0x10df70: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x10df70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_10df74:
    // 0x10df74: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x10df74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_10df78:
    // 0x10df78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10df78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_10df7c:
    // 0x10df7c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_10df80:
    // 0x10df80: 0x8c520044  lw          $s2, 0x44($v0)
    ctx->pc = 0x10df80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_10df84:
    // 0x10df84: 0xc04110c  jal         func_104430
label_10df88:
    if (ctx->pc == 0x10DF88u) {
        ctx->pc = 0x10DF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF84u;
        // 0x10df88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DF8Cu;
        goto label_10df8c;
    }
    ctx->pc = 0x10DF84u;
    SET_GPR_U32(ctx, 31, 0x10DF8Cu);
    ctx->pc = 0x10DF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DF84u;
    // 0x10df88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10DF84u, 0x10DF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DF8Cu;
label_10df8c:
    // 0x10df8c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x10df8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_10df90:
    // 0x10df90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10df90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10df94:
    // 0x10df94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10df94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10df98:
    // 0x10df98: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x10df98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_10df9c:
    // 0x10df9c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10df9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_10dfa0:
    // 0x10dfa0: 0x38420946  xori        $v0, $v0, 0x946
    ctx->pc = 0x10dfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2374);
label_10dfa4:
    // 0x10dfa4: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_10dfa8:
    if (ctx->pc == 0x10DFA8u) {
        ctx->pc = 0x10DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFA4u;
        // 0x10dfa8: 0x2c550001  sltiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DFACu;
        goto label_10dfac;
    }
    ctx->pc = 0x10DFA4u;
    {
        const bool branch_taken_0x10dfa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFA4u;
        // 0x10dfa8: 0x2c550001  sltiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dfa4) {
            ctx->pc = 0x10DFE8u;
            goto label_10dfe8;
        }
    }
    ctx->pc = 0x10DFACu;
label_10dfac:
    // 0x10dfac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10dfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10dfb0:
    // 0x10dfb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10dfb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10dfb4:
    // 0x10dfb4: 0xc04110c  jal         func_104430
label_10dfb8:
    if (ctx->pc == 0x10DFB8u) {
        ctx->pc = 0x10DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFB4u;
        // 0x10dfb8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DFBCu;
        goto label_10dfbc;
    }
    ctx->pc = 0x10DFB4u;
    SET_GPR_U32(ctx, 31, 0x10DFBCu);
    ctx->pc = 0x10DFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DFB4u;
    // 0x10dfb8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10DFB4u, 0x10DFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DFBCu;
label_10dfbc:
    // 0x10dfbc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10dfbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10dfc0:
    // 0x10dfc0: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x10dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_10dfc4:
    // 0x10dfc4: 0x2454f6e0  addiu       $s4, $v0, -0x920
    ctx->pc = 0x10dfc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964960));
label_10dfc8:
    // 0x10dfc8: 0xfa800000  sqc2        $vf0, 0x0($s4)
    ctx->pc = 0x10dfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_10dfcc:
    // 0x10dfcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10dfccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10dfd0:
    // 0x10dfd0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10dfd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10dfd4:
    // 0x10dfd4: 0xc06a2d4  jal         func_1A8B50
label_10dfd8:
    if (ctx->pc == 0x10DFD8u) {
        ctx->pc = 0x10DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFD4u;
        // 0x10dfd8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DFDCu;
        goto label_10dfdc;
    }
    ctx->pc = 0x10DFD4u;
    SET_GPR_U32(ctx, 31, 0x10DFDCu);
    ctx->pc = 0x10DFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DFD4u;
    // 0x10dfd8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x10DFD4u, 0x10DFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DFDCu;
label_10dfdc:
    // 0x10dfdc: 0x1000000f  b           . + 4 + (0xF << 2)
label_10dfe0:
    if (ctx->pc == 0x10DFE0u) {
        ctx->pc = 0x10DFE4u;
        goto label_10dfe4;
    }
    ctx->pc = 0x10DFDCu;
    {
        const bool branch_taken_0x10dfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dfdc) {
            ctx->pc = 0x10E01Cu;
            goto label_10e01c;
        }
    }
    ctx->pc = 0x10DFE4u;
label_10dfe4:
    // 0x10dfe4: 0x0  nop
    ctx->pc = 0x10dfe4u;
    // NOP
label_10dfe8:
    // 0x10dfe8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10dfec:
    // 0x10dfec: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
label_10dff0:
    if (ctx->pc == 0x10DFF0u) {
        ctx->pc = 0x10DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFECu;
        // 0x10dff0: 0x38820001  xori        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DFF4u;
        goto label_10dff4;
    }
    ctx->pc = 0x10DFECu;
    {
        const bool branch_taken_0x10dfec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x10dfec) {
            ctx->pc = 0x10DFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DFECu;
            // 0x10dff0: 0x38820001  xori        $v0, $a0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E018u;
            goto label_10e018;
        }
    }
    ctx->pc = 0x10DFF4u;
label_10dff4:
    // 0x10dff4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10dff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10dff8:
    // 0x10dff8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10dff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10dffc:
    // 0x10dffc: 0xc04110c  jal         func_104430
label_10e000:
    if (ctx->pc == 0x10E000u) {
        ctx->pc = 0x10E000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFFCu;
        // 0x10e000: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E004u;
        goto label_10e004;
    }
    ctx->pc = 0x10DFFCu;
    SET_GPR_U32(ctx, 31, 0x10E004u);
    ctx->pc = 0x10E000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DFFCu;
    // 0x10e000: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10DFFCu, 0x10E004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E004u;
label_10e004:
    // 0x10e004: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10e004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e008:
    // 0x10e008: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x10e008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_10e00c:
    // 0x10e00c: 0x10000003  b           . + 4 + (0x3 << 2)
label_10e010:
    if (ctx->pc == 0x10E010u) {
        ctx->pc = 0x10E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E00Cu;
        // 0x10e010: 0x8c54b830  lw          $s4, -0x47D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E014u;
        goto label_10e014;
    }
    ctx->pc = 0x10E00Cu;
    {
        const bool branch_taken_0x10e00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E00Cu;
        // 0x10e010: 0x8c54b830  lw          $s4, -0x47D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e00c) {
            ctx->pc = 0x10E01Cu;
            goto label_10e01c;
        }
    }
    ctx->pc = 0x10E014u;
label_10e014:
    // 0x10e014: 0x0  nop
    ctx->pc = 0x10e014u;
    // NOP
label_10e018:
    // 0x10e018: 0x2a00a  movz        $s4, $zero, $v0
    ctx->pc = 0x10e018u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_10e01c:
    // 0x10e01c: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_10e020:
    if (ctx->pc == 0x10E020u) {
        ctx->pc = 0x10E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E01Cu;
        // 0x10e020: 0x24030946  addiu       $v1, $zero, 0x946 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E024u;
        goto label_10e024;
    }
    ctx->pc = 0x10E01Cu;
    {
        const bool branch_taken_0x10e01c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E01Cu;
        // 0x10e020: 0x24030946  addiu       $v1, $zero, 0x946 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e01c) {
            ctx->pc = 0x10E03Cu;
            goto label_10e03c;
        }
    }
    ctx->pc = 0x10E024u;
label_10e024:
    // 0x10e024: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x10e024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_10e028:
    // 0x10e028: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10e028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_10e02c:
    // 0x10e02c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_10e030:
    if (ctx->pc == 0x10E030u) {
        ctx->pc = 0x10E034u;
        goto label_10e034;
    }
    ctx->pc = 0x10E02Cu;
    {
        const bool branch_taken_0x10e02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10e02c) {
            ctx->pc = 0x10E03Cu;
            goto label_10e03c;
        }
    }
    ctx->pc = 0x10E034u;
label_10e034:
    // 0x10e034: 0x8e6201c4  lw          $v0, 0x1C4($s3)
    ctx->pc = 0x10e034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 452)));
label_10e038:
    // 0x10e038: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x10e038u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10e03c:
    // 0x10e03c: 0x12a00068  beqz        $s5, . + 4 + (0x68 << 2)
label_10e040:
    if (ctx->pc == 0x10E040u) {
        ctx->pc = 0x10E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E03Cu;
        // 0x10e040: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E044u;
        goto label_10e044;
    }
    ctx->pc = 0x10E03Cu;
    {
        const bool branch_taken_0x10e03c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E03Cu;
        // 0x10e040: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e03c) {
            ctx->pc = 0x10E1E0u;
            goto label_10e1e0;
        }
    }
    ctx->pc = 0x10E044u;
label_10e044:
    // 0x10e044: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x10e044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_10e048:
    // 0x10e048: 0x261201b4  addiu       $s2, $s0, 0x1B4
    ctx->pc = 0x10e048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
label_10e04c:
    // 0x10e04c: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x10e04cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_10e050:
    // 0x10e050: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10e050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10e054:
    // 0x10e054: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x10e054u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10e058:
    // 0x10e058: 0xae0201c0  sw          $v0, 0x1C0($s0)
    ctx->pc = 0x10e058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 2));
label_10e05c:
    // 0x10e05c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x10e05cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e060:
    // 0x10e060: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x10e060u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10e064:
    // 0x10e064: 0x16200025  bnez        $s1, . + 4 + (0x25 << 2)
label_10e068:
    if (ctx->pc == 0x10E068u) {
        ctx->pc = 0x10E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E064u;
        // 0x10e068: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E06Cu;
        goto label_10e06c;
    }
    ctx->pc = 0x10E064u;
    {
        const bool branch_taken_0x10e064 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E064u;
        // 0x10e068: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e064) {
            ctx->pc = 0x10E0FCu;
            goto label_10e0fc;
        }
    }
    ctx->pc = 0x10E06Cu;
label_10e06c:
    // 0x10e06c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10e06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10e070:
    // 0x10e070: 0xc068086  jal         func_1A0218
label_10e074:
    if (ctx->pc == 0x10E074u) {
        ctx->pc = 0x10E074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E070u;
        // 0x10e074: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E078u;
        goto label_10e078;
    }
    ctx->pc = 0x10E070u;
    SET_GPR_U32(ctx, 31, 0x10E078u);
    ctx->pc = 0x10E074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E070u;
    // 0x10e074: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x10E070u, 0x10E078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E078u;
label_10e078:
    // 0x10e078: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x10e078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e07c:
    // 0x10e07c: 0x54e00008  bnel        $a3, $zero, . + 4 + (0x8 << 2)
label_10e080:
    if (ctx->pc == 0x10E080u) {
        ctx->pc = 0x10E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E07Cu;
        // 0x10e080: 0xace003f0  sw          $zero, 0x3F0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E084u;
        goto label_10e084;
    }
    ctx->pc = 0x10E07Cu;
    {
        const bool branch_taken_0x10e07c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e07c) {
            ctx->pc = 0x10E080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E07Cu;
            // 0x10e080: 0xace003f0  sw          $zero, 0x3F0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 1008), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E0A0u;
            goto label_10e0a0;
        }
    }
    ctx->pc = 0x10E084u;
label_10e084:
    // 0x10e084: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10e084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_10e088:
    // 0x10e088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10e08c:
    // 0x10e08c: 0x24a53d00  addiu       $a1, $a1, 0x3D00
    ctx->pc = 0x10e08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15616));
label_10e090:
    // 0x10e090: 0xc068186  jal         func_1A0618
label_10e094:
    if (ctx->pc == 0x10E094u) {
        ctx->pc = 0x10E094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E090u;
        // 0x10e094: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E098u;
        goto label_10e098;
    }
    ctx->pc = 0x10E090u;
    SET_GPR_U32(ctx, 31, 0x10E098u);
    ctx->pc = 0x10E094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E090u;
    // 0x10e094: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x10E090u, 0x10E098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E098u;
label_10e098:
    // 0x10e098: 0x10000017  b           . + 4 + (0x17 << 2)
label_10e09c:
    if (ctx->pc == 0x10E09Cu) {
        ctx->pc = 0x10E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E098u;
        // 0x10e09c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E0A0u;
        goto label_10e0a0;
    }
    ctx->pc = 0x10E098u;
    {
        const bool branch_taken_0x10e098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E098u;
        // 0x10e09c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e098) {
            ctx->pc = 0x10E0F8u;
            goto label_10e0f8;
        }
    }
    ctx->pc = 0x10E0A0u;
label_10e0a0:
    // 0x10e0a0: 0x260401bc  addiu       $a0, $s0, 0x1BC
    ctx->pc = 0x10e0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
label_10e0a4:
    // 0x10e0a4: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x10e0a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_10e0a8:
    // 0x10e0a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10e0a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e0ac:
    // 0x10e0ac: 0x0  nop
    ctx->pc = 0x10e0acu;
    // NOP
label_10e0b0:
    // 0x10e0b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x10e0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_10e0b4:
    // 0x10e0b4: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
label_10e0b8:
    if (ctx->pc == 0x10E0B8u) {
        ctx->pc = 0x10E0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0B4u;
        // 0x10e0b8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E0BCu;
        goto label_10e0bc;
    }
    ctx->pc = 0x10E0B4u;
    {
        const bool branch_taken_0x10e0b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0B4u;
        // 0x10e0b8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e0b4) {
            ctx->pc = 0x10E0C8u;
            goto label_10e0c8;
        }
    }
    ctx->pc = 0x10E0BCu;
label_10e0bc:
    // 0x10e0bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_10e0c0:
    if (ctx->pc == 0x10E0C0u) {
        ctx->pc = 0x10E0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0BCu;
        // 0x10e0c0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E0C4u;
        goto label_10e0c4;
    }
    ctx->pc = 0x10E0BCu;
    {
        const bool branch_taken_0x10e0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0BCu;
        // 0x10e0c0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e0bc) {
            ctx->pc = 0x10E0CCu;
            goto label_10e0cc;
        }
    }
    ctx->pc = 0x10E0C4u;
label_10e0c4:
    // 0x10e0c4: 0x0  nop
    ctx->pc = 0x10e0c4u;
    // NOP
label_10e0c8:
    // 0x10e0c8: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x10e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_10e0cc:
    // 0x10e0cc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x10e0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_10e0d0:
    // 0x10e0d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x10e0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_10e0d4:
    // 0x10e0d4: 0x28c2003f  slti        $v0, $a2, 0x3F
    ctx->pc = 0x10e0d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)63) ? 1 : 0);
label_10e0d8:
    // 0x10e0d8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_10e0dc:
    if (ctx->pc == 0x10E0DCu) {
        ctx->pc = 0x10E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0D8u;
        // 0x10e0dc: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E0E0u;
        goto label_10e0e0;
    }
    ctx->pc = 0x10E0D8u;
    {
        const bool branch_taken_0x10e0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0D8u;
        // 0x10e0dc: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e0d8) {
            ctx->pc = 0x10E0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e0b0;
        }
    }
    ctx->pc = 0x10E0E0u;
label_10e0e0:
    // 0x10e0e0: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x10e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_10e0e4:
    // 0x10e0e4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x10e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_10e0e8:
    // 0x10e0e8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x10e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_10e0ec:
    // 0x10e0ec: 0xace303f0  sw          $v1, 0x3F0($a3)
    ctx->pc = 0x10e0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1008), GPR_U32(ctx, 3));
label_10e0f0:
    // 0x10e0f0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x10e0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_10e0f4:
    // 0x10e0f4: 0xae470004  sw          $a3, 0x4($s2)
    ctx->pc = 0x10e0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 7));
label_10e0f8:
    // 0x10e0f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10e0f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10e0fc:
    // 0x10e0fc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x10e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_10e100:
    // 0x10e100: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x10e100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_10e104:
    // 0x10e104: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x10e104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10e108:
    // 0x10e108: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10e108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10e10c:
    // 0x10e10c: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x10e10cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_10e110:
    // 0x10e110: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x10e110u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_10e114:
    // 0x10e114: 0x14800014  bnez        $a0, . + 4 + (0x14 << 2)
label_10e118:
    if (ctx->pc == 0x10E118u) {
        ctx->pc = 0x10E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E114u;
        // 0x10e118: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E11Cu;
        goto label_10e11c;
    }
    ctx->pc = 0x10E114u;
    {
        const bool branch_taken_0x10e114 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E114u;
        // 0x10e118: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e114) {
            ctx->pc = 0x10E168u;
            goto label_10e168;
        }
    }
    ctx->pc = 0x10E11Cu;
label_10e11c:
    // 0x10e11c: 0xc05bedc  jal         func_16FB70
label_10e120:
    if (ctx->pc == 0x10E120u) {
        ctx->pc = 0x10E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E11Cu;
        // 0x10e120: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E124u;
        goto label_10e124;
    }
    ctx->pc = 0x10E11Cu;
    SET_GPR_U32(ctx, 31, 0x10E124u);
    ctx->pc = 0x10E120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E11Cu;
    // 0x10e120: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x10E11Cu, 0x10E124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E124u;
label_10e124:
    // 0x10e124: 0xc0682b2  jal         func_1A0AC8
label_10e128:
    if (ctx->pc == 0x10E128u) {
        ctx->pc = 0x10E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E124u;
        // 0x10e128: 0x24040346  addiu       $a0, $zero, 0x346 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E12Cu;
        goto label_10e12c;
    }
    ctx->pc = 0x10E124u;
    SET_GPR_U32(ctx, 31, 0x10E12Cu);
    ctx->pc = 0x10E128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E124u;
    // 0x10e128: 0x24040346  addiu       $a0, $zero, 0x346 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x10E124u, 0x10E12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E12Cu;
label_10e12c:
    // 0x10e12c: 0xc0682b6  jal         func_1A0AD8
label_10e130:
    if (ctx->pc == 0x10E130u) {
        ctx->pc = 0x10E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E12Cu;
        // 0x10e130: 0x240401c0  addiu       $a0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E134u;
        goto label_10e134;
    }
    ctx->pc = 0x10E12Cu;
    SET_GPR_U32(ctx, 31, 0x10E134u);
    ctx->pc = 0x10E130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E12Cu;
    // 0x10e130: 0x240401c0  addiu       $a0, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x10E12Cu, 0x10E134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E134u;
label_10e134:
    // 0x10e134: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10e134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10e138:
    // 0x10e138: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10e138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e13c:
    // 0x10e13c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x10e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_10e140:
    // 0x10e140: 0x244207f0  addiu       $v0, $v0, 0x7F0
    ctx->pc = 0x10e140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2032));
label_10e144:
    // 0x10e144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10e148:
    // 0x10e148: 0xc06586e  jal         func_1961B8
label_10e14c:
    if (ctx->pc == 0x10E14Cu) {
        ctx->pc = 0x10E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E148u;
        // 0x10e14c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E150u;
        goto label_10e150;
    }
    ctx->pc = 0x10E148u;
    SET_GPR_U32(ctx, 31, 0x10E150u);
    ctx->pc = 0x10E14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E148u;
    // 0x10e14c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1961B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1961B8u, 0x10E148u, 0x10E150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E150u;
label_10e150:
    // 0x10e150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10e154:
    // 0x10e154: 0xc06825c  jal         func_1A0970
label_10e158:
    if (ctx->pc == 0x10E158u) {
        ctx->pc = 0x10E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E154u;
        // 0x10e158: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E15Cu;
        goto label_10e15c;
    }
    ctx->pc = 0x10E154u;
    SET_GPR_U32(ctx, 31, 0x10E15Cu);
    ctx->pc = 0x10E158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E154u;
    // 0x10e158: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x10E154u, 0x10E15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E15Cu;
label_10e15c:
    // 0x10e15c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x10e15cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_10e160:
    // 0x10e160: 0xc05bedc  jal         func_16FB70
label_10e164:
    if (ctx->pc == 0x10E164u) {
        ctx->pc = 0x10E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E160u;
        // 0x10e164: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E168u;
        goto label_10e168;
    }
    ctx->pc = 0x10E160u;
    SET_GPR_U32(ctx, 31, 0x10E168u);
    ctx->pc = 0x10E164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E160u;
    // 0x10e164: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x10E160u, 0x10E168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E168u;
label_10e168:
    // 0x10e168: 0x8e6201b0  lw          $v0, 0x1B0($s3)
    ctx->pc = 0x10e168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 432)));
label_10e16c:
    // 0x10e16c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x10e16cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e170:
    // 0x10e170: 0xae370008  sw          $s7, 0x8($s1)
    ctx->pc = 0x10e170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 23));
label_10e174:
    // 0x10e174: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x10e174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_10e178:
    // 0x10e178: 0x12a00013  beqz        $s5, . + 4 + (0x13 << 2)
label_10e17c:
    if (ctx->pc == 0x10E17Cu) {
        ctx->pc = 0x10E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E178u;
        // 0x10e17c: 0xae7101b0  sw          $s1, 0x1B0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 432), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E180u;
        goto label_10e180;
    }
    ctx->pc = 0x10E178u;
    {
        const bool branch_taken_0x10e178 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E178u;
        // 0x10e17c: 0xae7101b0  sw          $s1, 0x1B0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 432), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e178) {
            ctx->pc = 0x10E1C8u;
            goto label_10e1c8;
        }
    }
    ctx->pc = 0x10E180u;
label_10e180:
    // 0x10e180: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x10e180u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10e184:
    // 0x10e184: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x10e184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10e188:
    // 0x10e188: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10e188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e18c:
    // 0x10e18c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x10e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_10e190:
    // 0x10e190: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x10e190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_10e194:
    // 0x10e194: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10e194u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10e198:
    // 0x10e198: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10e198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10e19c:
    // 0x10e19c: 0x60f809  jalr        $v1
label_10e1a0:
    if (ctx->pc == 0x10E1A0u) {
        ctx->pc = 0x10E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E19Cu;
        // 0x10e1a0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E1A4u;
        goto label_10e1a4;
    }
    ctx->pc = 0x10E19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10E1A4u);
        ctx->pc = 0x10E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E19Cu;
        // 0x10e1a0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E19Cu, 0x10E1A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E1A4u;
label_10e1a4:
    // 0x10e1a4: 0x12c00008  beqz        $s6, . + 4 + (0x8 << 2)
label_10e1a8:
    if (ctx->pc == 0x10E1A8u) {
        ctx->pc = 0x10E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1A4u;
        // 0x10e1a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E1ACu;
        goto label_10e1ac;
    }
    ctx->pc = 0x10E1A4u;
    {
        const bool branch_taken_0x10e1a4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1A4u;
        // 0x10e1a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e1a4) {
            ctx->pc = 0x10E1C8u;
            goto label_10e1c8;
        }
    }
    ctx->pc = 0x10E1ACu;
label_10e1ac:
    // 0x10e1ac: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x10e1acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10e1b0:
    // 0x10e1b0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x10e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_10e1b4:
    // 0x10e1b4: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x10e1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_10e1b8:
    // 0x10e1b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10e1b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10e1bc:
    // 0x10e1bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10e1c0:
    // 0x10e1c0: 0x60f809  jalr        $v1
label_10e1c4:
    if (ctx->pc == 0x10E1C4u) {
        ctx->pc = 0x10E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1C0u;
        // 0x10e1c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E1C8u;
        goto label_10e1c8;
    }
    ctx->pc = 0x10E1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10E1C8u);
        ctx->pc = 0x10E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1C0u;
        // 0x10e1c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E1C0u, 0x10E1C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E1C8u;
label_10e1c8:
    // 0x10e1c8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x10e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_10e1cc:
    // 0x10e1cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10e1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10e1d0:
    // 0x10e1d0: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x10e1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_10e1d4:
    // 0x10e1d4: 0xae7001c4  sw          $s0, 0x1C4($s3)
    ctx->pc = 0x10e1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 452), GPR_U32(ctx, 16));
label_10e1d8:
    // 0x10e1d8: 0x10000010  b           . + 4 + (0x10 << 2)
label_10e1dc:
    if (ctx->pc == 0x10E1DCu) {
        ctx->pc = 0x10E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1D8u;
        // 0x10e1dc: 0xac640044  sw          $a0, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E1E0u;
        goto label_10e1e0;
    }
    ctx->pc = 0x10E1D8u;
    {
        const bool branch_taken_0x10e1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1D8u;
        // 0x10e1dc: 0xac640044  sw          $a0, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e1d8) {
            ctx->pc = 0x10E21Cu;
            goto label_10e21c;
        }
    }
    ctx->pc = 0x10E1E0u;
label_10e1e0:
    // 0x10e1e0: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
label_10e1e4:
    if (ctx->pc == 0x10E1E4u) {
        ctx->pc = 0x10E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1E0u;
        // 0x10e1e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E1E8u;
        goto label_10e1e8;
    }
    ctx->pc = 0x10E1E0u;
    {
        const bool branch_taken_0x10e1e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1E0u;
        // 0x10e1e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e1e0) {
            ctx->pc = 0x10E210u;
            goto label_10e210;
        }
    }
    ctx->pc = 0x10E1E8u;
label_10e1e8:
    // 0x10e1e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10e1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10e1ec:
    // 0x10e1ec: 0xc04112e  jal         func_1044B8
label_10e1f0:
    if (ctx->pc == 0x10E1F0u) {
        ctx->pc = 0x10E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1ECu;
        // 0x10e1f0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E1F4u;
        goto label_10e1f4;
    }
    ctx->pc = 0x10E1ECu;
    SET_GPR_U32(ctx, 31, 0x10E1F4u);
    ctx->pc = 0x10E1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E1ECu;
    // 0x10e1f0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B8u, 0x10E1ECu, 0x10E1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E1F4u;
label_10e1f4:
    // 0x10e1f4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_10e1f8:
    // 0x10e1f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10e1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10e1fc:
    // 0x10e1fc: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x10e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_10e200:
    // 0x10e200: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10e200u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10e204:
    // 0x10e204: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10e204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10e208:
    // 0x10e208: 0x60f809  jalr        $v1
label_10e20c:
    if (ctx->pc == 0x10E20Cu) {
        ctx->pc = 0x10E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E208u;
        // 0x10e20c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E210u;
        goto label_10e210;
    }
    ctx->pc = 0x10E208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10E210u);
        ctx->pc = 0x10E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E208u;
        // 0x10e20c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E208u, 0x10E210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E210u;
label_10e210:
    // 0x10e210: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x10e210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_10e214:
    // 0x10e214: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x10e214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_10e218:
    // 0x10e218: 0xac700044  sw          $s0, 0x44($v1)
    ctx->pc = 0x10e218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 16));
label_10e21c:
    // 0x10e21c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10e21cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e220:
    // 0x10e220: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10e220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_10e224:
    // 0x10e224: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10e224u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10e228:
    // 0x10e228: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10e228u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_10e22c:
    // 0x10e22c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10e22cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10e230:
    // 0x10e230: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x10e230u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_10e234:
    // 0x10e234: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x10e234u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10e238:
    // 0x10e238: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x10e238u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_10e23c:
    // 0x10e23c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10e23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10e240:
    // 0x10e240: 0x3e00008  jr          $ra
label_10e244:
    if (ctx->pc == 0x10E244u) {
        ctx->pc = 0x10E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E240u;
        // 0x10e244: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E248u;
        goto label_fallthrough_0x10e240;
    }
    ctx->pc = 0x10E240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E240u;
        // 0x10e244: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10e240:
    ctx->pc = 0x10E248u;
}
