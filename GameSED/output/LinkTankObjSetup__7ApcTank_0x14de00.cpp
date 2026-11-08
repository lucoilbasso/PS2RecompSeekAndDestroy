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

// Function: LinkTankObjSetup__7ApcTank
// Address: 0x14de00 - 0x14e3f4
void LinkTankObjSetup__7ApcTank_0x14de00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LinkTankObjSetup__7ApcTank_0x14de00");
#endif

    switch (ctx->pc) {
        case 0x14de00u: goto label_14de00;
        case 0x14de04u: goto label_14de04;
        case 0x14de08u: goto label_14de08;
        case 0x14de0cu: goto label_14de0c;
        case 0x14de10u: goto label_14de10;
        case 0x14de14u: goto label_14de14;
        case 0x14de18u: goto label_14de18;
        case 0x14de1cu: goto label_14de1c;
        case 0x14de20u: goto label_14de20;
        case 0x14de24u: goto label_14de24;
        case 0x14de28u: goto label_14de28;
        case 0x14de2cu: goto label_14de2c;
        case 0x14de30u: goto label_14de30;
        case 0x14de34u: goto label_14de34;
        case 0x14de38u: goto label_14de38;
        case 0x14de3cu: goto label_14de3c;
        case 0x14de40u: goto label_14de40;
        case 0x14de44u: goto label_14de44;
        case 0x14de48u: goto label_14de48;
        case 0x14de4cu: goto label_14de4c;
        case 0x14de50u: goto label_14de50;
        case 0x14de54u: goto label_14de54;
        case 0x14de58u: goto label_14de58;
        case 0x14de5cu: goto label_14de5c;
        case 0x14de60u: goto label_14de60;
        case 0x14de64u: goto label_14de64;
        case 0x14de68u: goto label_14de68;
        case 0x14de6cu: goto label_14de6c;
        case 0x14de70u: goto label_14de70;
        case 0x14de74u: goto label_14de74;
        case 0x14de78u: goto label_14de78;
        case 0x14de7cu: goto label_14de7c;
        case 0x14de80u: goto label_14de80;
        case 0x14de84u: goto label_14de84;
        case 0x14de88u: goto label_14de88;
        case 0x14de8cu: goto label_14de8c;
        case 0x14de90u: goto label_14de90;
        case 0x14de94u: goto label_14de94;
        case 0x14de98u: goto label_14de98;
        case 0x14de9cu: goto label_14de9c;
        case 0x14dea0u: goto label_14dea0;
        case 0x14dea4u: goto label_14dea4;
        case 0x14dea8u: goto label_14dea8;
        case 0x14deacu: goto label_14deac;
        case 0x14deb0u: goto label_14deb0;
        case 0x14deb4u: goto label_14deb4;
        case 0x14deb8u: goto label_14deb8;
        case 0x14debcu: goto label_14debc;
        case 0x14dec0u: goto label_14dec0;
        case 0x14dec4u: goto label_14dec4;
        case 0x14dec8u: goto label_14dec8;
        case 0x14deccu: goto label_14decc;
        case 0x14ded0u: goto label_14ded0;
        case 0x14ded4u: goto label_14ded4;
        case 0x14ded8u: goto label_14ded8;
        case 0x14dedcu: goto label_14dedc;
        case 0x14dee0u: goto label_14dee0;
        case 0x14dee4u: goto label_14dee4;
        case 0x14dee8u: goto label_14dee8;
        case 0x14deecu: goto label_14deec;
        case 0x14def0u: goto label_14def0;
        case 0x14def4u: goto label_14def4;
        case 0x14def8u: goto label_14def8;
        case 0x14defcu: goto label_14defc;
        case 0x14df00u: goto label_14df00;
        case 0x14df04u: goto label_14df04;
        case 0x14df08u: goto label_14df08;
        case 0x14df0cu: goto label_14df0c;
        case 0x14df10u: goto label_14df10;
        case 0x14df14u: goto label_14df14;
        case 0x14df18u: goto label_14df18;
        case 0x14df1cu: goto label_14df1c;
        case 0x14df20u: goto label_14df20;
        case 0x14df24u: goto label_14df24;
        case 0x14df28u: goto label_14df28;
        case 0x14df2cu: goto label_14df2c;
        case 0x14df30u: goto label_14df30;
        case 0x14df34u: goto label_14df34;
        case 0x14df38u: goto label_14df38;
        case 0x14df3cu: goto label_14df3c;
        case 0x14df40u: goto label_14df40;
        case 0x14df44u: goto label_14df44;
        case 0x14df48u: goto label_14df48;
        case 0x14df4cu: goto label_14df4c;
        case 0x14df50u: goto label_14df50;
        case 0x14df54u: goto label_14df54;
        case 0x14df58u: goto label_14df58;
        case 0x14df5cu: goto label_14df5c;
        case 0x14df60u: goto label_14df60;
        case 0x14df64u: goto label_14df64;
        case 0x14df68u: goto label_14df68;
        case 0x14df6cu: goto label_14df6c;
        case 0x14df70u: goto label_14df70;
        case 0x14df74u: goto label_14df74;
        case 0x14df78u: goto label_14df78;
        case 0x14df7cu: goto label_14df7c;
        case 0x14df80u: goto label_14df80;
        case 0x14df84u: goto label_14df84;
        case 0x14df88u: goto label_14df88;
        case 0x14df8cu: goto label_14df8c;
        case 0x14df90u: goto label_14df90;
        case 0x14df94u: goto label_14df94;
        case 0x14df98u: goto label_14df98;
        case 0x14df9cu: goto label_14df9c;
        case 0x14dfa0u: goto label_14dfa0;
        case 0x14dfa4u: goto label_14dfa4;
        case 0x14dfa8u: goto label_14dfa8;
        case 0x14dfacu: goto label_14dfac;
        case 0x14dfb0u: goto label_14dfb0;
        case 0x14dfb4u: goto label_14dfb4;
        case 0x14dfb8u: goto label_14dfb8;
        case 0x14dfbcu: goto label_14dfbc;
        case 0x14dfc0u: goto label_14dfc0;
        case 0x14dfc4u: goto label_14dfc4;
        case 0x14dfc8u: goto label_14dfc8;
        case 0x14dfccu: goto label_14dfcc;
        case 0x14dfd0u: goto label_14dfd0;
        case 0x14dfd4u: goto label_14dfd4;
        case 0x14dfd8u: goto label_14dfd8;
        case 0x14dfdcu: goto label_14dfdc;
        case 0x14dfe0u: goto label_14dfe0;
        case 0x14dfe4u: goto label_14dfe4;
        case 0x14dfe8u: goto label_14dfe8;
        case 0x14dfecu: goto label_14dfec;
        case 0x14dff0u: goto label_14dff0;
        case 0x14dff4u: goto label_14dff4;
        case 0x14dff8u: goto label_14dff8;
        case 0x14dffcu: goto label_14dffc;
        case 0x14e000u: goto label_14e000;
        case 0x14e004u: goto label_14e004;
        case 0x14e008u: goto label_14e008;
        case 0x14e00cu: goto label_14e00c;
        case 0x14e010u: goto label_14e010;
        case 0x14e014u: goto label_14e014;
        case 0x14e018u: goto label_14e018;
        case 0x14e01cu: goto label_14e01c;
        case 0x14e020u: goto label_14e020;
        case 0x14e024u: goto label_14e024;
        case 0x14e028u: goto label_14e028;
        case 0x14e02cu: goto label_14e02c;
        case 0x14e030u: goto label_14e030;
        case 0x14e034u: goto label_14e034;
        case 0x14e038u: goto label_14e038;
        case 0x14e03cu: goto label_14e03c;
        case 0x14e040u: goto label_14e040;
        case 0x14e044u: goto label_14e044;
        case 0x14e048u: goto label_14e048;
        case 0x14e04cu: goto label_14e04c;
        case 0x14e050u: goto label_14e050;
        case 0x14e054u: goto label_14e054;
        case 0x14e058u: goto label_14e058;
        case 0x14e05cu: goto label_14e05c;
        case 0x14e060u: goto label_14e060;
        case 0x14e064u: goto label_14e064;
        case 0x14e068u: goto label_14e068;
        case 0x14e06cu: goto label_14e06c;
        case 0x14e070u: goto label_14e070;
        case 0x14e074u: goto label_14e074;
        case 0x14e078u: goto label_14e078;
        case 0x14e07cu: goto label_14e07c;
        case 0x14e080u: goto label_14e080;
        case 0x14e084u: goto label_14e084;
        case 0x14e088u: goto label_14e088;
        case 0x14e08cu: goto label_14e08c;
        case 0x14e090u: goto label_14e090;
        case 0x14e094u: goto label_14e094;
        case 0x14e098u: goto label_14e098;
        case 0x14e09cu: goto label_14e09c;
        case 0x14e0a0u: goto label_14e0a0;
        case 0x14e0a4u: goto label_14e0a4;
        case 0x14e0a8u: goto label_14e0a8;
        case 0x14e0acu: goto label_14e0ac;
        case 0x14e0b0u: goto label_14e0b0;
        case 0x14e0b4u: goto label_14e0b4;
        case 0x14e0b8u: goto label_14e0b8;
        case 0x14e0bcu: goto label_14e0bc;
        case 0x14e0c0u: goto label_14e0c0;
        case 0x14e0c4u: goto label_14e0c4;
        case 0x14e0c8u: goto label_14e0c8;
        case 0x14e0ccu: goto label_14e0cc;
        case 0x14e0d0u: goto label_14e0d0;
        case 0x14e0d4u: goto label_14e0d4;
        case 0x14e0d8u: goto label_14e0d8;
        case 0x14e0dcu: goto label_14e0dc;
        case 0x14e0e0u: goto label_14e0e0;
        case 0x14e0e4u: goto label_14e0e4;
        case 0x14e0e8u: goto label_14e0e8;
        case 0x14e0ecu: goto label_14e0ec;
        case 0x14e0f0u: goto label_14e0f0;
        case 0x14e0f4u: goto label_14e0f4;
        case 0x14e0f8u: goto label_14e0f8;
        case 0x14e0fcu: goto label_14e0fc;
        case 0x14e100u: goto label_14e100;
        case 0x14e104u: goto label_14e104;
        case 0x14e108u: goto label_14e108;
        case 0x14e10cu: goto label_14e10c;
        case 0x14e110u: goto label_14e110;
        case 0x14e114u: goto label_14e114;
        case 0x14e118u: goto label_14e118;
        case 0x14e11cu: goto label_14e11c;
        case 0x14e120u: goto label_14e120;
        case 0x14e124u: goto label_14e124;
        case 0x14e128u: goto label_14e128;
        case 0x14e12cu: goto label_14e12c;
        case 0x14e130u: goto label_14e130;
        case 0x14e134u: goto label_14e134;
        case 0x14e138u: goto label_14e138;
        case 0x14e13cu: goto label_14e13c;
        case 0x14e140u: goto label_14e140;
        case 0x14e144u: goto label_14e144;
        case 0x14e148u: goto label_14e148;
        case 0x14e14cu: goto label_14e14c;
        case 0x14e150u: goto label_14e150;
        case 0x14e154u: goto label_14e154;
        case 0x14e158u: goto label_14e158;
        case 0x14e15cu: goto label_14e15c;
        case 0x14e160u: goto label_14e160;
        case 0x14e164u: goto label_14e164;
        case 0x14e168u: goto label_14e168;
        case 0x14e16cu: goto label_14e16c;
        case 0x14e170u: goto label_14e170;
        case 0x14e174u: goto label_14e174;
        case 0x14e178u: goto label_14e178;
        case 0x14e17cu: goto label_14e17c;
        case 0x14e180u: goto label_14e180;
        case 0x14e184u: goto label_14e184;
        case 0x14e188u: goto label_14e188;
        case 0x14e18cu: goto label_14e18c;
        case 0x14e190u: goto label_14e190;
        case 0x14e194u: goto label_14e194;
        case 0x14e198u: goto label_14e198;
        case 0x14e19cu: goto label_14e19c;
        case 0x14e1a0u: goto label_14e1a0;
        case 0x14e1a4u: goto label_14e1a4;
        case 0x14e1a8u: goto label_14e1a8;
        case 0x14e1acu: goto label_14e1ac;
        case 0x14e1b0u: goto label_14e1b0;
        case 0x14e1b4u: goto label_14e1b4;
        case 0x14e1b8u: goto label_14e1b8;
        case 0x14e1bcu: goto label_14e1bc;
        case 0x14e1c0u: goto label_14e1c0;
        case 0x14e1c4u: goto label_14e1c4;
        case 0x14e1c8u: goto label_14e1c8;
        case 0x14e1ccu: goto label_14e1cc;
        case 0x14e1d0u: goto label_14e1d0;
        case 0x14e1d4u: goto label_14e1d4;
        case 0x14e1d8u: goto label_14e1d8;
        case 0x14e1dcu: goto label_14e1dc;
        case 0x14e1e0u: goto label_14e1e0;
        case 0x14e1e4u: goto label_14e1e4;
        case 0x14e1e8u: goto label_14e1e8;
        case 0x14e1ecu: goto label_14e1ec;
        case 0x14e1f0u: goto label_14e1f0;
        case 0x14e1f4u: goto label_14e1f4;
        case 0x14e1f8u: goto label_14e1f8;
        case 0x14e1fcu: goto label_14e1fc;
        case 0x14e200u: goto label_14e200;
        case 0x14e204u: goto label_14e204;
        case 0x14e208u: goto label_14e208;
        case 0x14e20cu: goto label_14e20c;
        case 0x14e210u: goto label_14e210;
        case 0x14e214u: goto label_14e214;
        case 0x14e218u: goto label_14e218;
        case 0x14e21cu: goto label_14e21c;
        case 0x14e220u: goto label_14e220;
        case 0x14e224u: goto label_14e224;
        case 0x14e228u: goto label_14e228;
        case 0x14e22cu: goto label_14e22c;
        case 0x14e230u: goto label_14e230;
        case 0x14e234u: goto label_14e234;
        case 0x14e238u: goto label_14e238;
        case 0x14e23cu: goto label_14e23c;
        case 0x14e240u: goto label_14e240;
        case 0x14e244u: goto label_14e244;
        case 0x14e248u: goto label_14e248;
        case 0x14e24cu: goto label_14e24c;
        case 0x14e250u: goto label_14e250;
        case 0x14e254u: goto label_14e254;
        case 0x14e258u: goto label_14e258;
        case 0x14e25cu: goto label_14e25c;
        case 0x14e260u: goto label_14e260;
        case 0x14e264u: goto label_14e264;
        case 0x14e268u: goto label_14e268;
        case 0x14e26cu: goto label_14e26c;
        case 0x14e270u: goto label_14e270;
        case 0x14e274u: goto label_14e274;
        case 0x14e278u: goto label_14e278;
        case 0x14e27cu: goto label_14e27c;
        case 0x14e280u: goto label_14e280;
        case 0x14e284u: goto label_14e284;
        case 0x14e288u: goto label_14e288;
        case 0x14e28cu: goto label_14e28c;
        case 0x14e290u: goto label_14e290;
        case 0x14e294u: goto label_14e294;
        case 0x14e298u: goto label_14e298;
        case 0x14e29cu: goto label_14e29c;
        case 0x14e2a0u: goto label_14e2a0;
        case 0x14e2a4u: goto label_14e2a4;
        case 0x14e2a8u: goto label_14e2a8;
        case 0x14e2acu: goto label_14e2ac;
        case 0x14e2b0u: goto label_14e2b0;
        case 0x14e2b4u: goto label_14e2b4;
        case 0x14e2b8u: goto label_14e2b8;
        case 0x14e2bcu: goto label_14e2bc;
        case 0x14e2c0u: goto label_14e2c0;
        case 0x14e2c4u: goto label_14e2c4;
        case 0x14e2c8u: goto label_14e2c8;
        case 0x14e2ccu: goto label_14e2cc;
        case 0x14e2d0u: goto label_14e2d0;
        case 0x14e2d4u: goto label_14e2d4;
        case 0x14e2d8u: goto label_14e2d8;
        case 0x14e2dcu: goto label_14e2dc;
        case 0x14e2e0u: goto label_14e2e0;
        case 0x14e2e4u: goto label_14e2e4;
        case 0x14e2e8u: goto label_14e2e8;
        case 0x14e2ecu: goto label_14e2ec;
        case 0x14e2f0u: goto label_14e2f0;
        case 0x14e2f4u: goto label_14e2f4;
        case 0x14e2f8u: goto label_14e2f8;
        case 0x14e2fcu: goto label_14e2fc;
        case 0x14e300u: goto label_14e300;
        case 0x14e304u: goto label_14e304;
        case 0x14e308u: goto label_14e308;
        case 0x14e30cu: goto label_14e30c;
        case 0x14e310u: goto label_14e310;
        case 0x14e314u: goto label_14e314;
        case 0x14e318u: goto label_14e318;
        case 0x14e31cu: goto label_14e31c;
        case 0x14e320u: goto label_14e320;
        case 0x14e324u: goto label_14e324;
        case 0x14e328u: goto label_14e328;
        case 0x14e32cu: goto label_14e32c;
        case 0x14e330u: goto label_14e330;
        case 0x14e334u: goto label_14e334;
        case 0x14e338u: goto label_14e338;
        case 0x14e33cu: goto label_14e33c;
        case 0x14e340u: goto label_14e340;
        case 0x14e344u: goto label_14e344;
        case 0x14e348u: goto label_14e348;
        case 0x14e34cu: goto label_14e34c;
        case 0x14e350u: goto label_14e350;
        case 0x14e354u: goto label_14e354;
        case 0x14e358u: goto label_14e358;
        case 0x14e35cu: goto label_14e35c;
        case 0x14e360u: goto label_14e360;
        case 0x14e364u: goto label_14e364;
        case 0x14e368u: goto label_14e368;
        case 0x14e36cu: goto label_14e36c;
        case 0x14e370u: goto label_14e370;
        case 0x14e374u: goto label_14e374;
        case 0x14e378u: goto label_14e378;
        case 0x14e37cu: goto label_14e37c;
        case 0x14e380u: goto label_14e380;
        case 0x14e384u: goto label_14e384;
        case 0x14e388u: goto label_14e388;
        case 0x14e38cu: goto label_14e38c;
        case 0x14e390u: goto label_14e390;
        case 0x14e394u: goto label_14e394;
        case 0x14e398u: goto label_14e398;
        case 0x14e39cu: goto label_14e39c;
        case 0x14e3a0u: goto label_14e3a0;
        case 0x14e3a4u: goto label_14e3a4;
        case 0x14e3a8u: goto label_14e3a8;
        case 0x14e3acu: goto label_14e3ac;
        case 0x14e3b0u: goto label_14e3b0;
        case 0x14e3b4u: goto label_14e3b4;
        case 0x14e3b8u: goto label_14e3b8;
        case 0x14e3bcu: goto label_14e3bc;
        case 0x14e3c0u: goto label_14e3c0;
        case 0x14e3c4u: goto label_14e3c4;
        case 0x14e3c8u: goto label_14e3c8;
        case 0x14e3ccu: goto label_14e3cc;
        case 0x14e3d0u: goto label_14e3d0;
        case 0x14e3d4u: goto label_14e3d4;
        case 0x14e3d8u: goto label_14e3d8;
        case 0x14e3dcu: goto label_14e3dc;
        case 0x14e3e0u: goto label_14e3e0;
        case 0x14e3e4u: goto label_14e3e4;
        case 0x14e3e8u: goto label_14e3e8;
        case 0x14e3ecu: goto label_14e3ec;
        case 0x14e3f0u: goto label_14e3f0;
        default: break;
    }

    ctx->pc = 0x14de00u;

label_14de00:
    // 0x14de00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14de00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_14de04:
    // 0x14de04: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14de04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_14de08:
    // 0x14de08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14de08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14de0c:
    // 0x14de0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14de0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_14de10:
    // 0x14de10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14de10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_14de14:
    // 0x14de14: 0x8e220690  lw          $v0, 0x690($s1)
    ctx->pc = 0x14de14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_14de18:
    // 0x14de18: 0x54400172  bnel        $v0, $zero, . + 4 + (0x172 << 2)
label_14de1c:
    if (ctx->pc == 0x14DE1Cu) {
        ctx->pc = 0x14DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE18u;
        // 0x14de1c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DE20u;
        goto label_14de20;
    }
    ctx->pc = 0x14DE18u;
    {
        const bool branch_taken_0x14de18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14de18) {
            ctx->pc = 0x14DE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DE18u;
            // 0x14de1c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E3E4u;
            goto label_14e3e4;
        }
    }
    ctx->pc = 0x14DE20u;
label_14de20:
    // 0x14de20: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x14de20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_14de24:
    // 0x14de24: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_14de28:
    if (ctx->pc == 0x14DE28u) {
        ctx->pc = 0x14DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE24u;
        // 0x14de28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DE2Cu;
        goto label_14de2c;
    }
    ctx->pc = 0x14DE24u;
    {
        const bool branch_taken_0x14de24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE24u;
        // 0x14de28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de24) {
            ctx->pc = 0x14DE34u;
            goto label_14de34;
        }
    }
    ctx->pc = 0x14DE2Cu;
label_14de2c:
    // 0x14de2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14de30:
    // 0x14de30: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x14de30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_14de34:
    // 0x14de34: 0x1040016b  beqz        $v0, . + 4 + (0x16B << 2)
label_14de38:
    if (ctx->pc == 0x14DE38u) {
        ctx->pc = 0x14DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE34u;
        // 0x14de38: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DE3Cu;
        goto label_14de3c;
    }
    ctx->pc = 0x14DE34u;
    {
        const bool branch_taken_0x14de34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE34u;
        // 0x14de38: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de34) {
            ctx->pc = 0x14E3E4u;
            goto label_14e3e4;
        }
    }
    ctx->pc = 0x14DE3Cu;
label_14de3c:
    // 0x14de3c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14de3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14de40:
    // 0x14de40: 0x24031846  addiu       $v1, $zero, 0x1846
    ctx->pc = 0x14de40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
label_14de44:
    // 0x14de44: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x14de44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_14de48:
    // 0x14de48: 0x54430167  bnel        $v0, $v1, . + 4 + (0x167 << 2)
label_14de4c:
    if (ctx->pc == 0x14DE4Cu) {
        ctx->pc = 0x14DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE48u;
        // 0x14de4c: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DE50u;
        goto label_14de50;
    }
    ctx->pc = 0x14DE48u;
    {
        const bool branch_taken_0x14de48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14de48) {
            ctx->pc = 0x14DE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DE48u;
            // 0x14de4c: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E3E8u;
            goto label_14e3e8;
        }
    }
    ctx->pc = 0x14DE50u;
label_14de50:
    // 0x14de50: 0xc4801ac0  lwc1        $f0, 0x1AC0($a0)
    ctx->pc = 0x14de50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14de54:
    // 0x14de54: 0x26280260  addiu       $t0, $s1, 0x260
    ctx->pc = 0x14de54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
label_14de58:
    // 0x14de58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14de58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_14de5c:
    // 0x14de5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14de5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14de60:
    // 0x14de60: 0xe6200278  swc1        $f0, 0x278($s1)
    ctx->pc = 0x14de60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 632), bits); }
label_14de64:
    // 0x14de64: 0xae240690  sw          $a0, 0x690($s1)
    ctx->pc = 0x14de64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1680), GPR_U32(ctx, 4));
label_14de68:
    // 0x14de68: 0xc4801ac4  lwc1        $f0, 0x1AC4($a0)
    ctx->pc = 0x14de68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14de6c:
    // 0x14de6c: 0xe620027c  swc1        $f0, 0x27C($s1)
    ctx->pc = 0x14de6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 636), bits); }
label_14de70:
    // 0x14de70: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x14de70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14de74:
    // 0x14de74: 0xc503000c  lwc1        $f3, 0xC($t0)
    ctx->pc = 0x14de74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14de78:
    // 0x14de78: 0x0  nop
    ctx->pc = 0x14de78u;
    // NOP
label_14de7c:
    // 0x14de7c: 0x0  nop
    ctx->pc = 0x14de7cu;
    // NOP
label_14de80:
    // 0x14de80: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x14de80u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_14de84:
    // 0x14de84: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x14de84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14de88:
    // 0x14de88: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_14de8c:
    if (ctx->pc == 0x14DE8Cu) {
        ctx->pc = 0x14DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE88u;
        // 0x14de8c: 0xe5010010  swc1        $f1, 0x10($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DE90u;
        goto label_14de90;
    }
    ctx->pc = 0x14DE88u;
    {
        const bool branch_taken_0x14de88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE88u;
        // 0x14de8c: 0xe5010010  swc1        $f1, 0x10($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de88) {
            ctx->pc = 0x14DEA0u;
            goto label_14dea0;
        }
    }
    ctx->pc = 0x14DE90u;
label_14de90:
    // 0x14de90: 0xc78081d4  lwc1        $f0, -0x7E2C($gp)
    ctx->pc = 0x14de90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14de94:
    // 0x14de94: 0x10000008  b           . + 4 + (0x8 << 2)
label_14de98:
    if (ctx->pc == 0x14DE98u) {
        ctx->pc = 0x14DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE94u;
        // 0x14de98: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14DE9Cu;
        goto label_14de9c;
    }
    ctx->pc = 0x14DE94u;
    {
        const bool branch_taken_0x14de94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE94u;
        // 0x14de98: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de94) {
            ctx->pc = 0x14DEB8u;
            goto label_14deb8;
        }
    }
    ctx->pc = 0x14DE9Cu;
label_14de9c:
    // 0x14de9c: 0x0  nop
    ctx->pc = 0x14de9cu;
    // NOP
label_14dea0:
    // 0x14dea0: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x14dea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_14dea4:
    // 0x14dea4: 0xc78281d8  lwc1        $f2, -0x7E28($gp)
    ctx->pc = 0x14dea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14dea8:
    // 0x14dea8: 0xc78181dc  lwc1        $f1, -0x7E24($gp)
    ctx->pc = 0x14dea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14deac:
    // 0x14deac: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x14deacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_14deb0:
    // 0x14deb0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x14deb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_14deb4:
    // 0x14deb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14deb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14deb8:
    // 0x14deb8: 0xe5000014  swc1        $f0, 0x14($t0)
    ctx->pc = 0x14deb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
label_14debc:
    // 0x14debc: 0xc5010018  lwc1        $f1, 0x18($t0)
    ctx->pc = 0x14debcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14dec0:
    // 0x14dec0: 0x25060030  addiu       $a2, $t0, 0x30
    ctx->pc = 0x14dec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_14dec4:
    // 0x14dec4: 0xc5020020  lwc1        $f2, 0x20($t0)
    ctx->pc = 0x14dec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14dec8:
    // 0x14dec8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x14dec8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_14decc:
    // 0x14decc: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x14deccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14ded0:
    // 0x14ded0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x14ded0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14ded4:
    // 0x14ded4: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x14ded4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_14ded8:
    // 0x14ded8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14ded8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_14dedc:
    // 0x14dedc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14dedcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_14dee0:
    // 0x14dee0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14dee0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_14dee4:
    // 0x14dee4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14dee4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_14dee8:
    // 0x14dee8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14dee8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_14deec:
    // 0x14deec: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14deecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_14def0:
    // 0x14def0: 0x25070040  addiu       $a3, $t0, 0x40
    ctx->pc = 0x14def0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
label_14def4:
    // 0x14def4: 0xc5030018  lwc1        $f3, 0x18($t0)
    ctx->pc = 0x14def4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14def8:
    // 0x14def8: 0xc5020020  lwc1        $f2, 0x20($t0)
    ctx->pc = 0x14def8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14defc:
    // 0x14defc: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x14defcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14df00:
    // 0x14df00: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x14df00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14df04:
    // 0x14df04: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x14df04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_14df08:
    // 0x14df08: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14df08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_14df0c:
    // 0x14df0c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14df0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_14df10:
    // 0x14df10: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14df10u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_14df14:
    // 0x14df14: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14df14u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_14df18:
    // 0x14df18: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14df18u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_14df1c:
    // 0x14df1c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x14df1cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_14df20:
    // 0x14df20: 0xc5010018  lwc1        $f1, 0x18($t0)
    ctx->pc = 0x14df20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14df24:
    // 0x14df24: 0x25060050  addiu       $a2, $t0, 0x50
    ctx->pc = 0x14df24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
label_14df28:
    // 0x14df28: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x14df28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14df2c:
    // 0x14df2c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x14df2cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_14df30:
    // 0x14df30: 0xc5030020  lwc1        $f3, 0x20($t0)
    ctx->pc = 0x14df30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14df34:
    // 0x14df34: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14df34u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_14df38:
    // 0x14df38: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x14df38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14df3c:
    // 0x14df3c: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x14df3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_14df40:
    // 0x14df40: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14df40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_14df44:
    // 0x14df44: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14df44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_14df48:
    // 0x14df48: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14df48u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_14df4c:
    // 0x14df4c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14df4cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_14df50:
    // 0x14df50: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14df50u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_14df54:
    // 0x14df54: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14df54u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_14df58:
    // 0x14df58: 0xc502001c  lwc1        $f2, 0x1C($t0)
    ctx->pc = 0x14df58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14df5c:
    // 0x14df5c: 0x25060060  addiu       $a2, $t0, 0x60
    ctx->pc = 0x14df5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
label_14df60:
    // 0x14df60: 0xc5030018  lwc1        $f3, 0x18($t0)
    ctx->pc = 0x14df60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14df64:
    // 0x14df64: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x14df64u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_14df68:
    // 0x14df68: 0xc5010020  lwc1        $f1, 0x20($t0)
    ctx->pc = 0x14df68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14df6c:
    // 0x14df6c: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x14df6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14df70:
    // 0x14df70: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14df70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_14df74:
    // 0x14df74: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x14df74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_14df78:
    // 0x14df78: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14df78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_14df7c:
    // 0x14df7c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14df7cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_14df80:
    // 0x14df80: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14df80u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_14df84:
    // 0x14df84: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14df84u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_14df88:
    // 0x14df88: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14df88u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_14df8c:
    // 0x14df8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14df8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14df90:
    // 0x14df90: 0x25060070  addiu       $a2, $t0, 0x70
    ctx->pc = 0x14df90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_14df94:
    // 0x14df94: 0xc5010020  lwc1        $f1, 0x20($t0)
    ctx->pc = 0x14df94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14df98:
    // 0x14df98: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14df98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14df9c:
    // 0x14df9c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14df9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_14dfa0:
    // 0x14dfa0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14dfa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_14dfa4:
    // 0x14dfa4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14dfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_14dfa8:
    // 0x14dfa8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14dfa8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_14dfac:
    // 0x14dfac: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14dfacu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_14dfb0:
    // 0x14dfb0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14dfb0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_14dfb4:
    // 0x14dfb4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14dfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_14dfb8:
    // 0x14dfb8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x14dfb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_14dfbc:
    // 0x14dfbc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14dfbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14dfc0:
    // 0x14dfc0: 0xc50000b8  lwc1        $f0, 0xB8($t0)
    ctx->pc = 0x14dfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14dfc4:
    // 0x14dfc4: 0xc5010014  lwc1        $f1, 0x14($t0)
    ctx->pc = 0x14dfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14dfc8:
    // 0x14dfc8: 0x46010201  sub.s       $f8, $f0, $f1
    ctx->pc = 0x14dfc8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_14dfcc:
    // 0x14dfcc: 0x46024228  max.s       $f8, $f8, $f2
    ctx->pc = 0x14dfccu;
    ctx->f[8] = std::max(ctx->f[8], ctx->f[2]);
label_14dfd0:
    // 0x14dfd0: 0xc50400b4  lwc1        $f4, 0xB4($t0)
    ctx->pc = 0x14dfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_14dfd4:
    // 0x14dfd4: 0xc50300d8  lwc1        $f3, 0xD8($t0)
    ctx->pc = 0x14dfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14dfd8:
    // 0x14dfd8: 0x46044102  mul.s       $f4, $f8, $f4
    ctx->pc = 0x14dfd8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
label_14dfdc:
    // 0x14dfdc: 0xe50800c4  swc1        $f8, 0xC4($t0)
    ctx->pc = 0x14dfdcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 196), bits); }
label_14dfe0:
    // 0x14dfe0: 0x46011a41  sub.s       $f9, $f3, $f1
    ctx->pc = 0x14dfe0u;
    ctx->f[9] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_14dfe4:
    // 0x14dfe4: 0x0  nop
    ctx->pc = 0x14dfe4u;
    // NOP
label_14dfe8:
    // 0x14dfe8: 0x0  nop
    ctx->pc = 0x14dfe8u;
    // NOP
label_14dfec:
    // 0x14dfec: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x14dfecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
label_14dff0:
    // 0x14dff0: 0xe50400c0  swc1        $f4, 0xC0($t0)
    ctx->pc = 0x14dff0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 192), bits); }
label_14dff4:
    // 0x14dff4: 0x46024a68  max.s       $f9, $f9, $f2
    ctx->pc = 0x14dff4u;
    ctx->f[9] = std::max(ctx->f[9], ctx->f[2]);
label_14dff8:
    // 0x14dff8: 0xc50700d4  lwc1        $f7, 0xD4($t0)
    ctx->pc = 0x14dff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_14dffc:
    // 0x14dffc: 0xc50a00a0  lwc1        $f10, 0xA0($t0)
    ctx->pc = 0x14dffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_14e000:
    // 0x14e000: 0x460749c2  mul.s       $f7, $f9, $f7
    ctx->pc = 0x14e000u;
    ctx->f[7] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
label_14e004:
    // 0x14e004: 0xe50900e4  swc1        $f9, 0xE4($t0)
    ctx->pc = 0x14e004u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 228), bits); }
label_14e008:
    // 0x14e008: 0x46015281  sub.s       $f10, $f10, $f1
    ctx->pc = 0x14e008u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
label_14e00c:
    // 0x14e00c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x14e00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_14e010:
    // 0x14e010: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14e010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14e014:
    // 0x14e014: 0x0  nop
    ctx->pc = 0x14e014u;
    // NOP
label_14e018:
    // 0x14e018: 0x0  nop
    ctx->pc = 0x14e018u;
    // NOP
label_14e01c:
    // 0x14e01c: 0x460339c3  div.s       $f7, $f7, $f3
    ctx->pc = 0x14e01cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[7], ctx->f[3]); }
label_14e020:
    // 0x14e020: 0xe50700e0  swc1        $f7, 0xE0($t0)
    ctx->pc = 0x14e020u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 224), bits); }
label_14e024:
    // 0x14e024: 0x460052a8  max.s       $f10, $f10, $f0
    ctx->pc = 0x14e024u;
    ctx->f[10] = std::max(ctx->f[10], ctx->f[0]);
label_14e028:
    // 0x14e028: 0xc50e00ac  lwc1        $f14, 0xAC($t0)
    ctx->pc = 0x14e028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_14e02c:
    // 0x14e02c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x14e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_14e030:
    // 0x14e030: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x14e030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
label_14e034:
    // 0x14e034: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14e034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14e038:
    // 0x14e038: 0x25030084  addiu       $v1, $t0, 0x84
    ctx->pc = 0x14e038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 132));
label_14e03c:
    // 0x14e03c: 0xc78181e0  lwc1        $f1, -0x7E20($gp)
    ctx->pc = 0x14e03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14e040:
    // 0x14e040: 0x24429b38  addiu       $v0, $v0, -0x64C8
    ctx->pc = 0x14e040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941496));
label_14e044:
    // 0x14e044: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x14e044u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
label_14e048:
    // 0x14e048: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x14e048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_14e04c:
    // 0x14e04c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14e04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14e050:
    // 0x14e050: 0xc50d001c  lwc1        $f13, 0x1C($t0)
    ctx->pc = 0x14e050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_14e054:
    // 0x14e054: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x14e054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14e058:
    // 0x14e058: 0xc5030018  lwc1        $f3, 0x18($t0)
    ctx->pc = 0x14e058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14e05c:
    // 0x14e05c: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x14e05cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_14e060:
    // 0x14e060: 0xc50b00f4  lwc1        $f11, 0xF4($t0)
    ctx->pc = 0x14e060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_14e064:
    // 0x14e064: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x14e064u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_14e068:
    // 0x14e068: 0xc78f81e4  lwc1        $f15, -0x7E1C($gp)
    ctx->pc = 0x14e068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_14e06c:
    // 0x14e06c: 0x0  nop
    ctx->pc = 0x14e06cu;
    // NOP
label_14e070:
    // 0x14e070: 0x0  nop
    ctx->pc = 0x14e070u;
    // NOP
label_14e074:
    // 0x14e074: 0x46017383  div.s       $f14, $f14, $f1
    ctx->pc = 0x14e074u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = FPU_DIV_S(ctx->f[14], ctx->f[1]); }
label_14e078:
    // 0x14e078: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x14e078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
label_14e07c:
    // 0x14e07c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14e07cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14e080:
    // 0x14e080: 0x46005ac2  mul.s       $f11, $f11, $f0
    ctx->pc = 0x14e080u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
label_14e084:
    // 0x14e084: 0xc78081e8  lwc1        $f0, -0x7E18($gp)
    ctx->pc = 0x14e084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e088:
    // 0x14e088: 0xc78281ec  lwc1        $f2, -0x7E14($gp)
    ctx->pc = 0x14e088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14e08c:
    // 0x14e08c: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x14e08cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
label_14e090:
    // 0x14e090: 0xc50c00bc  lwc1        $f12, 0xBC($t0)
    ctx->pc = 0x14e090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14e094:
    // 0x14e094: 0xc50500dc  lwc1        $f5, 0xDC($t0)
    ctx->pc = 0x14e094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_14e098:
    // 0x14e098: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x14e098u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_14e09c:
    // 0x14e09c: 0xc50600f8  lwc1        $f6, 0xF8($t0)
    ctx->pc = 0x14e09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_14e0a0:
    // 0x14e0a0: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x14e0a0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
label_14e0a4:
    // 0x14e0a4: 0x0  nop
    ctx->pc = 0x14e0a4u;
    // NOP
label_14e0a8:
    // 0x14e0a8: 0x0  nop
    ctx->pc = 0x14e0a8u;
    // NOP
label_14e0ac:
    // 0x14e0ac: 0x46037c03  div.s       $f16, $f15, $f3
    ctx->pc = 0x14e0acu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[16] = FPU_DIV_S(ctx->f[15], ctx->f[3]); }
label_14e0b0:
    // 0x14e0b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14e0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_14e0b4:
    // 0x14e0b4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x14e0b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_14e0b8:
    // 0x14e0b8: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x14e0b8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_14e0bc:
    // 0x14e0bc: 0xe50000a8  swc1        $f0, 0xA8($t0)
    ctx->pc = 0x14e0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 168), bits); }
label_14e0c0:
    // 0x14e0c0: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x14e0c0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_14e0c4:
    // 0x14e0c4: 0xe50400c8  swc1        $f4, 0xC8($t0)
    ctx->pc = 0x14e0c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 200), bits); }
label_14e0c8:
    // 0x14e0c8: 0x460b18c1  sub.s       $f3, $f3, $f11
    ctx->pc = 0x14e0c8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[11]);
label_14e0cc:
    // 0x14e0cc: 0xe50800cc  swc1        $f8, 0xCC($t0)
    ctx->pc = 0x14e0ccu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 204), bits); }
label_14e0d0:
    // 0x14e0d0: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x14e0d0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
label_14e0d4:
    // 0x14e0d4: 0xe50a00a4  swc1        $f10, 0xA4($t0)
    ctx->pc = 0x14e0d4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 164), bits); }
label_14e0d8:
    // 0x14e0d8: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x14e0d8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
label_14e0dc:
    // 0x14e0dc: 0xe50500f0  swc1        $f5, 0xF0($t0)
    ctx->pc = 0x14e0dcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 240), bits); }
label_14e0e0:
    // 0x14e0e0: 0x0  nop
    ctx->pc = 0x14e0e0u;
    // NOP
label_14e0e4:
    // 0x14e0e4: 0x0  nop
    ctx->pc = 0x14e0e4u;
    // NOP
label_14e0e8:
    // 0x14e0e8: 0x460d7bc3  div.s       $f15, $f15, $f13
    ctx->pc = 0x14e0e8u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = FPU_DIV_S(ctx->f[15], ctx->f[13]); }
label_14e0ec:
    // 0x14e0ec: 0xe5060100  swc1        $f6, 0x100($t0)
    ctx->pc = 0x14e0ecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 256), bits); }
label_14e0f0:
    // 0x14e0f0: 0x46024a42  mul.s       $f9, $f9, $f2
    ctx->pc = 0x14e0f0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
label_14e0f4:
    // 0x14e0f4: 0xe50300fc  swc1        $f3, 0xFC($t0)
    ctx->pc = 0x14e0f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 252), bits); }
label_14e0f8:
    // 0x14e0f8: 0x46007024  .word       0x46007024                   # cvt.w.s     $f0, $f14 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14e0f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[14]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_14e0fc:
    // 0x14e0fc: 0xe50000b0  swc1        $f0, 0xB0($t0)
    ctx->pc = 0x14e0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 176), bits); }
label_14e100:
    // 0x14e100: 0xe50c00d0  swc1        $f12, 0xD0($t0)
    ctx->pc = 0x14e100u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 208), bits); }
label_14e104:
    // 0x14e104: 0xe50700e8  swc1        $f7, 0xE8($t0)
    ctx->pc = 0x14e104u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 232), bits); }
label_14e108:
    // 0x14e108: 0xe50900ec  swc1        $f9, 0xEC($t0)
    ctx->pc = 0x14e108u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 236), bits); }
label_14e10c:
    // 0x14e10c: 0x0  nop
    ctx->pc = 0x14e10cu;
    // NOP
label_14e110:
    // 0x14e110: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14e110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e114:
    // 0x14e114: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14e114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_14e118:
    // 0x14e118: 0x46007802  mul.s       $f0, $f15, $f0
    ctx->pc = 0x14e118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
label_14e11c:
    // 0x14e11c: 0xe460fffc  swc1        $f0, -0x4($v1)
    ctx->pc = 0x14e11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
label_14e120:
    // 0x14e120: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x14e120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14e124:
    // 0x14e124: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x14e124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_14e128:
    // 0x14e128: 0x46018042  mul.s       $f1, $f16, $f1
    ctx->pc = 0x14e128u;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
label_14e12c:
    // 0x14e12c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x14e12cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_14e130:
    // 0x14e130: 0x481fff7  bgez        $a0, . + 4 + (-0x9 << 2)
label_14e134:
    if (ctx->pc == 0x14E134u) {
        ctx->pc = 0x14E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E130u;
        // 0x14e134: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E138u;
        goto label_14e138;
    }
    ctx->pc = 0x14E130u;
    {
        const bool branch_taken_0x14e130 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x14E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E130u;
        // 0x14e134: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e130) {
            ctx->pc = 0x14E110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e110;
        }
    }
    ctx->pc = 0x14E138u;
label_14e138:
    // 0x14e138: 0xc0682b2  jal         func_1A0AC8
label_14e13c:
    if (ctx->pc == 0x14E13Cu) {
        ctx->pc = 0x14E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E138u;
        // 0x14e13c: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E140u;
        goto label_14e140;
    }
    ctx->pc = 0x14E138u;
    SET_GPR_U32(ctx, 31, 0x14E140u);
    ctx->pc = 0x14E13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E138u;
    // 0x14e13c: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x14E138u, 0x14E140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E140u;
label_14e140:
    // 0x14e140: 0xc0682b6  jal         func_1A0AD8
label_14e144:
    if (ctx->pc == 0x14E144u) {
        ctx->pc = 0x14E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E140u;
        // 0x14e144: 0x24040250  addiu       $a0, $zero, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E148u;
        goto label_14e148;
    }
    ctx->pc = 0x14E140u;
    SET_GPR_U32(ctx, 31, 0x14E148u);
    ctx->pc = 0x14E144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E140u;
    // 0x14e144: 0x24040250  addiu       $a0, $zero, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x14E140u, 0x14E148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E148u;
label_14e148:
    // 0x14e148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14e148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e14c:
    // 0x14e14c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14e14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e150:
    // 0x14e150: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x14e150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_14e154:
    // 0x14e154: 0x2442ffb0  addiu       $v0, $v0, -0x50
    ctx->pc = 0x14e154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
label_14e158:
    // 0x14e158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e15c:
    // 0x14e15c: 0xc0624a8  jal         func_1892A0
label_14e160:
    if (ctx->pc == 0x14E160u) {
        ctx->pc = 0x14E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E15Cu;
        // 0x14e160: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E164u;
        goto label_14e164;
    }
    ctx->pc = 0x14E15Cu;
    SET_GPR_U32(ctx, 31, 0x14E164u);
    ctx->pc = 0x14E160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E15Cu;
    // 0x14e160: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1892A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892A0u, 0x14E15Cu, 0x14E164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E164u;
label_14e164:
    // 0x14e164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e168:
    // 0x14e168: 0xc06825c  jal         func_1A0970
label_14e16c:
    if (ctx->pc == 0x14E16Cu) {
        ctx->pc = 0x14E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E168u;
        // 0x14e16c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E170u;
        goto label_14e170;
    }
    ctx->pc = 0x14E168u;
    SET_GPR_U32(ctx, 31, 0x14E170u);
    ctx->pc = 0x14E16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E168u;
    // 0x14e16c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x14E168u, 0x14E170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E170u;
label_14e170:
    // 0x14e170: 0xae3006a4  sw          $s0, 0x6A4($s1)
    ctx->pc = 0x14e170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1700), GPR_U32(ctx, 16));
label_14e174:
    // 0x14e174: 0xc0548ee  jal         func_1523B8
label_14e178:
    if (ctx->pc == 0x14E178u) {
        ctx->pc = 0x14E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E174u;
        // 0x14e178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E17Cu;
        goto label_14e17c;
    }
    ctx->pc = 0x14E174u;
    SET_GPR_U32(ctx, 31, 0x14E17Cu);
    ctx->pc = 0x14E178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E174u;
    // 0x14e178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1523B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1523B8u, 0x14E174u, 0x14E17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E17Cu;
label_14e17c:
    // 0x14e17c: 0xc04c99a  jal         func_132668
label_14e180:
    if (ctx->pc == 0x14E180u) {
        ctx->pc = 0x14E184u;
        goto label_14e184;
    }
    ctx->pc = 0x14E17Cu;
    SET_GPR_U32(ctx, 31, 0x14E184u);
    ctx->pc = 0x132668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132668u, 0x14E17Cu, 0x14E184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E184u;
label_14e184:
    // 0x14e184: 0xc62d0278  lwc1        $f13, 0x278($s1)
    ctx->pc = 0x14e184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_14e188:
    // 0x14e188: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14e188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e18c:
    // 0x14e18c: 0xc62c027c  lwc1        $f12, 0x27C($s1)
    ctx->pc = 0x14e18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14e190:
    // 0x14e190: 0x8e25017c  lw          $a1, 0x17C($s1)
    ctx->pc = 0x14e190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
label_14e194:
    // 0x14e194: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x14e194u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_14e198:
    // 0x14e198: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x14e198u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_14e19c:
    // 0x14e19c: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x14e19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_14e1a0:
    // 0x14e1a0: 0x30a5f000  andi        $a1, $a1, 0xF000
    ctx->pc = 0x14e1a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)61440);
label_14e1a4:
    // 0x14e1a4: 0x38a52000  xori        $a1, $a1, 0x2000
    ctx->pc = 0x14e1a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)8192);
label_14e1a8:
    // 0x14e1a8: 0xc04c64e  jal         func_131938
label_14e1ac:
    if (ctx->pc == 0x14E1ACu) {
        ctx->pc = 0x14E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1A8u;
        // 0x14e1ac: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E1B0u;
        goto label_14e1b0;
    }
    ctx->pc = 0x14E1A8u;
    SET_GPR_U32(ctx, 31, 0x14E1B0u);
    ctx->pc = 0x14E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E1A8u;
    // 0x14e1ac: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x131938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131938u, 0x14E1A8u, 0x14E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1B0u;
label_14e1b0:
    // 0x14e1b0: 0x24040186  addiu       $a0, $zero, 0x186
    ctx->pc = 0x14e1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
label_14e1b4:
    // 0x14e1b4: 0xc0682b2  jal         func_1A0AC8
label_14e1b8:
    if (ctx->pc == 0x14E1B8u) {
        ctx->pc = 0x14E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1B4u;
        // 0x14e1b8: 0xae2206d8  sw          $v0, 0x6D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E1BCu;
        goto label_14e1bc;
    }
    ctx->pc = 0x14E1B4u;
    SET_GPR_U32(ctx, 31, 0x14E1BCu);
    ctx->pc = 0x14E1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E1B4u;
    // 0x14e1b8: 0xae2206d8  sw          $v0, 0x6D8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1752), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x14E1B4u, 0x14E1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1BCu;
label_14e1bc:
    // 0x14e1bc: 0xc0682b6  jal         func_1A0AD8
label_14e1c0:
    if (ctx->pc == 0x14E1C0u) {
        ctx->pc = 0x14E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1BCu;
        // 0x14e1c0: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E1C4u;
        goto label_14e1c4;
    }
    ctx->pc = 0x14E1BCu;
    SET_GPR_U32(ctx, 31, 0x14E1C4u);
    ctx->pc = 0x14E1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E1BCu;
    // 0x14e1c0: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x14E1BCu, 0x14E1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1C4u;
label_14e1c4:
    // 0x14e1c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14e1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e1c8:
    // 0x14e1c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14e1c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e1cc:
    // 0x14e1cc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x14e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_14e1d0:
    // 0x14e1d0: 0x2442f460  addiu       $v0, $v0, -0xBA0
    ctx->pc = 0x14e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964320));
label_14e1d4:
    // 0x14e1d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e1d8:
    // 0x14e1d8: 0xc05ac70  jal         func_16B1C0
label_14e1dc:
    if (ctx->pc == 0x14E1DCu) {
        ctx->pc = 0x14E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1D8u;
        // 0x14e1dc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E1E0u;
        goto label_14e1e0;
    }
    ctx->pc = 0x14E1D8u;
    SET_GPR_U32(ctx, 31, 0x14E1E0u);
    ctx->pc = 0x14E1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E1D8u;
    // 0x14e1dc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B1C0u, 0x14E1D8u, 0x14E1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1E0u;
label_14e1e0:
    // 0x14e1e0: 0xae1101e0  sw          $s1, 0x1E0($s0)
    ctx->pc = 0x14e1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 17));
label_14e1e4:
    // 0x14e1e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e1e8:
    // 0x14e1e8: 0xc06825c  jal         func_1A0970
label_14e1ec:
    if (ctx->pc == 0x14E1ECu) {
        ctx->pc = 0x14E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1E8u;
        // 0x14e1ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E1F0u;
        goto label_14e1f0;
    }
    ctx->pc = 0x14E1E8u;
    SET_GPR_U32(ctx, 31, 0x14E1F0u);
    ctx->pc = 0x14E1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E1E8u;
    // 0x14e1ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x14E1E8u, 0x14E1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1F0u;
label_14e1f0:
    // 0x14e1f0: 0x8e0301e8  lw          $v1, 0x1E8($s0)
    ctx->pc = 0x14e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_14e1f4:
    // 0x14e1f4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_14e1f8:
    // 0x14e1f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14e1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e1fc:
    // 0x14e1fc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x14e1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_14e200:
    // 0x14e200: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14e200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e204:
    // 0x14e204: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x14e204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_14e208:
    // 0x14e208: 0xae0301e8  sw          $v1, 0x1E8($s0)
    ctx->pc = 0x14e208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 3));
label_14e20c:
    // 0x14e20c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14e20cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14e210:
    // 0x14e210: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14e210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14e214:
    // 0x14e214: 0x60f809  jalr        $v1
label_14e218:
    if (ctx->pc == 0x14E218u) {
        ctx->pc = 0x14E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E214u;
        // 0x14e218: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E21Cu;
        goto label_14e21c;
    }
    ctx->pc = 0x14E214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14E21Cu);
        ctx->pc = 0x14E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E214u;
        // 0x14e218: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E214u, 0x14E21Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E21Cu;
label_14e21c:
    // 0x14e21c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x14e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14e220:
    // 0x14e220: 0x8e270690  lw          $a3, 0x690($s1)
    ctx->pc = 0x14e220u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_14e224:
    // 0x14e224: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14e224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e228:
    // 0x14e228: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x14e228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_14e22c:
    // 0x14e22c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14e22cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14e230:
    // 0x14e230: 0x8ce50124  lw          $a1, 0x124($a3)
    ctx->pc = 0x14e230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 292)));
label_14e234:
    // 0x14e234: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14e234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14e238:
    // 0x14e238: 0x60f809  jalr        $v1
label_14e23c:
    if (ctx->pc == 0x14E23Cu) {
        ctx->pc = 0x14E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E238u;
        // 0x14e23c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E240u;
        goto label_14e240;
    }
    ctx->pc = 0x14E238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14E240u);
        ctx->pc = 0x14E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E238u;
        // 0x14e23c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E238u, 0x14E240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E240u;
label_14e240:
    // 0x14e240: 0xae3001c4  sw          $s0, 0x1C4($s1)
    ctx->pc = 0x14e240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 16));
label_14e244:
    // 0x14e244: 0x8e220170  lw          $v0, 0x170($s1)
    ctx->pc = 0x14e244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
label_14e248:
    // 0x14e248: 0x8c500024  lw          $s0, 0x24($v0)
    ctx->pc = 0x14e248u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_14e24c:
    // 0x14e24c: 0xc06bd28  jal         func_1AF4A0
label_14e250:
    if (ctx->pc == 0x14E250u) {
        ctx->pc = 0x14E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E24Cu;
        // 0x14e250: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E254u;
        goto label_14e254;
    }
    ctx->pc = 0x14E24Cu;
    SET_GPR_U32(ctx, 31, 0x14E254u);
    ctx->pc = 0x14E250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E24Cu;
    // 0x14e250: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x14E24Cu, 0x14E254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E254u;
label_14e254:
    // 0x14e254: 0xc06bd20  jal         func_1AF480
label_14e258:
    if (ctx->pc == 0x14E258u) {
        ctx->pc = 0x14E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E254u;
        // 0x14e258: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E25Cu;
        goto label_14e25c;
    }
    ctx->pc = 0x14E254u;
    SET_GPR_U32(ctx, 31, 0x14E25Cu);
    ctx->pc = 0x14E258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E254u;
    // 0x14e258: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x14E254u, 0x14E25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E25Cu;
label_14e25c:
    // 0x14e25c: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x14e25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_14e260:
    // 0x14e260: 0xc6200278  lwc1        $f0, 0x278($s1)
    ctx->pc = 0x14e260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e264:
    // 0x14e264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14e264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e268:
    // 0x14e268: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x14e268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_14e26c:
    // 0x14e26c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14e26cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14e270:
    // 0x14e270: 0x24840fb0  addiu       $a0, $a0, 0xFB0
    ctx->pc = 0x14e270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4016));
label_14e274:
    // 0x14e274: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14e274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e278:
    // 0x14e278: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14e278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_14e27c:
    // 0x14e27c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x14e27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_14e280:
    // 0x14e280: 0xc06448c  jal         func_191230
label_14e284:
    if (ctx->pc == 0x14E284u) {
        ctx->pc = 0x14E284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E280u;
        // 0x14e284: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E288u;
        goto label_14e288;
    }
    ctx->pc = 0x14E280u;
    SET_GPR_U32(ctx, 31, 0x14E288u);
    ctx->pc = 0x14E284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E280u;
    // 0x14e284: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x191230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191230u, 0x14E280u, 0x14E288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E288u;
label_14e288:
    // 0x14e288: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14e288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e28c:
    // 0x14e28c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14e290:
    // 0x14e290: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x14e290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_14e294:
    // 0x14e294: 0x26080180  addiu       $t0, $s0, 0x180
    ctx->pc = 0x14e294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_14e298:
    // 0x14e298: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x14e298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14e29c:
    // 0x14e29c: 0xc4e00020  lwc1        $f0, 0x20($a3)
    ctx->pc = 0x14e29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e2a0:
    // 0x14e2a0: 0xa4e2000e  sh          $v0, 0xE($a3)
    ctx->pc = 0x14e2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 2));
label_14e2a4:
    // 0x14e2a4: 0x460008c7  neg.s       $f3, $f1
    ctx->pc = 0x14e2a4u;
    ctx->f[3] = FPU_NEG_S(ctx->f[1]);
label_14e2a8:
    // 0x14e2a8: 0xe4e10024  swc1        $f1, 0x24($a3)
    ctx->pc = 0x14e2a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
label_14e2ac:
    // 0x14e2ac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14e2acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_14e2b0:
    // 0x14e2b0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x14e2b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14e2b4:
    // 0x14e2b4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14e2b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14e2b8:
    // 0x14e2b8: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x14e2b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_14e2bc:
    // 0x14e2bc: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x14e2bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_14e2c0:
    // 0x14e2c0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14e2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_14e2c4:
    // 0x14e2c4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14e2c4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_14e2c8:
    // 0x14e2c8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14e2c8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_14e2cc:
    // 0x14e2cc: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14e2ccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_14e2d0:
    // 0x14e2d0: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x14e2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
label_14e2d4:
    // 0x14e2d4: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x14e2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14e2d8:
    // 0x14e2d8: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x14e2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_14e2dc:
    // 0x14e2dc: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x14e2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e2e0:
    // 0x14e2e0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14e2e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14e2e4:
    // 0x14e2e4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14e2e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_14e2e8:
    // 0x14e2e8: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x14e2e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_14e2ec:
    // 0x14e2ec: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14e2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_14e2f0:
    // 0x14e2f0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14e2f0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_14e2f4:
    // 0x14e2f4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14e2f4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_14e2f8:
    // 0x14e2f8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14e2f8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_14e2fc:
    // 0x14e2fc: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14e2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_14e300:
    // 0x14e300: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x14e300u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_14e304:
    // 0x14e304: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x14e304u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_14e308:
    // 0x14e308: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x14e308u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_14e30c:
    // 0x14e30c: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x14e30cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_14e310:
    // 0x14e310: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14e310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e314:
    // 0x14e314: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x14e314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e318:
    // 0x14e318: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14e318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e31c:
    // 0x14e31c: 0xc6030170  lwc1        $f3, 0x170($s0)
    ctx->pc = 0x14e31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14e320:
    // 0x14e320: 0xe6000220  swc1        $f0, 0x220($s0)
    ctx->pc = 0x14e320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 544), bits); }
label_14e324:
    // 0x14e324: 0xc6040178  lwc1        $f4, 0x178($s0)
    ctx->pc = 0x14e324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_14e328:
    // 0x14e328: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x14e328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e32c:
    // 0x14e32c: 0xe6020228  swc1        $f2, 0x228($s0)
    ctx->pc = 0x14e32cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 552), bits); }
label_14e330:
    // 0x14e330: 0xe602022c  swc1        $f2, 0x22C($s0)
    ctx->pc = 0x14e330u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 556), bits); }
label_14e334:
    // 0x14e334: 0xe6000224  swc1        $f0, 0x224($s0)
    ctx->pc = 0x14e334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 548), bits); }
label_14e338:
    // 0x14e338: 0xc6050174  lwc1        $f5, 0x174($s0)
    ctx->pc = 0x14e338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_14e33c:
    // 0x14e33c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x14e33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14e340:
    // 0x14e340: 0xc606017c  lwc1        $f6, 0x17C($s0)
    ctx->pc = 0x14e340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_14e344:
    // 0x14e344: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x14e344u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_14e348:
    // 0x14e348: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14e348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_14e34c:
    // 0x14e34c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x14e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_14e350:
    // 0x14e350: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14e350u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14e354:
    // 0x14e354: 0x0  nop
    ctx->pc = 0x14e354u;
    // NOP
label_14e358:
    // 0x14e358: 0x0  nop
    ctx->pc = 0x14e358u;
    // NOP
label_14e35c:
    // 0x14e35c: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x14e35cu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
label_14e360:
    // 0x14e360: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14e360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14e364:
    // 0x14e364: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x14e364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_14e368:
    // 0x14e368: 0xe6010230  swc1        $f1, 0x230($s0)
    ctx->pc = 0x14e368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
label_14e36c:
    // 0x14e36c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x14e36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e370:
    // 0x14e370: 0xe602023c  swc1        $f2, 0x23C($s0)
    ctx->pc = 0x14e370u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 572), bits); }
label_14e374:
    // 0x14e374: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x14e374u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_14e378:
    // 0x14e378: 0xe6020238  swc1        $f2, 0x238($s0)
    ctx->pc = 0x14e378u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 568), bits); }
label_14e37c:
    // 0x14e37c: 0x0  nop
    ctx->pc = 0x14e37cu;
    // NOP
label_14e380:
    // 0x14e380: 0x0  nop
    ctx->pc = 0x14e380u;
    // NOP
label_14e384:
    // 0x14e384: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x14e384u;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[6]); }
label_14e388:
    // 0x14e388: 0x60f809  jalr        $v1
label_14e38c:
    if (ctx->pc == 0x14E38Cu) {
        ctx->pc = 0x14E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E388u;
        // 0x14e38c: 0xe6000234  swc1        $f0, 0x234($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E390u;
        goto label_14e390;
    }
    ctx->pc = 0x14E388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14E390u);
        ctx->pc = 0x14E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E388u;
        // 0x14e38c: 0xe6000234  swc1        $f0, 0x234($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E388u, 0x14E390u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E390u;
label_14e390:
    // 0x14e390: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x14e390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14e394:
    // 0x14e394: 0x8e250690  lw          $a1, 0x690($s1)
    ctx->pc = 0x14e394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_14e398:
    // 0x14e398: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14e398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e39c:
    // 0x14e39c: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x14e39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_14e3a0:
    // 0x14e3a0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14e3a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14e3a4:
    // 0x14e3a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14e3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14e3a8:
    // 0x14e3a8: 0x60f809  jalr        $v1
label_14e3ac:
    if (ctx->pc == 0x14E3ACu) {
        ctx->pc = 0x14E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3A8u;
        // 0x14e3ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E3B0u;
        goto label_14e3b0;
    }
    ctx->pc = 0x14E3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14E3B0u);
        ctx->pc = 0x14E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3A8u;
        // 0x14e3ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E3A8u, 0x14E3B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E3B0u;
label_14e3b0:
    // 0x14e3b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x14e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14e3b4:
    // 0x14e3b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14e3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e3b8:
    // 0x14e3b8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x14e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_14e3bc:
    // 0x14e3bc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14e3bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14e3c0:
    // 0x14e3c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14e3c4:
    // 0x14e3c4: 0x60f809  jalr        $v1
label_14e3c8:
    if (ctx->pc == 0x14E3C8u) {
        ctx->pc = 0x14E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3C4u;
        // 0x14e3c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E3CCu;
        goto label_14e3cc;
    }
    ctx->pc = 0x14E3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14E3CCu);
        ctx->pc = 0x14E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3C4u;
        // 0x14e3c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E3C4u, 0x14E3CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E3CCu;
label_14e3cc:
    // 0x14e3cc: 0xae3001c8  sw          $s0, 0x1C8($s1)
    ctx->pc = 0x14e3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 456), GPR_U32(ctx, 16));
label_14e3d0:
    // 0x14e3d0: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x14e3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_14e3d4:
    // 0x14e3d4: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x14e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_14e3d8:
    // 0x14e3d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14e3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_14e3dc:
    // 0x14e3dc: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x14e3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
label_14e3e0:
    // 0x14e3e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14e3e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14e3e4:
    // 0x14e3e4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14e3e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_14e3e8:
    // 0x14e3e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14e3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14e3ec:
    // 0x14e3ec: 0x3e00008  jr          $ra
label_14e3f0:
    if (ctx->pc == 0x14E3F0u) {
        ctx->pc = 0x14E3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3ECu;
        // 0x14e3f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E3F4u;
        goto label_fallthrough_0x14e3ec;
    }
    ctx->pc = 0x14E3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3ECu;
        // 0x14e3f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14e3ec:
    ctx->pc = 0x14E3F4u;
}
