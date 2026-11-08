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

// Function: RadarGaugeSetup__8ApcPanelif
// Address: 0x15ec70 - 0x15f990
void RadarGaugeSetup__8ApcPanelif_0x15ec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RadarGaugeSetup__8ApcPanelif_0x15ec70");
#endif

    switch (ctx->pc) {
        case 0x15ec70u: goto label_15ec70;
        case 0x15ec74u: goto label_15ec74;
        case 0x15ec78u: goto label_15ec78;
        case 0x15ec7cu: goto label_15ec7c;
        case 0x15ec80u: goto label_15ec80;
        case 0x15ec84u: goto label_15ec84;
        case 0x15ec88u: goto label_15ec88;
        case 0x15ec8cu: goto label_15ec8c;
        case 0x15ec90u: goto label_15ec90;
        case 0x15ec94u: goto label_15ec94;
        case 0x15ec98u: goto label_15ec98;
        case 0x15ec9cu: goto label_15ec9c;
        case 0x15eca0u: goto label_15eca0;
        case 0x15eca4u: goto label_15eca4;
        case 0x15eca8u: goto label_15eca8;
        case 0x15ecacu: goto label_15ecac;
        case 0x15ecb0u: goto label_15ecb0;
        case 0x15ecb4u: goto label_15ecb4;
        case 0x15ecb8u: goto label_15ecb8;
        case 0x15ecbcu: goto label_15ecbc;
        case 0x15ecc0u: goto label_15ecc0;
        case 0x15ecc4u: goto label_15ecc4;
        case 0x15ecc8u: goto label_15ecc8;
        case 0x15ecccu: goto label_15eccc;
        case 0x15ecd0u: goto label_15ecd0;
        case 0x15ecd4u: goto label_15ecd4;
        case 0x15ecd8u: goto label_15ecd8;
        case 0x15ecdcu: goto label_15ecdc;
        case 0x15ece0u: goto label_15ece0;
        case 0x15ece4u: goto label_15ece4;
        case 0x15ece8u: goto label_15ece8;
        case 0x15ececu: goto label_15ecec;
        case 0x15ecf0u: goto label_15ecf0;
        case 0x15ecf4u: goto label_15ecf4;
        case 0x15ecf8u: goto label_15ecf8;
        case 0x15ecfcu: goto label_15ecfc;
        case 0x15ed00u: goto label_15ed00;
        case 0x15ed04u: goto label_15ed04;
        case 0x15ed08u: goto label_15ed08;
        case 0x15ed0cu: goto label_15ed0c;
        case 0x15ed10u: goto label_15ed10;
        case 0x15ed14u: goto label_15ed14;
        case 0x15ed18u: goto label_15ed18;
        case 0x15ed1cu: goto label_15ed1c;
        case 0x15ed20u: goto label_15ed20;
        case 0x15ed24u: goto label_15ed24;
        case 0x15ed28u: goto label_15ed28;
        case 0x15ed2cu: goto label_15ed2c;
        case 0x15ed30u: goto label_15ed30;
        case 0x15ed34u: goto label_15ed34;
        case 0x15ed38u: goto label_15ed38;
        case 0x15ed3cu: goto label_15ed3c;
        case 0x15ed40u: goto label_15ed40;
        case 0x15ed44u: goto label_15ed44;
        case 0x15ed48u: goto label_15ed48;
        case 0x15ed4cu: goto label_15ed4c;
        case 0x15ed50u: goto label_15ed50;
        case 0x15ed54u: goto label_15ed54;
        case 0x15ed58u: goto label_15ed58;
        case 0x15ed5cu: goto label_15ed5c;
        case 0x15ed60u: goto label_15ed60;
        case 0x15ed64u: goto label_15ed64;
        case 0x15ed68u: goto label_15ed68;
        case 0x15ed6cu: goto label_15ed6c;
        case 0x15ed70u: goto label_15ed70;
        case 0x15ed74u: goto label_15ed74;
        case 0x15ed78u: goto label_15ed78;
        case 0x15ed7cu: goto label_15ed7c;
        case 0x15ed80u: goto label_15ed80;
        case 0x15ed84u: goto label_15ed84;
        case 0x15ed88u: goto label_15ed88;
        case 0x15ed8cu: goto label_15ed8c;
        case 0x15ed90u: goto label_15ed90;
        case 0x15ed94u: goto label_15ed94;
        case 0x15ed98u: goto label_15ed98;
        case 0x15ed9cu: goto label_15ed9c;
        case 0x15eda0u: goto label_15eda0;
        case 0x15eda4u: goto label_15eda4;
        case 0x15eda8u: goto label_15eda8;
        case 0x15edacu: goto label_15edac;
        case 0x15edb0u: goto label_15edb0;
        case 0x15edb4u: goto label_15edb4;
        case 0x15edb8u: goto label_15edb8;
        case 0x15edbcu: goto label_15edbc;
        case 0x15edc0u: goto label_15edc0;
        case 0x15edc4u: goto label_15edc4;
        case 0x15edc8u: goto label_15edc8;
        case 0x15edccu: goto label_15edcc;
        case 0x15edd0u: goto label_15edd0;
        case 0x15edd4u: goto label_15edd4;
        case 0x15edd8u: goto label_15edd8;
        case 0x15eddcu: goto label_15eddc;
        case 0x15ede0u: goto label_15ede0;
        case 0x15ede4u: goto label_15ede4;
        case 0x15ede8u: goto label_15ede8;
        case 0x15edecu: goto label_15edec;
        case 0x15edf0u: goto label_15edf0;
        case 0x15edf4u: goto label_15edf4;
        case 0x15edf8u: goto label_15edf8;
        case 0x15edfcu: goto label_15edfc;
        case 0x15ee00u: goto label_15ee00;
        case 0x15ee04u: goto label_15ee04;
        case 0x15ee08u: goto label_15ee08;
        case 0x15ee0cu: goto label_15ee0c;
        case 0x15ee10u: goto label_15ee10;
        case 0x15ee14u: goto label_15ee14;
        case 0x15ee18u: goto label_15ee18;
        case 0x15ee1cu: goto label_15ee1c;
        case 0x15ee20u: goto label_15ee20;
        case 0x15ee24u: goto label_15ee24;
        case 0x15ee28u: goto label_15ee28;
        case 0x15ee2cu: goto label_15ee2c;
        case 0x15ee30u: goto label_15ee30;
        case 0x15ee34u: goto label_15ee34;
        case 0x15ee38u: goto label_15ee38;
        case 0x15ee3cu: goto label_15ee3c;
        case 0x15ee40u: goto label_15ee40;
        case 0x15ee44u: goto label_15ee44;
        case 0x15ee48u: goto label_15ee48;
        case 0x15ee4cu: goto label_15ee4c;
        case 0x15ee50u: goto label_15ee50;
        case 0x15ee54u: goto label_15ee54;
        case 0x15ee58u: goto label_15ee58;
        case 0x15ee5cu: goto label_15ee5c;
        case 0x15ee60u: goto label_15ee60;
        case 0x15ee64u: goto label_15ee64;
        case 0x15ee68u: goto label_15ee68;
        case 0x15ee6cu: goto label_15ee6c;
        case 0x15ee70u: goto label_15ee70;
        case 0x15ee74u: goto label_15ee74;
        case 0x15ee78u: goto label_15ee78;
        case 0x15ee7cu: goto label_15ee7c;
        case 0x15ee80u: goto label_15ee80;
        case 0x15ee84u: goto label_15ee84;
        case 0x15ee88u: goto label_15ee88;
        case 0x15ee8cu: goto label_15ee8c;
        case 0x15ee90u: goto label_15ee90;
        case 0x15ee94u: goto label_15ee94;
        case 0x15ee98u: goto label_15ee98;
        case 0x15ee9cu: goto label_15ee9c;
        case 0x15eea0u: goto label_15eea0;
        case 0x15eea4u: goto label_15eea4;
        case 0x15eea8u: goto label_15eea8;
        case 0x15eeacu: goto label_15eeac;
        case 0x15eeb0u: goto label_15eeb0;
        case 0x15eeb4u: goto label_15eeb4;
        case 0x15eeb8u: goto label_15eeb8;
        case 0x15eebcu: goto label_15eebc;
        case 0x15eec0u: goto label_15eec0;
        case 0x15eec4u: goto label_15eec4;
        case 0x15eec8u: goto label_15eec8;
        case 0x15eeccu: goto label_15eecc;
        case 0x15eed0u: goto label_15eed0;
        case 0x15eed4u: goto label_15eed4;
        case 0x15eed8u: goto label_15eed8;
        case 0x15eedcu: goto label_15eedc;
        case 0x15eee0u: goto label_15eee0;
        case 0x15eee4u: goto label_15eee4;
        case 0x15eee8u: goto label_15eee8;
        case 0x15eeecu: goto label_15eeec;
        case 0x15eef0u: goto label_15eef0;
        case 0x15eef4u: goto label_15eef4;
        case 0x15eef8u: goto label_15eef8;
        case 0x15eefcu: goto label_15eefc;
        case 0x15ef00u: goto label_15ef00;
        case 0x15ef04u: goto label_15ef04;
        case 0x15ef08u: goto label_15ef08;
        case 0x15ef0cu: goto label_15ef0c;
        case 0x15ef10u: goto label_15ef10;
        case 0x15ef14u: goto label_15ef14;
        case 0x15ef18u: goto label_15ef18;
        case 0x15ef1cu: goto label_15ef1c;
        case 0x15ef20u: goto label_15ef20;
        case 0x15ef24u: goto label_15ef24;
        case 0x15ef28u: goto label_15ef28;
        case 0x15ef2cu: goto label_15ef2c;
        case 0x15ef30u: goto label_15ef30;
        case 0x15ef34u: goto label_15ef34;
        case 0x15ef38u: goto label_15ef38;
        case 0x15ef3cu: goto label_15ef3c;
        case 0x15ef40u: goto label_15ef40;
        case 0x15ef44u: goto label_15ef44;
        case 0x15ef48u: goto label_15ef48;
        case 0x15ef4cu: goto label_15ef4c;
        case 0x15ef50u: goto label_15ef50;
        case 0x15ef54u: goto label_15ef54;
        case 0x15ef58u: goto label_15ef58;
        case 0x15ef5cu: goto label_15ef5c;
        case 0x15ef60u: goto label_15ef60;
        case 0x15ef64u: goto label_15ef64;
        case 0x15ef68u: goto label_15ef68;
        case 0x15ef6cu: goto label_15ef6c;
        case 0x15ef70u: goto label_15ef70;
        case 0x15ef74u: goto label_15ef74;
        case 0x15ef78u: goto label_15ef78;
        case 0x15ef7cu: goto label_15ef7c;
        case 0x15ef80u: goto label_15ef80;
        case 0x15ef84u: goto label_15ef84;
        case 0x15ef88u: goto label_15ef88;
        case 0x15ef8cu: goto label_15ef8c;
        case 0x15ef90u: goto label_15ef90;
        case 0x15ef94u: goto label_15ef94;
        case 0x15ef98u: goto label_15ef98;
        case 0x15ef9cu: goto label_15ef9c;
        case 0x15efa0u: goto label_15efa0;
        case 0x15efa4u: goto label_15efa4;
        case 0x15efa8u: goto label_15efa8;
        case 0x15efacu: goto label_15efac;
        case 0x15efb0u: goto label_15efb0;
        case 0x15efb4u: goto label_15efb4;
        case 0x15efb8u: goto label_15efb8;
        case 0x15efbcu: goto label_15efbc;
        case 0x15efc0u: goto label_15efc0;
        case 0x15efc4u: goto label_15efc4;
        case 0x15efc8u: goto label_15efc8;
        case 0x15efccu: goto label_15efcc;
        case 0x15efd0u: goto label_15efd0;
        case 0x15efd4u: goto label_15efd4;
        case 0x15efd8u: goto label_15efd8;
        case 0x15efdcu: goto label_15efdc;
        case 0x15efe0u: goto label_15efe0;
        case 0x15efe4u: goto label_15efe4;
        case 0x15efe8u: goto label_15efe8;
        case 0x15efecu: goto label_15efec;
        case 0x15eff0u: goto label_15eff0;
        case 0x15eff4u: goto label_15eff4;
        case 0x15eff8u: goto label_15eff8;
        case 0x15effcu: goto label_15effc;
        case 0x15f000u: goto label_15f000;
        case 0x15f004u: goto label_15f004;
        case 0x15f008u: goto label_15f008;
        case 0x15f00cu: goto label_15f00c;
        case 0x15f010u: goto label_15f010;
        case 0x15f014u: goto label_15f014;
        case 0x15f018u: goto label_15f018;
        case 0x15f01cu: goto label_15f01c;
        case 0x15f020u: goto label_15f020;
        case 0x15f024u: goto label_15f024;
        case 0x15f028u: goto label_15f028;
        case 0x15f02cu: goto label_15f02c;
        case 0x15f030u: goto label_15f030;
        case 0x15f034u: goto label_15f034;
        case 0x15f038u: goto label_15f038;
        case 0x15f03cu: goto label_15f03c;
        case 0x15f040u: goto label_15f040;
        case 0x15f044u: goto label_15f044;
        case 0x15f048u: goto label_15f048;
        case 0x15f04cu: goto label_15f04c;
        case 0x15f050u: goto label_15f050;
        case 0x15f054u: goto label_15f054;
        case 0x15f058u: goto label_15f058;
        case 0x15f05cu: goto label_15f05c;
        case 0x15f060u: goto label_15f060;
        case 0x15f064u: goto label_15f064;
        case 0x15f068u: goto label_15f068;
        case 0x15f06cu: goto label_15f06c;
        case 0x15f070u: goto label_15f070;
        case 0x15f074u: goto label_15f074;
        case 0x15f078u: goto label_15f078;
        case 0x15f07cu: goto label_15f07c;
        case 0x15f080u: goto label_15f080;
        case 0x15f084u: goto label_15f084;
        case 0x15f088u: goto label_15f088;
        case 0x15f08cu: goto label_15f08c;
        case 0x15f090u: goto label_15f090;
        case 0x15f094u: goto label_15f094;
        case 0x15f098u: goto label_15f098;
        case 0x15f09cu: goto label_15f09c;
        case 0x15f0a0u: goto label_15f0a0;
        case 0x15f0a4u: goto label_15f0a4;
        case 0x15f0a8u: goto label_15f0a8;
        case 0x15f0acu: goto label_15f0ac;
        case 0x15f0b0u: goto label_15f0b0;
        case 0x15f0b4u: goto label_15f0b4;
        case 0x15f0b8u: goto label_15f0b8;
        case 0x15f0bcu: goto label_15f0bc;
        case 0x15f0c0u: goto label_15f0c0;
        case 0x15f0c4u: goto label_15f0c4;
        case 0x15f0c8u: goto label_15f0c8;
        case 0x15f0ccu: goto label_15f0cc;
        case 0x15f0d0u: goto label_15f0d0;
        case 0x15f0d4u: goto label_15f0d4;
        case 0x15f0d8u: goto label_15f0d8;
        case 0x15f0dcu: goto label_15f0dc;
        case 0x15f0e0u: goto label_15f0e0;
        case 0x15f0e4u: goto label_15f0e4;
        case 0x15f0e8u: goto label_15f0e8;
        case 0x15f0ecu: goto label_15f0ec;
        case 0x15f0f0u: goto label_15f0f0;
        case 0x15f0f4u: goto label_15f0f4;
        case 0x15f0f8u: goto label_15f0f8;
        case 0x15f0fcu: goto label_15f0fc;
        case 0x15f100u: goto label_15f100;
        case 0x15f104u: goto label_15f104;
        case 0x15f108u: goto label_15f108;
        case 0x15f10cu: goto label_15f10c;
        case 0x15f110u: goto label_15f110;
        case 0x15f114u: goto label_15f114;
        case 0x15f118u: goto label_15f118;
        case 0x15f11cu: goto label_15f11c;
        case 0x15f120u: goto label_15f120;
        case 0x15f124u: goto label_15f124;
        case 0x15f128u: goto label_15f128;
        case 0x15f12cu: goto label_15f12c;
        case 0x15f130u: goto label_15f130;
        case 0x15f134u: goto label_15f134;
        case 0x15f138u: goto label_15f138;
        case 0x15f13cu: goto label_15f13c;
        case 0x15f140u: goto label_15f140;
        case 0x15f144u: goto label_15f144;
        case 0x15f148u: goto label_15f148;
        case 0x15f14cu: goto label_15f14c;
        case 0x15f150u: goto label_15f150;
        case 0x15f154u: goto label_15f154;
        case 0x15f158u: goto label_15f158;
        case 0x15f15cu: goto label_15f15c;
        case 0x15f160u: goto label_15f160;
        case 0x15f164u: goto label_15f164;
        case 0x15f168u: goto label_15f168;
        case 0x15f16cu: goto label_15f16c;
        case 0x15f170u: goto label_15f170;
        case 0x15f174u: goto label_15f174;
        case 0x15f178u: goto label_15f178;
        case 0x15f17cu: goto label_15f17c;
        case 0x15f180u: goto label_15f180;
        case 0x15f184u: goto label_15f184;
        case 0x15f188u: goto label_15f188;
        case 0x15f18cu: goto label_15f18c;
        case 0x15f190u: goto label_15f190;
        case 0x15f194u: goto label_15f194;
        case 0x15f198u: goto label_15f198;
        case 0x15f19cu: goto label_15f19c;
        case 0x15f1a0u: goto label_15f1a0;
        case 0x15f1a4u: goto label_15f1a4;
        case 0x15f1a8u: goto label_15f1a8;
        case 0x15f1acu: goto label_15f1ac;
        case 0x15f1b0u: goto label_15f1b0;
        case 0x15f1b4u: goto label_15f1b4;
        case 0x15f1b8u: goto label_15f1b8;
        case 0x15f1bcu: goto label_15f1bc;
        case 0x15f1c0u: goto label_15f1c0;
        case 0x15f1c4u: goto label_15f1c4;
        case 0x15f1c8u: goto label_15f1c8;
        case 0x15f1ccu: goto label_15f1cc;
        case 0x15f1d0u: goto label_15f1d0;
        case 0x15f1d4u: goto label_15f1d4;
        case 0x15f1d8u: goto label_15f1d8;
        case 0x15f1dcu: goto label_15f1dc;
        case 0x15f1e0u: goto label_15f1e0;
        case 0x15f1e4u: goto label_15f1e4;
        case 0x15f1e8u: goto label_15f1e8;
        case 0x15f1ecu: goto label_15f1ec;
        case 0x15f1f0u: goto label_15f1f0;
        case 0x15f1f4u: goto label_15f1f4;
        case 0x15f1f8u: goto label_15f1f8;
        case 0x15f1fcu: goto label_15f1fc;
        case 0x15f200u: goto label_15f200;
        case 0x15f204u: goto label_15f204;
        case 0x15f208u: goto label_15f208;
        case 0x15f20cu: goto label_15f20c;
        case 0x15f210u: goto label_15f210;
        case 0x15f214u: goto label_15f214;
        case 0x15f218u: goto label_15f218;
        case 0x15f21cu: goto label_15f21c;
        case 0x15f220u: goto label_15f220;
        case 0x15f224u: goto label_15f224;
        case 0x15f228u: goto label_15f228;
        case 0x15f22cu: goto label_15f22c;
        case 0x15f230u: goto label_15f230;
        case 0x15f234u: goto label_15f234;
        case 0x15f238u: goto label_15f238;
        case 0x15f23cu: goto label_15f23c;
        case 0x15f240u: goto label_15f240;
        case 0x15f244u: goto label_15f244;
        case 0x15f248u: goto label_15f248;
        case 0x15f24cu: goto label_15f24c;
        case 0x15f250u: goto label_15f250;
        case 0x15f254u: goto label_15f254;
        case 0x15f258u: goto label_15f258;
        case 0x15f25cu: goto label_15f25c;
        case 0x15f260u: goto label_15f260;
        case 0x15f264u: goto label_15f264;
        case 0x15f268u: goto label_15f268;
        case 0x15f26cu: goto label_15f26c;
        case 0x15f270u: goto label_15f270;
        case 0x15f274u: goto label_15f274;
        case 0x15f278u: goto label_15f278;
        case 0x15f27cu: goto label_15f27c;
        case 0x15f280u: goto label_15f280;
        case 0x15f284u: goto label_15f284;
        case 0x15f288u: goto label_15f288;
        case 0x15f28cu: goto label_15f28c;
        case 0x15f290u: goto label_15f290;
        case 0x15f294u: goto label_15f294;
        case 0x15f298u: goto label_15f298;
        case 0x15f29cu: goto label_15f29c;
        case 0x15f2a0u: goto label_15f2a0;
        case 0x15f2a4u: goto label_15f2a4;
        case 0x15f2a8u: goto label_15f2a8;
        case 0x15f2acu: goto label_15f2ac;
        case 0x15f2b0u: goto label_15f2b0;
        case 0x15f2b4u: goto label_15f2b4;
        case 0x15f2b8u: goto label_15f2b8;
        case 0x15f2bcu: goto label_15f2bc;
        case 0x15f2c0u: goto label_15f2c0;
        case 0x15f2c4u: goto label_15f2c4;
        case 0x15f2c8u: goto label_15f2c8;
        case 0x15f2ccu: goto label_15f2cc;
        case 0x15f2d0u: goto label_15f2d0;
        case 0x15f2d4u: goto label_15f2d4;
        case 0x15f2d8u: goto label_15f2d8;
        case 0x15f2dcu: goto label_15f2dc;
        case 0x15f2e0u: goto label_15f2e0;
        case 0x15f2e4u: goto label_15f2e4;
        case 0x15f2e8u: goto label_15f2e8;
        case 0x15f2ecu: goto label_15f2ec;
        case 0x15f2f0u: goto label_15f2f0;
        case 0x15f2f4u: goto label_15f2f4;
        case 0x15f2f8u: goto label_15f2f8;
        case 0x15f2fcu: goto label_15f2fc;
        case 0x15f300u: goto label_15f300;
        case 0x15f304u: goto label_15f304;
        case 0x15f308u: goto label_15f308;
        case 0x15f30cu: goto label_15f30c;
        case 0x15f310u: goto label_15f310;
        case 0x15f314u: goto label_15f314;
        case 0x15f318u: goto label_15f318;
        case 0x15f31cu: goto label_15f31c;
        case 0x15f320u: goto label_15f320;
        case 0x15f324u: goto label_15f324;
        case 0x15f328u: goto label_15f328;
        case 0x15f32cu: goto label_15f32c;
        case 0x15f330u: goto label_15f330;
        case 0x15f334u: goto label_15f334;
        case 0x15f338u: goto label_15f338;
        case 0x15f33cu: goto label_15f33c;
        case 0x15f340u: goto label_15f340;
        case 0x15f344u: goto label_15f344;
        case 0x15f348u: goto label_15f348;
        case 0x15f34cu: goto label_15f34c;
        case 0x15f350u: goto label_15f350;
        case 0x15f354u: goto label_15f354;
        case 0x15f358u: goto label_15f358;
        case 0x15f35cu: goto label_15f35c;
        case 0x15f360u: goto label_15f360;
        case 0x15f364u: goto label_15f364;
        case 0x15f368u: goto label_15f368;
        case 0x15f36cu: goto label_15f36c;
        case 0x15f370u: goto label_15f370;
        case 0x15f374u: goto label_15f374;
        case 0x15f378u: goto label_15f378;
        case 0x15f37cu: goto label_15f37c;
        case 0x15f380u: goto label_15f380;
        case 0x15f384u: goto label_15f384;
        case 0x15f388u: goto label_15f388;
        case 0x15f38cu: goto label_15f38c;
        case 0x15f390u: goto label_15f390;
        case 0x15f394u: goto label_15f394;
        case 0x15f398u: goto label_15f398;
        case 0x15f39cu: goto label_15f39c;
        case 0x15f3a0u: goto label_15f3a0;
        case 0x15f3a4u: goto label_15f3a4;
        case 0x15f3a8u: goto label_15f3a8;
        case 0x15f3acu: goto label_15f3ac;
        case 0x15f3b0u: goto label_15f3b0;
        case 0x15f3b4u: goto label_15f3b4;
        case 0x15f3b8u: goto label_15f3b8;
        case 0x15f3bcu: goto label_15f3bc;
        case 0x15f3c0u: goto label_15f3c0;
        case 0x15f3c4u: goto label_15f3c4;
        case 0x15f3c8u: goto label_15f3c8;
        case 0x15f3ccu: goto label_15f3cc;
        case 0x15f3d0u: goto label_15f3d0;
        case 0x15f3d4u: goto label_15f3d4;
        case 0x15f3d8u: goto label_15f3d8;
        case 0x15f3dcu: goto label_15f3dc;
        case 0x15f3e0u: goto label_15f3e0;
        case 0x15f3e4u: goto label_15f3e4;
        case 0x15f3e8u: goto label_15f3e8;
        case 0x15f3ecu: goto label_15f3ec;
        case 0x15f3f0u: goto label_15f3f0;
        case 0x15f3f4u: goto label_15f3f4;
        case 0x15f3f8u: goto label_15f3f8;
        case 0x15f3fcu: goto label_15f3fc;
        case 0x15f400u: goto label_15f400;
        case 0x15f404u: goto label_15f404;
        case 0x15f408u: goto label_15f408;
        case 0x15f40cu: goto label_15f40c;
        case 0x15f410u: goto label_15f410;
        case 0x15f414u: goto label_15f414;
        case 0x15f418u: goto label_15f418;
        case 0x15f41cu: goto label_15f41c;
        case 0x15f420u: goto label_15f420;
        case 0x15f424u: goto label_15f424;
        case 0x15f428u: goto label_15f428;
        case 0x15f42cu: goto label_15f42c;
        case 0x15f430u: goto label_15f430;
        case 0x15f434u: goto label_15f434;
        case 0x15f438u: goto label_15f438;
        case 0x15f43cu: goto label_15f43c;
        case 0x15f440u: goto label_15f440;
        case 0x15f444u: goto label_15f444;
        case 0x15f448u: goto label_15f448;
        case 0x15f44cu: goto label_15f44c;
        case 0x15f450u: goto label_15f450;
        case 0x15f454u: goto label_15f454;
        case 0x15f458u: goto label_15f458;
        case 0x15f45cu: goto label_15f45c;
        case 0x15f460u: goto label_15f460;
        case 0x15f464u: goto label_15f464;
        case 0x15f468u: goto label_15f468;
        case 0x15f46cu: goto label_15f46c;
        case 0x15f470u: goto label_15f470;
        case 0x15f474u: goto label_15f474;
        case 0x15f478u: goto label_15f478;
        case 0x15f47cu: goto label_15f47c;
        case 0x15f480u: goto label_15f480;
        case 0x15f484u: goto label_15f484;
        case 0x15f488u: goto label_15f488;
        case 0x15f48cu: goto label_15f48c;
        case 0x15f490u: goto label_15f490;
        case 0x15f494u: goto label_15f494;
        case 0x15f498u: goto label_15f498;
        case 0x15f49cu: goto label_15f49c;
        case 0x15f4a0u: goto label_15f4a0;
        case 0x15f4a4u: goto label_15f4a4;
        case 0x15f4a8u: goto label_15f4a8;
        case 0x15f4acu: goto label_15f4ac;
        case 0x15f4b0u: goto label_15f4b0;
        case 0x15f4b4u: goto label_15f4b4;
        case 0x15f4b8u: goto label_15f4b8;
        case 0x15f4bcu: goto label_15f4bc;
        case 0x15f4c0u: goto label_15f4c0;
        case 0x15f4c4u: goto label_15f4c4;
        case 0x15f4c8u: goto label_15f4c8;
        case 0x15f4ccu: goto label_15f4cc;
        case 0x15f4d0u: goto label_15f4d0;
        case 0x15f4d4u: goto label_15f4d4;
        case 0x15f4d8u: goto label_15f4d8;
        case 0x15f4dcu: goto label_15f4dc;
        case 0x15f4e0u: goto label_15f4e0;
        case 0x15f4e4u: goto label_15f4e4;
        case 0x15f4e8u: goto label_15f4e8;
        case 0x15f4ecu: goto label_15f4ec;
        case 0x15f4f0u: goto label_15f4f0;
        case 0x15f4f4u: goto label_15f4f4;
        case 0x15f4f8u: goto label_15f4f8;
        case 0x15f4fcu: goto label_15f4fc;
        case 0x15f500u: goto label_15f500;
        case 0x15f504u: goto label_15f504;
        case 0x15f508u: goto label_15f508;
        case 0x15f50cu: goto label_15f50c;
        case 0x15f510u: goto label_15f510;
        case 0x15f514u: goto label_15f514;
        case 0x15f518u: goto label_15f518;
        case 0x15f51cu: goto label_15f51c;
        case 0x15f520u: goto label_15f520;
        case 0x15f524u: goto label_15f524;
        case 0x15f528u: goto label_15f528;
        case 0x15f52cu: goto label_15f52c;
        case 0x15f530u: goto label_15f530;
        case 0x15f534u: goto label_15f534;
        case 0x15f538u: goto label_15f538;
        case 0x15f53cu: goto label_15f53c;
        case 0x15f540u: goto label_15f540;
        case 0x15f544u: goto label_15f544;
        case 0x15f548u: goto label_15f548;
        case 0x15f54cu: goto label_15f54c;
        case 0x15f550u: goto label_15f550;
        case 0x15f554u: goto label_15f554;
        case 0x15f558u: goto label_15f558;
        case 0x15f55cu: goto label_15f55c;
        case 0x15f560u: goto label_15f560;
        case 0x15f564u: goto label_15f564;
        case 0x15f568u: goto label_15f568;
        case 0x15f56cu: goto label_15f56c;
        case 0x15f570u: goto label_15f570;
        case 0x15f574u: goto label_15f574;
        case 0x15f578u: goto label_15f578;
        case 0x15f57cu: goto label_15f57c;
        case 0x15f580u: goto label_15f580;
        case 0x15f584u: goto label_15f584;
        case 0x15f588u: goto label_15f588;
        case 0x15f58cu: goto label_15f58c;
        case 0x15f590u: goto label_15f590;
        case 0x15f594u: goto label_15f594;
        case 0x15f598u: goto label_15f598;
        case 0x15f59cu: goto label_15f59c;
        case 0x15f5a0u: goto label_15f5a0;
        case 0x15f5a4u: goto label_15f5a4;
        case 0x15f5a8u: goto label_15f5a8;
        case 0x15f5acu: goto label_15f5ac;
        case 0x15f5b0u: goto label_15f5b0;
        case 0x15f5b4u: goto label_15f5b4;
        case 0x15f5b8u: goto label_15f5b8;
        case 0x15f5bcu: goto label_15f5bc;
        case 0x15f5c0u: goto label_15f5c0;
        case 0x15f5c4u: goto label_15f5c4;
        case 0x15f5c8u: goto label_15f5c8;
        case 0x15f5ccu: goto label_15f5cc;
        case 0x15f5d0u: goto label_15f5d0;
        case 0x15f5d4u: goto label_15f5d4;
        case 0x15f5d8u: goto label_15f5d8;
        case 0x15f5dcu: goto label_15f5dc;
        case 0x15f5e0u: goto label_15f5e0;
        case 0x15f5e4u: goto label_15f5e4;
        case 0x15f5e8u: goto label_15f5e8;
        case 0x15f5ecu: goto label_15f5ec;
        case 0x15f5f0u: goto label_15f5f0;
        case 0x15f5f4u: goto label_15f5f4;
        case 0x15f5f8u: goto label_15f5f8;
        case 0x15f5fcu: goto label_15f5fc;
        case 0x15f600u: goto label_15f600;
        case 0x15f604u: goto label_15f604;
        case 0x15f608u: goto label_15f608;
        case 0x15f60cu: goto label_15f60c;
        case 0x15f610u: goto label_15f610;
        case 0x15f614u: goto label_15f614;
        case 0x15f618u: goto label_15f618;
        case 0x15f61cu: goto label_15f61c;
        case 0x15f620u: goto label_15f620;
        case 0x15f624u: goto label_15f624;
        case 0x15f628u: goto label_15f628;
        case 0x15f62cu: goto label_15f62c;
        case 0x15f630u: goto label_15f630;
        case 0x15f634u: goto label_15f634;
        case 0x15f638u: goto label_15f638;
        case 0x15f63cu: goto label_15f63c;
        case 0x15f640u: goto label_15f640;
        case 0x15f644u: goto label_15f644;
        case 0x15f648u: goto label_15f648;
        case 0x15f64cu: goto label_15f64c;
        case 0x15f650u: goto label_15f650;
        case 0x15f654u: goto label_15f654;
        case 0x15f658u: goto label_15f658;
        case 0x15f65cu: goto label_15f65c;
        case 0x15f660u: goto label_15f660;
        case 0x15f664u: goto label_15f664;
        case 0x15f668u: goto label_15f668;
        case 0x15f66cu: goto label_15f66c;
        case 0x15f670u: goto label_15f670;
        case 0x15f674u: goto label_15f674;
        case 0x15f678u: goto label_15f678;
        case 0x15f67cu: goto label_15f67c;
        case 0x15f680u: goto label_15f680;
        case 0x15f684u: goto label_15f684;
        case 0x15f688u: goto label_15f688;
        case 0x15f68cu: goto label_15f68c;
        case 0x15f690u: goto label_15f690;
        case 0x15f694u: goto label_15f694;
        case 0x15f698u: goto label_15f698;
        case 0x15f69cu: goto label_15f69c;
        case 0x15f6a0u: goto label_15f6a0;
        case 0x15f6a4u: goto label_15f6a4;
        case 0x15f6a8u: goto label_15f6a8;
        case 0x15f6acu: goto label_15f6ac;
        case 0x15f6b0u: goto label_15f6b0;
        case 0x15f6b4u: goto label_15f6b4;
        case 0x15f6b8u: goto label_15f6b8;
        case 0x15f6bcu: goto label_15f6bc;
        case 0x15f6c0u: goto label_15f6c0;
        case 0x15f6c4u: goto label_15f6c4;
        case 0x15f6c8u: goto label_15f6c8;
        case 0x15f6ccu: goto label_15f6cc;
        case 0x15f6d0u: goto label_15f6d0;
        case 0x15f6d4u: goto label_15f6d4;
        case 0x15f6d8u: goto label_15f6d8;
        case 0x15f6dcu: goto label_15f6dc;
        case 0x15f6e0u: goto label_15f6e0;
        case 0x15f6e4u: goto label_15f6e4;
        case 0x15f6e8u: goto label_15f6e8;
        case 0x15f6ecu: goto label_15f6ec;
        case 0x15f6f0u: goto label_15f6f0;
        case 0x15f6f4u: goto label_15f6f4;
        case 0x15f6f8u: goto label_15f6f8;
        case 0x15f6fcu: goto label_15f6fc;
        case 0x15f700u: goto label_15f700;
        case 0x15f704u: goto label_15f704;
        case 0x15f708u: goto label_15f708;
        case 0x15f70cu: goto label_15f70c;
        case 0x15f710u: goto label_15f710;
        case 0x15f714u: goto label_15f714;
        case 0x15f718u: goto label_15f718;
        case 0x15f71cu: goto label_15f71c;
        case 0x15f720u: goto label_15f720;
        case 0x15f724u: goto label_15f724;
        case 0x15f728u: goto label_15f728;
        case 0x15f72cu: goto label_15f72c;
        case 0x15f730u: goto label_15f730;
        case 0x15f734u: goto label_15f734;
        case 0x15f738u: goto label_15f738;
        case 0x15f73cu: goto label_15f73c;
        case 0x15f740u: goto label_15f740;
        case 0x15f744u: goto label_15f744;
        case 0x15f748u: goto label_15f748;
        case 0x15f74cu: goto label_15f74c;
        case 0x15f750u: goto label_15f750;
        case 0x15f754u: goto label_15f754;
        case 0x15f758u: goto label_15f758;
        case 0x15f75cu: goto label_15f75c;
        case 0x15f760u: goto label_15f760;
        case 0x15f764u: goto label_15f764;
        case 0x15f768u: goto label_15f768;
        case 0x15f76cu: goto label_15f76c;
        case 0x15f770u: goto label_15f770;
        case 0x15f774u: goto label_15f774;
        case 0x15f778u: goto label_15f778;
        case 0x15f77cu: goto label_15f77c;
        case 0x15f780u: goto label_15f780;
        case 0x15f784u: goto label_15f784;
        case 0x15f788u: goto label_15f788;
        case 0x15f78cu: goto label_15f78c;
        case 0x15f790u: goto label_15f790;
        case 0x15f794u: goto label_15f794;
        case 0x15f798u: goto label_15f798;
        case 0x15f79cu: goto label_15f79c;
        case 0x15f7a0u: goto label_15f7a0;
        case 0x15f7a4u: goto label_15f7a4;
        case 0x15f7a8u: goto label_15f7a8;
        case 0x15f7acu: goto label_15f7ac;
        case 0x15f7b0u: goto label_15f7b0;
        case 0x15f7b4u: goto label_15f7b4;
        case 0x15f7b8u: goto label_15f7b8;
        case 0x15f7bcu: goto label_15f7bc;
        case 0x15f7c0u: goto label_15f7c0;
        case 0x15f7c4u: goto label_15f7c4;
        case 0x15f7c8u: goto label_15f7c8;
        case 0x15f7ccu: goto label_15f7cc;
        case 0x15f7d0u: goto label_15f7d0;
        case 0x15f7d4u: goto label_15f7d4;
        case 0x15f7d8u: goto label_15f7d8;
        case 0x15f7dcu: goto label_15f7dc;
        case 0x15f7e0u: goto label_15f7e0;
        case 0x15f7e4u: goto label_15f7e4;
        case 0x15f7e8u: goto label_15f7e8;
        case 0x15f7ecu: goto label_15f7ec;
        case 0x15f7f0u: goto label_15f7f0;
        case 0x15f7f4u: goto label_15f7f4;
        case 0x15f7f8u: goto label_15f7f8;
        case 0x15f7fcu: goto label_15f7fc;
        case 0x15f800u: goto label_15f800;
        case 0x15f804u: goto label_15f804;
        case 0x15f808u: goto label_15f808;
        case 0x15f80cu: goto label_15f80c;
        case 0x15f810u: goto label_15f810;
        case 0x15f814u: goto label_15f814;
        case 0x15f818u: goto label_15f818;
        case 0x15f81cu: goto label_15f81c;
        case 0x15f820u: goto label_15f820;
        case 0x15f824u: goto label_15f824;
        case 0x15f828u: goto label_15f828;
        case 0x15f82cu: goto label_15f82c;
        case 0x15f830u: goto label_15f830;
        case 0x15f834u: goto label_15f834;
        case 0x15f838u: goto label_15f838;
        case 0x15f83cu: goto label_15f83c;
        case 0x15f840u: goto label_15f840;
        case 0x15f844u: goto label_15f844;
        case 0x15f848u: goto label_15f848;
        case 0x15f84cu: goto label_15f84c;
        case 0x15f850u: goto label_15f850;
        case 0x15f854u: goto label_15f854;
        case 0x15f858u: goto label_15f858;
        case 0x15f85cu: goto label_15f85c;
        case 0x15f860u: goto label_15f860;
        case 0x15f864u: goto label_15f864;
        case 0x15f868u: goto label_15f868;
        case 0x15f86cu: goto label_15f86c;
        case 0x15f870u: goto label_15f870;
        case 0x15f874u: goto label_15f874;
        case 0x15f878u: goto label_15f878;
        case 0x15f87cu: goto label_15f87c;
        case 0x15f880u: goto label_15f880;
        case 0x15f884u: goto label_15f884;
        case 0x15f888u: goto label_15f888;
        case 0x15f88cu: goto label_15f88c;
        case 0x15f890u: goto label_15f890;
        case 0x15f894u: goto label_15f894;
        case 0x15f898u: goto label_15f898;
        case 0x15f89cu: goto label_15f89c;
        case 0x15f8a0u: goto label_15f8a0;
        case 0x15f8a4u: goto label_15f8a4;
        case 0x15f8a8u: goto label_15f8a8;
        case 0x15f8acu: goto label_15f8ac;
        case 0x15f8b0u: goto label_15f8b0;
        case 0x15f8b4u: goto label_15f8b4;
        case 0x15f8b8u: goto label_15f8b8;
        case 0x15f8bcu: goto label_15f8bc;
        case 0x15f8c0u: goto label_15f8c0;
        case 0x15f8c4u: goto label_15f8c4;
        case 0x15f8c8u: goto label_15f8c8;
        case 0x15f8ccu: goto label_15f8cc;
        case 0x15f8d0u: goto label_15f8d0;
        case 0x15f8d4u: goto label_15f8d4;
        case 0x15f8d8u: goto label_15f8d8;
        case 0x15f8dcu: goto label_15f8dc;
        case 0x15f8e0u: goto label_15f8e0;
        case 0x15f8e4u: goto label_15f8e4;
        case 0x15f8e8u: goto label_15f8e8;
        case 0x15f8ecu: goto label_15f8ec;
        case 0x15f8f0u: goto label_15f8f0;
        case 0x15f8f4u: goto label_15f8f4;
        case 0x15f8f8u: goto label_15f8f8;
        case 0x15f8fcu: goto label_15f8fc;
        case 0x15f900u: goto label_15f900;
        case 0x15f904u: goto label_15f904;
        case 0x15f908u: goto label_15f908;
        case 0x15f90cu: goto label_15f90c;
        case 0x15f910u: goto label_15f910;
        case 0x15f914u: goto label_15f914;
        case 0x15f918u: goto label_15f918;
        case 0x15f91cu: goto label_15f91c;
        case 0x15f920u: goto label_15f920;
        case 0x15f924u: goto label_15f924;
        case 0x15f928u: goto label_15f928;
        case 0x15f92cu: goto label_15f92c;
        case 0x15f930u: goto label_15f930;
        case 0x15f934u: goto label_15f934;
        case 0x15f938u: goto label_15f938;
        case 0x15f93cu: goto label_15f93c;
        case 0x15f940u: goto label_15f940;
        case 0x15f944u: goto label_15f944;
        case 0x15f948u: goto label_15f948;
        case 0x15f94cu: goto label_15f94c;
        case 0x15f950u: goto label_15f950;
        case 0x15f954u: goto label_15f954;
        case 0x15f958u: goto label_15f958;
        case 0x15f95cu: goto label_15f95c;
        case 0x15f960u: goto label_15f960;
        case 0x15f964u: goto label_15f964;
        case 0x15f968u: goto label_15f968;
        case 0x15f96cu: goto label_15f96c;
        case 0x15f970u: goto label_15f970;
        case 0x15f974u: goto label_15f974;
        case 0x15f978u: goto label_15f978;
        case 0x15f97cu: goto label_15f97c;
        case 0x15f980u: goto label_15f980;
        case 0x15f984u: goto label_15f984;
        case 0x15f988u: goto label_15f988;
        case 0x15f98cu: goto label_15f98c;
        default: break;
    }

    ctx->pc = 0x15ec70u;

label_15ec70:
    // 0x15ec70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15ec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_15ec74:
    // 0x15ec74: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x15ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_15ec78:
    // 0x15ec78: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x15ec78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_15ec7c:
    // 0x15ec7c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15ec7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15ec80:
    // 0x15ec80: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15ec80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_15ec84:
    // 0x15ec84: 0x2442aa08  addiu       $v0, $v0, -0x55F8
    ctx->pc = 0x15ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945288));
label_15ec88:
    // 0x15ec88: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15ec88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_15ec8c:
    // 0x15ec8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15ec8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ec90:
    // 0x15ec90: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x15ec90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_15ec94:
    // 0x15ec94: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x15ec94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_15ec98:
    // 0x15ec98: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x15ec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_15ec9c:
    // 0x15ec9c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x15ec9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_15eca0:
    // 0x15eca0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x15eca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_15eca4:
    // 0x15eca4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x15eca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_15eca8:
    // 0x15eca8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x15eca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_15ecac:
    // 0x15ecac: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x15ecacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_15ecb0:
    // 0x15ecb0: 0x96a3001e  lhu         $v1, 0x1E($s5)
    ctx->pc = 0x15ecb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 30)));
label_15ecb4:
    // 0x15ecb4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x15ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_15ecb8:
    // 0x15ecb8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x15ecb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15ecbc:
    // 0x15ecbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15ecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15ecc0:
    // 0x15ecc0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x15ecc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_15ecc4:
    // 0x15ecc4: 0x8c7e0000  lw          $fp, 0x0($v1)
    ctx->pc = 0x15ecc4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15ecc8:
    // 0x15ecc8: 0x10a60005  beq         $a1, $a2, . + 4 + (0x5 << 2)
label_15eccc:
    if (ctx->pc == 0x15ECCCu) {
        ctx->pc = 0x15ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ECC8u;
        // 0x15eccc: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ECD0u;
        goto label_15ecd0;
    }
    ctx->pc = 0x15ECC8u;
    {
        const bool branch_taken_0x15ecc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x15ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ECC8u;
        // 0x15eccc: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ecc8) {
            ctx->pc = 0x15ECE0u;
            goto label_15ece0;
        }
    }
    ctx->pc = 0x15ECD0u;
label_15ecd0:
    // 0x15ecd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15ecd4:
    // 0x15ecd4: 0x38a20007  xori        $v0, $a1, 0x7
    ctx->pc = 0x15ecd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)7);
label_15ecd8:
    // 0x15ecd8: 0x10000002  b           . + 4 + (0x2 << 2)
label_15ecdc:
    if (ctx->pc == 0x15ECDCu) {
        ctx->pc = 0x15ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ECD8u;
        // 0x15ecdc: 0xc2180b  movn        $v1, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ECE0u;
        goto label_15ece0;
    }
    ctx->pc = 0x15ECD8u;
    {
        const bool branch_taken_0x15ecd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ECD8u;
        // 0x15ecdc: 0xc2180b  movn        $v1, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ecd8) {
            ctx->pc = 0x15ECE4u;
            goto label_15ece4;
        }
    }
    ctx->pc = 0x15ECE0u;
label_15ece0:
    // 0x15ece0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15ece0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15ece4:
    // 0x15ece4: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x15ece4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
label_15ece8:
    // 0x15ece8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15ece8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15ecec:
    // 0x15ecec: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x15ececu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_15ecf0:
    // 0x15ecf0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x15ecf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_15ecf4:
    // 0x15ecf4: 0xaea50f24  sw          $a1, 0xF24($s5)
    ctx->pc = 0x15ecf4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3876), GPR_U32(ctx, 5));
label_15ecf8:
    // 0x15ecf8: 0x0  nop
    ctx->pc = 0x15ecf8u;
    // NOP
label_15ecfc:
    // 0x15ecfc: 0x0  nop
    ctx->pc = 0x15ecfcu;
    // NOP
label_15ed00:
    // 0x15ed00: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x15ed00u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
label_15ed04:
    // 0x15ed04: 0xaea30f20  sw          $v1, 0xF20($s5)
    ctx->pc = 0x15ed04u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3872), GPR_U32(ctx, 3));
label_15ed08:
    // 0x15ed08: 0x1040030d  beqz        $v0, . + 4 + (0x30D << 2)
label_15ed0c:
    if (ctx->pc == 0x15ED0Cu) {
        ctx->pc = 0x15ED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED08u;
        // 0x15ed0c: 0xe6a00fc4  swc1        $f0, 0xFC4($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4036), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED10u;
        goto label_15ed10;
    }
    ctx->pc = 0x15ED08u;
    {
        const bool branch_taken_0x15ed08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED08u;
        // 0x15ed0c: 0xe6a00fc4  swc1        $f0, 0xFC4($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4036), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed08) {
            ctx->pc = 0x15F940u;
            goto label_15f940;
        }
    }
    ctx->pc = 0x15ED10u;
label_15ed10:
    // 0x15ed10: 0x96a20014  lhu         $v0, 0x14($s5)
    ctx->pc = 0x15ed10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 20)));
label_15ed14:
    // 0x15ed14: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x15ed14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_15ed18:
    // 0x15ed18: 0x5040030a  beql        $v0, $zero, . + 4 + (0x30A << 2)
label_15ed1c:
    if (ctx->pc == 0x15ED1Cu) {
        ctx->pc = 0x15ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED18u;
        // 0x15ed1c: 0x96a20014  lhu         $v0, 0x14($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED20u;
        goto label_15ed20;
    }
    ctx->pc = 0x15ED18u;
    {
        const bool branch_taken_0x15ed18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ed18) {
            ctx->pc = 0x15ED1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15ED18u;
            // 0x15ed1c: 0x96a20014  lhu         $v0, 0x14($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F944u;
            goto label_15f944;
        }
    }
    ctx->pc = 0x15ED20u;
label_15ed20:
    // 0x15ed20: 0x96a2001e  lhu         $v0, 0x1E($s5)
    ctx->pc = 0x15ed20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 30)));
label_15ed24:
    // 0x15ed24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15ed28:
    if (ctx->pc == 0x15ED28u) {
        ctx->pc = 0x15ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED24u;
        // 0x15ed28: 0x24026000  addiu       $v0, $zero, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED2Cu;
        goto label_15ed2c;
    }
    ctx->pc = 0x15ED24u;
    {
        const bool branch_taken_0x15ed24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED24u;
        // 0x15ed28: 0x24026000  addiu       $v0, $zero, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed24) {
            ctx->pc = 0x15ED3Cu;
            goto label_15ed3c;
        }
    }
    ctx->pc = 0x15ED2Cu;
label_15ed2c:
    // 0x15ed2c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x15ed2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_15ed30:
    // 0x15ed30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15ed30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15ed34:
    // 0x15ed34: 0xaea20fc8  sw          $v0, 0xFC8($s5)
    ctx->pc = 0x15ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4040), GPR_U32(ctx, 2));
label_15ed38:
    // 0x15ed38: 0xe6a00fcc  swc1        $f0, 0xFCC($s5)
    ctx->pc = 0x15ed38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4044), bits); }
label_15ed3c:
    // 0x15ed3c: 0x8ea30f20  lw          $v1, 0xF20($s5)
    ctx->pc = 0x15ed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3872)));
label_15ed40:
    // 0x15ed40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15ed44:
    // 0x15ed44: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_15ed48:
    if (ctx->pc == 0x15ED48u) {
        ctx->pc = 0x15ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED44u;
        // 0x15ed48: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED4Cu;
        goto label_15ed4c;
    }
    ctx->pc = 0x15ED44u;
    {
        const bool branch_taken_0x15ed44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED44u;
        // 0x15ed48: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed44) {
            ctx->pc = 0x15ED88u;
            goto label_15ed88;
        }
    }
    ctx->pc = 0x15ED4Cu;
label_15ed4c:
    // 0x15ed4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_15ed50:
    if (ctx->pc == 0x15ED50u) {
        ctx->pc = 0x15ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED4Cu;
        // 0x15ed50: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED54u;
        goto label_15ed54;
    }
    ctx->pc = 0x15ED4Cu;
    {
        const bool branch_taken_0x15ed4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED4Cu;
        // 0x15ed50: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed4c) {
            ctx->pc = 0x15ED68u;
            goto label_15ed68;
        }
    }
    ctx->pc = 0x15ED54u;
label_15ed54:
    // 0x15ed54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ed58:
    // 0x15ed58: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_15ed5c:
    if (ctx->pc == 0x15ED5Cu) {
        ctx->pc = 0x15ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED58u;
        // 0x15ed5c: 0x8ea30010  lw          $v1, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED60u;
        goto label_15ed60;
    }
    ctx->pc = 0x15ED58u;
    {
        const bool branch_taken_0x15ed58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15ed58) {
            ctx->pc = 0x15ED5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15ED58u;
            // 0x15ed5c: 0x8ea30010  lw          $v1, 0x10($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15ED78u;
            goto label_15ed78;
        }
    }
    ctx->pc = 0x15ED60u;
label_15ed60:
    // 0x15ed60: 0x100001e6  b           . + 4 + (0x1E6 << 2)
label_15ed64:
    if (ctx->pc == 0x15ED64u) {
        ctx->pc = 0x15ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED60u;
        // 0x15ed64: 0x8ea20fc8  lw          $v0, 0xFC8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4040)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED68u;
        goto label_15ed68;
    }
    ctx->pc = 0x15ED60u;
    {
        const bool branch_taken_0x15ed60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED60u;
        // 0x15ed64: 0x8ea20fc8  lw          $v0, 0xFC8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed60) {
            ctx->pc = 0x15F4FCu;
            goto label_15f4fc;
        }
    }
    ctx->pc = 0x15ED68u;
label_15ed68:
    // 0x15ed68: 0x506200f7  beql        $v1, $v0, . + 4 + (0xF7 << 2)
label_15ed6c:
    if (ctx->pc == 0x15ED6Cu) {
        ctx->pc = 0x15ED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED68u;
        // 0x15ed6c: 0x8ea30010  lw          $v1, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED70u;
        goto label_15ed70;
    }
    ctx->pc = 0x15ED68u;
    {
        const bool branch_taken_0x15ed68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15ed68) {
            ctx->pc = 0x15ED6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15ED68u;
            // 0x15ed6c: 0x8ea30010  lw          $v1, 0x10($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F148u;
            goto label_15f148;
        }
    }
    ctx->pc = 0x15ED70u;
label_15ed70:
    // 0x15ed70: 0x100001e2  b           . + 4 + (0x1E2 << 2)
label_15ed74:
    if (ctx->pc == 0x15ED74u) {
        ctx->pc = 0x15ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED70u;
        // 0x15ed74: 0x8ea20fc8  lw          $v0, 0xFC8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4040)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED78u;
        goto label_15ed78;
    }
    ctx->pc = 0x15ED70u;
    {
        const bool branch_taken_0x15ed70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED70u;
        // 0x15ed74: 0x8ea20fc8  lw          $v0, 0xFC8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed70) {
            ctx->pc = 0x15F4FCu;
            goto label_15f4fc;
        }
    }
    ctx->pc = 0x15ED78u;
label_15ed78:
    // 0x15ed78: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x15ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_15ed7c:
    // 0x15ed7c: 0x10000005  b           . + 4 + (0x5 << 2)
label_15ed80:
    if (ctx->pc == 0x15ED80u) {
        ctx->pc = 0x15ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED7Cu;
        // 0x15ed80: 0x2454a878  addiu       $s4, $v0, -0x5788 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944888));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED84u;
        goto label_15ed84;
    }
    ctx->pc = 0x15ED7Cu;
    {
        const bool branch_taken_0x15ed7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED7Cu;
        // 0x15ed80: 0x2454a878  addiu       $s4, $v0, -0x5788 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed7c) {
            ctx->pc = 0x15ED94u;
            goto label_15ed94;
        }
    }
    ctx->pc = 0x15ED84u;
label_15ed84:
    // 0x15ed84: 0x0  nop
    ctx->pc = 0x15ed84u;
    // NOP
label_15ed88:
    // 0x15ed88: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x15ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_15ed8c:
    // 0x15ed8c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x15ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_15ed90:
    // 0x15ed90: 0x2454a8a0  addiu       $s4, $v0, -0x5760
    ctx->pc = 0x15ed90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944928));
label_15ed94:
    // 0x15ed94: 0x8c700024  lw          $s0, 0x24($v1)
    ctx->pc = 0x15ed94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15ed98:
    // 0x15ed98: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15ed98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15ed9c:
    // 0x15ed9c: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15ed9cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15eda0:
    // 0x15eda0: 0xc06bd28  jal         func_1AF4A0
label_15eda4:
    if (ctx->pc == 0x15EDA4u) {
        ctx->pc = 0x15EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDA0u;
        // 0x15eda4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EDA8u;
        goto label_15eda8;
    }
    ctx->pc = 0x15EDA0u;
    SET_GPR_U32(ctx, 31, 0x15EDA8u);
    ctx->pc = 0x15EDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDA0u;
    // 0x15eda4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15EDA0u, 0x15EDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EDA8u;
label_15eda8:
    // 0x15eda8: 0xc06bd20  jal         func_1AF480
label_15edac:
    if (ctx->pc == 0x15EDACu) {
        ctx->pc = 0x15EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDA8u;
        // 0x15edac: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EDB0u;
        goto label_15edb0;
    }
    ctx->pc = 0x15EDA8u;
    SET_GPR_U32(ctx, 31, 0x15EDB0u);
    ctx->pc = 0x15EDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDA8u;
    // 0x15edac: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15EDA8u, 0x15EDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EDB0u;
label_15edb0:
    // 0x15edb0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15edb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15edb4:
    // 0x15edb4: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x15edb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_15edb8:
    // 0x15edb8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15edbc:
    // 0x15edbc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15edbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15edc0:
    // 0x15edc0: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15edc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15edc4:
    // 0x15edc4: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x15edc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_15edc8:
    // 0x15edc8: 0xc0682b2  jal         func_1A0AC8
label_15edcc:
    if (ctx->pc == 0x15EDCCu) {
        ctx->pc = 0x15EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDC8u;
        // 0x15edcc: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EDD0u;
        goto label_15edd0;
    }
    ctx->pc = 0x15EDC8u;
    SET_GPR_U32(ctx, 31, 0x15EDD0u);
    ctx->pc = 0x15EDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDC8u;
    // 0x15edcc: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15EDC8u, 0x15EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EDD0u;
label_15edd0:
    // 0x15edd0: 0xc0682b6  jal         func_1A0AD8
label_15edd4:
    if (ctx->pc == 0x15EDD4u) {
        ctx->pc = 0x15EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDD0u;
        // 0x15edd4: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EDD8u;
        goto label_15edd8;
    }
    ctx->pc = 0x15EDD0u;
    SET_GPR_U32(ctx, 31, 0x15EDD8u);
    ctx->pc = 0x15EDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDD0u;
    // 0x15edd4: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15EDD0u, 0x15EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EDD8u;
label_15edd8:
    // 0x15edd8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15edd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15eddc:
    // 0x15eddc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15eddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ede0:
    // 0x15ede0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15ede4:
    // 0x15ede4: 0x245601c0  addiu       $s6, $v0, 0x1C0
    ctx->pc = 0x15ede4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_15ede8:
    // 0x15ede8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x15ede8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_15edec:
    // 0x15edec: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x15edecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_15edf0:
    // 0x15edf0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15edf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15edf4:
    // 0x15edf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15edf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15edf8:
    // 0x15edf8: 0xc062cb0  jal         func_18B2C0
label_15edfc:
    if (ctx->pc == 0x15EDFCu) {
        ctx->pc = 0x15EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDF8u;
        // 0x15edfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE00u;
        goto label_15ee00;
    }
    ctx->pc = 0x15EDF8u;
    SET_GPR_U32(ctx, 31, 0x15EE00u);
    ctx->pc = 0x15EDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDF8u;
    // 0x15edfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15EDF8u, 0x15EE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EE00u;
label_15ee00:
    // 0x15ee00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15ee00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15ee04:
    // 0x15ee04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15ee04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ee08:
    // 0x15ee08: 0xc06825c  jal         func_1A0970
label_15ee0c:
    if (ctx->pc == 0x15EE0Cu) {
        ctx->pc = 0x15EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE08u;
        // 0x15ee0c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE10u;
        goto label_15ee10;
    }
    ctx->pc = 0x15EE08u;
    SET_GPR_U32(ctx, 31, 0x15EE10u);
    ctx->pc = 0x15EE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EE08u;
    // 0x15ee0c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15EE08u, 0x15EE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EE10u;
label_15ee10:
    // 0x15ee10: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15ee14:
    // 0x15ee14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15ee14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ee18:
    // 0x15ee18: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15ee1c:
    // 0x15ee1c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ee1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ee20:
    // 0x15ee20: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ee20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ee24:
    // 0x15ee24: 0x60f809  jalr        $v1
label_15ee28:
    if (ctx->pc == 0x15EE28u) {
        ctx->pc = 0x15EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE24u;
        // 0x15ee28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE2Cu;
        goto label_15ee2c;
    }
    ctx->pc = 0x15EE24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15EE2Cu);
        ctx->pc = 0x15EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE24u;
        // 0x15ee28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EE24u, 0x15EE2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EE2Cu;
label_15ee2c:
    // 0x15ee2c: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15ee2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15ee30:
    // 0x15ee30: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15ee34:
    if (ctx->pc == 0x15EE34u) {
        ctx->pc = 0x15EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE30u;
        // 0x15ee34: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE38u;
        goto label_15ee38;
    }
    ctx->pc = 0x15EE30u;
    {
        const bool branch_taken_0x15ee30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE30u;
        // 0x15ee34: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ee30) {
            ctx->pc = 0x15EEECu;
            goto label_15eeec;
        }
    }
    ctx->pc = 0x15EE38u;
label_15ee38:
    // 0x15ee38: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15ee38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15ee3c:
    // 0x15ee3c: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15ee3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15ee40:
    // 0x15ee40: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15ee40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15ee44:
    // 0x15ee44: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15ee44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15ee48:
    // 0x15ee48: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15ee4c:
    // 0x15ee4c: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15ee4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15ee50:
    // 0x15ee50: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15ee50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15ee54:
    // 0x15ee54: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15ee54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15ee58:
    // 0x15ee58: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15ee58u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15ee5c:
    // 0x15ee5c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15ee60:
    // 0x15ee60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15ee60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15ee64:
    // 0x15ee64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15ee64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15ee68:
    // 0x15ee68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15ee68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15ee6c:
    // 0x15ee6c: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15ee6cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15ee70:
    // 0x15ee70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15ee70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15ee74:
    // 0x15ee74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15ee74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15ee78:
    // 0x15ee78: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15ee78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15ee7c:
    // 0x15ee7c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15ee7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15ee80:
    // 0x15ee80: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15ee80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15ee84:
    // 0x15ee84: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15ee84u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15ee88:
    // 0x15ee88: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15ee88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15ee8c:
    // 0x15ee8c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15ee8cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15ee90:
    // 0x15ee90: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15ee90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15ee94:
    // 0x15ee94: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15ee94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15ee98:
    // 0x15ee98: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15ee98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15ee9c:
    // 0x15ee9c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15ee9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15eea0:
    // 0x15eea0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15eea0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15eea4:
    // 0x15eea4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15eea4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15eea8:
    // 0x15eea8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15eea8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15eeac:
    // 0x15eeac: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15eeacu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15eeb0:
    // 0x15eeb0: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15eeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15eeb4:
    // 0x15eeb4: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15eeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15eeb8:
    // 0x15eeb8: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15eeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15eebc:
    // 0x15eebc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15eebcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15eec0:
    // 0x15eec0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15eec0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15eec4:
    // 0x15eec4: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15eec4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15eec8:
    // 0x15eec8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15eec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15eecc:
    // 0x15eecc: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15eeccu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15eed0:
    // 0x15eed0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15eed0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15eed4:
    // 0x15eed4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15eed4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15eed8:
    // 0x15eed8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15eed8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15eedc:
    // 0x15eedc: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15eedcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15eee0:
    // 0x15eee0: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15eee0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15eee4:
    // 0x15eee4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15eee4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15eee8:
    // 0x15eee8: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15eee8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_15eeec:
    // 0x15eeec: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15eeecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15eef0:
    // 0x15eef0: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15eef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15eef4:
    // 0x15eef4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x15eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15eef8:
    // 0x15eef8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15eef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15eefc:
    // 0x15eefc: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x15eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15ef00:
    // 0x15ef00: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x15ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_15ef04:
    // 0x15ef04: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15ef04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15ef08:
    // 0x15ef08: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15ef08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15ef0c:
    // 0x15ef0c: 0xae02012c  sw          $v0, 0x12C($s0)
    ctx->pc = 0x15ef0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
label_15ef10:
    // 0x15ef10: 0xaeb00f30  sw          $s0, 0xF30($s5)
    ctx->pc = 0x15ef10u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3888), GPR_U32(ctx, 16));
label_15ef14:
    // 0x15ef14: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x15ef14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15ef18:
    // 0x15ef18: 0x40f809  jalr        $v0
label_15ef1c:
    if (ctx->pc == 0x15EF1Cu) {
        ctx->pc = 0x15EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF18u;
        // 0x15ef1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF20u;
        goto label_15ef20;
    }
    ctx->pc = 0x15EF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15EF20u);
        ctx->pc = 0x15EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF18u;
        // 0x15ef1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EF18u, 0x15EF20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EF20u;
label_15ef20:
    // 0x15ef20: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x15ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15ef24:
    // 0x15ef24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15ef28:
    // 0x15ef28: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x15ef28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15ef2c:
    // 0x15ef2c: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15ef2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15ef30:
    // 0x15ef30: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15ef30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15ef34:
    // 0x15ef34: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15ef34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15ef38:
    // 0x15ef38: 0x26940078  addiu       $s4, $s4, 0x78
    ctx->pc = 0x15ef38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 120));
label_15ef3c:
    // 0x15ef3c: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x15ef3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15ef40:
    // 0x15ef40: 0x3c52821  addu        $a1, $fp, $a1
    ctx->pc = 0x15ef40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_15ef44:
    // 0x15ef44: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x15ef44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_15ef48:
    // 0x15ef48: 0xe0f809  jalr        $a3
label_15ef4c:
    if (ctx->pc == 0x15EF4Cu) {
        ctx->pc = 0x15EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF48u;
        // 0x15ef4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF50u;
        goto label_15ef50;
    }
    ctx->pc = 0x15EF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x15EF50u);
        ctx->pc = 0x15EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF48u;
        // 0x15ef4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EF48u, 0x15EF50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EF50u;
label_15ef50:
    // 0x15ef50: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x15ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_15ef54:
    // 0x15ef54: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15ef54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15ef58:
    // 0x15ef58: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15ef58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15ef5c:
    // 0x15ef5c: 0x8c510024  lw          $s1, 0x24($v0)
    ctx->pc = 0x15ef5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_15ef60:
    // 0x15ef60: 0xc06bd28  jal         func_1AF4A0
label_15ef64:
    if (ctx->pc == 0x15EF64u) {
        ctx->pc = 0x15EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF60u;
        // 0x15ef64: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF68u;
        goto label_15ef68;
    }
    ctx->pc = 0x15EF60u;
    SET_GPR_U32(ctx, 31, 0x15EF68u);
    ctx->pc = 0x15EF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EF60u;
    // 0x15ef64: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15EF60u, 0x15EF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EF68u;
label_15ef68:
    // 0x15ef68: 0xc06bd20  jal         func_1AF480
label_15ef6c:
    if (ctx->pc == 0x15EF6Cu) {
        ctx->pc = 0x15EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF68u;
        // 0x15ef6c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF70u;
        goto label_15ef70;
    }
    ctx->pc = 0x15EF68u;
    SET_GPR_U32(ctx, 31, 0x15EF70u);
    ctx->pc = 0x15EF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EF68u;
    // 0x15ef6c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15EF68u, 0x15EF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EF70u;
label_15ef70:
    // 0x15ef70: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15ef70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15ef74:
    // 0x15ef74: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x15ef74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_15ef78:
    // 0x15ef78: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15ef78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15ef7c:
    // 0x15ef7c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15ef80:
    // 0x15ef80: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15ef80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15ef84:
    // 0x15ef84: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x15ef84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_15ef88:
    // 0x15ef88: 0xc0682b2  jal         func_1A0AC8
label_15ef8c:
    if (ctx->pc == 0x15EF8Cu) {
        ctx->pc = 0x15EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF88u;
        // 0x15ef8c: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF90u;
        goto label_15ef90;
    }
    ctx->pc = 0x15EF88u;
    SET_GPR_U32(ctx, 31, 0x15EF90u);
    ctx->pc = 0x15EF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EF88u;
    // 0x15ef8c: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15EF88u, 0x15EF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EF90u;
label_15ef90:
    // 0x15ef90: 0xc0682b6  jal         func_1A0AD8
label_15ef94:
    if (ctx->pc == 0x15EF94u) {
        ctx->pc = 0x15EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF90u;
        // 0x15ef94: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF98u;
        goto label_15ef98;
    }
    ctx->pc = 0x15EF90u;
    SET_GPR_U32(ctx, 31, 0x15EF98u);
    ctx->pc = 0x15EF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EF90u;
    // 0x15ef94: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15EF90u, 0x15EF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EF98u;
label_15ef98:
    // 0x15ef98: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15ef98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15ef9c:
    // 0x15ef9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15ef9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15efa0:
    // 0x15efa0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15efa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15efa4:
    // 0x15efa4: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x15efa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_15efa8:
    // 0x15efa8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15efa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15efac:
    // 0x15efac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15efacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15efb0:
    // 0x15efb0: 0xc062cb0  jal         func_18B2C0
label_15efb4:
    if (ctx->pc == 0x15EFB4u) {
        ctx->pc = 0x15EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFB0u;
        // 0x15efb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EFB8u;
        goto label_15efb8;
    }
    ctx->pc = 0x15EFB0u;
    SET_GPR_U32(ctx, 31, 0x15EFB8u);
    ctx->pc = 0x15EFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EFB0u;
    // 0x15efb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15EFB0u, 0x15EFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EFB8u;
label_15efb8:
    // 0x15efb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15efb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15efbc:
    // 0x15efbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15efbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15efc0:
    // 0x15efc0: 0xc06825c  jal         func_1A0970
label_15efc4:
    if (ctx->pc == 0x15EFC4u) {
        ctx->pc = 0x15EFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFC0u;
        // 0x15efc4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EFC8u;
        goto label_15efc8;
    }
    ctx->pc = 0x15EFC0u;
    SET_GPR_U32(ctx, 31, 0x15EFC8u);
    ctx->pc = 0x15EFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EFC0u;
    // 0x15efc4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15EFC0u, 0x15EFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EFC8u;
label_15efc8:
    // 0x15efc8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15efcc:
    // 0x15efcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15efccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15efd0:
    // 0x15efd0: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15efd4:
    // 0x15efd4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15efd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15efd8:
    // 0x15efd8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15efdc:
    // 0x15efdc: 0x60f809  jalr        $v1
label_15efe0:
    if (ctx->pc == 0x15EFE0u) {
        ctx->pc = 0x15EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFDCu;
        // 0x15efe0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EFE4u;
        goto label_15efe4;
    }
    ctx->pc = 0x15EFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15EFE4u);
        ctx->pc = 0x15EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFDCu;
        // 0x15efe0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EFDCu, 0x15EFE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EFE4u;
label_15efe4:
    // 0x15efe4: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15efe4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15efe8:
    // 0x15efe8: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15efec:
    if (ctx->pc == 0x15EFECu) {
        ctx->pc = 0x15EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFE8u;
        // 0x15efec: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EFF0u;
        goto label_15eff0;
    }
    ctx->pc = 0x15EFE8u;
    {
        const bool branch_taken_0x15efe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFE8u;
        // 0x15efec: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15efe8) {
            ctx->pc = 0x15F0A4u;
            goto label_15f0a4;
        }
    }
    ctx->pc = 0x15EFF0u;
label_15eff0:
    // 0x15eff0: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15eff0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15eff4:
    // 0x15eff4: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15eff4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15eff8:
    // 0x15eff8: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15eff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15effc:
    // 0x15effc: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15effcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15f000:
    // 0x15f000: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15f000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15f004:
    // 0x15f004: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15f004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15f008:
    // 0x15f008: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15f008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15f00c:
    // 0x15f00c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15f00cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15f010:
    // 0x15f010: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15f010u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15f014:
    // 0x15f014: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15f014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15f018:
    // 0x15f018: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15f01c:
    // 0x15f01c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15f01cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15f020:
    // 0x15f020: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15f020u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15f024:
    // 0x15f024: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15f024u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15f028:
    // 0x15f028: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15f028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15f02c:
    // 0x15f02c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15f02cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15f030:
    // 0x15f030: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15f030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15f034:
    // 0x15f034: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15f034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15f038:
    // 0x15f038: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15f038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15f03c:
    // 0x15f03c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15f03cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15f040:
    // 0x15f040: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15f040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15f044:
    // 0x15f044: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15f044u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15f048:
    // 0x15f048: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15f048u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15f04c:
    // 0x15f04c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15f04cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15f050:
    // 0x15f050: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15f050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15f054:
    // 0x15f054: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15f054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15f058:
    // 0x15f058: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15f058u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15f05c:
    // 0x15f05c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15f05cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15f060:
    // 0x15f060: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15f060u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15f064:
    // 0x15f064: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15f064u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15f068:
    // 0x15f068: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15f068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15f06c:
    // 0x15f06c: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15f06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15f070:
    // 0x15f070: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15f070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15f074:
    // 0x15f074: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15f074u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15f078:
    // 0x15f078: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15f078u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15f07c:
    // 0x15f07c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15f07cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15f080:
    // 0x15f080: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15f080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15f084:
    // 0x15f084: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15f084u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15f088:
    // 0x15f088: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15f088u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15f08c:
    // 0x15f08c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15f08cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15f090:
    // 0x15f090: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15f090u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15f094:
    // 0x15f094: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15f094u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15f098:
    // 0x15f098: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15f098u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15f09c:
    // 0x15f09c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15f09cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15f0a0:
    // 0x15f0a0: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15f0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_15f0a4:
    // 0x15f0a4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15f0a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f0a8:
    // 0x15f0a8: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x15f0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_15f0ac:
    // 0x15f0ac: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f0b0:
    // 0x15f0b0: 0xaeb00f34  sw          $s0, 0xF34($s5)
    ctx->pc = 0x15f0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3892), GPR_U32(ctx, 16));
label_15f0b4:
    // 0x15f0b4: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x15f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
label_15f0b8:
    // 0x15f0b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f0b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f0bc:
    // 0x15f0bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f0c0:
    // 0x15f0c0: 0x60f809  jalr        $v1
label_15f0c4:
    if (ctx->pc == 0x15F0C4u) {
        ctx->pc = 0x15F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0C0u;
        // 0x15f0c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F0C8u;
        goto label_15f0c8;
    }
    ctx->pc = 0x15F0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F0C8u);
        ctx->pc = 0x15F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0C0u;
        // 0x15f0c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F0C0u, 0x15F0C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F0C8u;
label_15f0c8:
    // 0x15f0c8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f0cc:
    // 0x15f0cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15f0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15f0d0:
    // 0x15f0d0: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x15f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_15f0d4:
    // 0x15f0d4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f0d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f0d8:
    // 0x15f0d8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f0dc:
    // 0x15f0dc: 0x60f809  jalr        $v1
label_15f0e0:
    if (ctx->pc == 0x15F0E0u) {
        ctx->pc = 0x15F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0DCu;
        // 0x15f0e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F0E4u;
        goto label_15f0e4;
    }
    ctx->pc = 0x15F0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F0E4u);
        ctx->pc = 0x15F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0DCu;
        // 0x15f0e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F0DCu, 0x15F0E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F0E4u;
label_15f0e4:
    // 0x15f0e4: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15f0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15f0e8:
    // 0x15f0e8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f0ec:
    // 0x15f0ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15f0ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f0f0:
    // 0x15f0f0: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x15f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15f0f4:
    // 0x15f0f4: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x15f0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_15f0f8:
    // 0x15f0f8: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15f0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15f0fc:
    // 0x15f0fc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f0fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f100:
    // 0x15f100: 0xae03012c  sw          $v1, 0x12C($s0)
    ctx->pc = 0x15f100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
label_15f104:
    // 0x15f104: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f108:
    // 0x15f108: 0x60f809  jalr        $v1
label_15f10c:
    if (ctx->pc == 0x15F10Cu) {
        ctx->pc = 0x15F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F108u;
        // 0x15f10c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F110u;
        goto label_15f110;
    }
    ctx->pc = 0x15F108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F110u);
        ctx->pc = 0x15F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F108u;
        // 0x15f10c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F108u, 0x15F110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F110u;
label_15f110:
    // 0x15f110: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f114:
    // 0x15f114: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15f114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15f118:
    // 0x15f118: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x15f118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_15f11c:
    // 0x15f11c: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15f11cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15f120:
    // 0x15f120: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15f120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15f124:
    // 0x15f124: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f124u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f128:
    // 0x15f128: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x15f128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_15f12c:
    // 0x15f12c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f130:
    // 0x15f130: 0x3c52821  addu        $a1, $fp, $a1
    ctx->pc = 0x15f130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_15f134:
    // 0x15f134: 0x60f809  jalr        $v1
label_15f138:
    if (ctx->pc == 0x15F138u) {
        ctx->pc = 0x15F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F134u;
        // 0x15f138: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F13Cu;
        goto label_15f13c;
    }
    ctx->pc = 0x15F134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F13Cu);
        ctx->pc = 0x15F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F134u;
        // 0x15f138: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F134u, 0x15F13Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F13Cu;
label_15f13c:
    // 0x15f13c: 0x100000ef  b           . + 4 + (0xEF << 2)
label_15f140:
    if (ctx->pc == 0x15F140u) {
        ctx->pc = 0x15F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F13Cu;
        // 0x15f140: 0x8ea20fc8  lw          $v0, 0xFC8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4040)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F144u;
        goto label_15f144;
    }
    ctx->pc = 0x15F13Cu;
    {
        const bool branch_taken_0x15f13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F13Cu;
        // 0x15f140: 0x8ea20fc8  lw          $v0, 0xFC8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f13c) {
            ctx->pc = 0x15F4FCu;
            goto label_15f4fc;
        }
    }
    ctx->pc = 0x15F144u;
label_15f144:
    // 0x15f144: 0x0  nop
    ctx->pc = 0x15f144u;
    // NOP
label_15f148:
    // 0x15f148: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x15f148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_15f14c:
    // 0x15f14c: 0x2454a8c8  addiu       $s4, $v0, -0x5738
    ctx->pc = 0x15f14cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944968));
label_15f150:
    // 0x15f150: 0x8c700024  lw          $s0, 0x24($v1)
    ctx->pc = 0x15f150u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15f154:
    // 0x15f154: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15f154u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15f158:
    // 0x15f158: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15f158u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15f15c:
    // 0x15f15c: 0xc06bd28  jal         func_1AF4A0
label_15f160:
    if (ctx->pc == 0x15F160u) {
        ctx->pc = 0x15F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F15Cu;
        // 0x15f160: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F164u;
        goto label_15f164;
    }
    ctx->pc = 0x15F15Cu;
    SET_GPR_U32(ctx, 31, 0x15F164u);
    ctx->pc = 0x15F160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F15Cu;
    // 0x15f160: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15F15Cu, 0x15F164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F164u;
label_15f164:
    // 0x15f164: 0xc06bd20  jal         func_1AF480
label_15f168:
    if (ctx->pc == 0x15F168u) {
        ctx->pc = 0x15F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F164u;
        // 0x15f168: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F16Cu;
        goto label_15f16c;
    }
    ctx->pc = 0x15F164u;
    SET_GPR_U32(ctx, 31, 0x15F16Cu);
    ctx->pc = 0x15F168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F164u;
    // 0x15f168: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15F164u, 0x15F16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F16Cu;
label_15f16c:
    // 0x15f16c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15f16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15f170:
    // 0x15f170: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x15f170u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_15f174:
    // 0x15f174: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f178:
    // 0x15f178: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f17c:
    // 0x15f17c: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15f17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15f180:
    // 0x15f180: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x15f180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_15f184:
    // 0x15f184: 0xc0682b2  jal         func_1A0AC8
label_15f188:
    if (ctx->pc == 0x15F188u) {
        ctx->pc = 0x15F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F184u;
        // 0x15f188: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F18Cu;
        goto label_15f18c;
    }
    ctx->pc = 0x15F184u;
    SET_GPR_U32(ctx, 31, 0x15F18Cu);
    ctx->pc = 0x15F188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F184u;
    // 0x15f188: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15F184u, 0x15F18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F18Cu;
label_15f18c:
    // 0x15f18c: 0xc0682b6  jal         func_1A0AD8
label_15f190:
    if (ctx->pc == 0x15F190u) {
        ctx->pc = 0x15F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F18Cu;
        // 0x15f190: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F194u;
        goto label_15f194;
    }
    ctx->pc = 0x15F18Cu;
    SET_GPR_U32(ctx, 31, 0x15F194u);
    ctx->pc = 0x15F190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F18Cu;
    // 0x15f190: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15F18Cu, 0x15F194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F194u;
label_15f194:
    // 0x15f194: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15f194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15f198:
    // 0x15f198: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15f198u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15f19c:
    // 0x15f19c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15f1a0:
    // 0x15f1a0: 0x245601c0  addiu       $s6, $v0, 0x1C0
    ctx->pc = 0x15f1a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_15f1a4:
    // 0x15f1a4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x15f1a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_15f1a8:
    // 0x15f1a8: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x15f1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_15f1ac:
    // 0x15f1ac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15f1acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15f1b0:
    // 0x15f1b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15f1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15f1b4:
    // 0x15f1b4: 0xc062cb0  jal         func_18B2C0
label_15f1b8:
    if (ctx->pc == 0x15F1B8u) {
        ctx->pc = 0x15F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1B4u;
        // 0x15f1b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F1BCu;
        goto label_15f1bc;
    }
    ctx->pc = 0x15F1B4u;
    SET_GPR_U32(ctx, 31, 0x15F1BCu);
    ctx->pc = 0x15F1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F1B4u;
    // 0x15f1b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15F1B4u, 0x15F1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F1BCu;
label_15f1bc:
    // 0x15f1bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15f1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f1c0:
    // 0x15f1c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15f1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f1c4:
    // 0x15f1c4: 0xc06825c  jal         func_1A0970
label_15f1c8:
    if (ctx->pc == 0x15F1C8u) {
        ctx->pc = 0x15F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1C4u;
        // 0x15f1c8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F1CCu;
        goto label_15f1cc;
    }
    ctx->pc = 0x15F1C4u;
    SET_GPR_U32(ctx, 31, 0x15F1CCu);
    ctx->pc = 0x15F1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F1C4u;
    // 0x15f1c8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15F1C4u, 0x15F1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F1CCu;
label_15f1cc:
    // 0x15f1cc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f1d0:
    // 0x15f1d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15f1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f1d4:
    // 0x15f1d4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15f1d8:
    // 0x15f1d8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f1d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f1dc:
    // 0x15f1dc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f1e0:
    // 0x15f1e0: 0x60f809  jalr        $v1
label_15f1e4:
    if (ctx->pc == 0x15F1E4u) {
        ctx->pc = 0x15F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1E0u;
        // 0x15f1e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F1E8u;
        goto label_15f1e8;
    }
    ctx->pc = 0x15F1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F1E8u);
        ctx->pc = 0x15F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1E0u;
        // 0x15f1e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F1E0u, 0x15F1E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F1E8u;
label_15f1e8:
    // 0x15f1e8: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15f1e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15f1ec:
    // 0x15f1ec: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15f1f0:
    if (ctx->pc == 0x15F1F0u) {
        ctx->pc = 0x15F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1ECu;
        // 0x15f1f0: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F1F4u;
        goto label_15f1f4;
    }
    ctx->pc = 0x15F1ECu;
    {
        const bool branch_taken_0x15f1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1ECu;
        // 0x15f1f0: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f1ec) {
            ctx->pc = 0x15F2A8u;
            goto label_15f2a8;
        }
    }
    ctx->pc = 0x15F1F4u;
label_15f1f4:
    // 0x15f1f4: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15f1f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15f1f8:
    // 0x15f1f8: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15f1f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15f1fc:
    // 0x15f1fc: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15f1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15f200:
    // 0x15f200: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15f200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15f204:
    // 0x15f204: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15f204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15f208:
    // 0x15f208: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15f208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15f20c:
    // 0x15f20c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15f20cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15f210:
    // 0x15f210: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15f210u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15f214:
    // 0x15f214: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15f214u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15f218:
    // 0x15f218: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15f218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15f21c:
    // 0x15f21c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15f220:
    // 0x15f220: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15f220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15f224:
    // 0x15f224: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15f224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15f228:
    // 0x15f228: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15f228u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15f22c:
    // 0x15f22c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15f22cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15f230:
    // 0x15f230: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15f230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15f234:
    // 0x15f234: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15f234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15f238:
    // 0x15f238: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15f238u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15f23c:
    // 0x15f23c: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15f23cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15f240:
    // 0x15f240: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15f240u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15f244:
    // 0x15f244: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15f244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15f248:
    // 0x15f248: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15f248u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15f24c:
    // 0x15f24c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15f24cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15f250:
    // 0x15f250: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15f250u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15f254:
    // 0x15f254: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15f254u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15f258:
    // 0x15f258: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15f258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15f25c:
    // 0x15f25c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15f25cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15f260:
    // 0x15f260: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15f260u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15f264:
    // 0x15f264: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15f264u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15f268:
    // 0x15f268: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15f268u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15f26c:
    // 0x15f26c: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15f26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15f270:
    // 0x15f270: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15f270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15f274:
    // 0x15f274: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15f274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15f278:
    // 0x15f278: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15f278u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15f27c:
    // 0x15f27c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15f27cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15f280:
    // 0x15f280: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15f280u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15f284:
    // 0x15f284: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15f284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15f288:
    // 0x15f288: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15f288u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15f28c:
    // 0x15f28c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15f28cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15f290:
    // 0x15f290: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15f290u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15f294:
    // 0x15f294: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15f294u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15f298:
    // 0x15f298: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15f298u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15f29c:
    // 0x15f29c: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15f29cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15f2a0:
    // 0x15f2a0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15f2a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15f2a4:
    // 0x15f2a4: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15f2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_15f2a8:
    // 0x15f2a8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15f2a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f2ac:
    // 0x15f2ac: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15f2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15f2b0:
    // 0x15f2b0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x15f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f2b4:
    // 0x15f2b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15f2b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f2b8:
    // 0x15f2b8: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x15f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15f2bc:
    // 0x15f2bc: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x15f2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_15f2c0:
    // 0x15f2c0: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15f2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15f2c4:
    // 0x15f2c4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15f2c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15f2c8:
    // 0x15f2c8: 0xae02012c  sw          $v0, 0x12C($s0)
    ctx->pc = 0x15f2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
label_15f2cc:
    // 0x15f2cc: 0xaeb00f30  sw          $s0, 0xF30($s5)
    ctx->pc = 0x15f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3888), GPR_U32(ctx, 16));
label_15f2d0:
    // 0x15f2d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x15f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15f2d4:
    // 0x15f2d4: 0x40f809  jalr        $v0
label_15f2d8:
    if (ctx->pc == 0x15F2D8u) {
        ctx->pc = 0x15F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2D4u;
        // 0x15f2d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F2DCu;
        goto label_15f2dc;
    }
    ctx->pc = 0x15F2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15F2DCu);
        ctx->pc = 0x15F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2D4u;
        // 0x15f2d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F2D4u, 0x15F2DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F2DCu;
label_15f2dc:
    // 0x15f2dc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x15f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f2e0:
    // 0x15f2e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15f2e4:
    // 0x15f2e4: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x15f2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15f2e8:
    // 0x15f2e8: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15f2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15f2ec:
    // 0x15f2ec: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15f2ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15f2f0:
    // 0x15f2f0: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15f2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15f2f4:
    // 0x15f2f4: 0x26940078  addiu       $s4, $s4, 0x78
    ctx->pc = 0x15f2f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 120));
label_15f2f8:
    // 0x15f2f8: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x15f2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15f2fc:
    // 0x15f2fc: 0x3c52821  addu        $a1, $fp, $a1
    ctx->pc = 0x15f2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_15f300:
    // 0x15f300: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x15f300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_15f304:
    // 0x15f304: 0xe0f809  jalr        $a3
label_15f308:
    if (ctx->pc == 0x15F308u) {
        ctx->pc = 0x15F308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F304u;
        // 0x15f308: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F30Cu;
        goto label_15f30c;
    }
    ctx->pc = 0x15F304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x15F30Cu);
        ctx->pc = 0x15F308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F304u;
        // 0x15f308: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F304u, 0x15F30Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F30Cu;
label_15f30c:
    // 0x15f30c: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x15f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_15f310:
    // 0x15f310: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15f310u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15f314:
    // 0x15f314: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15f314u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15f318:
    // 0x15f318: 0x8c510024  lw          $s1, 0x24($v0)
    ctx->pc = 0x15f318u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_15f31c:
    // 0x15f31c: 0xc06bd28  jal         func_1AF4A0
label_15f320:
    if (ctx->pc == 0x15F320u) {
        ctx->pc = 0x15F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F31Cu;
        // 0x15f320: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F324u;
        goto label_15f324;
    }
    ctx->pc = 0x15F31Cu;
    SET_GPR_U32(ctx, 31, 0x15F324u);
    ctx->pc = 0x15F320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F31Cu;
    // 0x15f320: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15F31Cu, 0x15F324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F324u;
label_15f324:
    // 0x15f324: 0xc06bd20  jal         func_1AF480
label_15f328:
    if (ctx->pc == 0x15F328u) {
        ctx->pc = 0x15F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F324u;
        // 0x15f328: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F32Cu;
        goto label_15f32c;
    }
    ctx->pc = 0x15F324u;
    SET_GPR_U32(ctx, 31, 0x15F32Cu);
    ctx->pc = 0x15F328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F324u;
    // 0x15f328: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15F324u, 0x15F32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F32Cu;
label_15f32c:
    // 0x15f32c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15f32cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15f330:
    // 0x15f330: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x15f330u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_15f334:
    // 0x15f334: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f338:
    // 0x15f338: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f33c:
    // 0x15f33c: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15f33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15f340:
    // 0x15f340: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x15f340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_15f344:
    // 0x15f344: 0xc0682b2  jal         func_1A0AC8
label_15f348:
    if (ctx->pc == 0x15F348u) {
        ctx->pc = 0x15F348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F344u;
        // 0x15f348: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F34Cu;
        goto label_15f34c;
    }
    ctx->pc = 0x15F344u;
    SET_GPR_U32(ctx, 31, 0x15F34Cu);
    ctx->pc = 0x15F348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F344u;
    // 0x15f348: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15F344u, 0x15F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F34Cu;
label_15f34c:
    // 0x15f34c: 0xc0682b6  jal         func_1A0AD8
label_15f350:
    if (ctx->pc == 0x15F350u) {
        ctx->pc = 0x15F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F34Cu;
        // 0x15f350: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F354u;
        goto label_15f354;
    }
    ctx->pc = 0x15F34Cu;
    SET_GPR_U32(ctx, 31, 0x15F354u);
    ctx->pc = 0x15F350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F34Cu;
    // 0x15f350: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15F34Cu, 0x15F354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F354u;
label_15f354:
    // 0x15f354: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15f354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15f358:
    // 0x15f358: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15f358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15f35c:
    // 0x15f35c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15f35cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15f360:
    // 0x15f360: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x15f360u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_15f364:
    // 0x15f364: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15f364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15f368:
    // 0x15f368: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15f368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15f36c:
    // 0x15f36c: 0xc062cb0  jal         func_18B2C0
label_15f370:
    if (ctx->pc == 0x15F370u) {
        ctx->pc = 0x15F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F36Cu;
        // 0x15f370: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F374u;
        goto label_15f374;
    }
    ctx->pc = 0x15F36Cu;
    SET_GPR_U32(ctx, 31, 0x15F374u);
    ctx->pc = 0x15F370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F36Cu;
    // 0x15f370: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15F36Cu, 0x15F374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F374u;
label_15f374:
    // 0x15f374: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15f374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f378:
    // 0x15f378: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15f378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f37c:
    // 0x15f37c: 0xc06825c  jal         func_1A0970
label_15f380:
    if (ctx->pc == 0x15F380u) {
        ctx->pc = 0x15F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F37Cu;
        // 0x15f380: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F384u;
        goto label_15f384;
    }
    ctx->pc = 0x15F37Cu;
    SET_GPR_U32(ctx, 31, 0x15F384u);
    ctx->pc = 0x15F380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F37Cu;
    // 0x15f380: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15F37Cu, 0x15F384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F384u;
label_15f384:
    // 0x15f384: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f388:
    // 0x15f388: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15f388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f38c:
    // 0x15f38c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15f390:
    // 0x15f390: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f390u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f394:
    // 0x15f394: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f398:
    // 0x15f398: 0x60f809  jalr        $v1
label_15f39c:
    if (ctx->pc == 0x15F39Cu) {
        ctx->pc = 0x15F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F398u;
        // 0x15f39c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F3A0u;
        goto label_15f3a0;
    }
    ctx->pc = 0x15F398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F3A0u);
        ctx->pc = 0x15F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F398u;
        // 0x15f39c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F398u, 0x15F3A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F3A0u;
label_15f3a0:
    // 0x15f3a0: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15f3a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15f3a4:
    // 0x15f3a4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15f3a8:
    if (ctx->pc == 0x15F3A8u) {
        ctx->pc = 0x15F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3A4u;
        // 0x15f3a8: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F3ACu;
        goto label_15f3ac;
    }
    ctx->pc = 0x15F3A4u;
    {
        const bool branch_taken_0x15f3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3A4u;
        // 0x15f3a8: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f3a4) {
            ctx->pc = 0x15F460u;
            goto label_15f460;
        }
    }
    ctx->pc = 0x15F3ACu;
label_15f3ac:
    // 0x15f3ac: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15f3acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15f3b0:
    // 0x15f3b0: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15f3b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15f3b4:
    // 0x15f3b4: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15f3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15f3b8:
    // 0x15f3b8: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15f3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15f3bc:
    // 0x15f3bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15f3c0:
    // 0x15f3c0: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15f3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15f3c4:
    // 0x15f3c4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15f3c8:
    // 0x15f3c8: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15f3c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15f3cc:
    // 0x15f3cc: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15f3ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15f3d0:
    // 0x15f3d0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15f3d4:
    // 0x15f3d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15f3d8:
    // 0x15f3d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15f3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15f3dc:
    // 0x15f3dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15f3dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15f3e0:
    // 0x15f3e0: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15f3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15f3e4:
    // 0x15f3e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15f3e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15f3e8:
    // 0x15f3e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15f3e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15f3ec:
    // 0x15f3ec: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15f3ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15f3f0:
    // 0x15f3f0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15f3f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15f3f4:
    // 0x15f3f4: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15f3f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15f3f8:
    // 0x15f3f8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15f3f8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15f3fc:
    // 0x15f3fc: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15f3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15f400:
    // 0x15f400: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15f400u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15f404:
    // 0x15f404: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15f404u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15f408:
    // 0x15f408: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15f408u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15f40c:
    // 0x15f40c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15f40cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15f410:
    // 0x15f410: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15f410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15f414:
    // 0x15f414: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15f414u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15f418:
    // 0x15f418: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15f418u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15f41c:
    // 0x15f41c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15f41cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15f420:
    // 0x15f420: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15f420u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15f424:
    // 0x15f424: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15f424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15f428:
    // 0x15f428: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15f428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15f42c:
    // 0x15f42c: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15f42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15f430:
    // 0x15f430: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15f430u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15f434:
    // 0x15f434: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15f434u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15f438:
    // 0x15f438: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15f438u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15f43c:
    // 0x15f43c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15f43cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15f440:
    // 0x15f440: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15f440u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15f444:
    // 0x15f444: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15f444u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15f448:
    // 0x15f448: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15f448u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15f44c:
    // 0x15f44c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15f44cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15f450:
    // 0x15f450: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15f450u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15f454:
    // 0x15f454: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15f454u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15f458:
    // 0x15f458: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15f458u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15f45c:
    // 0x15f45c: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15f45cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_15f460:
    // 0x15f460: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15f460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f464:
    // 0x15f464: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x15f464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_15f468:
    // 0x15f468: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f46c:
    // 0x15f46c: 0xaeb00f34  sw          $s0, 0xF34($s5)
    ctx->pc = 0x15f46cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3892), GPR_U32(ctx, 16));
label_15f470:
    // 0x15f470: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x15f470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
label_15f474:
    // 0x15f474: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f474u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f478:
    // 0x15f478: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f47c:
    // 0x15f47c: 0x60f809  jalr        $v1
label_15f480:
    if (ctx->pc == 0x15F480u) {
        ctx->pc = 0x15F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F47Cu;
        // 0x15f480: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F484u;
        goto label_15f484;
    }
    ctx->pc = 0x15F47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F484u);
        ctx->pc = 0x15F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F47Cu;
        // 0x15f480: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F47Cu, 0x15F484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F484u;
label_15f484:
    // 0x15f484: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f488:
    // 0x15f488: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15f488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15f48c:
    // 0x15f48c: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x15f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_15f490:
    // 0x15f490: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f490u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f494:
    // 0x15f494: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f498:
    // 0x15f498: 0x60f809  jalr        $v1
label_15f49c:
    if (ctx->pc == 0x15F49Cu) {
        ctx->pc = 0x15F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F498u;
        // 0x15f49c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F4A0u;
        goto label_15f4a0;
    }
    ctx->pc = 0x15F498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F4A0u);
        ctx->pc = 0x15F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F498u;
        // 0x15f49c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F498u, 0x15F4A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F4A0u;
label_15f4a0:
    // 0x15f4a0: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15f4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15f4a4:
    // 0x15f4a4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f4a8:
    // 0x15f4a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15f4a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f4ac:
    // 0x15f4ac: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x15f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15f4b0:
    // 0x15f4b0: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x15f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_15f4b4:
    // 0x15f4b4: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15f4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15f4b8:
    // 0x15f4b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f4b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f4bc:
    // 0x15f4bc: 0xae03012c  sw          $v1, 0x12C($s0)
    ctx->pc = 0x15f4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
label_15f4c0:
    // 0x15f4c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f4c4:
    // 0x15f4c4: 0x60f809  jalr        $v1
label_15f4c8:
    if (ctx->pc == 0x15F4C8u) {
        ctx->pc = 0x15F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4C4u;
        // 0x15f4c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F4CCu;
        goto label_15f4cc;
    }
    ctx->pc = 0x15F4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F4CCu);
        ctx->pc = 0x15F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4C4u;
        // 0x15f4c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F4C4u, 0x15F4CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F4CCu;
label_15f4cc:
    // 0x15f4cc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f4d0:
    // 0x15f4d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15f4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15f4d4:
    // 0x15f4d4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x15f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_15f4d8:
    // 0x15f4d8: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15f4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15f4dc:
    // 0x15f4dc: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15f4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15f4e0:
    // 0x15f4e0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f4e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f4e4:
    // 0x15f4e4: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x15f4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_15f4e8:
    // 0x15f4e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f4ec:
    // 0x15f4ec: 0x3c52821  addu        $a1, $fp, $a1
    ctx->pc = 0x15f4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_15f4f0:
    // 0x15f4f0: 0x60f809  jalr        $v1
label_15f4f4:
    if (ctx->pc == 0x15F4F4u) {
        ctx->pc = 0x15F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4F0u;
        // 0x15f4f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F4F8u;
        goto label_15f4f8;
    }
    ctx->pc = 0x15F4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F4F8u);
        ctx->pc = 0x15F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4F0u;
        // 0x15f4f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F4F0u, 0x15F4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F4F8u;
label_15f4f8:
    // 0x15f4f8: 0x8ea20fc8  lw          $v0, 0xFC8($s5)
    ctx->pc = 0x15f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4040)));
label_15f4fc:
    // 0x15f4fc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_15f500:
    if (ctx->pc == 0x15F500u) {
        ctx->pc = 0x15F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4FCu;
        // 0x15f500: 0x8ea30010  lw          $v1, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F504u;
        goto label_15f504;
    }
    ctx->pc = 0x15F4FCu;
    {
        const bool branch_taken_0x15f4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f4fc) {
            ctx->pc = 0x15F500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F4FCu;
            // 0x15f500: 0x8ea30010  lw          $v1, 0x10($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F530u;
            goto label_15f530;
        }
    }
    ctx->pc = 0x15F504u;
label_15f504:
    // 0x15f504: 0x8ea40f30  lw          $a0, 0xF30($s5)
    ctx->pc = 0x15f504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3888)));
label_15f508:
    // 0x15f508: 0x24056000  addiu       $a1, $zero, 0x6000
    ctx->pc = 0x15f508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
label_15f50c:
    // 0x15f50c: 0x24066000  addiu       $a2, $zero, 0x6000
    ctx->pc = 0x15f50cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
label_15f510:
    // 0x15f510: 0xc061372  jal         func_184DC8
label_15f514:
    if (ctx->pc == 0x15F514u) {
        ctx->pc = 0x15F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F510u;
        // 0x15f514: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F518u;
        goto label_15f518;
    }
    ctx->pc = 0x15F510u;
    SET_GPR_U32(ctx, 31, 0x15F518u);
    ctx->pc = 0x15F514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F510u;
    // 0x15f514: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184DC8u, 0x15F510u, 0x15F518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F518u;
label_15f518:
    // 0x15f518: 0x8ea40f34  lw          $a0, 0xF34($s5)
    ctx->pc = 0x15f518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3892)));
label_15f51c:
    // 0x15f51c: 0x24056000  addiu       $a1, $zero, 0x6000
    ctx->pc = 0x15f51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
label_15f520:
    // 0x15f520: 0x24066000  addiu       $a2, $zero, 0x6000
    ctx->pc = 0x15f520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
label_15f524:
    // 0x15f524: 0xc061372  jal         func_184DC8
label_15f528:
    if (ctx->pc == 0x15F528u) {
        ctx->pc = 0x15F528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F524u;
        // 0x15f528: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F52Cu;
        goto label_15f52c;
    }
    ctx->pc = 0x15F524u;
    SET_GPR_U32(ctx, 31, 0x15F52Cu);
    ctx->pc = 0x15F528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F524u;
    // 0x15f528: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184DC8u, 0x15F524u, 0x15F52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F52Cu;
label_15f52c:
    // 0x15f52c: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x15f52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_15f530:
    // 0x15f530: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x15f530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_15f534:
    // 0x15f534: 0x2454a968  addiu       $s4, $v0, -0x5698
    ctx->pc = 0x15f534u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945128));
label_15f538:
    // 0x15f538: 0x8c700024  lw          $s0, 0x24($v1)
    ctx->pc = 0x15f538u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15f53c:
    // 0x15f53c: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15f53cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15f540:
    // 0x15f540: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15f540u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15f544:
    // 0x15f544: 0xc06bd28  jal         func_1AF4A0
label_15f548:
    if (ctx->pc == 0x15F548u) {
        ctx->pc = 0x15F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F544u;
        // 0x15f548: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F54Cu;
        goto label_15f54c;
    }
    ctx->pc = 0x15F544u;
    SET_GPR_U32(ctx, 31, 0x15F54Cu);
    ctx->pc = 0x15F548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F544u;
    // 0x15f548: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15F544u, 0x15F54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F54Cu;
label_15f54c:
    // 0x15f54c: 0xc06bd20  jal         func_1AF480
label_15f550:
    if (ctx->pc == 0x15F550u) {
        ctx->pc = 0x15F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F54Cu;
        // 0x15f550: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F554u;
        goto label_15f554;
    }
    ctx->pc = 0x15F54Cu;
    SET_GPR_U32(ctx, 31, 0x15F554u);
    ctx->pc = 0x15F550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F54Cu;
    // 0x15f550: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15F54Cu, 0x15F554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F554u;
label_15f554:
    // 0x15f554: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15f554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15f558:
    // 0x15f558: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x15f558u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_15f55c:
    // 0x15f55c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f560:
    // 0x15f560: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f564:
    // 0x15f564: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15f564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15f568:
    // 0x15f568: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x15f568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_15f56c:
    // 0x15f56c: 0xc0682b2  jal         func_1A0AC8
label_15f570:
    if (ctx->pc == 0x15F570u) {
        ctx->pc = 0x15F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F56Cu;
        // 0x15f570: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F574u;
        goto label_15f574;
    }
    ctx->pc = 0x15F56Cu;
    SET_GPR_U32(ctx, 31, 0x15F574u);
    ctx->pc = 0x15F570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F56Cu;
    // 0x15f570: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15F56Cu, 0x15F574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F574u;
label_15f574:
    // 0x15f574: 0xc0682b6  jal         func_1A0AD8
label_15f578:
    if (ctx->pc == 0x15F578u) {
        ctx->pc = 0x15F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F574u;
        // 0x15f578: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F57Cu;
        goto label_15f57c;
    }
    ctx->pc = 0x15F574u;
    SET_GPR_U32(ctx, 31, 0x15F57Cu);
    ctx->pc = 0x15F578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F574u;
    // 0x15f578: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15F574u, 0x15F57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F57Cu;
label_15f57c:
    // 0x15f57c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15f57cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15f580:
    // 0x15f580: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15f580u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15f584:
    // 0x15f584: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15f584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15f588:
    // 0x15f588: 0x245601c0  addiu       $s6, $v0, 0x1C0
    ctx->pc = 0x15f588u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_15f58c:
    // 0x15f58c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x15f58cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_15f590:
    // 0x15f590: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x15f590u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_15f594:
    // 0x15f594: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15f594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15f598:
    // 0x15f598: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15f598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15f59c:
    // 0x15f59c: 0xc062cb0  jal         func_18B2C0
label_15f5a0:
    if (ctx->pc == 0x15F5A0u) {
        ctx->pc = 0x15F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F59Cu;
        // 0x15f5a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F5A4u;
        goto label_15f5a4;
    }
    ctx->pc = 0x15F59Cu;
    SET_GPR_U32(ctx, 31, 0x15F5A4u);
    ctx->pc = 0x15F5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F59Cu;
    // 0x15f5a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15F59Cu, 0x15F5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F5A4u;
label_15f5a4:
    // 0x15f5a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15f5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f5a8:
    // 0x15f5a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15f5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f5ac:
    // 0x15f5ac: 0xc06825c  jal         func_1A0970
label_15f5b0:
    if (ctx->pc == 0x15F5B0u) {
        ctx->pc = 0x15F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5ACu;
        // 0x15f5b0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F5B4u;
        goto label_15f5b4;
    }
    ctx->pc = 0x15F5ACu;
    SET_GPR_U32(ctx, 31, 0x15F5B4u);
    ctx->pc = 0x15F5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F5ACu;
    // 0x15f5b0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15F5ACu, 0x15F5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F5B4u;
label_15f5b4:
    // 0x15f5b4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f5b8:
    // 0x15f5b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15f5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f5bc:
    // 0x15f5bc: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15f5c0:
    // 0x15f5c0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f5c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f5c4:
    // 0x15f5c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f5c8:
    // 0x15f5c8: 0x60f809  jalr        $v1
label_15f5cc:
    if (ctx->pc == 0x15F5CCu) {
        ctx->pc = 0x15F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5C8u;
        // 0x15f5cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F5D0u;
        goto label_15f5d0;
    }
    ctx->pc = 0x15F5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F5D0u);
        ctx->pc = 0x15F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5C8u;
        // 0x15f5cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F5C8u, 0x15F5D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F5D0u;
label_15f5d0:
    // 0x15f5d0: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15f5d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15f5d4:
    // 0x15f5d4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15f5d8:
    if (ctx->pc == 0x15F5D8u) {
        ctx->pc = 0x15F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5D4u;
        // 0x15f5d8: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F5DCu;
        goto label_15f5dc;
    }
    ctx->pc = 0x15F5D4u;
    {
        const bool branch_taken_0x15f5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5D4u;
        // 0x15f5d8: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f5d4) {
            ctx->pc = 0x15F690u;
            goto label_15f690;
        }
    }
    ctx->pc = 0x15F5DCu;
label_15f5dc:
    // 0x15f5dc: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15f5dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15f5e0:
    // 0x15f5e0: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15f5e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15f5e4:
    // 0x15f5e4: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15f5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15f5e8:
    // 0x15f5e8: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15f5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15f5ec:
    // 0x15f5ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15f5f0:
    // 0x15f5f0: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15f5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15f5f4:
    // 0x15f5f4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15f5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15f5f8:
    // 0x15f5f8: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15f5f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15f5fc:
    // 0x15f5fc: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15f5fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15f600:
    // 0x15f600: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15f600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15f604:
    // 0x15f604: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15f608:
    // 0x15f608: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15f608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15f60c:
    // 0x15f60c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15f60cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15f610:
    // 0x15f610: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15f610u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15f614:
    // 0x15f614: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15f614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15f618:
    // 0x15f618: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15f618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15f61c:
    // 0x15f61c: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15f61cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15f620:
    // 0x15f620: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15f620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15f624:
    // 0x15f624: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15f624u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15f628:
    // 0x15f628: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15f628u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15f62c:
    // 0x15f62c: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15f62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15f630:
    // 0x15f630: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15f630u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15f634:
    // 0x15f634: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15f634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15f638:
    // 0x15f638: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15f638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15f63c:
    // 0x15f63c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15f63cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15f640:
    // 0x15f640: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15f640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15f644:
    // 0x15f644: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15f644u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15f648:
    // 0x15f648: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15f648u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15f64c:
    // 0x15f64c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15f64cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15f650:
    // 0x15f650: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15f650u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15f654:
    // 0x15f654: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15f654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15f658:
    // 0x15f658: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15f658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15f65c:
    // 0x15f65c: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15f65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15f660:
    // 0x15f660: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15f660u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15f664:
    // 0x15f664: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15f664u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15f668:
    // 0x15f668: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15f668u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15f66c:
    // 0x15f66c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15f66cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15f670:
    // 0x15f670: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15f670u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15f674:
    // 0x15f674: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15f674u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15f678:
    // 0x15f678: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15f678u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15f67c:
    // 0x15f67c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15f67cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15f680:
    // 0x15f680: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15f680u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15f684:
    // 0x15f684: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15f684u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15f688:
    // 0x15f688: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15f688u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15f68c:
    // 0x15f68c: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15f68cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_15f690:
    // 0x15f690: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15f690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f694:
    // 0x15f694: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x15f694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15f698:
    // 0x15f698: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f69c:
    // 0x15f69c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15f69cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f6a0:
    // 0x15f6a0: 0x8e870020  lw          $a3, 0x20($s4)
    ctx->pc = 0x15f6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15f6a4:
    // 0x15f6a4: 0x24170f30  addiu       $s7, $zero, 0xF30
    ctx->pc = 0x15f6a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3888));
label_15f6a8:
    // 0x15f6a8: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x15f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_15f6ac:
    // 0x15f6ac: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x15f6acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_15f6b0:
    // 0x15f6b0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f6b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f6b4:
    // 0x15f6b4: 0x2416001f  addiu       $s6, $zero, 0x1F
    ctx->pc = 0x15f6b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_15f6b8:
    // 0x15f6b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f6bc:
    // 0x15f6bc: 0xae07012c  sw          $a3, 0x12C($s0)
    ctx->pc = 0x15f6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 7));
label_15f6c0:
    // 0x15f6c0: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x15f6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_15f6c4:
    // 0x15f6c4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x15f6c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_15f6c8:
    // 0x15f6c8: 0x60f809  jalr        $v1
label_15f6cc:
    if (ctx->pc == 0x15F6CCu) {
        ctx->pc = 0x15F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6C8u;
        // 0x15f6cc: 0xaeb00f38  sw          $s0, 0xF38($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3896), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F6D0u;
        goto label_15f6d0;
    }
    ctx->pc = 0x15F6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F6D0u);
        ctx->pc = 0x15F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6C8u;
        // 0x15f6cc: 0xaeb00f38  sw          $s0, 0xF38($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3896), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F6C8u, 0x15F6D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F6D0u;
label_15f6d0:
    // 0x15f6d0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f6d4:
    // 0x15f6d4: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15f6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15f6d8:
    // 0x15f6d8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x15f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_15f6dc:
    // 0x15f6dc: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15f6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15f6e0:
    // 0x15f6e0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f6e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f6e4:
    // 0x15f6e4: 0x3c52821  addu        $a1, $fp, $a1
    ctx->pc = 0x15f6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_15f6e8:
    // 0x15f6e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f6ec:
    // 0x15f6ec: 0x26940078  addiu       $s4, $s4, 0x78
    ctx->pc = 0x15f6ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 120));
label_15f6f0:
    // 0x15f6f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15f6f4:
    // 0x15f6f4: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x15f6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_15f6f8:
    // 0x15f6f8: 0x60f809  jalr        $v1
label_15f6fc:
    if (ctx->pc == 0x15F6FCu) {
        ctx->pc = 0x15F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6F8u;
        // 0x15f6fc: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F700u;
        goto label_15f700;
    }
    ctx->pc = 0x15F6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F700u);
        ctx->pc = 0x15F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6F8u;
        // 0x15f6fc: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F6F8u, 0x15F700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F700u;
label_15f700:
    // 0x15f700: 0xc05bedc  jal         func_16FB70
label_15f704:
    if (ctx->pc == 0x15F704u) {
        ctx->pc = 0x15F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F700u;
        // 0x15f704: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F708u;
        goto label_15f708;
    }
    ctx->pc = 0x15F700u;
    SET_GPR_U32(ctx, 31, 0x15F708u);
    ctx->pc = 0x15F704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F700u;
    // 0x15f704: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x15F700u, 0x15F708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F708u;
label_15f708:
    // 0x15f708: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x15f708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_15f70c:
    // 0x15f70c: 0x0  nop
    ctx->pc = 0x15f70cu;
    // NOP
label_15f710:
    // 0x15f710: 0x26a2000c  addiu       $v0, $s5, 0xC
    ctx->pc = 0x15f710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_15f714:
    // 0x15f714: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15f714u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15f718:
    // 0x15f718: 0x579821  addu        $s3, $v0, $s7
    ctx->pc = 0x15f718u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_15f71c:
    // 0x15f71c: 0x8c710024  lw          $s1, 0x24($v1)
    ctx->pc = 0x15f71cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15f720:
    // 0x15f720: 0xc06bd28  jal         func_1AF4A0
label_15f724:
    if (ctx->pc == 0x15F724u) {
        ctx->pc = 0x15F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F720u;
        // 0x15f724: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F728u;
        goto label_15f728;
    }
    ctx->pc = 0x15F720u;
    SET_GPR_U32(ctx, 31, 0x15F728u);
    ctx->pc = 0x15F724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F720u;
    // 0x15f724: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15F720u, 0x15F728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F728u;
label_15f728:
    // 0x15f728: 0xc06bd20  jal         func_1AF480
label_15f72c:
    if (ctx->pc == 0x15F72Cu) {
        ctx->pc = 0x15F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F728u;
        // 0x15f72c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F730u;
        goto label_15f730;
    }
    ctx->pc = 0x15F728u;
    SET_GPR_U32(ctx, 31, 0x15F730u);
    ctx->pc = 0x15F72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F728u;
    // 0x15f72c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15F728u, 0x15F730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F730u;
label_15f730:
    // 0x15f730: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15f730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15f734:
    // 0x15f734: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x15f734u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_15f738:
    // 0x15f738: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f73c:
    // 0x15f73c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f740:
    // 0x15f740: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15f740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15f744:
    // 0x15f744: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x15f744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_15f748:
    // 0x15f748: 0xc0682b2  jal         func_1A0AC8
label_15f74c:
    if (ctx->pc == 0x15F74Cu) {
        ctx->pc = 0x15F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F748u;
        // 0x15f74c: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F750u;
        goto label_15f750;
    }
    ctx->pc = 0x15F748u;
    SET_GPR_U32(ctx, 31, 0x15F750u);
    ctx->pc = 0x15F74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F748u;
    // 0x15f74c: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15F748u, 0x15F750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F750u;
label_15f750:
    // 0x15f750: 0xc0682b6  jal         func_1A0AD8
label_15f754:
    if (ctx->pc == 0x15F754u) {
        ctx->pc = 0x15F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F750u;
        // 0x15f754: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F758u;
        goto label_15f758;
    }
    ctx->pc = 0x15F750u;
    SET_GPR_U32(ctx, 31, 0x15F758u);
    ctx->pc = 0x15F754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F750u;
    // 0x15f754: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15F750u, 0x15F758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F758u;
label_15f758:
    // 0x15f758: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x15f758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_15f75c:
    // 0x15f75c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15f75cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15f760:
    // 0x15f760: 0x246301c0  addiu       $v1, $v1, 0x1C0
    ctx->pc = 0x15f760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
label_15f764:
    // 0x15f764: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x15f764u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_15f768:
    // 0x15f768: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15f768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15f76c:
    // 0x15f76c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15f76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15f770:
    // 0x15f770: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15f770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f774:
    // 0x15f774: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15f774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15f778:
    // 0x15f778: 0x26860008  addiu       $a2, $s4, 0x8
    ctx->pc = 0x15f778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15f77c:
    // 0x15f77c: 0xc062cb0  jal         func_18B2C0
label_15f780:
    if (ctx->pc == 0x15F780u) {
        ctx->pc = 0x15F780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F77Cu;
        // 0x15f780: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F784u;
        goto label_15f784;
    }
    ctx->pc = 0x15F77Cu;
    SET_GPR_U32(ctx, 31, 0x15F784u);
    ctx->pc = 0x15F780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F77Cu;
    // 0x15f780: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15F77Cu, 0x15F784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F784u;
label_15f784:
    // 0x15f784: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15f784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f788:
    // 0x15f788: 0xc06825c  jal         func_1A0970
label_15f78c:
    if (ctx->pc == 0x15F78Cu) {
        ctx->pc = 0x15F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F788u;
        // 0x15f78c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F790u;
        goto label_15f790;
    }
    ctx->pc = 0x15F788u;
    SET_GPR_U32(ctx, 31, 0x15F790u);
    ctx->pc = 0x15F78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F788u;
    // 0x15f78c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15F788u, 0x15F790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F790u;
label_15f790:
    // 0x15f790: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f794:
    // 0x15f794: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15f794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f798:
    // 0x15f798: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15f798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15f79c:
    // 0x15f79c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f79cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f7a0:
    // 0x15f7a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f7a4:
    // 0x15f7a4: 0x60f809  jalr        $v1
label_15f7a8:
    if (ctx->pc == 0x15F7A8u) {
        ctx->pc = 0x15F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F7A4u;
        // 0x15f7a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F7ACu;
        goto label_15f7ac;
    }
    ctx->pc = 0x15F7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F7ACu);
        ctx->pc = 0x15F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F7A4u;
        // 0x15f7a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F7A4u, 0x15F7ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F7ACu;
label_15f7ac:
    // 0x15f7ac: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15f7acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15f7b0:
    // 0x15f7b0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_15f7b4:
    if (ctx->pc == 0x15F7B4u) {
        ctx->pc = 0x15F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F7B0u;
        // 0x15f7b4: 0x26070150  addiu       $a3, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F7B8u;
        goto label_15f7b8;
    }
    ctx->pc = 0x15F7B0u;
    {
        const bool branch_taken_0x15f7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F7B0u;
        // 0x15f7b4: 0x26070150  addiu       $a3, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f7b0) {
            ctx->pc = 0x15F868u;
            goto label_15f868;
        }
    }
    ctx->pc = 0x15F7B8u;
label_15f7b8:
    // 0x15f7b8: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15f7b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15f7bc:
    // 0x15f7bc: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15f7bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15f7c0:
    // 0x15f7c0: 0x26080180  addiu       $t0, $s0, 0x180
    ctx->pc = 0x15f7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15f7c4:
    // 0x15f7c4: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15f7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15f7c8:
    // 0x15f7c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15f7cc:
    // 0x15f7cc: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15f7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15f7d0:
    // 0x15f7d0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15f7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15f7d4:
    // 0x15f7d4: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15f7d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15f7d8:
    // 0x15f7d8: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15f7d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15f7dc:
    // 0x15f7dc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15f7e0:
    // 0x15f7e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15f7e4:
    // 0x15f7e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15f7e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15f7e8:
    // 0x15f7e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15f7e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15f7ec:
    // 0x15f7ec: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x15f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15f7f0:
    // 0x15f7f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15f7f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15f7f4:
    // 0x15f7f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15f7f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15f7f8:
    // 0x15f7f8: 0xa4e2000e  sh          $v0, 0xE($a3)
    ctx->pc = 0x15f7f8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 2));
label_15f7fc:
    // 0x15f7fc: 0xe4e10020  swc1        $f1, 0x20($a3)
    ctx->pc = 0x15f7fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
label_15f800:
    // 0x15f800: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15f800u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15f804:
    // 0x15f804: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x15f804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
label_15f808:
    // 0x15f808: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15f808u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15f80c:
    // 0x15f80c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15f80cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15f810:
    // 0x15f810: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15f810u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15f814:
    // 0x15f814: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x15f814u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15f818:
    // 0x15f818: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15f818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15f81c:
    // 0x15f81c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15f81cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15f820:
    // 0x15f820: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15f820u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15f824:
    // 0x15f824: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15f824u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15f828:
    // 0x15f828: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x15f828u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
label_15f82c:
    // 0x15f82c: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15f82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15f830:
    // 0x15f830: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x15f830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15f834:
    // 0x15f834: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x15f834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15f838:
    // 0x15f838: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15f838u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15f83c:
    // 0x15f83c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15f83cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15f840:
    // 0x15f840: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x15f840u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15f844:
    // 0x15f844: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15f844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15f848:
    // 0x15f848: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15f848u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15f84c:
    // 0x15f84c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15f84cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15f850:
    // 0x15f850: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15f850u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15f854:
    // 0x15f854: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15f854u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15f858:
    // 0x15f858: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15f858u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15f85c:
    // 0x15f85c: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x15f85cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_15f860:
    // 0x15f860: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15f860u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15f864:
    // 0x15f864: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15f864u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_15f868:
    // 0x15f868: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15f868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f86c:
    // 0x15f86c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x15f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15f870:
    // 0x15f870: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x15f870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f874:
    // 0x15f874: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15f874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f878:
    // 0x15f878: 0x8e870020  lw          $a3, 0x20($s4)
    ctx->pc = 0x15f878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15f87c:
    // 0x15f87c: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x15f87cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_15f880:
    // 0x15f880: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x15f880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_15f884:
    // 0x15f884: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x15f884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_15f888:
    // 0x15f888: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15f888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15f88c:
    // 0x15f88c: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x15f88cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_15f890:
    // 0x15f890: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x15f890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15f894:
    // 0x15f894: 0xae07012c  sw          $a3, 0x12C($s0)
    ctx->pc = 0x15f894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 7));
label_15f898:
    // 0x15f898: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x15f898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_15f89c:
    // 0x15f89c: 0x40f809  jalr        $v0
label_15f8a0:
    if (ctx->pc == 0x15F8A0u) {
        ctx->pc = 0x15F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F89Cu;
        // 0x15f8a0: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F8A4u;
        goto label_15f8a4;
    }
    ctx->pc = 0x15F89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15F8A4u);
        ctx->pc = 0x15F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F89Cu;
        // 0x15f8a0: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F89Cu, 0x15F8A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F8A4u;
label_15f8a4:
    // 0x15f8a4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x15f8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f8a8:
    // 0x15f8a8: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15f8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15f8ac:
    // 0x15f8ac: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x15f8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15f8b0:
    // 0x15f8b0: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15f8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15f8b4:
    // 0x15f8b4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15f8b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15f8b8:
    // 0x15f8b8: 0x3c52821  addu        $a1, $fp, $a1
    ctx->pc = 0x15f8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_15f8bc:
    // 0x15f8bc: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x15f8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15f8c0:
    // 0x15f8c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15f8c4:
    // 0x15f8c4: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x15f8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_15f8c8:
    // 0x15f8c8: 0xe0f809  jalr        $a3
label_15f8cc:
    if (ctx->pc == 0x15F8CCu) {
        ctx->pc = 0x15F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8C8u;
        // 0x15f8cc: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F8D0u;
        goto label_15f8d0;
    }
    ctx->pc = 0x15F8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x15F8D0u);
        ctx->pc = 0x15F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8C8u;
        // 0x15f8cc: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F8C8u, 0x15F8D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F8D0u;
label_15f8d0:
    // 0x15f8d0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f8d4:
    // 0x15f8d4: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x15f8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_15f8d8:
    // 0x15f8d8: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x15f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_15f8dc:
    // 0x15f8dc: 0x2465aa34  addiu       $a1, $v1, -0x55CC
    ctx->pc = 0x15f8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945332));
label_15f8e0:
    // 0x15f8e0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f8e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f8e4:
    // 0x15f8e4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f8e8:
    // 0x15f8e8: 0x60f809  jalr        $v1
label_15f8ec:
    if (ctx->pc == 0x15F8ECu) {
        ctx->pc = 0x15F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8E8u;
        // 0x15f8ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F8F0u;
        goto label_15f8f0;
    }
    ctx->pc = 0x15F8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F8F0u);
        ctx->pc = 0x15F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8E8u;
        // 0x15f8ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F8E8u, 0x15F8F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F8F0u;
label_15f8f0:
    // 0x15f8f0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f8f4:
    // 0x15f8f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15f8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f8f8:
    // 0x15f8f8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15f8fc:
    // 0x15f8fc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f8fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f900:
    // 0x15f900: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f904:
    // 0x15f904: 0x60f809  jalr        $v1
label_15f908:
    if (ctx->pc == 0x15F908u) {
        ctx->pc = 0x15F908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F904u;
        // 0x15f908: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F90Cu;
        goto label_15f90c;
    }
    ctx->pc = 0x15F904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F90Cu);
        ctx->pc = 0x15F908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F904u;
        // 0x15f908: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F904u, 0x15F90Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F90Cu;
label_15f90c:
    // 0x15f90c: 0x6c3ff80  bgezl       $s6, . + 4 + (-0x80 << 2)
label_15f910:
    if (ctx->pc == 0x15F910u) {
        ctx->pc = 0x15F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F90Cu;
        // 0x15f910: 0x8ea30010  lw          $v1, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F914u;
        goto label_15f914;
    }
    ctx->pc = 0x15F90Cu;
    {
        const bool branch_taken_0x15f90c = (GPR_S32(ctx, 22) >= 0);
        if (branch_taken_0x15f90c) {
            ctx->pc = 0x15F910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F90Cu;
            // 0x15f910: 0x8ea30010  lw          $v1, 0x10($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f710;
        }
    }
    ctx->pc = 0x15F914u;
label_15f914:
    // 0x15f914: 0xc05bedc  jal         func_16FB70
label_15f918:
    if (ctx->pc == 0x15F918u) {
        ctx->pc = 0x15F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F914u;
        // 0x15f918: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F91Cu;
        goto label_15f91c;
    }
    ctx->pc = 0x15F914u;
    SET_GPR_U32(ctx, 31, 0x15F91Cu);
    ctx->pc = 0x15F918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F914u;
    // 0x15f918: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x15F914u, 0x15F91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F91Cu;
label_15f91c:
    // 0x15f91c: 0xaebe0f28  sw          $fp, 0xF28($s5)
    ctx->pc = 0x15f91cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3880), GPR_U32(ctx, 30));
label_15f920:
    // 0x15f920: 0x96a20016  lhu         $v0, 0x16($s5)
    ctx->pc = 0x15f920u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 22)));
label_15f924:
    // 0x15f924: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15f924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15f928:
    // 0x15f928: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x15f928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_15f92c:
    // 0x15f92c: 0xaea00fbc  sw          $zero, 0xFBC($s5)
    ctx->pc = 0x15f92cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4028), GPR_U32(ctx, 0));
label_15f930:
    // 0x15f930: 0xaea30f2c  sw          $v1, 0xF2C($s5)
    ctx->pc = 0x15f930u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3884), GPR_U32(ctx, 3));
label_15f934:
    // 0x15f934: 0x10000009  b           . + 4 + (0x9 << 2)
label_15f938:
    if (ctx->pc == 0x15F938u) {
        ctx->pc = 0x15F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F934u;
        // 0x15f938: 0xa6a20016  sh          $v0, 0x16($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F93Cu;
        goto label_15f93c;
    }
    ctx->pc = 0x15F934u;
    {
        const bool branch_taken_0x15f934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F934u;
        // 0x15f938: 0xa6a20016  sh          $v0, 0x16($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f934) {
            ctx->pc = 0x15F95Cu;
            goto label_15f95c;
        }
    }
    ctx->pc = 0x15F93Cu;
label_15f93c:
    // 0x15f93c: 0x0  nop
    ctx->pc = 0x15f93cu;
    // NOP
label_15f940:
    // 0x15f940: 0x96a20014  lhu         $v0, 0x14($s5)
    ctx->pc = 0x15f940u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 20)));
label_15f944:
    // 0x15f944: 0x2404f7ff  addiu       $a0, $zero, -0x801
    ctx->pc = 0x15f944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_15f948:
    // 0x15f948: 0x96a30016  lhu         $v1, 0x16($s5)
    ctx->pc = 0x15f948u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 22)));
label_15f94c:
    // 0x15f94c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x15f94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_15f950:
    // 0x15f950: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15f950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_15f954:
    // 0x15f954: 0xa6a20014  sh          $v0, 0x14($s5)
    ctx->pc = 0x15f954u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 20), (uint16_t)GPR_U32(ctx, 2));
label_15f958:
    // 0x15f958: 0xa6a30016  sh          $v1, 0x16($s5)
    ctx->pc = 0x15f958u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 22), (uint16_t)GPR_U32(ctx, 3));
label_15f95c:
    // 0x15f95c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15f95cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15f960:
    // 0x15f960: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15f960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15f964:
    // 0x15f964: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x15f964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15f968:
    // 0x15f968: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x15f968u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15f96c:
    // 0x15f96c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x15f96cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15f970:
    // 0x15f970: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x15f970u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_15f974:
    // 0x15f974: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x15f974u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15f978:
    // 0x15f978: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x15f978u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_15f97c:
    // 0x15f97c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x15f97cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15f980:
    // 0x15f980: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x15f980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_15f984:
    // 0x15f984: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x15f984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15f988:
    // 0x15f988: 0x3e00008  jr          $ra
label_15f98c:
    if (ctx->pc == 0x15F98Cu) {
        ctx->pc = 0x15F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F988u;
        // 0x15f98c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F990u;
        goto label_fallthrough_0x15f988;
    }
    ctx->pc = 0x15F988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F988u;
        // 0x15f98c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15f988:
    ctx->pc = 0x15F990u;
}
