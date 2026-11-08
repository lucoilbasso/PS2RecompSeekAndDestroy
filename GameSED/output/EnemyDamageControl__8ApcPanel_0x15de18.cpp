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

// Function: EnemyDamageControl__8ApcPanel
// Address: 0x15de18 - 0x15e31c
void EnemyDamageControl__8ApcPanel_0x15de18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnemyDamageControl__8ApcPanel_0x15de18");
#endif

    switch (ctx->pc) {
        case 0x15de18u: goto label_15de18;
        case 0x15de1cu: goto label_15de1c;
        case 0x15de20u: goto label_15de20;
        case 0x15de24u: goto label_15de24;
        case 0x15de28u: goto label_15de28;
        case 0x15de2cu: goto label_15de2c;
        case 0x15de30u: goto label_15de30;
        case 0x15de34u: goto label_15de34;
        case 0x15de38u: goto label_15de38;
        case 0x15de3cu: goto label_15de3c;
        case 0x15de40u: goto label_15de40;
        case 0x15de44u: goto label_15de44;
        case 0x15de48u: goto label_15de48;
        case 0x15de4cu: goto label_15de4c;
        case 0x15de50u: goto label_15de50;
        case 0x15de54u: goto label_15de54;
        case 0x15de58u: goto label_15de58;
        case 0x15de5cu: goto label_15de5c;
        case 0x15de60u: goto label_15de60;
        case 0x15de64u: goto label_15de64;
        case 0x15de68u: goto label_15de68;
        case 0x15de6cu: goto label_15de6c;
        case 0x15de70u: goto label_15de70;
        case 0x15de74u: goto label_15de74;
        case 0x15de78u: goto label_15de78;
        case 0x15de7cu: goto label_15de7c;
        case 0x15de80u: goto label_15de80;
        case 0x15de84u: goto label_15de84;
        case 0x15de88u: goto label_15de88;
        case 0x15de8cu: goto label_15de8c;
        case 0x15de90u: goto label_15de90;
        case 0x15de94u: goto label_15de94;
        case 0x15de98u: goto label_15de98;
        case 0x15de9cu: goto label_15de9c;
        case 0x15dea0u: goto label_15dea0;
        case 0x15dea4u: goto label_15dea4;
        case 0x15dea8u: goto label_15dea8;
        case 0x15deacu: goto label_15deac;
        case 0x15deb0u: goto label_15deb0;
        case 0x15deb4u: goto label_15deb4;
        case 0x15deb8u: goto label_15deb8;
        case 0x15debcu: goto label_15debc;
        case 0x15dec0u: goto label_15dec0;
        case 0x15dec4u: goto label_15dec4;
        case 0x15dec8u: goto label_15dec8;
        case 0x15deccu: goto label_15decc;
        case 0x15ded0u: goto label_15ded0;
        case 0x15ded4u: goto label_15ded4;
        case 0x15ded8u: goto label_15ded8;
        case 0x15dedcu: goto label_15dedc;
        case 0x15dee0u: goto label_15dee0;
        case 0x15dee4u: goto label_15dee4;
        case 0x15dee8u: goto label_15dee8;
        case 0x15deecu: goto label_15deec;
        case 0x15def0u: goto label_15def0;
        case 0x15def4u: goto label_15def4;
        case 0x15def8u: goto label_15def8;
        case 0x15defcu: goto label_15defc;
        case 0x15df00u: goto label_15df00;
        case 0x15df04u: goto label_15df04;
        case 0x15df08u: goto label_15df08;
        case 0x15df0cu: goto label_15df0c;
        case 0x15df10u: goto label_15df10;
        case 0x15df14u: goto label_15df14;
        case 0x15df18u: goto label_15df18;
        case 0x15df1cu: goto label_15df1c;
        case 0x15df20u: goto label_15df20;
        case 0x15df24u: goto label_15df24;
        case 0x15df28u: goto label_15df28;
        case 0x15df2cu: goto label_15df2c;
        case 0x15df30u: goto label_15df30;
        case 0x15df34u: goto label_15df34;
        case 0x15df38u: goto label_15df38;
        case 0x15df3cu: goto label_15df3c;
        case 0x15df40u: goto label_15df40;
        case 0x15df44u: goto label_15df44;
        case 0x15df48u: goto label_15df48;
        case 0x15df4cu: goto label_15df4c;
        case 0x15df50u: goto label_15df50;
        case 0x15df54u: goto label_15df54;
        case 0x15df58u: goto label_15df58;
        case 0x15df5cu: goto label_15df5c;
        case 0x15df60u: goto label_15df60;
        case 0x15df64u: goto label_15df64;
        case 0x15df68u: goto label_15df68;
        case 0x15df6cu: goto label_15df6c;
        case 0x15df70u: goto label_15df70;
        case 0x15df74u: goto label_15df74;
        case 0x15df78u: goto label_15df78;
        case 0x15df7cu: goto label_15df7c;
        case 0x15df80u: goto label_15df80;
        case 0x15df84u: goto label_15df84;
        case 0x15df88u: goto label_15df88;
        case 0x15df8cu: goto label_15df8c;
        case 0x15df90u: goto label_15df90;
        case 0x15df94u: goto label_15df94;
        case 0x15df98u: goto label_15df98;
        case 0x15df9cu: goto label_15df9c;
        case 0x15dfa0u: goto label_15dfa0;
        case 0x15dfa4u: goto label_15dfa4;
        case 0x15dfa8u: goto label_15dfa8;
        case 0x15dfacu: goto label_15dfac;
        case 0x15dfb0u: goto label_15dfb0;
        case 0x15dfb4u: goto label_15dfb4;
        case 0x15dfb8u: goto label_15dfb8;
        case 0x15dfbcu: goto label_15dfbc;
        case 0x15dfc0u: goto label_15dfc0;
        case 0x15dfc4u: goto label_15dfc4;
        case 0x15dfc8u: goto label_15dfc8;
        case 0x15dfccu: goto label_15dfcc;
        case 0x15dfd0u: goto label_15dfd0;
        case 0x15dfd4u: goto label_15dfd4;
        case 0x15dfd8u: goto label_15dfd8;
        case 0x15dfdcu: goto label_15dfdc;
        case 0x15dfe0u: goto label_15dfe0;
        case 0x15dfe4u: goto label_15dfe4;
        case 0x15dfe8u: goto label_15dfe8;
        case 0x15dfecu: goto label_15dfec;
        case 0x15dff0u: goto label_15dff0;
        case 0x15dff4u: goto label_15dff4;
        case 0x15dff8u: goto label_15dff8;
        case 0x15dffcu: goto label_15dffc;
        case 0x15e000u: goto label_15e000;
        case 0x15e004u: goto label_15e004;
        case 0x15e008u: goto label_15e008;
        case 0x15e00cu: goto label_15e00c;
        case 0x15e010u: goto label_15e010;
        case 0x15e014u: goto label_15e014;
        case 0x15e018u: goto label_15e018;
        case 0x15e01cu: goto label_15e01c;
        case 0x15e020u: goto label_15e020;
        case 0x15e024u: goto label_15e024;
        case 0x15e028u: goto label_15e028;
        case 0x15e02cu: goto label_15e02c;
        case 0x15e030u: goto label_15e030;
        case 0x15e034u: goto label_15e034;
        case 0x15e038u: goto label_15e038;
        case 0x15e03cu: goto label_15e03c;
        case 0x15e040u: goto label_15e040;
        case 0x15e044u: goto label_15e044;
        case 0x15e048u: goto label_15e048;
        case 0x15e04cu: goto label_15e04c;
        case 0x15e050u: goto label_15e050;
        case 0x15e054u: goto label_15e054;
        case 0x15e058u: goto label_15e058;
        case 0x15e05cu: goto label_15e05c;
        case 0x15e060u: goto label_15e060;
        case 0x15e064u: goto label_15e064;
        case 0x15e068u: goto label_15e068;
        case 0x15e06cu: goto label_15e06c;
        case 0x15e070u: goto label_15e070;
        case 0x15e074u: goto label_15e074;
        case 0x15e078u: goto label_15e078;
        case 0x15e07cu: goto label_15e07c;
        case 0x15e080u: goto label_15e080;
        case 0x15e084u: goto label_15e084;
        case 0x15e088u: goto label_15e088;
        case 0x15e08cu: goto label_15e08c;
        case 0x15e090u: goto label_15e090;
        case 0x15e094u: goto label_15e094;
        case 0x15e098u: goto label_15e098;
        case 0x15e09cu: goto label_15e09c;
        case 0x15e0a0u: goto label_15e0a0;
        case 0x15e0a4u: goto label_15e0a4;
        case 0x15e0a8u: goto label_15e0a8;
        case 0x15e0acu: goto label_15e0ac;
        case 0x15e0b0u: goto label_15e0b0;
        case 0x15e0b4u: goto label_15e0b4;
        case 0x15e0b8u: goto label_15e0b8;
        case 0x15e0bcu: goto label_15e0bc;
        case 0x15e0c0u: goto label_15e0c0;
        case 0x15e0c4u: goto label_15e0c4;
        case 0x15e0c8u: goto label_15e0c8;
        case 0x15e0ccu: goto label_15e0cc;
        case 0x15e0d0u: goto label_15e0d0;
        case 0x15e0d4u: goto label_15e0d4;
        case 0x15e0d8u: goto label_15e0d8;
        case 0x15e0dcu: goto label_15e0dc;
        case 0x15e0e0u: goto label_15e0e0;
        case 0x15e0e4u: goto label_15e0e4;
        case 0x15e0e8u: goto label_15e0e8;
        case 0x15e0ecu: goto label_15e0ec;
        case 0x15e0f0u: goto label_15e0f0;
        case 0x15e0f4u: goto label_15e0f4;
        case 0x15e0f8u: goto label_15e0f8;
        case 0x15e0fcu: goto label_15e0fc;
        case 0x15e100u: goto label_15e100;
        case 0x15e104u: goto label_15e104;
        case 0x15e108u: goto label_15e108;
        case 0x15e10cu: goto label_15e10c;
        case 0x15e110u: goto label_15e110;
        case 0x15e114u: goto label_15e114;
        case 0x15e118u: goto label_15e118;
        case 0x15e11cu: goto label_15e11c;
        case 0x15e120u: goto label_15e120;
        case 0x15e124u: goto label_15e124;
        case 0x15e128u: goto label_15e128;
        case 0x15e12cu: goto label_15e12c;
        case 0x15e130u: goto label_15e130;
        case 0x15e134u: goto label_15e134;
        case 0x15e138u: goto label_15e138;
        case 0x15e13cu: goto label_15e13c;
        case 0x15e140u: goto label_15e140;
        case 0x15e144u: goto label_15e144;
        case 0x15e148u: goto label_15e148;
        case 0x15e14cu: goto label_15e14c;
        case 0x15e150u: goto label_15e150;
        case 0x15e154u: goto label_15e154;
        case 0x15e158u: goto label_15e158;
        case 0x15e15cu: goto label_15e15c;
        case 0x15e160u: goto label_15e160;
        case 0x15e164u: goto label_15e164;
        case 0x15e168u: goto label_15e168;
        case 0x15e16cu: goto label_15e16c;
        case 0x15e170u: goto label_15e170;
        case 0x15e174u: goto label_15e174;
        case 0x15e178u: goto label_15e178;
        case 0x15e17cu: goto label_15e17c;
        case 0x15e180u: goto label_15e180;
        case 0x15e184u: goto label_15e184;
        case 0x15e188u: goto label_15e188;
        case 0x15e18cu: goto label_15e18c;
        case 0x15e190u: goto label_15e190;
        case 0x15e194u: goto label_15e194;
        case 0x15e198u: goto label_15e198;
        case 0x15e19cu: goto label_15e19c;
        case 0x15e1a0u: goto label_15e1a0;
        case 0x15e1a4u: goto label_15e1a4;
        case 0x15e1a8u: goto label_15e1a8;
        case 0x15e1acu: goto label_15e1ac;
        case 0x15e1b0u: goto label_15e1b0;
        case 0x15e1b4u: goto label_15e1b4;
        case 0x15e1b8u: goto label_15e1b8;
        case 0x15e1bcu: goto label_15e1bc;
        case 0x15e1c0u: goto label_15e1c0;
        case 0x15e1c4u: goto label_15e1c4;
        case 0x15e1c8u: goto label_15e1c8;
        case 0x15e1ccu: goto label_15e1cc;
        case 0x15e1d0u: goto label_15e1d0;
        case 0x15e1d4u: goto label_15e1d4;
        case 0x15e1d8u: goto label_15e1d8;
        case 0x15e1dcu: goto label_15e1dc;
        case 0x15e1e0u: goto label_15e1e0;
        case 0x15e1e4u: goto label_15e1e4;
        case 0x15e1e8u: goto label_15e1e8;
        case 0x15e1ecu: goto label_15e1ec;
        case 0x15e1f0u: goto label_15e1f0;
        case 0x15e1f4u: goto label_15e1f4;
        case 0x15e1f8u: goto label_15e1f8;
        case 0x15e1fcu: goto label_15e1fc;
        case 0x15e200u: goto label_15e200;
        case 0x15e204u: goto label_15e204;
        case 0x15e208u: goto label_15e208;
        case 0x15e20cu: goto label_15e20c;
        case 0x15e210u: goto label_15e210;
        case 0x15e214u: goto label_15e214;
        case 0x15e218u: goto label_15e218;
        case 0x15e21cu: goto label_15e21c;
        case 0x15e220u: goto label_15e220;
        case 0x15e224u: goto label_15e224;
        case 0x15e228u: goto label_15e228;
        case 0x15e22cu: goto label_15e22c;
        case 0x15e230u: goto label_15e230;
        case 0x15e234u: goto label_15e234;
        case 0x15e238u: goto label_15e238;
        case 0x15e23cu: goto label_15e23c;
        case 0x15e240u: goto label_15e240;
        case 0x15e244u: goto label_15e244;
        case 0x15e248u: goto label_15e248;
        case 0x15e24cu: goto label_15e24c;
        case 0x15e250u: goto label_15e250;
        case 0x15e254u: goto label_15e254;
        case 0x15e258u: goto label_15e258;
        case 0x15e25cu: goto label_15e25c;
        case 0x15e260u: goto label_15e260;
        case 0x15e264u: goto label_15e264;
        case 0x15e268u: goto label_15e268;
        case 0x15e26cu: goto label_15e26c;
        case 0x15e270u: goto label_15e270;
        case 0x15e274u: goto label_15e274;
        case 0x15e278u: goto label_15e278;
        case 0x15e27cu: goto label_15e27c;
        case 0x15e280u: goto label_15e280;
        case 0x15e284u: goto label_15e284;
        case 0x15e288u: goto label_15e288;
        case 0x15e28cu: goto label_15e28c;
        case 0x15e290u: goto label_15e290;
        case 0x15e294u: goto label_15e294;
        case 0x15e298u: goto label_15e298;
        case 0x15e29cu: goto label_15e29c;
        case 0x15e2a0u: goto label_15e2a0;
        case 0x15e2a4u: goto label_15e2a4;
        case 0x15e2a8u: goto label_15e2a8;
        case 0x15e2acu: goto label_15e2ac;
        case 0x15e2b0u: goto label_15e2b0;
        case 0x15e2b4u: goto label_15e2b4;
        case 0x15e2b8u: goto label_15e2b8;
        case 0x15e2bcu: goto label_15e2bc;
        case 0x15e2c0u: goto label_15e2c0;
        case 0x15e2c4u: goto label_15e2c4;
        case 0x15e2c8u: goto label_15e2c8;
        case 0x15e2ccu: goto label_15e2cc;
        case 0x15e2d0u: goto label_15e2d0;
        case 0x15e2d4u: goto label_15e2d4;
        case 0x15e2d8u: goto label_15e2d8;
        case 0x15e2dcu: goto label_15e2dc;
        case 0x15e2e0u: goto label_15e2e0;
        case 0x15e2e4u: goto label_15e2e4;
        case 0x15e2e8u: goto label_15e2e8;
        case 0x15e2ecu: goto label_15e2ec;
        case 0x15e2f0u: goto label_15e2f0;
        case 0x15e2f4u: goto label_15e2f4;
        case 0x15e2f8u: goto label_15e2f8;
        case 0x15e2fcu: goto label_15e2fc;
        case 0x15e300u: goto label_15e300;
        case 0x15e304u: goto label_15e304;
        case 0x15e308u: goto label_15e308;
        case 0x15e30cu: goto label_15e30c;
        case 0x15e310u: goto label_15e310;
        case 0x15e314u: goto label_15e314;
        case 0x15e318u: goto label_15e318;
        default: break;
    }

    ctx->pc = 0x15de18u;

label_15de18:
    // 0x15de18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15de18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_15de1c:
    // 0x15de1c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x15de1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_15de20:
    // 0x15de20: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x15de20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15de24:
    // 0x15de24: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x15de24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_15de28:
    // 0x15de28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15de28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_15de2c:
    // 0x15de2c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15de2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_15de30:
    // 0x15de30: 0x26900de0  addiu       $s0, $s4, 0xDE0
    ctx->pc = 0x15de30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 3552));
label_15de34:
    // 0x15de34: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15de34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_15de38:
    // 0x15de38: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x15de38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15de3c:
    // 0x15de3c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x15de3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_15de40:
    // 0x15de40: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x15de40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15de44:
    // 0x15de44: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x15de44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_15de48:
    // 0x15de48: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x15de48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15de4c:
    // 0x15de4c: 0x0  nop
    ctx->pc = 0x15de4cu;
    // NOP
label_15de50:
    // 0x15de50: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15de50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15de54:
    // 0x15de54: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x15de54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
label_15de58:
    // 0x15de58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15de58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15de5c:
    // 0x15de5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_15de60:
    if (ctx->pc == 0x15DE60u) {
        ctx->pc = 0x15DE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE5Cu;
        // 0x15de60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE64u;
        goto label_15de64;
    }
    ctx->pc = 0x15DE5Cu;
    {
        const bool branch_taken_0x15de5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE5Cu;
        // 0x15de60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15de5c) {
            ctx->pc = 0x15DE78u;
            goto label_15de78;
        }
    }
    ctx->pc = 0x15DE64u;
label_15de64:
    // 0x15de64: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x15de64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_15de68:
    // 0x15de68: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15de68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15de6c:
    // 0x15de6c: 0x28a22000  slti        $v0, $a1, 0x2000
    ctx->pc = 0x15de6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8192) ? 1 : 0);
label_15de70:
    // 0x15de70: 0xc056a82  jal         func_15AA08
label_15de74:
    if (ctx->pc == 0x15DE74u) {
        ctx->pc = 0x15DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE70u;
        // 0x15de74: 0x262300a  movz        $a2, $s3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE78u;
        goto label_15de78;
    }
    ctx->pc = 0x15DE70u;
    SET_GPR_U32(ctx, 31, 0x15DE78u);
    ctx->pc = 0x15DE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DE70u;
    // 0x15de74: 0x262300a  movz        $a2, $s3, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA08u, 0x15DE70u, 0x15DE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DE78u;
label_15de78:
    // 0x15de78: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x15de78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_15de7c:
    // 0x15de7c: 0x621fff4  bgez        $s1, . + 4 + (-0xC << 2)
label_15de80:
    if (ctx->pc == 0x15DE80u) {
        ctx->pc = 0x15DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE7Cu;
        // 0x15de80: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE84u;
        goto label_15de84;
    }
    ctx->pc = 0x15DE7Cu;
    {
        const bool branch_taken_0x15de7c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x15DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE7Cu;
        // 0x15de80: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15de7c) {
            ctx->pc = 0x15DE50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15de50;
        }
    }
    ctx->pc = 0x15DE84u;
label_15de84:
    // 0x15de84: 0x26900de0  addiu       $s0, $s4, 0xDE0
    ctx->pc = 0x15de84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 3552));
label_15de88:
    // 0x15de88: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15de88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15de8c:
    // 0x15de8c: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x15de8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
label_15de90:
    // 0x15de90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15de90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15de94:
    // 0x15de94: 0x54400119  bnel        $v0, $zero, . + 4 + (0x119 << 2)
label_15de98:
    if (ctx->pc == 0x15DE98u) {
        ctx->pc = 0x15DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE94u;
        // 0x15de98: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE9Cu;
        goto label_15de9c;
    }
    ctx->pc = 0x15DE94u;
    {
        const bool branch_taken_0x15de94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15de94) {
            ctx->pc = 0x15DE98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DE94u;
            // 0x15de98: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E2FCu;
            goto label_15e2fc;
        }
    }
    ctx->pc = 0x15DE9Cu;
label_15de9c:
    // 0x15de9c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x15de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_15dea0:
    // 0x15dea0: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
label_15dea4:
    if (ctx->pc == 0x15DEA4u) {
        ctx->pc = 0x15DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEA0u;
        // 0x15dea4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DEA8u;
        goto label_15dea8;
    }
    ctx->pc = 0x15DEA0u;
    {
        const bool branch_taken_0x15dea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dea0) {
            ctx->pc = 0x15DEA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DEA0u;
            // 0x15dea4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15DF70u;
            goto label_15df70;
        }
    }
    ctx->pc = 0x15DEA8u;
label_15dea8:
    // 0x15dea8: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x15dea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_15deac:
    // 0x15deac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15deacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15deb0:
    // 0x15deb0: 0xc056a82  jal         func_15AA08
label_15deb4:
    if (ctx->pc == 0x15DEB4u) {
        ctx->pc = 0x15DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEB0u;
        // 0x15deb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DEB8u;
        goto label_15deb8;
    }
    ctx->pc = 0x15DEB0u;
    SET_GPR_U32(ctx, 31, 0x15DEB8u);
    ctx->pc = 0x15DEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DEB0u;
    // 0x15deb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA08u, 0x15DEB0u, 0x15DEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DEB8u;
label_15deb8:
    // 0x15deb8: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
label_15debc:
    if (ctx->pc == 0x15DEBCu) {
        ctx->pc = 0x15DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEB8u;
        // 0x15debc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DEC0u;
        goto label_15dec0;
    }
    ctx->pc = 0x15DEB8u;
    {
        const bool branch_taken_0x15deb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15deb8) {
            ctx->pc = 0x15DEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DEB8u;
            // 0x15debc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15DF70u;
            goto label_15df70;
        }
    }
    ctx->pc = 0x15DEC0u;
label_15dec0:
    // 0x15dec0: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x15dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_15dec4:
    // 0x15dec4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_15dec8:
    // 0x15dec8: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_15decc:
    if (ctx->pc == 0x15DECCu) {
        ctx->pc = 0x15DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEC8u;
        // 0x15decc: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DED0u;
        goto label_15ded0;
    }
    ctx->pc = 0x15DEC8u;
    {
        const bool branch_taken_0x15dec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEC8u;
        // 0x15decc: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dec8) {
            ctx->pc = 0x15DF6Cu;
            goto label_15df6c;
        }
    }
    ctx->pc = 0x15DED0u;
label_15ded0:
    // 0x15ded0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15ded4:
    // 0x15ded4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15ded4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15ded8:
    // 0x15ded8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15ded8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_15dedc:
    // 0x15dedc: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15dee0:
    if (ctx->pc == 0x15DEE0u) {
        ctx->pc = 0x15DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEDCu;
        // 0x15dee0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DEE4u;
        goto label_15dee4;
    }
    ctx->pc = 0x15DEDCu;
    {
        const bool branch_taken_0x15dedc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEDCu;
        // 0x15dee0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dedc) {
            ctx->pc = 0x15DF00u;
            goto label_15df00;
        }
    }
    ctx->pc = 0x15DEE4u;
label_15dee4:
    // 0x15dee4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15dee8:
    // 0x15dee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15dee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15deec:
    // 0x15deec: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15deecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15def0:
    // 0x15def0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15def0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15def4:
    // 0x15def4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15def4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15def8:
    // 0x15def8: 0x60f809  jalr        $v1
label_15defc:
    if (ctx->pc == 0x15DEFCu) {
        ctx->pc = 0x15DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEF8u;
        // 0x15defc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DF00u;
        goto label_15df00;
    }
    ctx->pc = 0x15DEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15DF00u);
        ctx->pc = 0x15DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEF8u;
        // 0x15defc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DEF8u, 0x15DF00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DF00u;
label_15df00:
    // 0x15df00: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15df00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15df04:
    // 0x15df04: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15df08:
    if (ctx->pc == 0x15DF08u) {
        ctx->pc = 0x15DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF04u;
        // 0x15df08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DF0Cu;
        goto label_15df0c;
    }
    ctx->pc = 0x15DF04u;
    {
        const bool branch_taken_0x15df04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF04u;
        // 0x15df08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df04) {
            ctx->pc = 0x15DF24u;
            goto label_15df24;
        }
    }
    ctx->pc = 0x15DF0Cu;
label_15df0c:
    // 0x15df0c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15df10:
    // 0x15df10: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15df10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15df14:
    // 0x15df14: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15df14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15df18:
    // 0x15df18: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15df18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15df1c:
    // 0x15df1c: 0x60f809  jalr        $v1
label_15df20:
    if (ctx->pc == 0x15DF20u) {
        ctx->pc = 0x15DF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF1Cu;
        // 0x15df20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DF24u;
        goto label_15df24;
    }
    ctx->pc = 0x15DF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15DF24u);
        ctx->pc = 0x15DF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF1Cu;
        // 0x15df20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DF1Cu, 0x15DF24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DF24u;
label_15df24:
    // 0x15df24: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15df24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15df28:
    // 0x15df28: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15df2c:
    if (ctx->pc == 0x15DF2Cu) {
        ctx->pc = 0x15DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF28u;
        // 0x15df2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DF30u;
        goto label_15df30;
    }
    ctx->pc = 0x15DF28u;
    {
        const bool branch_taken_0x15df28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF28u;
        // 0x15df2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df28) {
            ctx->pc = 0x15DF48u;
            goto label_15df48;
        }
    }
    ctx->pc = 0x15DF30u;
label_15df30:
    // 0x15df30: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15df30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15df34:
    // 0x15df34: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15df34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15df38:
    // 0x15df38: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15df38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15df3c:
    // 0x15df3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15df3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15df40:
    // 0x15df40: 0x60f809  jalr        $v1
label_15df44:
    if (ctx->pc == 0x15DF44u) {
        ctx->pc = 0x15DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF40u;
        // 0x15df44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DF48u;
        goto label_15df48;
    }
    ctx->pc = 0x15DF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15DF48u);
        ctx->pc = 0x15DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF40u;
        // 0x15df44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DF40u, 0x15DF48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DF48u;
label_15df48:
    // 0x15df48: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15df48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15df4c:
    // 0x15df4c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15df50:
    if (ctx->pc == 0x15DF50u) {
        ctx->pc = 0x15DF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF4Cu;
        // 0x15df50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DF54u;
        goto label_15df54;
    }
    ctx->pc = 0x15DF4Cu;
    {
        const bool branch_taken_0x15df4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF4Cu;
        // 0x15df50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df4c) {
            ctx->pc = 0x15DF6Cu;
            goto label_15df6c;
        }
    }
    ctx->pc = 0x15DF54u;
label_15df54:
    // 0x15df54: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15df54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15df58:
    // 0x15df58: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15df58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15df5c:
    // 0x15df5c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15df5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15df60:
    // 0x15df60: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15df60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15df64:
    // 0x15df64: 0x60f809  jalr        $v1
label_15df68:
    if (ctx->pc == 0x15DF68u) {
        ctx->pc = 0x15DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF64u;
        // 0x15df68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DF6Cu;
        goto label_15df6c;
    }
    ctx->pc = 0x15DF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15DF6Cu);
        ctx->pc = 0x15DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF64u;
        // 0x15df68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DF64u, 0x15DF6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DF6Cu;
label_15df6c:
    // 0x15df6c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x15df6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15df70:
    // 0x15df70: 0x24150050  addiu       $s5, $zero, 0x50
    ctx->pc = 0x15df70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_15df74:
    // 0x15df74: 0x26910378  addiu       $s1, $s4, 0x378
    ctx->pc = 0x15df74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 888));
label_15df78:
    // 0x15df78: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x15df78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
label_15df7c:
    // 0x15df7c: 0x8e230204  lw          $v1, 0x204($s1)
    ctx->pc = 0x15df7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
label_15df80:
    // 0x15df80: 0x5043000d  beql        $v0, $v1, . + 4 + (0xD << 2)
label_15df84:
    if (ctx->pc == 0x15DF84u) {
        ctx->pc = 0x15DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF80u;
        // 0x15df84: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DF88u;
        goto label_15df88;
    }
    ctx->pc = 0x15DF80u;
    {
        const bool branch_taken_0x15df80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x15df80) {
            ctx->pc = 0x15DF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DF80u;
            // 0x15df84: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15DFB8u;
            goto label_15dfb8;
        }
    }
    ctx->pc = 0x15DF88u;
label_15df88:
    // 0x15df88: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x15df88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_15df8c:
    // 0x15df8c: 0x0  nop
    ctx->pc = 0x15df8cu;
    // NOP
label_15df90:
    // 0x15df90: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x15df90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
label_15df94:
    // 0x15df94: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x15df94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15df98:
    // 0x15df98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15df98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15df9c:
    // 0x15df9c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x15df9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_15dfa0:
    // 0x15dfa0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15dfa4:
    // 0x15dfa4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_15dfa8:
    if (ctx->pc == 0x15DFA8u) {
        ctx->pc = 0x15DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFA4u;
        // 0x15dfa8: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DFACu;
        goto label_15dfac;
    }
    ctx->pc = 0x15DFA4u;
    {
        const bool branch_taken_0x15dfa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFA4u;
        // 0x15dfa8: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dfa4) {
            ctx->pc = 0x15DFB8u;
            goto label_15dfb8;
        }
    }
    ctx->pc = 0x15DFACu;
label_15dfac:
    // 0x15dfac: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
label_15dfb0:
    if (ctx->pc == 0x15DFB0u) {
        ctx->pc = 0x15DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFACu;
        // 0x15dfb0: 0xae220200  sw          $v0, 0x200($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DFB4u;
        goto label_15dfb4;
    }
    ctx->pc = 0x15DFACu;
    {
        const bool branch_taken_0x15dfac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x15DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFACu;
        // 0x15dfb0: 0xae220200  sw          $v0, 0x200($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dfac) {
            ctx->pc = 0x15DF90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15df90;
        }
    }
    ctx->pc = 0x15DFB4u;
label_15dfb4:
    // 0x15dfb4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15dfb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15dfb8:
    // 0x15dfb8: 0x106000cb  beqz        $v1, . + 4 + (0xCB << 2)
label_15dfbc:
    if (ctx->pc == 0x15DFBCu) {
        ctx->pc = 0x15DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFB8u;
        // 0x15dfbc: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DFC0u;
        goto label_15dfc0;
    }
    ctx->pc = 0x15DFB8u;
    {
        const bool branch_taken_0x15dfb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFB8u;
        // 0x15dfbc: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dfb8) {
            ctx->pc = 0x15E2E8u;
            goto label_15e2e8;
        }
    }
    ctx->pc = 0x15DFC0u;
label_15dfc0:
    // 0x15dfc0: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x15dfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_15dfc4:
    // 0x15dfc4: 0x548000ac  bnel        $a0, $zero, . + 4 + (0xAC << 2)
label_15dfc8:
    if (ctx->pc == 0x15DFC8u) {
        ctx->pc = 0x15DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFC4u;
        // 0x15dfc8: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DFCCu;
        goto label_15dfcc;
    }
    ctx->pc = 0x15DFC4u;
    {
        const bool branch_taken_0x15dfc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x15dfc4) {
            ctx->pc = 0x15DFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DFC4u;
            // 0x15dfc8: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E278u;
            goto label_15e278;
        }
    }
    ctx->pc = 0x15DFCCu;
label_15dfcc:
    // 0x15dfcc: 0x8e230200  lw          $v1, 0x200($s1)
    ctx->pc = 0x15dfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
label_15dfd0:
    // 0x15dfd0: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x15dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
label_15dfd4:
    // 0x15dfd4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_15dfd8:
    if (ctx->pc == 0x15DFD8u) {
        ctx->pc = 0x15DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFD4u;
        // 0x15dfd8: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DFDCu;
        goto label_15dfdc;
    }
    ctx->pc = 0x15DFD4u;
    {
        const bool branch_taken_0x15dfd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFD4u;
        // 0x15dfd8: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dfd4) {
            ctx->pc = 0x15E010u;
            goto label_15e010;
        }
    }
    ctx->pc = 0x15DFDCu;
label_15dfdc:
    // 0x15dfdc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15dfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15dfe0:
    // 0x15dfe0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x15dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_15dfe4:
    // 0x15dfe4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x15dfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15dfe8:
    // 0x15dfe8: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x15dfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_15dfec:
    // 0x15dfec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x15dfecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_15dff0:
    // 0x15dff0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x15dff0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_15dff4:
    // 0x15dff4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x15dff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_15dff8:
    // 0x15dff8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x15dff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_15dffc:
    // 0x15dffc: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x15dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
label_15e000:
    // 0x15e000: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x15e000u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_15e004:
    // 0x15e004: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15e004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15e008:
    // 0x15e008: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x15e008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_15e00c:
    // 0x15e00c: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x15e00cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
label_15e010:
    // 0x15e010: 0xc06a202  jal         func_1A8808
label_15e014:
    if (ctx->pc == 0x15E014u) {
        ctx->pc = 0x15E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E010u;
        // 0x15e014: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E018u;
        goto label_15e018;
    }
    ctx->pc = 0x15E010u;
    SET_GPR_U32(ctx, 31, 0x15E018u);
    ctx->pc = 0x15E014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E010u;
    // 0x15e014: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x15E010u, 0x15E018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E018u;
label_15e018:
    // 0x15e018: 0x544000b4  bnel        $v0, $zero, . + 4 + (0xB4 << 2)
label_15e01c:
    if (ctx->pc == 0x15E01Cu) {
        ctx->pc = 0x15E01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E018u;
        // 0x15e01c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E020u;
        goto label_15e020;
    }
    ctx->pc = 0x15E018u;
    {
        const bool branch_taken_0x15e018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e018) {
            ctx->pc = 0x15E01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E018u;
            // 0x15e01c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E2ECu;
            goto label_15e2ec;
        }
    }
    ctx->pc = 0x15E020u;
label_15e020:
    // 0x15e020: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x15e020u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_15e024:
    // 0x15e024: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15e024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15e028:
    // 0x15e028: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x15e028u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_15e02c:
    // 0x15e02c: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x15e02cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_15e030:
    // 0x15e030: 0x70003030  pmfhl.lw    $a2
    ctx->pc = 0x15e030u;
    SET_GPR_VEC(ctx, 6, PS2_PMFHL_LW(ctx->hi, ctx->lo));
label_15e034:
    // 0x15e034: 0x633fb  dsra        $a2, $a2, 15
    ctx->pc = 0x15e034u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> 15);
label_15e038:
    // 0x15e038: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x15e038u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15e03c:
    // 0x15e03c: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x15e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_15e040:
    // 0x15e040: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x15e040u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_15e044:
    // 0x15e044: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x15e044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_15e048:
    // 0x15e048: 0x95a80204  lhu         $t0, 0x204($t5)
    ctx->pc = 0x15e048u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 516)));
label_15e04c:
    // 0x15e04c: 0x25a70150  addiu       $a3, $t5, 0x150
    ctx->pc = 0x15e04cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 336));
label_15e050:
    // 0x15e050: 0x95a40206  lhu         $a0, 0x206($t5)
    ctx->pc = 0x15e050u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 518)));
label_15e054:
    // 0x15e054: 0x82c00  sll         $a1, $t0, 16
    ctx->pc = 0x15e054u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_15e058:
    // 0x15e058: 0x85aa01a4  lh          $t2, 0x1A4($t5)
    ctx->pc = 0x15e058u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 420)));
label_15e05c:
    // 0x15e05c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x15e05cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
label_15e060:
    // 0x15e060: 0x85ac01a6  lh          $t4, 0x1A6($t5)
    ctx->pc = 0x15e060u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 422)));
label_15e064:
    // 0x15e064: 0x94eb0008  lhu         $t3, 0x8($a3)
    ctx->pc = 0x15e064u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_15e068:
    // 0x15e068: 0x51bc0  sll         $v1, $a1, 15
    ctx->pc = 0x15e068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
label_15e06c:
    // 0x15e06c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x15e06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_15e070:
    // 0x15e070: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x15e070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
label_15e074:
    // 0x15e074: 0xae060020  sw          $a2, 0x20($s0)
    ctx->pc = 0x15e074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
label_15e078:
    // 0x15e078: 0x1631807  srav        $v1, $v1, $t3
    ctx->pc = 0x15e078u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 11) & 0x1F));
label_15e07c:
    // 0x15e07c: 0xae090030  sw          $t1, 0x30($s0)
    ctx->pc = 0x15e07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 9));
label_15e080:
    // 0x15e080: 0xae120038  sw          $s2, 0x38($s0)
    ctx->pc = 0x15e080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 18));
label_15e084:
    // 0x15e084: 0xae150034  sw          $s5, 0x34($s0)
    ctx->pc = 0x15e084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 21));
label_15e088:
    // 0x15e088: 0xa4e80050  sh          $t0, 0x50($a3)
    ctx->pc = 0x15e088u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 80), (uint16_t)GPR_U32(ctx, 8));
label_15e08c:
    // 0x15e08c: 0xa4e40052  sh          $a0, 0x52($a3)
    ctx->pc = 0x15e08cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 82), (uint16_t)GPR_U32(ctx, 4));
label_15e090:
    // 0x15e090: 0xa4ea0054  sh          $t2, 0x54($a3)
    ctx->pc = 0x15e090u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 84), (uint16_t)GPR_U32(ctx, 10));
label_15e094:
    // 0x15e094: 0xa4ec0056  sh          $t4, 0x56($a3)
    ctx->pc = 0x15e094u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 86), (uint16_t)GPR_U32(ctx, 12));
label_15e098:
    // 0x15e098: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x15e098u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_15e09c:
    // 0x15e09c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x15e09cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_15e0a0:
    // 0x15e0a0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15e0a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_15e0a4:
    // 0x15e0a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e0a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15e0a8:
    // 0x15e0a8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x15e0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_15e0ac:
    // 0x15e0ac: 0x94e6000a  lhu         $a2, 0xA($a3)
    ctx->pc = 0x15e0acu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_15e0b0:
    // 0x15e0b0: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x15e0b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_15e0b4:
    // 0x15e0b4: 0xe4e00060  swc1        $f0, 0x60($a3)
    ctx->pc = 0x15e0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
label_15e0b8:
    // 0x15e0b8: 0x41bc0  sll         $v1, $a0, 15
    ctx->pc = 0x15e0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
label_15e0bc:
    // 0x15e0bc: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x15e0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
label_15e0c0:
    // 0x15e0c0: 0xc31807  srav        $v1, $v1, $a2
    ctx->pc = 0x15e0c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
label_15e0c4:
    // 0x15e0c4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x15e0c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_15e0c8:
    // 0x15e0c8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x15e0c8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_15e0cc:
    // 0x15e0cc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15e0ccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_15e0d0:
    // 0x15e0d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15e0d4:
    // 0x15e0d4: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x15e0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_15e0d8:
    // 0x15e0d8: 0xe4e00064  swc1        $f0, 0x64($a3)
    ctx->pc = 0x15e0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
label_15e0dc:
    // 0x15e0dc: 0x52bc0  sll         $a1, $a1, 15
    ctx->pc = 0x15e0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
label_15e0e0:
    // 0x15e0e0: 0x24a5c000  addiu       $a1, $a1, -0x4000
    ctx->pc = 0x15e0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950912));
label_15e0e4:
    // 0x15e0e4: 0x1652807  srav        $a1, $a1, $t3
    ctx->pc = 0x15e0e4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 11) & 0x1F));
label_15e0e8:
    // 0x15e0e8: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x15e0e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_15e0ec:
    // 0x15e0ec: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x15e0ecu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_15e0f0:
    // 0x15e0f0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15e0f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_15e0f4:
    // 0x15e0f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e0f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15e0f8:
    // 0x15e0f8: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x15e0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_15e0fc:
    // 0x15e0fc: 0xe4e00068  swc1        $f0, 0x68($a3)
    ctx->pc = 0x15e0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 104), bits); }
label_15e100:
    // 0x15e100: 0x423c0  sll         $a0, $a0, 15
    ctx->pc = 0x15e100u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
label_15e104:
    // 0x15e104: 0x2484c000  addiu       $a0, $a0, -0x4000
    ctx->pc = 0x15e104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950912));
label_15e108:
    // 0x15e108: 0xc42007  srav        $a0, $a0, $a2
    ctx->pc = 0x15e108u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
label_15e10c:
    // 0x15e10c: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x15e10cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_15e110:
    // 0x15e110: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x15e110u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_15e114:
    // 0x15e114: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15e114u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_15e118:
    // 0x15e118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15e11c:
    // 0x15e11c: 0x96830016  lhu         $v1, 0x16($s4)
    ctx->pc = 0x15e11cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 22)));
label_15e120:
    // 0x15e120: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x15e120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_15e124:
    // 0x15e124: 0x14600070  bnez        $v1, . + 4 + (0x70 << 2)
label_15e128:
    if (ctx->pc == 0x15E128u) {
        ctx->pc = 0x15E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E124u;
        // 0x15e128: 0xe4e0006c  swc1        $f0, 0x6C($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 108), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E12Cu;
        goto label_15e12c;
    }
    ctx->pc = 0x15E124u;
    {
        const bool branch_taken_0x15e124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E124u;
        // 0x15e128: 0xe4e0006c  swc1        $f0, 0x6C($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e124) {
            ctx->pc = 0x15E2E8u;
            goto label_15e2e8;
        }
    }
    ctx->pc = 0x15E12Cu;
label_15e12c:
    // 0x15e12c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15e130:
    // 0x15e130: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x15e130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_15e134:
    // 0x15e134: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x15e134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e138:
    // 0x15e138: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15e138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_15e13c:
    // 0x15e13c: 0x11a00008  beqz        $t5, . + 4 + (0x8 << 2)
label_15e140:
    if (ctx->pc == 0x15E140u) {
        ctx->pc = 0x15E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E13Cu;
        // 0x15e140: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E144u;
        goto label_15e144;
    }
    ctx->pc = 0x15E13Cu;
    {
        const bool branch_taken_0x15e13c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E13Cu;
        // 0x15e140: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e13c) {
            ctx->pc = 0x15E160u;
            goto label_15e160;
        }
    }
    ctx->pc = 0x15E144u;
label_15e144:
    // 0x15e144: 0x8da2000c  lw          $v0, 0xC($t5)
    ctx->pc = 0x15e144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
label_15e148:
    // 0x15e148: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e14c:
    // 0x15e14c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e150:
    // 0x15e150: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e150u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e154:
    // 0x15e154: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e158:
    // 0x15e158: 0x60f809  jalr        $v1
label_15e15c:
    if (ctx->pc == 0x15E15Cu) {
        ctx->pc = 0x15E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E158u;
        // 0x15e15c: 0x1a42021  addu        $a0, $t5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E160u;
        goto label_15e160;
    }
    ctx->pc = 0x15E158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E160u);
        ctx->pc = 0x15E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E158u;
        // 0x15e15c: 0x1a42021  addu        $a0, $t5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E158u, 0x15E160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E160u;
label_15e160:
    // 0x15e160: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15e160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15e164:
    // 0x15e164: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e168:
    if (ctx->pc == 0x15E168u) {
        ctx->pc = 0x15E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E164u;
        // 0x15e168: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E16Cu;
        goto label_15e16c;
    }
    ctx->pc = 0x15E164u;
    {
        const bool branch_taken_0x15e164 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E164u;
        // 0x15e168: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e164) {
            ctx->pc = 0x15E184u;
            goto label_15e184;
        }
    }
    ctx->pc = 0x15E16Cu;
label_15e16c:
    // 0x15e16c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e170:
    // 0x15e170: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e174:
    // 0x15e174: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e174u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e178:
    // 0x15e178: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e17c:
    // 0x15e17c: 0x60f809  jalr        $v1
label_15e180:
    if (ctx->pc == 0x15E180u) {
        ctx->pc = 0x15E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E17Cu;
        // 0x15e180: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E184u;
        goto label_15e184;
    }
    ctx->pc = 0x15E17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E184u);
        ctx->pc = 0x15E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E17Cu;
        // 0x15e180: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E17Cu, 0x15E184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E184u;
label_15e184:
    // 0x15e184: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15e184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e188:
    // 0x15e188: 0x50400058  beql        $v0, $zero, . + 4 + (0x58 << 2)
label_15e18c:
    if (ctx->pc == 0x15E18Cu) {
        ctx->pc = 0x15E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E188u;
        // 0x15e18c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E190u;
        goto label_15e190;
    }
    ctx->pc = 0x15E188u;
    {
        const bool branch_taken_0x15e188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e188) {
            ctx->pc = 0x15E18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E188u;
            // 0x15e18c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E2ECu;
            goto label_15e2ec;
        }
    }
    ctx->pc = 0x15E190u;
label_15e190:
    // 0x15e190: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15e194:
    // 0x15e194: 0x50c00055  beql        $a2, $zero, . + 4 + (0x55 << 2)
label_15e198:
    if (ctx->pc == 0x15E198u) {
        ctx->pc = 0x15E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E194u;
        // 0x15e198: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E19Cu;
        goto label_15e19c;
    }
    ctx->pc = 0x15E194u;
    {
        const bool branch_taken_0x15e194 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e194) {
            ctx->pc = 0x15E198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E194u;
            // 0x15e198: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E2ECu;
            goto label_15e2ec;
        }
    }
    ctx->pc = 0x15E19Cu;
label_15e19c:
    // 0x15e19c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15e1a0:
    // 0x15e1a0: 0x313c3  sra         $v0, $v1, 15
    ctx->pc = 0x15e1a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
label_15e1a4:
    // 0x15e1a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e1a8:
    // 0x15e1a8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_15e1ac:
    if (ctx->pc == 0x15E1ACu) {
        ctx->pc = 0x15E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1A8u;
        // 0x15e1ac: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E1B0u;
        goto label_15e1b0;
    }
    ctx->pc = 0x15E1A8u;
    {
        const bool branch_taken_0x15e1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1A8u;
        // 0x15e1ac: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e1a8) {
            ctx->pc = 0x15E210u;
            goto label_15e210;
        }
    }
    ctx->pc = 0x15E1B0u;
label_15e1b0:
    // 0x15e1b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e1b4:
    // 0x15e1b4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15e1b8:
    if (ctx->pc == 0x15E1B8u) {
        ctx->pc = 0x15E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1B4u;
        // 0x15e1b8: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E1BCu;
        goto label_15e1bc;
    }
    ctx->pc = 0x15E1B4u;
    {
        const bool branch_taken_0x15e1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e1b4) {
            ctx->pc = 0x15E1B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E1B4u;
            // 0x15e1b8: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E200u;
            goto label_15e200;
        }
    }
    ctx->pc = 0x15E1BCu;
label_15e1bc:
    // 0x15e1bc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e1c0:
    // 0x15e1c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e1c4:
    // 0x15e1c4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e1c8:
    // 0x15e1c8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e1c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e1cc:
    // 0x15e1cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e1d0:
    // 0x15e1d0: 0x60f809  jalr        $v1
label_15e1d4:
    if (ctx->pc == 0x15E1D4u) {
        ctx->pc = 0x15E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1D0u;
        // 0x15e1d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E1D8u;
        goto label_15e1d8;
    }
    ctx->pc = 0x15E1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E1D8u);
        ctx->pc = 0x15E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1D0u;
        // 0x15e1d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E1D0u, 0x15E1D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E1D8u;
label_15e1d8:
    // 0x15e1d8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15e1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e1dc:
    // 0x15e1dc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e1e0:
    if (ctx->pc == 0x15E1E0u) {
        ctx->pc = 0x15E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1DCu;
        // 0x15e1e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E1E4u;
        goto label_15e1e4;
    }
    ctx->pc = 0x15E1DCu;
    {
        const bool branch_taken_0x15e1dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1DCu;
        // 0x15e1e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e1dc) {
            ctx->pc = 0x15E1FCu;
            goto label_15e1fc;
        }
    }
    ctx->pc = 0x15E1E4u;
label_15e1e4:
    // 0x15e1e4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e1e8:
    // 0x15e1e8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e1ec:
    // 0x15e1ec: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e1ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e1f0:
    // 0x15e1f0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e1f4:
    // 0x15e1f4: 0x60f809  jalr        $v1
label_15e1f8:
    if (ctx->pc == 0x15E1F8u) {
        ctx->pc = 0x15E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1F4u;
        // 0x15e1f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E1FCu;
        goto label_15e1fc;
    }
    ctx->pc = 0x15E1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E1FCu);
        ctx->pc = 0x15E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1F4u;
        // 0x15e1f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E1F4u, 0x15E1FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E1FCu;
label_15e1fc:
    // 0x15e1fc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x15e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_15e200:
    // 0x15e200: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15e200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_15e204:
    // 0x15e204: 0x10000038  b           . + 4 + (0x38 << 2)
label_15e208:
    if (ctx->pc == 0x15E208u) {
        ctx->pc = 0x15E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E204u;
        // 0x15e208: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E20Cu;
        goto label_15e20c;
    }
    ctx->pc = 0x15E204u;
    {
        const bool branch_taken_0x15e204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E204u;
        // 0x15e208: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e204) {
            ctx->pc = 0x15E2E8u;
            goto label_15e2e8;
        }
    }
    ctx->pc = 0x15E20Cu;
label_15e20c:
    // 0x15e20c: 0x0  nop
    ctx->pc = 0x15e20cu;
    // NOP
label_15e210:
    // 0x15e210: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e214:
    // 0x15e214: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15e218:
    if (ctx->pc == 0x15E218u) {
        ctx->pc = 0x15E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E214u;
        // 0x15e218: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E21Cu;
        goto label_15e21c;
    }
    ctx->pc = 0x15E214u;
    {
        const bool branch_taken_0x15e214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e214) {
            ctx->pc = 0x15E218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E214u;
            // 0x15e218: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E260u;
            goto label_15e260;
        }
    }
    ctx->pc = 0x15E21Cu;
label_15e21c:
    // 0x15e21c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e220:
    // 0x15e220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e224:
    // 0x15e224: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e228:
    // 0x15e228: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e228u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e22c:
    // 0x15e22c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e230:
    // 0x15e230: 0x60f809  jalr        $v1
label_15e234:
    if (ctx->pc == 0x15E234u) {
        ctx->pc = 0x15E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E230u;
        // 0x15e234: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E238u;
        goto label_15e238;
    }
    ctx->pc = 0x15E230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E238u);
        ctx->pc = 0x15E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E230u;
        // 0x15e234: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E230u, 0x15E238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E238u;
label_15e238:
    // 0x15e238: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15e238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e23c:
    // 0x15e23c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e240:
    if (ctx->pc == 0x15E240u) {
        ctx->pc = 0x15E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E23Cu;
        // 0x15e240: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E244u;
        goto label_15e244;
    }
    ctx->pc = 0x15E23Cu;
    {
        const bool branch_taken_0x15e23c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E23Cu;
        // 0x15e240: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e23c) {
            ctx->pc = 0x15E25Cu;
            goto label_15e25c;
        }
    }
    ctx->pc = 0x15E244u;
label_15e244:
    // 0x15e244: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e248:
    // 0x15e248: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e24c:
    // 0x15e24c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e24cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e250:
    // 0x15e250: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e254:
    // 0x15e254: 0x60f809  jalr        $v1
label_15e258:
    if (ctx->pc == 0x15E258u) {
        ctx->pc = 0x15E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E254u;
        // 0x15e258: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E25Cu;
        goto label_15e25c;
    }
    ctx->pc = 0x15E254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E25Cu);
        ctx->pc = 0x15E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E254u;
        // 0x15e258: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E254u, 0x15E25Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E25Cu;
label_15e25c:
    // 0x15e25c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x15e25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_15e260:
    // 0x15e260: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15e260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_15e264:
    // 0x15e264: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x15e264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_15e268:
    // 0x15e268: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x15e268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15e26c:
    // 0x15e26c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_15e270:
    if (ctx->pc == 0x15E270u) {
        ctx->pc = 0x15E270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E26Cu;
        // 0x15e270: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E274u;
        goto label_15e274;
    }
    ctx->pc = 0x15E26Cu;
    {
        const bool branch_taken_0x15e26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E26Cu;
        // 0x15e270: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e26c) {
            ctx->pc = 0x15E2E8u;
            goto label_15e2e8;
        }
    }
    ctx->pc = 0x15E274u;
label_15e274:
    // 0x15e274: 0x0  nop
    ctx->pc = 0x15e274u;
    // NOP
label_15e278:
    // 0x15e278: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
label_15e27c:
    if (ctx->pc == 0x15E27Cu) {
        ctx->pc = 0x15E27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E278u;
        // 0x15e27c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E280u;
        goto label_15e280;
    }
    ctx->pc = 0x15E278u;
    {
        const bool branch_taken_0x15e278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15E27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E278u;
        // 0x15e27c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e278) {
            ctx->pc = 0x15E2D8u;
            goto label_15e2d8;
        }
    }
    ctx->pc = 0x15E280u;
label_15e280:
    // 0x15e280: 0x8e230200  lw          $v1, 0x200($s1)
    ctx->pc = 0x15e280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
label_15e284:
    // 0x15e284: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x15e284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
label_15e288:
    // 0x15e288: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_15e28c:
    if (ctx->pc == 0x15E28Cu) {
        ctx->pc = 0x15E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E288u;
        // 0x15e28c: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E290u;
        goto label_15e290;
    }
    ctx->pc = 0x15E288u;
    {
        const bool branch_taken_0x15e288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E288u;
        // 0x15e28c: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e288) {
            ctx->pc = 0x15E2C4u;
            goto label_15e2c4;
        }
    }
    ctx->pc = 0x15E290u;
label_15e290:
    // 0x15e290: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15e290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15e294:
    // 0x15e294: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x15e294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_15e298:
    // 0x15e298: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x15e298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15e29c:
    // 0x15e29c: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x15e29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_15e2a0:
    // 0x15e2a0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x15e2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_15e2a4:
    // 0x15e2a4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x15e2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_15e2a8:
    // 0x15e2a8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x15e2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_15e2ac:
    // 0x15e2ac: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x15e2acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_15e2b0:
    // 0x15e2b0: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x15e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
label_15e2b4:
    // 0x15e2b4: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x15e2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_15e2b8:
    // 0x15e2b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15e2bc:
    // 0x15e2bc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x15e2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_15e2c0:
    // 0x15e2c0: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x15e2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
label_15e2c4:
    // 0x15e2c4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x15e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_15e2c8:
    // 0x15e2c8: 0xae150034  sw          $s5, 0x34($s0)
    ctx->pc = 0x15e2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 21));
label_15e2cc:
    // 0x15e2cc: 0x10000006  b           . + 4 + (0x6 << 2)
label_15e2d0:
    if (ctx->pc == 0x15E2D0u) {
        ctx->pc = 0x15E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2CCu;
        // 0x15e2d0: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E2D4u;
        goto label_15e2d4;
    }
    ctx->pc = 0x15E2CCu;
    {
        const bool branch_taken_0x15e2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2CCu;
        // 0x15e2d0: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e2cc) {
            ctx->pc = 0x15E2E8u;
            goto label_15e2e8;
        }
    }
    ctx->pc = 0x15E2D4u;
label_15e2d4:
    // 0x15e2d4: 0x0  nop
    ctx->pc = 0x15e2d4u;
    // NOP
label_15e2d8:
    // 0x15e2d8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_15e2dc:
    if (ctx->pc == 0x15E2DCu) {
        ctx->pc = 0x15E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2D8u;
        // 0x15e2dc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E2E0u;
        goto label_15e2e0;
    }
    ctx->pc = 0x15E2D8u;
    {
        const bool branch_taken_0x15e2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e2d8) {
            ctx->pc = 0x15E2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E2D8u;
            // 0x15e2dc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E2ECu;
            goto label_15e2ec;
        }
    }
    ctx->pc = 0x15E2E0u;
label_15e2e0:
    // 0x15e2e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e2e4:
    // 0x15e2e4: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x15e2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_15e2e8:
    // 0x15e2e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15e2e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15e2ec:
    // 0x15e2ec: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x15e2ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
label_15e2f0:
    // 0x15e2f0: 0x1440ff21  bnez        $v0, . + 4 + (-0xDF << 2)
label_15e2f4:
    if (ctx->pc == 0x15E2F4u) {
        ctx->pc = 0x15E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2F0u;
        // 0x15e2f4: 0x26310208  addiu       $s1, $s1, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E2F8u;
        goto label_15e2f8;
    }
    ctx->pc = 0x15E2F0u;
    {
        const bool branch_taken_0x15e2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2F0u;
        // 0x15e2f4: 0x26310208  addiu       $s1, $s1, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e2f0) {
            ctx->pc = 0x15DF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15df78;
        }
    }
    ctx->pc = 0x15E2F8u;
label_15e2f8:
    // 0x15e2f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15e2f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15e2fc:
    // 0x15e2fc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15e2fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15e300:
    // 0x15e300: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x15e300u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15e304:
    // 0x15e304: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x15e304u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15e308:
    // 0x15e308: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x15e308u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15e30c:
    // 0x15e30c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x15e30cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_15e310:
    // 0x15e310: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15e310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15e314:
    // 0x15e314: 0x3e00008  jr          $ra
label_15e318:
    if (ctx->pc == 0x15E318u) {
        ctx->pc = 0x15E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E314u;
        // 0x15e318: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E31Cu;
        goto label_fallthrough_0x15e314;
    }
    ctx->pc = 0x15E314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E314u;
        // 0x15e318: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15e314:
    ctx->pc = 0x15E31Cu;
}
