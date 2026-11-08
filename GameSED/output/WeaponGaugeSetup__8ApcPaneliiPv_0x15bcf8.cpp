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

// Function: WeaponGaugeSetup__8ApcPaneliiPv
// Address: 0x15bcf8 - 0x15c5a8
void WeaponGaugeSetup__8ApcPaneliiPv_0x15bcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WeaponGaugeSetup__8ApcPaneliiPv_0x15bcf8");
#endif

    switch (ctx->pc) {
        case 0x15bcf8u: goto label_15bcf8;
        case 0x15bcfcu: goto label_15bcfc;
        case 0x15bd00u: goto label_15bd00;
        case 0x15bd04u: goto label_15bd04;
        case 0x15bd08u: goto label_15bd08;
        case 0x15bd0cu: goto label_15bd0c;
        case 0x15bd10u: goto label_15bd10;
        case 0x15bd14u: goto label_15bd14;
        case 0x15bd18u: goto label_15bd18;
        case 0x15bd1cu: goto label_15bd1c;
        case 0x15bd20u: goto label_15bd20;
        case 0x15bd24u: goto label_15bd24;
        case 0x15bd28u: goto label_15bd28;
        case 0x15bd2cu: goto label_15bd2c;
        case 0x15bd30u: goto label_15bd30;
        case 0x15bd34u: goto label_15bd34;
        case 0x15bd38u: goto label_15bd38;
        case 0x15bd3cu: goto label_15bd3c;
        case 0x15bd40u: goto label_15bd40;
        case 0x15bd44u: goto label_15bd44;
        case 0x15bd48u: goto label_15bd48;
        case 0x15bd4cu: goto label_15bd4c;
        case 0x15bd50u: goto label_15bd50;
        case 0x15bd54u: goto label_15bd54;
        case 0x15bd58u: goto label_15bd58;
        case 0x15bd5cu: goto label_15bd5c;
        case 0x15bd60u: goto label_15bd60;
        case 0x15bd64u: goto label_15bd64;
        case 0x15bd68u: goto label_15bd68;
        case 0x15bd6cu: goto label_15bd6c;
        case 0x15bd70u: goto label_15bd70;
        case 0x15bd74u: goto label_15bd74;
        case 0x15bd78u: goto label_15bd78;
        case 0x15bd7cu: goto label_15bd7c;
        case 0x15bd80u: goto label_15bd80;
        case 0x15bd84u: goto label_15bd84;
        case 0x15bd88u: goto label_15bd88;
        case 0x15bd8cu: goto label_15bd8c;
        case 0x15bd90u: goto label_15bd90;
        case 0x15bd94u: goto label_15bd94;
        case 0x15bd98u: goto label_15bd98;
        case 0x15bd9cu: goto label_15bd9c;
        case 0x15bda0u: goto label_15bda0;
        case 0x15bda4u: goto label_15bda4;
        case 0x15bda8u: goto label_15bda8;
        case 0x15bdacu: goto label_15bdac;
        case 0x15bdb0u: goto label_15bdb0;
        case 0x15bdb4u: goto label_15bdb4;
        case 0x15bdb8u: goto label_15bdb8;
        case 0x15bdbcu: goto label_15bdbc;
        case 0x15bdc0u: goto label_15bdc0;
        case 0x15bdc4u: goto label_15bdc4;
        case 0x15bdc8u: goto label_15bdc8;
        case 0x15bdccu: goto label_15bdcc;
        case 0x15bdd0u: goto label_15bdd0;
        case 0x15bdd4u: goto label_15bdd4;
        case 0x15bdd8u: goto label_15bdd8;
        case 0x15bddcu: goto label_15bddc;
        case 0x15bde0u: goto label_15bde0;
        case 0x15bde4u: goto label_15bde4;
        case 0x15bde8u: goto label_15bde8;
        case 0x15bdecu: goto label_15bdec;
        case 0x15bdf0u: goto label_15bdf0;
        case 0x15bdf4u: goto label_15bdf4;
        case 0x15bdf8u: goto label_15bdf8;
        case 0x15bdfcu: goto label_15bdfc;
        case 0x15be00u: goto label_15be00;
        case 0x15be04u: goto label_15be04;
        case 0x15be08u: goto label_15be08;
        case 0x15be0cu: goto label_15be0c;
        case 0x15be10u: goto label_15be10;
        case 0x15be14u: goto label_15be14;
        case 0x15be18u: goto label_15be18;
        case 0x15be1cu: goto label_15be1c;
        case 0x15be20u: goto label_15be20;
        case 0x15be24u: goto label_15be24;
        case 0x15be28u: goto label_15be28;
        case 0x15be2cu: goto label_15be2c;
        case 0x15be30u: goto label_15be30;
        case 0x15be34u: goto label_15be34;
        case 0x15be38u: goto label_15be38;
        case 0x15be3cu: goto label_15be3c;
        case 0x15be40u: goto label_15be40;
        case 0x15be44u: goto label_15be44;
        case 0x15be48u: goto label_15be48;
        case 0x15be4cu: goto label_15be4c;
        case 0x15be50u: goto label_15be50;
        case 0x15be54u: goto label_15be54;
        case 0x15be58u: goto label_15be58;
        case 0x15be5cu: goto label_15be5c;
        case 0x15be60u: goto label_15be60;
        case 0x15be64u: goto label_15be64;
        case 0x15be68u: goto label_15be68;
        case 0x15be6cu: goto label_15be6c;
        case 0x15be70u: goto label_15be70;
        case 0x15be74u: goto label_15be74;
        case 0x15be78u: goto label_15be78;
        case 0x15be7cu: goto label_15be7c;
        case 0x15be80u: goto label_15be80;
        case 0x15be84u: goto label_15be84;
        case 0x15be88u: goto label_15be88;
        case 0x15be8cu: goto label_15be8c;
        case 0x15be90u: goto label_15be90;
        case 0x15be94u: goto label_15be94;
        case 0x15be98u: goto label_15be98;
        case 0x15be9cu: goto label_15be9c;
        case 0x15bea0u: goto label_15bea0;
        case 0x15bea4u: goto label_15bea4;
        case 0x15bea8u: goto label_15bea8;
        case 0x15beacu: goto label_15beac;
        case 0x15beb0u: goto label_15beb0;
        case 0x15beb4u: goto label_15beb4;
        case 0x15beb8u: goto label_15beb8;
        case 0x15bebcu: goto label_15bebc;
        case 0x15bec0u: goto label_15bec0;
        case 0x15bec4u: goto label_15bec4;
        case 0x15bec8u: goto label_15bec8;
        case 0x15beccu: goto label_15becc;
        case 0x15bed0u: goto label_15bed0;
        case 0x15bed4u: goto label_15bed4;
        case 0x15bed8u: goto label_15bed8;
        case 0x15bedcu: goto label_15bedc;
        case 0x15bee0u: goto label_15bee0;
        case 0x15bee4u: goto label_15bee4;
        case 0x15bee8u: goto label_15bee8;
        case 0x15beecu: goto label_15beec;
        case 0x15bef0u: goto label_15bef0;
        case 0x15bef4u: goto label_15bef4;
        case 0x15bef8u: goto label_15bef8;
        case 0x15befcu: goto label_15befc;
        case 0x15bf00u: goto label_15bf00;
        case 0x15bf04u: goto label_15bf04;
        case 0x15bf08u: goto label_15bf08;
        case 0x15bf0cu: goto label_15bf0c;
        case 0x15bf10u: goto label_15bf10;
        case 0x15bf14u: goto label_15bf14;
        case 0x15bf18u: goto label_15bf18;
        case 0x15bf1cu: goto label_15bf1c;
        case 0x15bf20u: goto label_15bf20;
        case 0x15bf24u: goto label_15bf24;
        case 0x15bf28u: goto label_15bf28;
        case 0x15bf2cu: goto label_15bf2c;
        case 0x15bf30u: goto label_15bf30;
        case 0x15bf34u: goto label_15bf34;
        case 0x15bf38u: goto label_15bf38;
        case 0x15bf3cu: goto label_15bf3c;
        case 0x15bf40u: goto label_15bf40;
        case 0x15bf44u: goto label_15bf44;
        case 0x15bf48u: goto label_15bf48;
        case 0x15bf4cu: goto label_15bf4c;
        case 0x15bf50u: goto label_15bf50;
        case 0x15bf54u: goto label_15bf54;
        case 0x15bf58u: goto label_15bf58;
        case 0x15bf5cu: goto label_15bf5c;
        case 0x15bf60u: goto label_15bf60;
        case 0x15bf64u: goto label_15bf64;
        case 0x15bf68u: goto label_15bf68;
        case 0x15bf6cu: goto label_15bf6c;
        case 0x15bf70u: goto label_15bf70;
        case 0x15bf74u: goto label_15bf74;
        case 0x15bf78u: goto label_15bf78;
        case 0x15bf7cu: goto label_15bf7c;
        case 0x15bf80u: goto label_15bf80;
        case 0x15bf84u: goto label_15bf84;
        case 0x15bf88u: goto label_15bf88;
        case 0x15bf8cu: goto label_15bf8c;
        case 0x15bf90u: goto label_15bf90;
        case 0x15bf94u: goto label_15bf94;
        case 0x15bf98u: goto label_15bf98;
        case 0x15bf9cu: goto label_15bf9c;
        case 0x15bfa0u: goto label_15bfa0;
        case 0x15bfa4u: goto label_15bfa4;
        case 0x15bfa8u: goto label_15bfa8;
        case 0x15bfacu: goto label_15bfac;
        case 0x15bfb0u: goto label_15bfb0;
        case 0x15bfb4u: goto label_15bfb4;
        case 0x15bfb8u: goto label_15bfb8;
        case 0x15bfbcu: goto label_15bfbc;
        case 0x15bfc0u: goto label_15bfc0;
        case 0x15bfc4u: goto label_15bfc4;
        case 0x15bfc8u: goto label_15bfc8;
        case 0x15bfccu: goto label_15bfcc;
        case 0x15bfd0u: goto label_15bfd0;
        case 0x15bfd4u: goto label_15bfd4;
        case 0x15bfd8u: goto label_15bfd8;
        case 0x15bfdcu: goto label_15bfdc;
        case 0x15bfe0u: goto label_15bfe0;
        case 0x15bfe4u: goto label_15bfe4;
        case 0x15bfe8u: goto label_15bfe8;
        case 0x15bfecu: goto label_15bfec;
        case 0x15bff0u: goto label_15bff0;
        case 0x15bff4u: goto label_15bff4;
        case 0x15bff8u: goto label_15bff8;
        case 0x15bffcu: goto label_15bffc;
        case 0x15c000u: goto label_15c000;
        case 0x15c004u: goto label_15c004;
        case 0x15c008u: goto label_15c008;
        case 0x15c00cu: goto label_15c00c;
        case 0x15c010u: goto label_15c010;
        case 0x15c014u: goto label_15c014;
        case 0x15c018u: goto label_15c018;
        case 0x15c01cu: goto label_15c01c;
        case 0x15c020u: goto label_15c020;
        case 0x15c024u: goto label_15c024;
        case 0x15c028u: goto label_15c028;
        case 0x15c02cu: goto label_15c02c;
        case 0x15c030u: goto label_15c030;
        case 0x15c034u: goto label_15c034;
        case 0x15c038u: goto label_15c038;
        case 0x15c03cu: goto label_15c03c;
        case 0x15c040u: goto label_15c040;
        case 0x15c044u: goto label_15c044;
        case 0x15c048u: goto label_15c048;
        case 0x15c04cu: goto label_15c04c;
        case 0x15c050u: goto label_15c050;
        case 0x15c054u: goto label_15c054;
        case 0x15c058u: goto label_15c058;
        case 0x15c05cu: goto label_15c05c;
        case 0x15c060u: goto label_15c060;
        case 0x15c064u: goto label_15c064;
        case 0x15c068u: goto label_15c068;
        case 0x15c06cu: goto label_15c06c;
        case 0x15c070u: goto label_15c070;
        case 0x15c074u: goto label_15c074;
        case 0x15c078u: goto label_15c078;
        case 0x15c07cu: goto label_15c07c;
        case 0x15c080u: goto label_15c080;
        case 0x15c084u: goto label_15c084;
        case 0x15c088u: goto label_15c088;
        case 0x15c08cu: goto label_15c08c;
        case 0x15c090u: goto label_15c090;
        case 0x15c094u: goto label_15c094;
        case 0x15c098u: goto label_15c098;
        case 0x15c09cu: goto label_15c09c;
        case 0x15c0a0u: goto label_15c0a0;
        case 0x15c0a4u: goto label_15c0a4;
        case 0x15c0a8u: goto label_15c0a8;
        case 0x15c0acu: goto label_15c0ac;
        case 0x15c0b0u: goto label_15c0b0;
        case 0x15c0b4u: goto label_15c0b4;
        case 0x15c0b8u: goto label_15c0b8;
        case 0x15c0bcu: goto label_15c0bc;
        case 0x15c0c0u: goto label_15c0c0;
        case 0x15c0c4u: goto label_15c0c4;
        case 0x15c0c8u: goto label_15c0c8;
        case 0x15c0ccu: goto label_15c0cc;
        case 0x15c0d0u: goto label_15c0d0;
        case 0x15c0d4u: goto label_15c0d4;
        case 0x15c0d8u: goto label_15c0d8;
        case 0x15c0dcu: goto label_15c0dc;
        case 0x15c0e0u: goto label_15c0e0;
        case 0x15c0e4u: goto label_15c0e4;
        case 0x15c0e8u: goto label_15c0e8;
        case 0x15c0ecu: goto label_15c0ec;
        case 0x15c0f0u: goto label_15c0f0;
        case 0x15c0f4u: goto label_15c0f4;
        case 0x15c0f8u: goto label_15c0f8;
        case 0x15c0fcu: goto label_15c0fc;
        case 0x15c100u: goto label_15c100;
        case 0x15c104u: goto label_15c104;
        case 0x15c108u: goto label_15c108;
        case 0x15c10cu: goto label_15c10c;
        case 0x15c110u: goto label_15c110;
        case 0x15c114u: goto label_15c114;
        case 0x15c118u: goto label_15c118;
        case 0x15c11cu: goto label_15c11c;
        case 0x15c120u: goto label_15c120;
        case 0x15c124u: goto label_15c124;
        case 0x15c128u: goto label_15c128;
        case 0x15c12cu: goto label_15c12c;
        case 0x15c130u: goto label_15c130;
        case 0x15c134u: goto label_15c134;
        case 0x15c138u: goto label_15c138;
        case 0x15c13cu: goto label_15c13c;
        case 0x15c140u: goto label_15c140;
        case 0x15c144u: goto label_15c144;
        case 0x15c148u: goto label_15c148;
        case 0x15c14cu: goto label_15c14c;
        case 0x15c150u: goto label_15c150;
        case 0x15c154u: goto label_15c154;
        case 0x15c158u: goto label_15c158;
        case 0x15c15cu: goto label_15c15c;
        case 0x15c160u: goto label_15c160;
        case 0x15c164u: goto label_15c164;
        case 0x15c168u: goto label_15c168;
        case 0x15c16cu: goto label_15c16c;
        case 0x15c170u: goto label_15c170;
        case 0x15c174u: goto label_15c174;
        case 0x15c178u: goto label_15c178;
        case 0x15c17cu: goto label_15c17c;
        case 0x15c180u: goto label_15c180;
        case 0x15c184u: goto label_15c184;
        case 0x15c188u: goto label_15c188;
        case 0x15c18cu: goto label_15c18c;
        case 0x15c190u: goto label_15c190;
        case 0x15c194u: goto label_15c194;
        case 0x15c198u: goto label_15c198;
        case 0x15c19cu: goto label_15c19c;
        case 0x15c1a0u: goto label_15c1a0;
        case 0x15c1a4u: goto label_15c1a4;
        case 0x15c1a8u: goto label_15c1a8;
        case 0x15c1acu: goto label_15c1ac;
        case 0x15c1b0u: goto label_15c1b0;
        case 0x15c1b4u: goto label_15c1b4;
        case 0x15c1b8u: goto label_15c1b8;
        case 0x15c1bcu: goto label_15c1bc;
        case 0x15c1c0u: goto label_15c1c0;
        case 0x15c1c4u: goto label_15c1c4;
        case 0x15c1c8u: goto label_15c1c8;
        case 0x15c1ccu: goto label_15c1cc;
        case 0x15c1d0u: goto label_15c1d0;
        case 0x15c1d4u: goto label_15c1d4;
        case 0x15c1d8u: goto label_15c1d8;
        case 0x15c1dcu: goto label_15c1dc;
        case 0x15c1e0u: goto label_15c1e0;
        case 0x15c1e4u: goto label_15c1e4;
        case 0x15c1e8u: goto label_15c1e8;
        case 0x15c1ecu: goto label_15c1ec;
        case 0x15c1f0u: goto label_15c1f0;
        case 0x15c1f4u: goto label_15c1f4;
        case 0x15c1f8u: goto label_15c1f8;
        case 0x15c1fcu: goto label_15c1fc;
        case 0x15c200u: goto label_15c200;
        case 0x15c204u: goto label_15c204;
        case 0x15c208u: goto label_15c208;
        case 0x15c20cu: goto label_15c20c;
        case 0x15c210u: goto label_15c210;
        case 0x15c214u: goto label_15c214;
        case 0x15c218u: goto label_15c218;
        case 0x15c21cu: goto label_15c21c;
        case 0x15c220u: goto label_15c220;
        case 0x15c224u: goto label_15c224;
        case 0x15c228u: goto label_15c228;
        case 0x15c22cu: goto label_15c22c;
        case 0x15c230u: goto label_15c230;
        case 0x15c234u: goto label_15c234;
        case 0x15c238u: goto label_15c238;
        case 0x15c23cu: goto label_15c23c;
        case 0x15c240u: goto label_15c240;
        case 0x15c244u: goto label_15c244;
        case 0x15c248u: goto label_15c248;
        case 0x15c24cu: goto label_15c24c;
        case 0x15c250u: goto label_15c250;
        case 0x15c254u: goto label_15c254;
        case 0x15c258u: goto label_15c258;
        case 0x15c25cu: goto label_15c25c;
        case 0x15c260u: goto label_15c260;
        case 0x15c264u: goto label_15c264;
        case 0x15c268u: goto label_15c268;
        case 0x15c26cu: goto label_15c26c;
        case 0x15c270u: goto label_15c270;
        case 0x15c274u: goto label_15c274;
        case 0x15c278u: goto label_15c278;
        case 0x15c27cu: goto label_15c27c;
        case 0x15c280u: goto label_15c280;
        case 0x15c284u: goto label_15c284;
        case 0x15c288u: goto label_15c288;
        case 0x15c28cu: goto label_15c28c;
        case 0x15c290u: goto label_15c290;
        case 0x15c294u: goto label_15c294;
        case 0x15c298u: goto label_15c298;
        case 0x15c29cu: goto label_15c29c;
        case 0x15c2a0u: goto label_15c2a0;
        case 0x15c2a4u: goto label_15c2a4;
        case 0x15c2a8u: goto label_15c2a8;
        case 0x15c2acu: goto label_15c2ac;
        case 0x15c2b0u: goto label_15c2b0;
        case 0x15c2b4u: goto label_15c2b4;
        case 0x15c2b8u: goto label_15c2b8;
        case 0x15c2bcu: goto label_15c2bc;
        case 0x15c2c0u: goto label_15c2c0;
        case 0x15c2c4u: goto label_15c2c4;
        case 0x15c2c8u: goto label_15c2c8;
        case 0x15c2ccu: goto label_15c2cc;
        case 0x15c2d0u: goto label_15c2d0;
        case 0x15c2d4u: goto label_15c2d4;
        case 0x15c2d8u: goto label_15c2d8;
        case 0x15c2dcu: goto label_15c2dc;
        case 0x15c2e0u: goto label_15c2e0;
        case 0x15c2e4u: goto label_15c2e4;
        case 0x15c2e8u: goto label_15c2e8;
        case 0x15c2ecu: goto label_15c2ec;
        case 0x15c2f0u: goto label_15c2f0;
        case 0x15c2f4u: goto label_15c2f4;
        case 0x15c2f8u: goto label_15c2f8;
        case 0x15c2fcu: goto label_15c2fc;
        case 0x15c300u: goto label_15c300;
        case 0x15c304u: goto label_15c304;
        case 0x15c308u: goto label_15c308;
        case 0x15c30cu: goto label_15c30c;
        case 0x15c310u: goto label_15c310;
        case 0x15c314u: goto label_15c314;
        case 0x15c318u: goto label_15c318;
        case 0x15c31cu: goto label_15c31c;
        case 0x15c320u: goto label_15c320;
        case 0x15c324u: goto label_15c324;
        case 0x15c328u: goto label_15c328;
        case 0x15c32cu: goto label_15c32c;
        case 0x15c330u: goto label_15c330;
        case 0x15c334u: goto label_15c334;
        case 0x15c338u: goto label_15c338;
        case 0x15c33cu: goto label_15c33c;
        case 0x15c340u: goto label_15c340;
        case 0x15c344u: goto label_15c344;
        case 0x15c348u: goto label_15c348;
        case 0x15c34cu: goto label_15c34c;
        case 0x15c350u: goto label_15c350;
        case 0x15c354u: goto label_15c354;
        case 0x15c358u: goto label_15c358;
        case 0x15c35cu: goto label_15c35c;
        case 0x15c360u: goto label_15c360;
        case 0x15c364u: goto label_15c364;
        case 0x15c368u: goto label_15c368;
        case 0x15c36cu: goto label_15c36c;
        case 0x15c370u: goto label_15c370;
        case 0x15c374u: goto label_15c374;
        case 0x15c378u: goto label_15c378;
        case 0x15c37cu: goto label_15c37c;
        case 0x15c380u: goto label_15c380;
        case 0x15c384u: goto label_15c384;
        case 0x15c388u: goto label_15c388;
        case 0x15c38cu: goto label_15c38c;
        case 0x15c390u: goto label_15c390;
        case 0x15c394u: goto label_15c394;
        case 0x15c398u: goto label_15c398;
        case 0x15c39cu: goto label_15c39c;
        case 0x15c3a0u: goto label_15c3a0;
        case 0x15c3a4u: goto label_15c3a4;
        case 0x15c3a8u: goto label_15c3a8;
        case 0x15c3acu: goto label_15c3ac;
        case 0x15c3b0u: goto label_15c3b0;
        case 0x15c3b4u: goto label_15c3b4;
        case 0x15c3b8u: goto label_15c3b8;
        case 0x15c3bcu: goto label_15c3bc;
        case 0x15c3c0u: goto label_15c3c0;
        case 0x15c3c4u: goto label_15c3c4;
        case 0x15c3c8u: goto label_15c3c8;
        case 0x15c3ccu: goto label_15c3cc;
        case 0x15c3d0u: goto label_15c3d0;
        case 0x15c3d4u: goto label_15c3d4;
        case 0x15c3d8u: goto label_15c3d8;
        case 0x15c3dcu: goto label_15c3dc;
        case 0x15c3e0u: goto label_15c3e0;
        case 0x15c3e4u: goto label_15c3e4;
        case 0x15c3e8u: goto label_15c3e8;
        case 0x15c3ecu: goto label_15c3ec;
        case 0x15c3f0u: goto label_15c3f0;
        case 0x15c3f4u: goto label_15c3f4;
        case 0x15c3f8u: goto label_15c3f8;
        case 0x15c3fcu: goto label_15c3fc;
        case 0x15c400u: goto label_15c400;
        case 0x15c404u: goto label_15c404;
        case 0x15c408u: goto label_15c408;
        case 0x15c40cu: goto label_15c40c;
        case 0x15c410u: goto label_15c410;
        case 0x15c414u: goto label_15c414;
        case 0x15c418u: goto label_15c418;
        case 0x15c41cu: goto label_15c41c;
        case 0x15c420u: goto label_15c420;
        case 0x15c424u: goto label_15c424;
        case 0x15c428u: goto label_15c428;
        case 0x15c42cu: goto label_15c42c;
        case 0x15c430u: goto label_15c430;
        case 0x15c434u: goto label_15c434;
        case 0x15c438u: goto label_15c438;
        case 0x15c43cu: goto label_15c43c;
        case 0x15c440u: goto label_15c440;
        case 0x15c444u: goto label_15c444;
        case 0x15c448u: goto label_15c448;
        case 0x15c44cu: goto label_15c44c;
        case 0x15c450u: goto label_15c450;
        case 0x15c454u: goto label_15c454;
        case 0x15c458u: goto label_15c458;
        case 0x15c45cu: goto label_15c45c;
        case 0x15c460u: goto label_15c460;
        case 0x15c464u: goto label_15c464;
        case 0x15c468u: goto label_15c468;
        case 0x15c46cu: goto label_15c46c;
        case 0x15c470u: goto label_15c470;
        case 0x15c474u: goto label_15c474;
        case 0x15c478u: goto label_15c478;
        case 0x15c47cu: goto label_15c47c;
        case 0x15c480u: goto label_15c480;
        case 0x15c484u: goto label_15c484;
        case 0x15c488u: goto label_15c488;
        case 0x15c48cu: goto label_15c48c;
        case 0x15c490u: goto label_15c490;
        case 0x15c494u: goto label_15c494;
        case 0x15c498u: goto label_15c498;
        case 0x15c49cu: goto label_15c49c;
        case 0x15c4a0u: goto label_15c4a0;
        case 0x15c4a4u: goto label_15c4a4;
        case 0x15c4a8u: goto label_15c4a8;
        case 0x15c4acu: goto label_15c4ac;
        case 0x15c4b0u: goto label_15c4b0;
        case 0x15c4b4u: goto label_15c4b4;
        case 0x15c4b8u: goto label_15c4b8;
        case 0x15c4bcu: goto label_15c4bc;
        case 0x15c4c0u: goto label_15c4c0;
        case 0x15c4c4u: goto label_15c4c4;
        case 0x15c4c8u: goto label_15c4c8;
        case 0x15c4ccu: goto label_15c4cc;
        case 0x15c4d0u: goto label_15c4d0;
        case 0x15c4d4u: goto label_15c4d4;
        case 0x15c4d8u: goto label_15c4d8;
        case 0x15c4dcu: goto label_15c4dc;
        case 0x15c4e0u: goto label_15c4e0;
        case 0x15c4e4u: goto label_15c4e4;
        case 0x15c4e8u: goto label_15c4e8;
        case 0x15c4ecu: goto label_15c4ec;
        case 0x15c4f0u: goto label_15c4f0;
        case 0x15c4f4u: goto label_15c4f4;
        case 0x15c4f8u: goto label_15c4f8;
        case 0x15c4fcu: goto label_15c4fc;
        case 0x15c500u: goto label_15c500;
        case 0x15c504u: goto label_15c504;
        case 0x15c508u: goto label_15c508;
        case 0x15c50cu: goto label_15c50c;
        case 0x15c510u: goto label_15c510;
        case 0x15c514u: goto label_15c514;
        case 0x15c518u: goto label_15c518;
        case 0x15c51cu: goto label_15c51c;
        case 0x15c520u: goto label_15c520;
        case 0x15c524u: goto label_15c524;
        case 0x15c528u: goto label_15c528;
        case 0x15c52cu: goto label_15c52c;
        case 0x15c530u: goto label_15c530;
        case 0x15c534u: goto label_15c534;
        case 0x15c538u: goto label_15c538;
        case 0x15c53cu: goto label_15c53c;
        case 0x15c540u: goto label_15c540;
        case 0x15c544u: goto label_15c544;
        case 0x15c548u: goto label_15c548;
        case 0x15c54cu: goto label_15c54c;
        case 0x15c550u: goto label_15c550;
        case 0x15c554u: goto label_15c554;
        case 0x15c558u: goto label_15c558;
        case 0x15c55cu: goto label_15c55c;
        case 0x15c560u: goto label_15c560;
        case 0x15c564u: goto label_15c564;
        case 0x15c568u: goto label_15c568;
        case 0x15c56cu: goto label_15c56c;
        case 0x15c570u: goto label_15c570;
        case 0x15c574u: goto label_15c574;
        case 0x15c578u: goto label_15c578;
        case 0x15c57cu: goto label_15c57c;
        case 0x15c580u: goto label_15c580;
        case 0x15c584u: goto label_15c584;
        case 0x15c588u: goto label_15c588;
        case 0x15c58cu: goto label_15c58c;
        case 0x15c590u: goto label_15c590;
        case 0x15c594u: goto label_15c594;
        case 0x15c598u: goto label_15c598;
        case 0x15c59cu: goto label_15c59c;
        case 0x15c5a0u: goto label_15c5a0;
        case 0x15c5a4u: goto label_15c5a4;
        default: break;
    }

    ctx->pc = 0x15bcf8u;

label_15bcf8:
    // 0x15bcf8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15bcf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_15bcfc:
    // 0x15bcfc: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x15bcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_15bd00:
    // 0x15bd00: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x15bd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_15bd04:
    // 0x15bd04: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x15bd04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15bd08:
    // 0x15bd08: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x15bd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_15bd0c:
    // 0x15bd0c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x15bd0cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15bd10:
    // 0x15bd10: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x15bd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_15bd14:
    // 0x15bd14: 0x2463a710  addiu       $v1, $v1, -0x58F0
    ctx->pc = 0x15bd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944528));
label_15bd18:
    // 0x15bd18: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x15bd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_15bd1c:
    // 0x15bd1c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x15bd1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15bd20:
    // 0x15bd20: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x15bd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_15bd24:
    // 0x15bd24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15bd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15bd28:
    // 0x15bd28: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x15bd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_15bd2c:
    // 0x15bd2c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x15bd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_15bd30:
    // 0x15bd30: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x15bd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_15bd34:
    // 0x15bd34: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x15bd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_15bd38:
    // 0x15bd38: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x15bd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_15bd3c:
    // 0x15bd3c: 0x96e9001e  lhu         $t1, 0x1E($s7)
    ctx->pc = 0x15bd3cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 30)));
label_15bd40:
    // 0x15bd40: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x15bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_15bd44:
    // 0x15bd44: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x15bd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15bd48:
    // 0x15bd48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15bd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15bd4c:
    // 0x15bd4c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x15bd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_15bd50:
    // 0x15bd50: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x15bd50u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15bd54:
    // 0x15bd54: 0x11050010  beq         $t0, $a1, . + 4 + (0x10 << 2)
label_15bd58:
    if (ctx->pc == 0x15BD58u) {
        ctx->pc = 0x15BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD54u;
        // 0x15bd58: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BD5Cu;
        goto label_15bd5c;
    }
    ctx->pc = 0x15BD54u;
    {
        const bool branch_taken_0x15bd54 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x15BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD54u;
        // 0x15bd58: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd54) {
            ctx->pc = 0x15BD98u;
            goto label_15bd98;
        }
    }
    ctx->pc = 0x15BD5Cu;
label_15bd5c:
    // 0x15bd5c: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x15bd5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
label_15bd60:
    // 0x15bd60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_15bd64:
    if (ctx->pc == 0x15BD64u) {
        ctx->pc = 0x15BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD60u;
        // 0x15bd64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BD68u;
        goto label_15bd68;
    }
    ctx->pc = 0x15BD60u;
    {
        const bool branch_taken_0x15bd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD60u;
        // 0x15bd64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd60) {
            ctx->pc = 0x15BD80u;
            goto label_15bd80;
        }
    }
    ctx->pc = 0x15BD68u;
label_15bd68:
    // 0x15bd68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15bd6c:
    // 0x15bd6c: 0x11020008  beq         $t0, $v0, . + 4 + (0x8 << 2)
label_15bd70:
    if (ctx->pc == 0x15BD70u) {
        ctx->pc = 0x15BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD6Cu;
        // 0x15bd70: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BD74u;
        goto label_15bd74;
    }
    ctx->pc = 0x15BD6Cu;
    {
        const bool branch_taken_0x15bd6c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x15BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD6Cu;
        // 0x15bd70: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd6c) {
            ctx->pc = 0x15BD90u;
            goto label_15bd90;
        }
    }
    ctx->pc = 0x15BD74u;
label_15bd74:
    // 0x15bd74: 0x10000016  b           . + 4 + (0x16 << 2)
label_15bd78:
    if (ctx->pc == 0x15BD78u) {
        ctx->pc = 0x15BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD74u;
        // 0x15bd78: 0x2443a4e8  addiu       $v1, $v0, -0x5B18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BD7Cu;
        goto label_15bd7c;
    }
    ctx->pc = 0x15BD74u;
    {
        const bool branch_taken_0x15bd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD74u;
        // 0x15bd78: 0x2443a4e8  addiu       $v1, $v0, -0x5B18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd74) {
            ctx->pc = 0x15BDD0u;
            goto label_15bdd0;
        }
    }
    ctx->pc = 0x15BD7Cu;
label_15bd7c:
    // 0x15bd7c: 0x0  nop
    ctx->pc = 0x15bd7cu;
    // NOP
label_15bd80:
    // 0x15bd80: 0x1102000b  beq         $t0, $v0, . + 4 + (0xB << 2)
label_15bd84:
    if (ctx->pc == 0x15BD84u) {
        ctx->pc = 0x15BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD80u;
        // 0x15bd84: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BD88u;
        goto label_15bd88;
    }
    ctx->pc = 0x15BD80u;
    {
        const bool branch_taken_0x15bd80 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x15BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD80u;
        // 0x15bd84: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd80) {
            ctx->pc = 0x15BDB0u;
            goto label_15bdb0;
        }
    }
    ctx->pc = 0x15BD88u;
label_15bd88:
    // 0x15bd88: 0x10000011  b           . + 4 + (0x11 << 2)
label_15bd8c:
    if (ctx->pc == 0x15BD8Cu) {
        ctx->pc = 0x15BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD88u;
        // 0x15bd8c: 0x2443a4e8  addiu       $v1, $v0, -0x5B18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BD90u;
        goto label_15bd90;
    }
    ctx->pc = 0x15BD88u;
    {
        const bool branch_taken_0x15bd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD88u;
        // 0x15bd8c: 0x2443a4e8  addiu       $v1, $v0, -0x5B18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd88) {
            ctx->pc = 0x15BDD0u;
            goto label_15bdd0;
        }
    }
    ctx->pc = 0x15BD90u;
label_15bd90:
    // 0x15bd90: 0x1000000d  b           . + 4 + (0xD << 2)
label_15bd94:
    if (ctx->pc == 0x15BD94u) {
        ctx->pc = 0x15BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD90u;
        // 0x15bd94: 0x26f500a0  addiu       $s5, $s7, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BD98u;
        goto label_15bd98;
    }
    ctx->pc = 0x15BD90u;
    {
        const bool branch_taken_0x15bd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD90u;
        // 0x15bd94: 0x26f500a0  addiu       $s5, $s7, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd90) {
            ctx->pc = 0x15BDC8u;
            goto label_15bdc8;
        }
    }
    ctx->pc = 0x15BD98u;
label_15bd98:
    // 0x15bd98: 0x26c20050  addiu       $v0, $s6, 0x50
    ctx->pc = 0x15bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 80));
label_15bd9c:
    // 0x15bd9c: 0x26c4ffb0  addiu       $a0, $s6, -0x50
    ctx->pc = 0x15bd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967216));
label_15bda0:
    // 0x15bda0: 0x39230004  xori        $v1, $t1, 0x4
    ctx->pc = 0x15bda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)4);
label_15bda4:
    // 0x15bda4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x15bda4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15bda8:
    // 0x15bda8: 0x10000006  b           . + 4 + (0x6 << 2)
label_15bdac:
    if (ctx->pc == 0x15BDACu) {
        ctx->pc = 0x15BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDA8u;
        // 0x15bdac: 0x26f500e0  addiu       $s5, $s7, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BDB0u;
        goto label_15bdb0;
    }
    ctx->pc = 0x15BDA8u;
    {
        const bool branch_taken_0x15bda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDA8u;
        // 0x15bdac: 0x26f500e0  addiu       $s5, $s7, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bda8) {
            ctx->pc = 0x15BDC4u;
            goto label_15bdc4;
        }
    }
    ctx->pc = 0x15BDB0u;
label_15bdb0:
    // 0x15bdb0: 0x26c200a0  addiu       $v0, $s6, 0xA0
    ctx->pc = 0x15bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 160));
label_15bdb4:
    // 0x15bdb4: 0x26c4ff60  addiu       $a0, $s6, -0xA0
    ctx->pc = 0x15bdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967136));
label_15bdb8:
    // 0x15bdb8: 0x39230004  xori        $v1, $t1, 0x4
    ctx->pc = 0x15bdb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)4);
label_15bdbc:
    // 0x15bdbc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x15bdbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15bdc0:
    // 0x15bdc0: 0x26f50120  addiu       $s5, $s7, 0x120
    ctx->pc = 0x15bdc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 288));
label_15bdc4:
    // 0x15bdc4: 0x83b00a  movz        $s6, $a0, $v1
    ctx->pc = 0x15bdc4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 4));
label_15bdc8:
    // 0x15bdc8: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x15bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_15bdcc:
    // 0x15bdcc: 0x2443a4e8  addiu       $v1, $v0, -0x5B18
    ctx->pc = 0x15bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943976));
label_15bdd0:
    // 0x15bdd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15bdd4:
    // 0x15bdd4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_15bdd8:
    if (ctx->pc == 0x15BDD8u) {
        ctx->pc = 0x15BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDD4u;
        // 0x15bdd8: 0x96e20014  lhu         $v0, 0x14($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BDDCu;
        goto label_15bddc;
    }
    ctx->pc = 0x15BDD4u;
    {
        const bool branch_taken_0x15bdd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bdd4) {
            ctx->pc = 0x15BDD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BDD4u;
            // 0x15bdd8: 0x96e20014  lhu         $v0, 0x14($s7) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BDF8u;
            goto label_15bdf8;
        }
    }
    ctx->pc = 0x15BDDCu;
label_15bddc:
    // 0x15bddc: 0x0  nop
    ctx->pc = 0x15bddcu;
    // NOP
label_15bde0:
    // 0x15bde0: 0x0  nop
    ctx->pc = 0x15bde0u;
    // NOP
label_15bde4:
    // 0x15bde4: 0x0  nop
    ctx->pc = 0x15bde4u;
    // NOP
label_15bde8:
    // 0x15bde8: 0x0  nop
    ctx->pc = 0x15bde8u;
    // NOP
label_15bdec:
    // 0x15bdec: 0x5446fff8  bnel        $v0, $a2, . + 4 + (-0x8 << 2)
label_15bdf0:
    if (ctx->pc == 0x15BDF0u) {
        ctx->pc = 0x15BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDECu;
        // 0x15bdf0: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BDF4u;
        goto label_15bdf4;
    }
    ctx->pc = 0x15BDECu;
    {
        const bool branch_taken_0x15bdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x15bdec) {
            ctx->pc = 0x15BDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BDECu;
            // 0x15bdf0: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BDD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15bdd0;
        }
    }
    ctx->pc = 0x15BDF4u;
label_15bdf4:
    // 0x15bdf4: 0x96e20014  lhu         $v0, 0x14($s7)
    ctx->pc = 0x15bdf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 20)));
label_15bdf8:
    // 0x15bdf8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x15bdf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_15bdfc:
    // 0x15bdfc: 0x104001de  beqz        $v0, . + 4 + (0x1DE << 2)
label_15be00:
    if (ctx->pc == 0x15BE00u) {
        ctx->pc = 0x15BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDFCu;
        // 0x15be00: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BE04u;
        goto label_15be04;
    }
    ctx->pc = 0x15BDFCu;
    {
        const bool branch_taken_0x15bdfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDFCu;
        // 0x15be00: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bdfc) {
            ctx->pc = 0x15C578u;
            goto label_15c578;
        }
    }
    ctx->pc = 0x15BE04u;
label_15be04:
    // 0x15be04: 0x12a001dd  beqz        $s5, . + 4 + (0x1DD << 2)
label_15be08:
    if (ctx->pc == 0x15BE08u) {
        ctx->pc = 0x15BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE04u;
        // 0x15be08: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BE0Cu;
        goto label_15be0c;
    }
    ctx->pc = 0x15BE04u;
    {
        const bool branch_taken_0x15be04 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE04u;
        // 0x15be08: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15be04) {
            ctx->pc = 0x15C57Cu;
            goto label_15c57c;
        }
    }
    ctx->pc = 0x15BE0Cu;
label_15be0c:
    // 0x15be0c: 0x10a001db  beqz        $a1, . + 4 + (0x1DB << 2)
label_15be10:
    if (ctx->pc == 0x15BE10u) {
        ctx->pc = 0x15BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE0Cu;
        // 0x15be10: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BE14u;
        goto label_15be14;
    }
    ctx->pc = 0x15BE0Cu;
    {
        const bool branch_taken_0x15be0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE0Cu;
        // 0x15be10: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15be0c) {
            ctx->pc = 0x15C57Cu;
            goto label_15c57c;
        }
    }
    ctx->pc = 0x15BE14u;
label_15be14:
    // 0x15be14: 0x8ee40010  lw          $a0, 0x10($s7)
    ctx->pc = 0x15be14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_15be18:
    // 0x15be18: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x15be18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_15be1c:
    // 0x15be1c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15be1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15be20:
    // 0x15be20: 0x8c910024  lw          $s1, 0x24($a0)
    ctx->pc = 0x15be20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_15be24:
    // 0x15be24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15be24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15be28:
    // 0x15be28: 0x24a5a380  addiu       $a1, $a1, -0x5C80
    ctx->pc = 0x15be28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943616));
label_15be2c:
    // 0x15be2c: 0xaea70018  sw          $a3, 0x18($s5)
    ctx->pc = 0x15be2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 7));
label_15be30:
    // 0x15be30: 0x24a2ffd8  addiu       $v0, $a1, -0x28
    ctx->pc = 0x15be30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967256));
label_15be34:
    // 0x15be34: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x15be34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_15be38:
    // 0x15be38: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x15be38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_15be3c:
    // 0x15be3c: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x15be3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15be40:
    // 0x15be40: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x15be40u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15be44:
    // 0x15be44: 0xc06bd28  jal         func_1AF4A0
label_15be48:
    if (ctx->pc == 0x15BE48u) {
        ctx->pc = 0x15BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE44u;
        // 0x15be48: 0x8e920000  lw          $s2, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BE4Cu;
        goto label_15be4c;
    }
    ctx->pc = 0x15BE44u;
    SET_GPR_U32(ctx, 31, 0x15BE4Cu);
    ctx->pc = 0x15BE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BE44u;
    // 0x15be48: 0x8e920000  lw          $s2, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15BE44u, 0x15BE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BE4Cu;
label_15be4c:
    // 0x15be4c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x15be4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_15be50:
    // 0x15be50: 0xc06bd20  jal         func_1AF480
label_15be54:
    if (ctx->pc == 0x15BE54u) {
        ctx->pc = 0x15BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE50u;
        // 0x15be54: 0x26930008  addiu       $s3, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BE58u;
        goto label_15be58;
    }
    ctx->pc = 0x15BE50u;
    SET_GPR_U32(ctx, 31, 0x15BE58u);
    ctx->pc = 0x15BE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BE50u;
    // 0x15be54: 0x26930008  addiu       $s3, $s4, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15BE50u, 0x15BE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BE58u;
label_15be58:
    // 0x15be58: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15be58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15be5c:
    // 0x15be5c: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x15be5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_15be60:
    // 0x15be60: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15be60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15be64:
    // 0x15be64: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15be64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15be68:
    // 0x15be68: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15be68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15be6c:
    // 0x15be6c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x15be6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_15be70:
    // 0x15be70: 0xc0682b2  jal         func_1A0AC8
label_15be74:
    if (ctx->pc == 0x15BE74u) {
        ctx->pc = 0x15BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE70u;
        // 0x15be74: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BE78u;
        goto label_15be78;
    }
    ctx->pc = 0x15BE70u;
    SET_GPR_U32(ctx, 31, 0x15BE78u);
    ctx->pc = 0x15BE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BE70u;
    // 0x15be74: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15BE70u, 0x15BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BE78u;
label_15be78:
    // 0x15be78: 0xc0682b6  jal         func_1A0AD8
label_15be7c:
    if (ctx->pc == 0x15BE7Cu) {
        ctx->pc = 0x15BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE78u;
        // 0x15be7c: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BE80u;
        goto label_15be80;
    }
    ctx->pc = 0x15BE78u;
    SET_GPR_U32(ctx, 31, 0x15BE80u);
    ctx->pc = 0x15BE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BE78u;
    // 0x15be7c: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15BE78u, 0x15BE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BE80u;
label_15be80:
    // 0x15be80: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15be80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15be84:
    // 0x15be84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15be84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15be88:
    // 0x15be88: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15be88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15be8c:
    // 0x15be8c: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x15be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_15be90:
    // 0x15be90: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15be90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15be94:
    // 0x15be94: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x15be94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_15be98:
    // 0x15be98: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15be98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15be9c:
    // 0x15be9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15be9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15bea0:
    // 0x15bea0: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15bea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15bea4:
    // 0x15bea4: 0xc062cb0  jal         func_18B2C0
label_15bea8:
    if (ctx->pc == 0x15BEA8u) {
        ctx->pc = 0x15BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BEA4u;
        // 0x15bea8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BEACu;
        goto label_15beac;
    }
    ctx->pc = 0x15BEA4u;
    SET_GPR_U32(ctx, 31, 0x15BEACu);
    ctx->pc = 0x15BEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BEA4u;
    // 0x15bea8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15BEA4u, 0x15BEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BEACu;
label_15beac:
    // 0x15beac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15beacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15beb0:
    // 0x15beb0: 0xc06825c  jal         func_1A0970
label_15beb4:
    if (ctx->pc == 0x15BEB4u) {
        ctx->pc = 0x15BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BEB0u;
        // 0x15beb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BEB8u;
        goto label_15beb8;
    }
    ctx->pc = 0x15BEB0u;
    SET_GPR_U32(ctx, 31, 0x15BEB8u);
    ctx->pc = 0x15BEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BEB0u;
    // 0x15beb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15BEB0u, 0x15BEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BEB8u;
label_15beb8:
    // 0x15beb8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15bebc:
    // 0x15bebc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15bebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15bec0:
    // 0x15bec0: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15bec4:
    // 0x15bec4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15bec4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15bec8:
    // 0x15bec8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15becc:
    // 0x15becc: 0x60f809  jalr        $v1
label_15bed0:
    if (ctx->pc == 0x15BED0u) {
        ctx->pc = 0x15BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BECCu;
        // 0x15bed0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BED4u;
        goto label_15bed4;
    }
    ctx->pc = 0x15BECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BED4u);
        ctx->pc = 0x15BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BECCu;
        // 0x15bed0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BECCu, 0x15BED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BED4u;
label_15bed4:
    // 0x15bed4: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15bed4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15bed8:
    // 0x15bed8: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15bedc:
    if (ctx->pc == 0x15BEDCu) {
        ctx->pc = 0x15BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BED8u;
        // 0x15bedc: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BEE0u;
        goto label_15bee0;
    }
    ctx->pc = 0x15BED8u;
    {
        const bool branch_taken_0x15bed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BED8u;
        // 0x15bedc: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bed8) {
            ctx->pc = 0x15BF94u;
            goto label_15bf94;
        }
    }
    ctx->pc = 0x15BEE0u;
label_15bee0:
    // 0x15bee0: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15bee0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15bee4:
    // 0x15bee4: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15bee4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15bee8:
    // 0x15bee8: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15bee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15beec:
    // 0x15beec: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15beecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15bef0:
    // 0x15bef0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15bef4:
    // 0x15bef4: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15bef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15bef8:
    // 0x15bef8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15befc:
    // 0x15befc: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15befcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15bf00:
    // 0x15bf00: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15bf00u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15bf04:
    // 0x15bf04: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15bf08:
    // 0x15bf08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15bf0c:
    // 0x15bf0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15bf0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15bf10:
    // 0x15bf10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15bf10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15bf14:
    // 0x15bf14: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15bf14u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15bf18:
    // 0x15bf18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15bf18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15bf1c:
    // 0x15bf1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15bf1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15bf20:
    // 0x15bf20: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15bf20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15bf24:
    // 0x15bf24: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15bf24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15bf28:
    // 0x15bf28: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15bf28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15bf2c:
    // 0x15bf2c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15bf2cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15bf30:
    // 0x15bf30: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15bf30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15bf34:
    // 0x15bf34: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15bf34u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15bf38:
    // 0x15bf38: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15bf38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15bf3c:
    // 0x15bf3c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15bf3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15bf40:
    // 0x15bf40: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15bf40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15bf44:
    // 0x15bf44: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15bf44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15bf48:
    // 0x15bf48: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15bf48u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15bf4c:
    // 0x15bf4c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15bf4cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15bf50:
    // 0x15bf50: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15bf50u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15bf54:
    // 0x15bf54: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15bf54u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15bf58:
    // 0x15bf58: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15bf58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15bf5c:
    // 0x15bf5c: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15bf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15bf60:
    // 0x15bf60: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15bf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15bf64:
    // 0x15bf64: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15bf64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15bf68:
    // 0x15bf68: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15bf68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15bf6c:
    // 0x15bf6c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15bf6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15bf70:
    // 0x15bf70: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15bf70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15bf74:
    // 0x15bf74: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15bf74u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15bf78:
    // 0x15bf78: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15bf78u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15bf7c:
    // 0x15bf7c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15bf7cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15bf80:
    // 0x15bf80: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15bf80u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15bf84:
    // 0x15bf84: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15bf84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15bf88:
    // 0x15bf88: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15bf88u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15bf8c:
    // 0x15bf8c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15bf8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15bf90:
    // 0x15bf90: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15bf90u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_15bf94:
    // 0x15bf94: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15bf94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15bf98:
    // 0x15bf98: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15bf98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15bf9c:
    // 0x15bf9c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15bf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15bfa0:
    // 0x15bfa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15bfa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15bfa4:
    // 0x15bfa4: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x15bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15bfa8:
    // 0x15bfa8: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x15bfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_15bfac:
    // 0x15bfac: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15bfacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15bfb0:
    // 0x15bfb0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15bfb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15bfb4:
    // 0x15bfb4: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x15bfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
label_15bfb8:
    // 0x15bfb8: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x15bfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
label_15bfbc:
    // 0x15bfbc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x15bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15bfc0:
    // 0x15bfc0: 0x40f809  jalr        $v0
label_15bfc4:
    if (ctx->pc == 0x15BFC4u) {
        ctx->pc = 0x15BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFC0u;
        // 0x15bfc4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BFC8u;
        goto label_15bfc8;
    }
    ctx->pc = 0x15BFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15BFC8u);
        ctx->pc = 0x15BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFC0u;
        // 0x15bfc4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BFC0u, 0x15BFC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BFC8u;
label_15bfc8:
    // 0x15bfc8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15bfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15bfcc:
    // 0x15bfcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15bfd0:
    // 0x15bfd0: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x15bfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15bfd4:
    // 0x15bfd4: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15bfd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15bfd8:
    // 0x15bfd8: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15bfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15bfdc:
    // 0x15bfdc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15bfdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15bfe0:
    // 0x15bfe0: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x15bfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_15bfe4:
    // 0x15bfe4: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x15bfe4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15bfe8:
    // 0x15bfe8: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x15bfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_15bfec:
    // 0x15bfec: 0xe0f809  jalr        $a3
label_15bff0:
    if (ctx->pc == 0x15BFF0u) {
        ctx->pc = 0x15BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFECu;
        // 0x15bff0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BFF4u;
        goto label_15bff4;
    }
    ctx->pc = 0x15BFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x15BFF4u);
        ctx->pc = 0x15BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFECu;
        // 0x15bff0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BFECu, 0x15BFF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BFF4u;
label_15bff4:
    // 0x15bff4: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x15bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_15bff8:
    // 0x15bff8: 0x5840015d  blezl       $v0, . + 4 + (0x15D << 2)
label_15bffc:
    if (ctx->pc == 0x15BFFCu) {
        ctx->pc = 0x15BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFF8u;
        // 0x15bffc: 0x96e20016  lhu         $v0, 0x16($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C000u;
        goto label_15c000;
    }
    ctx->pc = 0x15BFF8u;
    {
        const bool branch_taken_0x15bff8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15bff8) {
            ctx->pc = 0x15BFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BFF8u;
            // 0x15bffc: 0x96e20016  lhu         $v0, 0x16($s7) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C570u;
            goto label_15c570;
        }
    }
    ctx->pc = 0x15C000u;
label_15c000:
    // 0x15c000: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x15c000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_15c004:
    // 0x15c004: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x15c004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_15c008:
    // 0x15c008: 0x2463a380  addiu       $v1, $v1, -0x5C80
    ctx->pc = 0x15c008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943616));
label_15c00c:
    // 0x15c00c: 0x8c510024  lw          $s1, 0x24($v0)
    ctx->pc = 0x15c00cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_15c010:
    // 0x15c010: 0x247400c8  addiu       $s4, $v1, 0xC8
    ctx->pc = 0x15c010u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 200));
label_15c014:
    // 0x15c014: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15c014u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15c018:
    // 0x15c018: 0x247300d0  addiu       $s3, $v1, 0xD0
    ctx->pc = 0x15c018u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
label_15c01c:
    // 0x15c01c: 0xc06bd28  jal         func_1AF4A0
label_15c020:
    if (ctx->pc == 0x15C020u) {
        ctx->pc = 0x15C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C01Cu;
        // 0x15c020: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C024u;
        goto label_15c024;
    }
    ctx->pc = 0x15C01Cu;
    SET_GPR_U32(ctx, 31, 0x15C024u);
    ctx->pc = 0x15C020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C01Cu;
    // 0x15c020: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15C01Cu, 0x15C024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C024u;
label_15c024:
    // 0x15c024: 0xc06bd20  jal         func_1AF480
label_15c028:
    if (ctx->pc == 0x15C028u) {
        ctx->pc = 0x15C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C024u;
        // 0x15c028: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C02Cu;
        goto label_15c02c;
    }
    ctx->pc = 0x15C024u;
    SET_GPR_U32(ctx, 31, 0x15C02Cu);
    ctx->pc = 0x15C028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C024u;
    // 0x15c028: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15C024u, 0x15C02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C02Cu;
label_15c02c:
    // 0x15c02c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15c030:
    // 0x15c030: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x15c030u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_15c034:
    // 0x15c034: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15c034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15c038:
    // 0x15c038: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15c038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15c03c:
    // 0x15c03c: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15c03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15c040:
    // 0x15c040: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x15c040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_15c044:
    // 0x15c044: 0xc0682b2  jal         func_1A0AC8
label_15c048:
    if (ctx->pc == 0x15C048u) {
        ctx->pc = 0x15C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C044u;
        // 0x15c048: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C04Cu;
        goto label_15c04c;
    }
    ctx->pc = 0x15C044u;
    SET_GPR_U32(ctx, 31, 0x15C04Cu);
    ctx->pc = 0x15C048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C044u;
    // 0x15c048: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15C044u, 0x15C04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C04Cu;
label_15c04c:
    // 0x15c04c: 0xc0682b6  jal         func_1A0AD8
label_15c050:
    if (ctx->pc == 0x15C050u) {
        ctx->pc = 0x15C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C04Cu;
        // 0x15c050: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C054u;
        goto label_15c054;
    }
    ctx->pc = 0x15C04Cu;
    SET_GPR_U32(ctx, 31, 0x15C054u);
    ctx->pc = 0x15C050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C04Cu;
    // 0x15c050: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15C04Cu, 0x15C054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C054u;
label_15c054:
    // 0x15c054: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15c054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15c058:
    // 0x15c058: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15c058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c05c:
    // 0x15c05c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15c060:
    // 0x15c060: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x15c060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_15c064:
    // 0x15c064: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15c064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15c068:
    // 0x15c068: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x15c068u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_15c06c:
    // 0x15c06c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15c06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c070:
    // 0x15c070: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15c070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c074:
    // 0x15c074: 0xc062cb0  jal         func_18B2C0
label_15c078:
    if (ctx->pc == 0x15C078u) {
        ctx->pc = 0x15C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C074u;
        // 0x15c078: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C07Cu;
        goto label_15c07c;
    }
    ctx->pc = 0x15C074u;
    SET_GPR_U32(ctx, 31, 0x15C07Cu);
    ctx->pc = 0x15C078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C074u;
    // 0x15c078: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15C074u, 0x15C07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C07Cu;
label_15c07c:
    // 0x15c07c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15c07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c080:
    // 0x15c080: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15c080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c084:
    // 0x15c084: 0xc06825c  jal         func_1A0970
label_15c088:
    if (ctx->pc == 0x15C088u) {
        ctx->pc = 0x15C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C084u;
        // 0x15c088: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C08Cu;
        goto label_15c08c;
    }
    ctx->pc = 0x15C084u;
    SET_GPR_U32(ctx, 31, 0x15C08Cu);
    ctx->pc = 0x15C088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C084u;
    // 0x15c088: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15C084u, 0x15C08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C08Cu;
label_15c08c:
    // 0x15c08c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15c090:
    // 0x15c090: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15c090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c094:
    // 0x15c094: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15c094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15c098:
    // 0x15c098: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15c098u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15c09c:
    // 0x15c09c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15c09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15c0a0:
    // 0x15c0a0: 0x60f809  jalr        $v1
label_15c0a4:
    if (ctx->pc == 0x15C0A4u) {
        ctx->pc = 0x15C0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0A0u;
        // 0x15c0a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C0A8u;
        goto label_15c0a8;
    }
    ctx->pc = 0x15C0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C0A8u);
        ctx->pc = 0x15C0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0A0u;
        // 0x15c0a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C0A0u, 0x15C0A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C0A8u;
label_15c0a8:
    // 0x15c0a8: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15c0a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15c0ac:
    // 0x15c0ac: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15c0b0:
    if (ctx->pc == 0x15C0B0u) {
        ctx->pc = 0x15C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0ACu;
        // 0x15c0b0: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C0B4u;
        goto label_15c0b4;
    }
    ctx->pc = 0x15C0ACu;
    {
        const bool branch_taken_0x15c0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0ACu;
        // 0x15c0b0: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c0ac) {
            ctx->pc = 0x15C168u;
            goto label_15c168;
        }
    }
    ctx->pc = 0x15C0B4u;
label_15c0b4:
    // 0x15c0b4: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15c0b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15c0b8:
    // 0x15c0b8: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15c0b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15c0bc:
    // 0x15c0bc: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15c0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15c0c0:
    // 0x15c0c0: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15c0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15c0c4:
    // 0x15c0c4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15c0c8:
    // 0x15c0c8: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15c0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15c0cc:
    // 0x15c0cc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15c0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15c0d0:
    // 0x15c0d0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15c0d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15c0d4:
    // 0x15c0d4: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15c0d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15c0d8:
    // 0x15c0d8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15c0dc:
    // 0x15c0dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15c0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15c0e0:
    // 0x15c0e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15c0e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15c0e4:
    // 0x15c0e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15c0e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15c0e8:
    // 0x15c0e8: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15c0e8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15c0ec:
    // 0x15c0ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15c0ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15c0f0:
    // 0x15c0f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15c0f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15c0f4:
    // 0x15c0f4: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15c0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15c0f8:
    // 0x15c0f8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15c0f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15c0fc:
    // 0x15c0fc: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15c0fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15c100:
    // 0x15c100: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15c100u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15c104:
    // 0x15c104: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15c104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15c108:
    // 0x15c108: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15c108u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15c10c:
    // 0x15c10c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15c10cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15c110:
    // 0x15c110: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15c110u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15c114:
    // 0x15c114: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15c114u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15c118:
    // 0x15c118: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15c118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15c11c:
    // 0x15c11c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15c11cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15c120:
    // 0x15c120: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15c120u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15c124:
    // 0x15c124: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15c124u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15c128:
    // 0x15c128: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15c128u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15c12c:
    // 0x15c12c: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15c12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15c130:
    // 0x15c130: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15c130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15c134:
    // 0x15c134: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15c134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15c138:
    // 0x15c138: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15c138u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15c13c:
    // 0x15c13c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15c13cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15c140:
    // 0x15c140: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15c140u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15c144:
    // 0x15c144: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15c144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15c148:
    // 0x15c148: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15c148u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15c14c:
    // 0x15c14c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15c14cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15c150:
    // 0x15c150: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15c150u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15c154:
    // 0x15c154: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15c154u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15c158:
    // 0x15c158: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15c158u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15c15c:
    // 0x15c15c: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15c15cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15c160:
    // 0x15c160: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15c160u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15c164:
    // 0x15c164: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15c164u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_15c168:
    // 0x15c168: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15c168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c16c:
    // 0x15c16c: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15c16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15c170:
    // 0x15c170: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15c170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15c174:
    // 0x15c174: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15c174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c178:
    // 0x15c178: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x15c178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15c17c:
    // 0x15c17c: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x15c17cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15c180:
    // 0x15c180: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x15c180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_15c184:
    // 0x15c184: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15c184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15c188:
    // 0x15c188: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15c188u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15c18c:
    // 0x15c18c: 0xae23012c  sw          $v1, 0x12C($s1)
    ctx->pc = 0x15c18cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
label_15c190:
    // 0x15c190: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15c190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15c194:
    // 0x15c194: 0x60f809  jalr        $v1
label_15c198:
    if (ctx->pc == 0x15C198u) {
        ctx->pc = 0x15C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C194u;
        // 0x15c198: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C19Cu;
        goto label_15c19c;
    }
    ctx->pc = 0x15C194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C19Cu);
        ctx->pc = 0x15C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C194u;
        // 0x15c198: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C194u, 0x15C19Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C19Cu;
label_15c19c:
    // 0x15c19c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15c19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15c1a0:
    // 0x15c1a0: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15c1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15c1a4:
    // 0x15c1a4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x15c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_15c1a8:
    // 0x15c1a8: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15c1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15c1ac:
    // 0x15c1ac: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15c1acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15c1b0:
    // 0x15c1b0: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x15c1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_15c1b4:
    // 0x15c1b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15c1b8:
    // 0x15c1b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c1bc:
    // 0x15c1bc: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x15c1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_15c1c0:
    // 0x15c1c0: 0x60f809  jalr        $v1
label_15c1c4:
    if (ctx->pc == 0x15C1C4u) {
        ctx->pc = 0x15C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1C0u;
        // 0x15c1c4: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C1C8u;
        goto label_15c1c8;
    }
    ctx->pc = 0x15C1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C1C8u);
        ctx->pc = 0x15C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1C0u;
        // 0x15c1c4: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C1C0u, 0x15C1C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C1C8u;
label_15c1c8:
    // 0x15c1c8: 0x8690000c  lh          $s0, 0xC($s4)
    ctx->pc = 0x15c1c8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15c1cc:
    // 0x15c1cc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15c1d0:
    // 0x15c1d0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x15c1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_15c1d4:
    // 0x15c1d4: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x15c1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
label_15c1d8:
    // 0x15c1d8: 0x24a5a2a8  addiu       $a1, $a1, -0x5D58
    ctx->pc = 0x15c1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943400));
label_15c1dc:
    // 0x15c1dc: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x15c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_15c1e0:
    // 0x15c1e0: 0x8fd20020  lw          $s2, 0x20($fp)
    ctx->pc = 0x15c1e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_15c1e4:
    // 0x15c1e4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15c1e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15c1e8:
    // 0x15c1e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15c1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15c1ec:
    // 0x15c1ec: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x15c1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_15c1f0:
    // 0x15c1f0: 0x60f809  jalr        $v1
label_15c1f4:
    if (ctx->pc == 0x15C1F4u) {
        ctx->pc = 0x15C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1F0u;
        // 0x15c1f4: 0x8fd1002c  lw          $s1, 0x2C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C1F8u;
        goto label_15c1f8;
    }
    ctx->pc = 0x15C1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C1F8u);
        ctx->pc = 0x15C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1F0u;
        // 0x15c1f4: 0x8fd1002c  lw          $s1, 0x2C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C1F0u, 0x15C1F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C1F8u;
label_15c1f8:
    // 0x15c1f8: 0xaea00024  sw          $zero, 0x24($s5)
    ctx->pc = 0x15c1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
label_15c1fc:
    // 0x15c1fc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15c200:
    // 0x15c200: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x15c200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_15c204:
    // 0x15c204: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x15c204u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
label_15c208:
    // 0x15c208: 0xaeb00014  sw          $s0, 0x14($s5)
    ctx->pc = 0x15c208u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 16));
label_15c20c:
    // 0x15c20c: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_15c210:
    if (ctx->pc == 0x15C210u) {
        ctx->pc = 0x15C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C20Cu;
        // 0x15c210: 0xaea30030  sw          $v1, 0x30($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C214u;
        goto label_15c214;
    }
    ctx->pc = 0x15C20Cu;
    {
        const bool branch_taken_0x15c20c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C20Cu;
        // 0x15c210: 0xaea30030  sw          $v1, 0x30($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c20c) {
            ctx->pc = 0x15C238u;
            goto label_15c238;
        }
    }
    ctx->pc = 0x15C214u;
label_15c214:
    // 0x15c214: 0x121043  sra         $v0, $s2, 1
    ctx->pc = 0x15c214u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
label_15c218:
    // 0x15c218: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
label_15c21c:
    if (ctx->pc == 0x15C21Cu) {
        ctx->pc = 0x15C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C218u;
        // 0x15c21c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C220u;
        goto label_15c220;
    }
    ctx->pc = 0x15C218u;
    {
        const bool branch_taken_0x15c218 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c218) {
            ctx->pc = 0x15C21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C218u;
            // 0x15c21c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C220u;
            goto label_15c220;
        }
    }
    ctx->pc = 0x15C220u;
label_15c220:
    // 0x15c220: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15c224:
    // 0x15c224: 0x52001a  div         $zero, $v0, $s2
    ctx->pc = 0x15c224u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_15c228:
    // 0x15c228: 0x1012  mflo        $v0
    ctx->pc = 0x15c228u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_15c22c:
    // 0x15c22c: 0x10000004  b           . + 4 + (0x4 << 2)
label_15c230:
    if (ctx->pc == 0x15C230u) {
        ctx->pc = 0x15C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C22Cu;
        // 0x15c230: 0xae620028  sw          $v0, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C234u;
        goto label_15c234;
    }
    ctx->pc = 0x15C22Cu;
    {
        const bool branch_taken_0x15c22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C22Cu;
        // 0x15c230: 0xae620028  sw          $v0, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c22c) {
            ctx->pc = 0x15C240u;
            goto label_15c240;
        }
    }
    ctx->pc = 0x15C234u;
label_15c234:
    // 0x15c234: 0x0  nop
    ctx->pc = 0x15c234u;
    // NOP
label_15c238:
    // 0x15c238: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15c238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c23c:
    // 0x15c23c: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x15c23cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
label_15c240:
    // 0x15c240: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_15c244:
    if (ctx->pc == 0x15C244u) {
        ctx->pc = 0x15C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C240u;
        // 0x15c244: 0x111043  sra         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C248u;
        goto label_15c248;
    }
    ctx->pc = 0x15C240u;
    {
        const bool branch_taken_0x15c240 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C240u;
        // 0x15c244: 0x111043  sra         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c240) {
            ctx->pc = 0x15C268u;
            goto label_15c268;
        }
    }
    ctx->pc = 0x15C248u;
label_15c248:
    // 0x15c248: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
label_15c24c:
    if (ctx->pc == 0x15C24Cu) {
        ctx->pc = 0x15C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C248u;
        // 0x15c24c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C250u;
        goto label_15c250;
    }
    ctx->pc = 0x15C248u;
    {
        const bool branch_taken_0x15c248 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c248) {
            ctx->pc = 0x15C24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C248u;
            // 0x15c24c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C250u;
            goto label_15c250;
        }
    }
    ctx->pc = 0x15C250u;
label_15c250:
    // 0x15c250: 0x34018000  ori         $at, $zero, 0x8000
    ctx->pc = 0x15c250u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_15c254:
    // 0x15c254: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x15c254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_15c258:
    // 0x15c258: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x15c258u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_15c25c:
    // 0x15c25c: 0x1012  mflo        $v0
    ctx->pc = 0x15c25cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_15c260:
    // 0x15c260: 0x10000003  b           . + 4 + (0x3 << 2)
label_15c264:
    if (ctx->pc == 0x15C264u) {
        ctx->pc = 0x15C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C260u;
        // 0x15c264: 0xae62002c  sw          $v0, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C268u;
        goto label_15c268;
    }
    ctx->pc = 0x15C260u;
    {
        const bool branch_taken_0x15c260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C260u;
        // 0x15c264: 0xae62002c  sw          $v0, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c260) {
            ctx->pc = 0x15C270u;
            goto label_15c270;
        }
    }
    ctx->pc = 0x15C268u;
label_15c268:
    // 0x15c268: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15c268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c26c:
    // 0x15c26c: 0xae62002c  sw          $v0, 0x2C($s3)
    ctx->pc = 0x15c26cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
label_15c270:
    // 0x15c270: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x15c270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_15c274:
    // 0x15c274: 0x584000be  blezl       $v0, . + 4 + (0xBE << 2)
label_15c278:
    if (ctx->pc == 0x15C278u) {
        ctx->pc = 0x15C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C274u;
        // 0x15c278: 0x96e20016  lhu         $v0, 0x16($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C27Cu;
        goto label_15c27c;
    }
    ctx->pc = 0x15C274u;
    {
        const bool branch_taken_0x15c274 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15c274) {
            ctx->pc = 0x15C278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C274u;
            // 0x15c278: 0x96e20016  lhu         $v0, 0x16($s7) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C570u;
            goto label_15c570;
        }
    }
    ctx->pc = 0x15C27Cu;
label_15c27c:
    // 0x15c27c: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x15c27cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c280:
    // 0x15c280: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15c280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15c284:
    // 0x15c284: 0x8ee50010  lw          $a1, 0x10($s7)
    ctx->pc = 0x15c284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_15c288:
    // 0x15c288: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x15c288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15c28c:
    // 0x15c28c: 0xc056b12  jal         func_15AC48
label_15c290:
    if (ctx->pc == 0x15C290u) {
        ctx->pc = 0x15C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C28Cu;
        // 0x15c290: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C294u;
        goto label_15c294;
    }
    ctx->pc = 0x15C28Cu;
    SET_GPR_U32(ctx, 31, 0x15C294u);
    ctx->pc = 0x15C290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C28Cu;
    // 0x15c290: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AC48u, 0x15C28Cu, 0x15C294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C294u;
label_15c294:
    // 0x15c294: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x15c294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_15c298:
    // 0x15c298: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_15c29c:
    if (ctx->pc == 0x15C29Cu) {
        ctx->pc = 0x15C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C298u;
        // 0x15c29c: 0x8fc70030  lw          $a3, 0x30($fp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C2A0u;
        goto label_15c2a0;
    }
    ctx->pc = 0x15C298u;
    {
        const bool branch_taken_0x15c298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C298u;
        // 0x15c29c: 0x8fc70030  lw          $a3, 0x30($fp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c298) {
            ctx->pc = 0x15C334u;
            goto label_15c334;
        }
    }
    ctx->pc = 0x15C2A0u;
label_15c2a0:
    // 0x15c2a0: 0x28e203e8  slti        $v0, $a3, 0x3E8
    ctx->pc = 0x15c2a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)1000) ? 1 : 0);
label_15c2a4:
    // 0x15c2a4: 0x240303e7  addiu       $v1, $zero, 0x3E7
    ctx->pc = 0x15c2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_15c2a8:
    // 0x15c2a8: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x15c2a8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_15c2ac:
    // 0x15c2ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c2b0:
    // 0x15c2b0: 0x28e20064  slti        $v0, $a3, 0x64
    ctx->pc = 0x15c2b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)100) ? 1 : 0);
label_15c2b4:
    // 0x15c2b4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_15c2b8:
    if (ctx->pc == 0x15C2B8u) {
        ctx->pc = 0x15C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2B4u;
        // 0x15c2b8: 0xaea7001c  sw          $a3, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C2BCu;
        goto label_15c2bc;
    }
    ctx->pc = 0x15C2B4u;
    {
        const bool branch_taken_0x15c2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2B4u;
        // 0x15c2b8: 0xaea7001c  sw          $a3, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c2b4) {
            ctx->pc = 0x15C2DCu;
            goto label_15c2dc;
        }
    }
    ctx->pc = 0x15C2BCu;
label_15c2bc:
    // 0x15c2bc: 0x0  nop
    ctx->pc = 0x15c2bcu;
    // NOP
label_15c2c0:
    // 0x15c2c0: 0x24e7ff9c  addiu       $a3, $a3, -0x64
    ctx->pc = 0x15c2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967196));
label_15c2c4:
    // 0x15c2c4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x15c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15c2c8:
    // 0x15c2c8: 0x28e30064  slti        $v1, $a3, 0x64
    ctx->pc = 0x15c2c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)100) ? 1 : 0);
label_15c2cc:
    // 0x15c2cc: 0x0  nop
    ctx->pc = 0x15c2ccu;
    // NOP
label_15c2d0:
    // 0x15c2d0: 0x0  nop
    ctx->pc = 0x15c2d0u;
    // NOP
label_15c2d4:
    // 0x15c2d4: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
label_15c2d8:
    if (ctx->pc == 0x15C2D8u) {
        ctx->pc = 0x15C2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2D4u;
        // 0x15c2d8: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C2DCu;
        goto label_15c2dc;
    }
    ctx->pc = 0x15C2D4u;
    {
        const bool branch_taken_0x15c2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2D4u;
        // 0x15c2d8: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c2d4) {
            ctx->pc = 0x15C2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c2c0;
        }
    }
    ctx->pc = 0x15C2DCu;
label_15c2dc:
    // 0x15c2dc: 0x28e2000a  slti        $v0, $a3, 0xA
    ctx->pc = 0x15c2dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
label_15c2e0:
    // 0x15c2e0: 0xa7a50000  sh          $a1, 0x0($sp)
    ctx->pc = 0x15c2e0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 5));
label_15c2e4:
    // 0x15c2e4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_15c2e8:
    if (ctx->pc == 0x15C2E8u) {
        ctx->pc = 0x15C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2E4u;
        // 0x15c2e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C2ECu;
        goto label_15c2ec;
    }
    ctx->pc = 0x15C2E4u;
    {
        const bool branch_taken_0x15c2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2E4u;
        // 0x15c2e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c2e4) {
            ctx->pc = 0x15C30Cu;
            goto label_15c30c;
        }
    }
    ctx->pc = 0x15C2ECu;
label_15c2ec:
    // 0x15c2ec: 0x0  nop
    ctx->pc = 0x15c2ecu;
    // NOP
label_15c2f0:
    // 0x15c2f0: 0x24e7fff6  addiu       $a3, $a3, -0xA
    ctx->pc = 0x15c2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967286));
label_15c2f4:
    // 0x15c2f4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x15c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15c2f8:
    // 0x15c2f8: 0x28e3000a  slti        $v1, $a3, 0xA
    ctx->pc = 0x15c2f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
label_15c2fc:
    // 0x15c2fc: 0x0  nop
    ctx->pc = 0x15c2fcu;
    // NOP
label_15c300:
    // 0x15c300: 0x0  nop
    ctx->pc = 0x15c300u;
    // NOP
label_15c304:
    // 0x15c304: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
label_15c308:
    if (ctx->pc == 0x15C308u) {
        ctx->pc = 0x15C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C304u;
        // 0x15c308: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C30Cu;
        goto label_15c30c;
    }
    ctx->pc = 0x15C304u;
    {
        const bool branch_taken_0x15c304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C304u;
        // 0x15c308: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c304) {
            ctx->pc = 0x15C2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c2f0;
        }
    }
    ctx->pc = 0x15C30Cu;
label_15c30c:
    // 0x15c30c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x15c30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15c310:
    // 0x15c310: 0xa7a50002  sh          $a1, 0x2($sp)
    ctx->pc = 0x15c310u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 5));
label_15c314:
    // 0x15c314: 0xc0637a8  jal         func_18DEA0
label_15c318:
    if (ctx->pc == 0x15C318u) {
        ctx->pc = 0x15C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C314u;
        // 0x15c318: 0xa7a70004  sh          $a3, 0x4($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C31Cu;
        goto label_15c31c;
    }
    ctx->pc = 0x15C314u;
    SET_GPR_U32(ctx, 31, 0x15C31Cu);
    ctx->pc = 0x15C318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C314u;
    // 0x15c318: 0xa7a70004  sh          $a3, 0x4($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DEA0u, 0x15C314u, 0x15C31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C31Cu;
label_15c31c:
    // 0x15c31c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x15c31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15c320:
    // 0x15c320: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15c320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15c324:
    // 0x15c324: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c328:
    // 0x15c328: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15c328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c32c:
    // 0x15c32c: 0xc063b10  jal         func_18EC40
label_15c330:
    if (ctx->pc == 0x15C330u) {
        ctx->pc = 0x15C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C32Cu;
        // 0x15c330: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C334u;
        goto label_15c334;
    }
    ctx->pc = 0x15C32Cu;
    SET_GPR_U32(ctx, 31, 0x15C334u);
    ctx->pc = 0x15C330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C32Cu;
    // 0x15c330: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EC40u, 0x15C32Cu, 0x15C334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C334u;
label_15c334:
    // 0x15c334: 0x8ee30010  lw          $v1, 0x10($s7)
    ctx->pc = 0x15c334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_15c338:
    // 0x15c338: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x15c338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_15c33c:
    // 0x15c33c: 0x2454a470  addiu       $s4, $v0, -0x5B90
    ctx->pc = 0x15c33cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943856));
label_15c340:
    // 0x15c340: 0x8c700024  lw          $s0, 0x24($v1)
    ctx->pc = 0x15c340u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15c344:
    // 0x15c344: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15c344u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15c348:
    // 0x15c348: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15c348u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15c34c:
    // 0x15c34c: 0xc06bd28  jal         func_1AF4A0
label_15c350:
    if (ctx->pc == 0x15C350u) {
        ctx->pc = 0x15C350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C34Cu;
        // 0x15c350: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C354u;
        goto label_15c354;
    }
    ctx->pc = 0x15C34Cu;
    SET_GPR_U32(ctx, 31, 0x15C354u);
    ctx->pc = 0x15C350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C34Cu;
    // 0x15c350: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15C34Cu, 0x15C354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C354u;
label_15c354:
    // 0x15c354: 0xc06bd20  jal         func_1AF480
label_15c358:
    if (ctx->pc == 0x15C358u) {
        ctx->pc = 0x15C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C354u;
        // 0x15c358: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C35Cu;
        goto label_15c35c;
    }
    ctx->pc = 0x15C354u;
    SET_GPR_U32(ctx, 31, 0x15C35Cu);
    ctx->pc = 0x15C358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C354u;
    // 0x15c358: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15C354u, 0x15C35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C35Cu;
label_15c35c:
    // 0x15c35c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15c35cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15c360:
    // 0x15c360: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x15c360u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_15c364:
    // 0x15c364: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15c364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15c368:
    // 0x15c368: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15c368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15c36c:
    // 0x15c36c: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15c36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15c370:
    // 0x15c370: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x15c370u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_15c374:
    // 0x15c374: 0xc0682b2  jal         func_1A0AC8
label_15c378:
    if (ctx->pc == 0x15C378u) {
        ctx->pc = 0x15C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C374u;
        // 0x15c378: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C37Cu;
        goto label_15c37c;
    }
    ctx->pc = 0x15C374u;
    SET_GPR_U32(ctx, 31, 0x15C37Cu);
    ctx->pc = 0x15C378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C374u;
    // 0x15c378: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15C374u, 0x15C37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C37Cu;
label_15c37c:
    // 0x15c37c: 0xc0682b6  jal         func_1A0AD8
label_15c380:
    if (ctx->pc == 0x15C380u) {
        ctx->pc = 0x15C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C37Cu;
        // 0x15c380: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C384u;
        goto label_15c384;
    }
    ctx->pc = 0x15C37Cu;
    SET_GPR_U32(ctx, 31, 0x15C384u);
    ctx->pc = 0x15C380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C37Cu;
    // 0x15c380: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15C37Cu, 0x15C384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C384u;
label_15c384:
    // 0x15c384: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15c384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15c388:
    // 0x15c388: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15c388u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c38c:
    // 0x15c38c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15c390:
    // 0x15c390: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x15c390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_15c394:
    // 0x15c394: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x15c394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_15c398:
    // 0x15c398: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x15c398u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_15c39c:
    // 0x15c39c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15c39cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c3a0:
    // 0x15c3a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15c3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c3a4:
    // 0x15c3a4: 0xc062cb0  jal         func_18B2C0
label_15c3a8:
    if (ctx->pc == 0x15C3A8u) {
        ctx->pc = 0x15C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3A4u;
        // 0x15c3a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C3ACu;
        goto label_15c3ac;
    }
    ctx->pc = 0x15C3A4u;
    SET_GPR_U32(ctx, 31, 0x15C3ACu);
    ctx->pc = 0x15C3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C3A4u;
    // 0x15c3a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15C3A4u, 0x15C3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C3ACu;
label_15c3ac:
    // 0x15c3ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15c3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c3b0:
    // 0x15c3b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15c3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c3b4:
    // 0x15c3b4: 0xc06825c  jal         func_1A0970
label_15c3b8:
    if (ctx->pc == 0x15C3B8u) {
        ctx->pc = 0x15C3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3B4u;
        // 0x15c3b8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C3BCu;
        goto label_15c3bc;
    }
    ctx->pc = 0x15C3B4u;
    SET_GPR_U32(ctx, 31, 0x15C3BCu);
    ctx->pc = 0x15C3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C3B4u;
    // 0x15c3b8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15C3B4u, 0x15C3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C3BCu;
label_15c3bc:
    // 0x15c3bc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15c3c0:
    // 0x15c3c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15c3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c3c4:
    // 0x15c3c4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15c3c8:
    // 0x15c3c8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15c3c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15c3cc:
    // 0x15c3cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15c3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15c3d0:
    // 0x15c3d0: 0x60f809  jalr        $v1
label_15c3d4:
    if (ctx->pc == 0x15C3D4u) {
        ctx->pc = 0x15C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3D0u;
        // 0x15c3d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C3D8u;
        goto label_15c3d8;
    }
    ctx->pc = 0x15C3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C3D8u);
        ctx->pc = 0x15C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3D0u;
        // 0x15c3d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C3D0u, 0x15C3D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C3D8u;
label_15c3d8:
    // 0x15c3d8: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15c3d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15c3dc:
    // 0x15c3dc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15c3e0:
    if (ctx->pc == 0x15C3E0u) {
        ctx->pc = 0x15C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3DCu;
        // 0x15c3e0: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C3E4u;
        goto label_15c3e4;
    }
    ctx->pc = 0x15C3DCu;
    {
        const bool branch_taken_0x15c3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3DCu;
        // 0x15c3e0: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c3dc) {
            ctx->pc = 0x15C498u;
            goto label_15c498;
        }
    }
    ctx->pc = 0x15C3E4u;
label_15c3e4:
    // 0x15c3e4: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15c3e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15c3e8:
    // 0x15c3e8: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15c3e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15c3ec:
    // 0x15c3ec: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15c3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15c3f0:
    // 0x15c3f0: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15c3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15c3f4:
    // 0x15c3f4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15c3f8:
    // 0x15c3f8: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15c3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15c3fc:
    // 0x15c3fc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15c3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15c400:
    // 0x15c400: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15c400u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15c404:
    // 0x15c404: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15c404u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15c408:
    // 0x15c408: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15c408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15c40c:
    // 0x15c40c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15c410:
    // 0x15c410: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15c410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15c414:
    // 0x15c414: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15c414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15c418:
    // 0x15c418: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15c418u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15c41c:
    // 0x15c41c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15c41cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15c420:
    // 0x15c420: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15c420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15c424:
    // 0x15c424: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15c424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15c428:
    // 0x15c428: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15c428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15c42c:
    // 0x15c42c: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15c42cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15c430:
    // 0x15c430: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15c430u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15c434:
    // 0x15c434: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15c434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15c438:
    // 0x15c438: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15c438u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15c43c:
    // 0x15c43c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15c43cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15c440:
    // 0x15c440: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15c440u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15c444:
    // 0x15c444: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15c444u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15c448:
    // 0x15c448: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15c448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15c44c:
    // 0x15c44c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15c44cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15c450:
    // 0x15c450: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15c450u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15c454:
    // 0x15c454: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15c454u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15c458:
    // 0x15c458: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15c458u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15c45c:
    // 0x15c45c: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15c45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15c460:
    // 0x15c460: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15c460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15c464:
    // 0x15c464: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15c464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15c468:
    // 0x15c468: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15c468u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15c46c:
    // 0x15c46c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15c46cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15c470:
    // 0x15c470: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15c470u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15c474:
    // 0x15c474: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15c474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15c478:
    // 0x15c478: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15c478u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15c47c:
    // 0x15c47c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15c47cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15c480:
    // 0x15c480: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15c480u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15c484:
    // 0x15c484: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15c484u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15c488:
    // 0x15c488: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15c488u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15c48c:
    // 0x15c48c: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15c48cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15c490:
    // 0x15c490: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15c490u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15c494:
    // 0x15c494: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15c494u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_15c498:
    // 0x15c498: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15c498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c49c:
    // 0x15c49c: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15c49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15c4a0:
    // 0x15c4a0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15c4a4:
    // 0x15c4a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15c4a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c4a8:
    // 0x15c4a8: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x15c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15c4ac:
    // 0x15c4ac: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x15c4acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15c4b0:
    // 0x15c4b0: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x15c4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_15c4b4:
    // 0x15c4b4: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15c4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15c4b8:
    // 0x15c4b8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15c4b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15c4bc:
    // 0x15c4bc: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x15c4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
label_15c4c0:
    // 0x15c4c0: 0xaeb1000c  sw          $s1, 0xC($s5)
    ctx->pc = 0x15c4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 17));
label_15c4c4:
    // 0x15c4c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x15c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15c4c8:
    // 0x15c4c8: 0x40f809  jalr        $v0
label_15c4cc:
    if (ctx->pc == 0x15C4CCu) {
        ctx->pc = 0x15C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4C8u;
        // 0x15c4cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C4D0u;
        goto label_15c4d0;
    }
    ctx->pc = 0x15C4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C4D0u);
        ctx->pc = 0x15C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4C8u;
        // 0x15c4cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C4C8u, 0x15C4D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C4D0u;
label_15c4d0:
    // 0x15c4d0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15c4d4:
    // 0x15c4d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c4d8:
    // 0x15c4d8: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x15c4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15c4dc:
    // 0x15c4dc: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15c4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15c4e0:
    // 0x15c4e0: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15c4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15c4e4:
    // 0x15c4e4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15c4e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15c4e8:
    // 0x15c4e8: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x15c4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_15c4ec:
    // 0x15c4ec: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x15c4ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15c4f0:
    // 0x15c4f0: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x15c4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_15c4f4:
    // 0x15c4f4: 0xe0f809  jalr        $a3
label_15c4f8:
    if (ctx->pc == 0x15C4F8u) {
        ctx->pc = 0x15C4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4F4u;
        // 0x15c4f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C4FCu;
        goto label_15c4fc;
    }
    ctx->pc = 0x15C4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x15C4FCu);
        ctx->pc = 0x15C4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4F4u;
        // 0x15c4f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C4F4u, 0x15C4FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C4FCu;
label_15c4fc:
    // 0x15c4fc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15c4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15c500:
    // 0x15c500: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x15c500u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
label_15c504:
    // 0x15c504: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15c504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15c508:
    // 0x15c508: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_15c50c:
    if (ctx->pc == 0x15C50Cu) {
        ctx->pc = 0x15C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C508u;
        // 0x15c50c: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C510u;
        goto label_15c510;
    }
    ctx->pc = 0x15C508u;
    {
        const bool branch_taken_0x15c508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c508) {
            ctx->pc = 0x15C50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C508u;
            // 0x15c50c: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C55Cu;
            goto label_15c55c;
        }
    }
    ctx->pc = 0x15C510u;
label_15c510:
    // 0x15c510: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15c510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15c514:
    // 0x15c514: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15c518:
    if (ctx->pc == 0x15C518u) {
        ctx->pc = 0x15C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C514u;
        // 0x15c518: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C51Cu;
        goto label_15c51c;
    }
    ctx->pc = 0x15C514u;
    {
        const bool branch_taken_0x15c514 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C514u;
        // 0x15c518: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c514) {
            ctx->pc = 0x15C534u;
            goto label_15c534;
        }
    }
    ctx->pc = 0x15C51Cu;
label_15c51c:
    // 0x15c51c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15c520:
    // 0x15c520: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15c520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15c524:
    // 0x15c524: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15c524u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15c528:
    // 0x15c528: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15c528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15c52c:
    // 0x15c52c: 0x60f809  jalr        $v1
label_15c530:
    if (ctx->pc == 0x15C530u) {
        ctx->pc = 0x15C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C52Cu;
        // 0x15c530: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C534u;
        goto label_15c534;
    }
    ctx->pc = 0x15C52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C534u);
        ctx->pc = 0x15C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C52Cu;
        // 0x15c530: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C52Cu, 0x15C534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C534u;
label_15c534:
    // 0x15c534: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15c534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15c538:
    // 0x15c538: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15c53c:
    if (ctx->pc == 0x15C53Cu) {
        ctx->pc = 0x15C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C538u;
        // 0x15c53c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C540u;
        goto label_15c540;
    }
    ctx->pc = 0x15C538u;
    {
        const bool branch_taken_0x15c538 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C538u;
        // 0x15c53c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c538) {
            ctx->pc = 0x15C558u;
            goto label_15c558;
        }
    }
    ctx->pc = 0x15C540u;
label_15c540:
    // 0x15c540: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15c540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15c544:
    // 0x15c544: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15c544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15c548:
    // 0x15c548: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15c548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15c54c:
    // 0x15c54c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15c550:
    // 0x15c550: 0x60f809  jalr        $v1
label_15c554:
    if (ctx->pc == 0x15C554u) {
        ctx->pc = 0x15C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C550u;
        // 0x15c554: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C558u;
        goto label_15c558;
    }
    ctx->pc = 0x15C550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C558u);
        ctx->pc = 0x15C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C550u;
        // 0x15c554: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C550u, 0x15C558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C558u;
label_15c558:
    // 0x15c558: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15c558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15c55c:
    // 0x15c55c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_15c560:
    // 0x15c560: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x15c560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_15c564:
    // 0x15c564: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x15c564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15c568:
    // 0x15c568: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x15c568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_15c56c:
    // 0x15c56c: 0x96e20016  lhu         $v0, 0x16($s7)
    ctx->pc = 0x15c56cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 22)));
label_15c570:
    // 0x15c570: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x15c570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_15c574:
    // 0x15c574: 0xa6e20016  sh          $v0, 0x16($s7)
    ctx->pc = 0x15c574u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 22), (uint16_t)GPR_U32(ctx, 2));
label_15c578:
    // 0x15c578: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x15c578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15c57c:
    // 0x15c57c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x15c57cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15c580:
    // 0x15c580: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x15c580u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15c584:
    // 0x15c584: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x15c584u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_15c588:
    // 0x15c588: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x15c588u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15c58c:
    // 0x15c58c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x15c58cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_15c590:
    // 0x15c590: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x15c590u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15c594:
    // 0x15c594: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x15c594u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_15c598:
    // 0x15c598: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x15c598u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15c59c:
    // 0x15c59c: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x15c59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_15c5a0:
    // 0x15c5a0: 0x3e00008  jr          $ra
label_15c5a4:
    if (ctx->pc == 0x15C5A4u) {
        ctx->pc = 0x15C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5A0u;
        // 0x15c5a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C5A8u;
        goto label_fallthrough_0x15c5a0;
    }
    ctx->pc = 0x15C5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5A0u;
        // 0x15c5a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15c5a0:
    ctx->pc = 0x15C5A8u;
}
