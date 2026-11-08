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

// Function: WTxPanelPrintScan__FP9WcTxPanelPcPUs
// Address: 0x18d0f8 - 0x18dc24
void WTxPanelPrintScan__FP9WcTxPanelPcPUs_0x18d0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTxPanelPrintScan__FP9WcTxPanelPcPUs_0x18d0f8");
#endif

    switch (ctx->pc) {
        case 0x18d0f8u: goto label_18d0f8;
        case 0x18d0fcu: goto label_18d0fc;
        case 0x18d100u: goto label_18d100;
        case 0x18d104u: goto label_18d104;
        case 0x18d108u: goto label_18d108;
        case 0x18d10cu: goto label_18d10c;
        case 0x18d110u: goto label_18d110;
        case 0x18d114u: goto label_18d114;
        case 0x18d118u: goto label_18d118;
        case 0x18d11cu: goto label_18d11c;
        case 0x18d120u: goto label_18d120;
        case 0x18d124u: goto label_18d124;
        case 0x18d128u: goto label_18d128;
        case 0x18d12cu: goto label_18d12c;
        case 0x18d130u: goto label_18d130;
        case 0x18d134u: goto label_18d134;
        case 0x18d138u: goto label_18d138;
        case 0x18d13cu: goto label_18d13c;
        case 0x18d140u: goto label_18d140;
        case 0x18d144u: goto label_18d144;
        case 0x18d148u: goto label_18d148;
        case 0x18d14cu: goto label_18d14c;
        case 0x18d150u: goto label_18d150;
        case 0x18d154u: goto label_18d154;
        case 0x18d158u: goto label_18d158;
        case 0x18d15cu: goto label_18d15c;
        case 0x18d160u: goto label_18d160;
        case 0x18d164u: goto label_18d164;
        case 0x18d168u: goto label_18d168;
        case 0x18d16cu: goto label_18d16c;
        case 0x18d170u: goto label_18d170;
        case 0x18d174u: goto label_18d174;
        case 0x18d178u: goto label_18d178;
        case 0x18d17cu: goto label_18d17c;
        case 0x18d180u: goto label_18d180;
        case 0x18d184u: goto label_18d184;
        case 0x18d188u: goto label_18d188;
        case 0x18d18cu: goto label_18d18c;
        case 0x18d190u: goto label_18d190;
        case 0x18d194u: goto label_18d194;
        case 0x18d198u: goto label_18d198;
        case 0x18d19cu: goto label_18d19c;
        case 0x18d1a0u: goto label_18d1a0;
        case 0x18d1a4u: goto label_18d1a4;
        case 0x18d1a8u: goto label_18d1a8;
        case 0x18d1acu: goto label_18d1ac;
        case 0x18d1b0u: goto label_18d1b0;
        case 0x18d1b4u: goto label_18d1b4;
        case 0x18d1b8u: goto label_18d1b8;
        case 0x18d1bcu: goto label_18d1bc;
        case 0x18d1c0u: goto label_18d1c0;
        case 0x18d1c4u: goto label_18d1c4;
        case 0x18d1c8u: goto label_18d1c8;
        case 0x18d1ccu: goto label_18d1cc;
        case 0x18d1d0u: goto label_18d1d0;
        case 0x18d1d4u: goto label_18d1d4;
        case 0x18d1d8u: goto label_18d1d8;
        case 0x18d1dcu: goto label_18d1dc;
        case 0x18d1e0u: goto label_18d1e0;
        case 0x18d1e4u: goto label_18d1e4;
        case 0x18d1e8u: goto label_18d1e8;
        case 0x18d1ecu: goto label_18d1ec;
        case 0x18d1f0u: goto label_18d1f0;
        case 0x18d1f4u: goto label_18d1f4;
        case 0x18d1f8u: goto label_18d1f8;
        case 0x18d1fcu: goto label_18d1fc;
        case 0x18d200u: goto label_18d200;
        case 0x18d204u: goto label_18d204;
        case 0x18d208u: goto label_18d208;
        case 0x18d20cu: goto label_18d20c;
        case 0x18d210u: goto label_18d210;
        case 0x18d214u: goto label_18d214;
        case 0x18d218u: goto label_18d218;
        case 0x18d21cu: goto label_18d21c;
        case 0x18d220u: goto label_18d220;
        case 0x18d224u: goto label_18d224;
        case 0x18d228u: goto label_18d228;
        case 0x18d22cu: goto label_18d22c;
        case 0x18d230u: goto label_18d230;
        case 0x18d234u: goto label_18d234;
        case 0x18d238u: goto label_18d238;
        case 0x18d23cu: goto label_18d23c;
        case 0x18d240u: goto label_18d240;
        case 0x18d244u: goto label_18d244;
        case 0x18d248u: goto label_18d248;
        case 0x18d24cu: goto label_18d24c;
        case 0x18d250u: goto label_18d250;
        case 0x18d254u: goto label_18d254;
        case 0x18d258u: goto label_18d258;
        case 0x18d25cu: goto label_18d25c;
        case 0x18d260u: goto label_18d260;
        case 0x18d264u: goto label_18d264;
        case 0x18d268u: goto label_18d268;
        case 0x18d26cu: goto label_18d26c;
        case 0x18d270u: goto label_18d270;
        case 0x18d274u: goto label_18d274;
        case 0x18d278u: goto label_18d278;
        case 0x18d27cu: goto label_18d27c;
        case 0x18d280u: goto label_18d280;
        case 0x18d284u: goto label_18d284;
        case 0x18d288u: goto label_18d288;
        case 0x18d28cu: goto label_18d28c;
        case 0x18d290u: goto label_18d290;
        case 0x18d294u: goto label_18d294;
        case 0x18d298u: goto label_18d298;
        case 0x18d29cu: goto label_18d29c;
        case 0x18d2a0u: goto label_18d2a0;
        case 0x18d2a4u: goto label_18d2a4;
        case 0x18d2a8u: goto label_18d2a8;
        case 0x18d2acu: goto label_18d2ac;
        case 0x18d2b0u: goto label_18d2b0;
        case 0x18d2b4u: goto label_18d2b4;
        case 0x18d2b8u: goto label_18d2b8;
        case 0x18d2bcu: goto label_18d2bc;
        case 0x18d2c0u: goto label_18d2c0;
        case 0x18d2c4u: goto label_18d2c4;
        case 0x18d2c8u: goto label_18d2c8;
        case 0x18d2ccu: goto label_18d2cc;
        case 0x18d2d0u: goto label_18d2d0;
        case 0x18d2d4u: goto label_18d2d4;
        case 0x18d2d8u: goto label_18d2d8;
        case 0x18d2dcu: goto label_18d2dc;
        case 0x18d2e0u: goto label_18d2e0;
        case 0x18d2e4u: goto label_18d2e4;
        case 0x18d2e8u: goto label_18d2e8;
        case 0x18d2ecu: goto label_18d2ec;
        case 0x18d2f0u: goto label_18d2f0;
        case 0x18d2f4u: goto label_18d2f4;
        case 0x18d2f8u: goto label_18d2f8;
        case 0x18d2fcu: goto label_18d2fc;
        case 0x18d300u: goto label_18d300;
        case 0x18d304u: goto label_18d304;
        case 0x18d308u: goto label_18d308;
        case 0x18d30cu: goto label_18d30c;
        case 0x18d310u: goto label_18d310;
        case 0x18d314u: goto label_18d314;
        case 0x18d318u: goto label_18d318;
        case 0x18d31cu: goto label_18d31c;
        case 0x18d320u: goto label_18d320;
        case 0x18d324u: goto label_18d324;
        case 0x18d328u: goto label_18d328;
        case 0x18d32cu: goto label_18d32c;
        case 0x18d330u: goto label_18d330;
        case 0x18d334u: goto label_18d334;
        case 0x18d338u: goto label_18d338;
        case 0x18d33cu: goto label_18d33c;
        case 0x18d340u: goto label_18d340;
        case 0x18d344u: goto label_18d344;
        case 0x18d348u: goto label_18d348;
        case 0x18d34cu: goto label_18d34c;
        case 0x18d350u: goto label_18d350;
        case 0x18d354u: goto label_18d354;
        case 0x18d358u: goto label_18d358;
        case 0x18d35cu: goto label_18d35c;
        case 0x18d360u: goto label_18d360;
        case 0x18d364u: goto label_18d364;
        case 0x18d368u: goto label_18d368;
        case 0x18d36cu: goto label_18d36c;
        case 0x18d370u: goto label_18d370;
        case 0x18d374u: goto label_18d374;
        case 0x18d378u: goto label_18d378;
        case 0x18d37cu: goto label_18d37c;
        case 0x18d380u: goto label_18d380;
        case 0x18d384u: goto label_18d384;
        case 0x18d388u: goto label_18d388;
        case 0x18d38cu: goto label_18d38c;
        case 0x18d390u: goto label_18d390;
        case 0x18d394u: goto label_18d394;
        case 0x18d398u: goto label_18d398;
        case 0x18d39cu: goto label_18d39c;
        case 0x18d3a0u: goto label_18d3a0;
        case 0x18d3a4u: goto label_18d3a4;
        case 0x18d3a8u: goto label_18d3a8;
        case 0x18d3acu: goto label_18d3ac;
        case 0x18d3b0u: goto label_18d3b0;
        case 0x18d3b4u: goto label_18d3b4;
        case 0x18d3b8u: goto label_18d3b8;
        case 0x18d3bcu: goto label_18d3bc;
        case 0x18d3c0u: goto label_18d3c0;
        case 0x18d3c4u: goto label_18d3c4;
        case 0x18d3c8u: goto label_18d3c8;
        case 0x18d3ccu: goto label_18d3cc;
        case 0x18d3d0u: goto label_18d3d0;
        case 0x18d3d4u: goto label_18d3d4;
        case 0x18d3d8u: goto label_18d3d8;
        case 0x18d3dcu: goto label_18d3dc;
        case 0x18d3e0u: goto label_18d3e0;
        case 0x18d3e4u: goto label_18d3e4;
        case 0x18d3e8u: goto label_18d3e8;
        case 0x18d3ecu: goto label_18d3ec;
        case 0x18d3f0u: goto label_18d3f0;
        case 0x18d3f4u: goto label_18d3f4;
        case 0x18d3f8u: goto label_18d3f8;
        case 0x18d3fcu: goto label_18d3fc;
        case 0x18d400u: goto label_18d400;
        case 0x18d404u: goto label_18d404;
        case 0x18d408u: goto label_18d408;
        case 0x18d40cu: goto label_18d40c;
        case 0x18d410u: goto label_18d410;
        case 0x18d414u: goto label_18d414;
        case 0x18d418u: goto label_18d418;
        case 0x18d41cu: goto label_18d41c;
        case 0x18d420u: goto label_18d420;
        case 0x18d424u: goto label_18d424;
        case 0x18d428u: goto label_18d428;
        case 0x18d42cu: goto label_18d42c;
        case 0x18d430u: goto label_18d430;
        case 0x18d434u: goto label_18d434;
        case 0x18d438u: goto label_18d438;
        case 0x18d43cu: goto label_18d43c;
        case 0x18d440u: goto label_18d440;
        case 0x18d444u: goto label_18d444;
        case 0x18d448u: goto label_18d448;
        case 0x18d44cu: goto label_18d44c;
        case 0x18d450u: goto label_18d450;
        case 0x18d454u: goto label_18d454;
        case 0x18d458u: goto label_18d458;
        case 0x18d45cu: goto label_18d45c;
        case 0x18d460u: goto label_18d460;
        case 0x18d464u: goto label_18d464;
        case 0x18d468u: goto label_18d468;
        case 0x18d46cu: goto label_18d46c;
        case 0x18d470u: goto label_18d470;
        case 0x18d474u: goto label_18d474;
        case 0x18d478u: goto label_18d478;
        case 0x18d47cu: goto label_18d47c;
        case 0x18d480u: goto label_18d480;
        case 0x18d484u: goto label_18d484;
        case 0x18d488u: goto label_18d488;
        case 0x18d48cu: goto label_18d48c;
        case 0x18d490u: goto label_18d490;
        case 0x18d494u: goto label_18d494;
        case 0x18d498u: goto label_18d498;
        case 0x18d49cu: goto label_18d49c;
        case 0x18d4a0u: goto label_18d4a0;
        case 0x18d4a4u: goto label_18d4a4;
        case 0x18d4a8u: goto label_18d4a8;
        case 0x18d4acu: goto label_18d4ac;
        case 0x18d4b0u: goto label_18d4b0;
        case 0x18d4b4u: goto label_18d4b4;
        case 0x18d4b8u: goto label_18d4b8;
        case 0x18d4bcu: goto label_18d4bc;
        case 0x18d4c0u: goto label_18d4c0;
        case 0x18d4c4u: goto label_18d4c4;
        case 0x18d4c8u: goto label_18d4c8;
        case 0x18d4ccu: goto label_18d4cc;
        case 0x18d4d0u: goto label_18d4d0;
        case 0x18d4d4u: goto label_18d4d4;
        case 0x18d4d8u: goto label_18d4d8;
        case 0x18d4dcu: goto label_18d4dc;
        case 0x18d4e0u: goto label_18d4e0;
        case 0x18d4e4u: goto label_18d4e4;
        case 0x18d4e8u: goto label_18d4e8;
        case 0x18d4ecu: goto label_18d4ec;
        case 0x18d4f0u: goto label_18d4f0;
        case 0x18d4f4u: goto label_18d4f4;
        case 0x18d4f8u: goto label_18d4f8;
        case 0x18d4fcu: goto label_18d4fc;
        case 0x18d500u: goto label_18d500;
        case 0x18d504u: goto label_18d504;
        case 0x18d508u: goto label_18d508;
        case 0x18d50cu: goto label_18d50c;
        case 0x18d510u: goto label_18d510;
        case 0x18d514u: goto label_18d514;
        case 0x18d518u: goto label_18d518;
        case 0x18d51cu: goto label_18d51c;
        case 0x18d520u: goto label_18d520;
        case 0x18d524u: goto label_18d524;
        case 0x18d528u: goto label_18d528;
        case 0x18d52cu: goto label_18d52c;
        case 0x18d530u: goto label_18d530;
        case 0x18d534u: goto label_18d534;
        case 0x18d538u: goto label_18d538;
        case 0x18d53cu: goto label_18d53c;
        case 0x18d540u: goto label_18d540;
        case 0x18d544u: goto label_18d544;
        case 0x18d548u: goto label_18d548;
        case 0x18d54cu: goto label_18d54c;
        case 0x18d550u: goto label_18d550;
        case 0x18d554u: goto label_18d554;
        case 0x18d558u: goto label_18d558;
        case 0x18d55cu: goto label_18d55c;
        case 0x18d560u: goto label_18d560;
        case 0x18d564u: goto label_18d564;
        case 0x18d568u: goto label_18d568;
        case 0x18d56cu: goto label_18d56c;
        case 0x18d570u: goto label_18d570;
        case 0x18d574u: goto label_18d574;
        case 0x18d578u: goto label_18d578;
        case 0x18d57cu: goto label_18d57c;
        case 0x18d580u: goto label_18d580;
        case 0x18d584u: goto label_18d584;
        case 0x18d588u: goto label_18d588;
        case 0x18d58cu: goto label_18d58c;
        case 0x18d590u: goto label_18d590;
        case 0x18d594u: goto label_18d594;
        case 0x18d598u: goto label_18d598;
        case 0x18d59cu: goto label_18d59c;
        case 0x18d5a0u: goto label_18d5a0;
        case 0x18d5a4u: goto label_18d5a4;
        case 0x18d5a8u: goto label_18d5a8;
        case 0x18d5acu: goto label_18d5ac;
        case 0x18d5b0u: goto label_18d5b0;
        case 0x18d5b4u: goto label_18d5b4;
        case 0x18d5b8u: goto label_18d5b8;
        case 0x18d5bcu: goto label_18d5bc;
        case 0x18d5c0u: goto label_18d5c0;
        case 0x18d5c4u: goto label_18d5c4;
        case 0x18d5c8u: goto label_18d5c8;
        case 0x18d5ccu: goto label_18d5cc;
        case 0x18d5d0u: goto label_18d5d0;
        case 0x18d5d4u: goto label_18d5d4;
        case 0x18d5d8u: goto label_18d5d8;
        case 0x18d5dcu: goto label_18d5dc;
        case 0x18d5e0u: goto label_18d5e0;
        case 0x18d5e4u: goto label_18d5e4;
        case 0x18d5e8u: goto label_18d5e8;
        case 0x18d5ecu: goto label_18d5ec;
        case 0x18d5f0u: goto label_18d5f0;
        case 0x18d5f4u: goto label_18d5f4;
        case 0x18d5f8u: goto label_18d5f8;
        case 0x18d5fcu: goto label_18d5fc;
        case 0x18d600u: goto label_18d600;
        case 0x18d604u: goto label_18d604;
        case 0x18d608u: goto label_18d608;
        case 0x18d60cu: goto label_18d60c;
        case 0x18d610u: goto label_18d610;
        case 0x18d614u: goto label_18d614;
        case 0x18d618u: goto label_18d618;
        case 0x18d61cu: goto label_18d61c;
        case 0x18d620u: goto label_18d620;
        case 0x18d624u: goto label_18d624;
        case 0x18d628u: goto label_18d628;
        case 0x18d62cu: goto label_18d62c;
        case 0x18d630u: goto label_18d630;
        case 0x18d634u: goto label_18d634;
        case 0x18d638u: goto label_18d638;
        case 0x18d63cu: goto label_18d63c;
        case 0x18d640u: goto label_18d640;
        case 0x18d644u: goto label_18d644;
        case 0x18d648u: goto label_18d648;
        case 0x18d64cu: goto label_18d64c;
        case 0x18d650u: goto label_18d650;
        case 0x18d654u: goto label_18d654;
        case 0x18d658u: goto label_18d658;
        case 0x18d65cu: goto label_18d65c;
        case 0x18d660u: goto label_18d660;
        case 0x18d664u: goto label_18d664;
        case 0x18d668u: goto label_18d668;
        case 0x18d66cu: goto label_18d66c;
        case 0x18d670u: goto label_18d670;
        case 0x18d674u: goto label_18d674;
        case 0x18d678u: goto label_18d678;
        case 0x18d67cu: goto label_18d67c;
        case 0x18d680u: goto label_18d680;
        case 0x18d684u: goto label_18d684;
        case 0x18d688u: goto label_18d688;
        case 0x18d68cu: goto label_18d68c;
        case 0x18d690u: goto label_18d690;
        case 0x18d694u: goto label_18d694;
        case 0x18d698u: goto label_18d698;
        case 0x18d69cu: goto label_18d69c;
        case 0x18d6a0u: goto label_18d6a0;
        case 0x18d6a4u: goto label_18d6a4;
        case 0x18d6a8u: goto label_18d6a8;
        case 0x18d6acu: goto label_18d6ac;
        case 0x18d6b0u: goto label_18d6b0;
        case 0x18d6b4u: goto label_18d6b4;
        case 0x18d6b8u: goto label_18d6b8;
        case 0x18d6bcu: goto label_18d6bc;
        case 0x18d6c0u: goto label_18d6c0;
        case 0x18d6c4u: goto label_18d6c4;
        case 0x18d6c8u: goto label_18d6c8;
        case 0x18d6ccu: goto label_18d6cc;
        case 0x18d6d0u: goto label_18d6d0;
        case 0x18d6d4u: goto label_18d6d4;
        case 0x18d6d8u: goto label_18d6d8;
        case 0x18d6dcu: goto label_18d6dc;
        case 0x18d6e0u: goto label_18d6e0;
        case 0x18d6e4u: goto label_18d6e4;
        case 0x18d6e8u: goto label_18d6e8;
        case 0x18d6ecu: goto label_18d6ec;
        case 0x18d6f0u: goto label_18d6f0;
        case 0x18d6f4u: goto label_18d6f4;
        case 0x18d6f8u: goto label_18d6f8;
        case 0x18d6fcu: goto label_18d6fc;
        case 0x18d700u: goto label_18d700;
        case 0x18d704u: goto label_18d704;
        case 0x18d708u: goto label_18d708;
        case 0x18d70cu: goto label_18d70c;
        case 0x18d710u: goto label_18d710;
        case 0x18d714u: goto label_18d714;
        case 0x18d718u: goto label_18d718;
        case 0x18d71cu: goto label_18d71c;
        case 0x18d720u: goto label_18d720;
        case 0x18d724u: goto label_18d724;
        case 0x18d728u: goto label_18d728;
        case 0x18d72cu: goto label_18d72c;
        case 0x18d730u: goto label_18d730;
        case 0x18d734u: goto label_18d734;
        case 0x18d738u: goto label_18d738;
        case 0x18d73cu: goto label_18d73c;
        case 0x18d740u: goto label_18d740;
        case 0x18d744u: goto label_18d744;
        case 0x18d748u: goto label_18d748;
        case 0x18d74cu: goto label_18d74c;
        case 0x18d750u: goto label_18d750;
        case 0x18d754u: goto label_18d754;
        case 0x18d758u: goto label_18d758;
        case 0x18d75cu: goto label_18d75c;
        case 0x18d760u: goto label_18d760;
        case 0x18d764u: goto label_18d764;
        case 0x18d768u: goto label_18d768;
        case 0x18d76cu: goto label_18d76c;
        case 0x18d770u: goto label_18d770;
        case 0x18d774u: goto label_18d774;
        case 0x18d778u: goto label_18d778;
        case 0x18d77cu: goto label_18d77c;
        case 0x18d780u: goto label_18d780;
        case 0x18d784u: goto label_18d784;
        case 0x18d788u: goto label_18d788;
        case 0x18d78cu: goto label_18d78c;
        case 0x18d790u: goto label_18d790;
        case 0x18d794u: goto label_18d794;
        case 0x18d798u: goto label_18d798;
        case 0x18d79cu: goto label_18d79c;
        case 0x18d7a0u: goto label_18d7a0;
        case 0x18d7a4u: goto label_18d7a4;
        case 0x18d7a8u: goto label_18d7a8;
        case 0x18d7acu: goto label_18d7ac;
        case 0x18d7b0u: goto label_18d7b0;
        case 0x18d7b4u: goto label_18d7b4;
        case 0x18d7b8u: goto label_18d7b8;
        case 0x18d7bcu: goto label_18d7bc;
        case 0x18d7c0u: goto label_18d7c0;
        case 0x18d7c4u: goto label_18d7c4;
        case 0x18d7c8u: goto label_18d7c8;
        case 0x18d7ccu: goto label_18d7cc;
        case 0x18d7d0u: goto label_18d7d0;
        case 0x18d7d4u: goto label_18d7d4;
        case 0x18d7d8u: goto label_18d7d8;
        case 0x18d7dcu: goto label_18d7dc;
        case 0x18d7e0u: goto label_18d7e0;
        case 0x18d7e4u: goto label_18d7e4;
        case 0x18d7e8u: goto label_18d7e8;
        case 0x18d7ecu: goto label_18d7ec;
        case 0x18d7f0u: goto label_18d7f0;
        case 0x18d7f4u: goto label_18d7f4;
        case 0x18d7f8u: goto label_18d7f8;
        case 0x18d7fcu: goto label_18d7fc;
        case 0x18d800u: goto label_18d800;
        case 0x18d804u: goto label_18d804;
        case 0x18d808u: goto label_18d808;
        case 0x18d80cu: goto label_18d80c;
        case 0x18d810u: goto label_18d810;
        case 0x18d814u: goto label_18d814;
        case 0x18d818u: goto label_18d818;
        case 0x18d81cu: goto label_18d81c;
        case 0x18d820u: goto label_18d820;
        case 0x18d824u: goto label_18d824;
        case 0x18d828u: goto label_18d828;
        case 0x18d82cu: goto label_18d82c;
        case 0x18d830u: goto label_18d830;
        case 0x18d834u: goto label_18d834;
        case 0x18d838u: goto label_18d838;
        case 0x18d83cu: goto label_18d83c;
        case 0x18d840u: goto label_18d840;
        case 0x18d844u: goto label_18d844;
        case 0x18d848u: goto label_18d848;
        case 0x18d84cu: goto label_18d84c;
        case 0x18d850u: goto label_18d850;
        case 0x18d854u: goto label_18d854;
        case 0x18d858u: goto label_18d858;
        case 0x18d85cu: goto label_18d85c;
        case 0x18d860u: goto label_18d860;
        case 0x18d864u: goto label_18d864;
        case 0x18d868u: goto label_18d868;
        case 0x18d86cu: goto label_18d86c;
        case 0x18d870u: goto label_18d870;
        case 0x18d874u: goto label_18d874;
        case 0x18d878u: goto label_18d878;
        case 0x18d87cu: goto label_18d87c;
        case 0x18d880u: goto label_18d880;
        case 0x18d884u: goto label_18d884;
        case 0x18d888u: goto label_18d888;
        case 0x18d88cu: goto label_18d88c;
        case 0x18d890u: goto label_18d890;
        case 0x18d894u: goto label_18d894;
        case 0x18d898u: goto label_18d898;
        case 0x18d89cu: goto label_18d89c;
        case 0x18d8a0u: goto label_18d8a0;
        case 0x18d8a4u: goto label_18d8a4;
        case 0x18d8a8u: goto label_18d8a8;
        case 0x18d8acu: goto label_18d8ac;
        case 0x18d8b0u: goto label_18d8b0;
        case 0x18d8b4u: goto label_18d8b4;
        case 0x18d8b8u: goto label_18d8b8;
        case 0x18d8bcu: goto label_18d8bc;
        case 0x18d8c0u: goto label_18d8c0;
        case 0x18d8c4u: goto label_18d8c4;
        case 0x18d8c8u: goto label_18d8c8;
        case 0x18d8ccu: goto label_18d8cc;
        case 0x18d8d0u: goto label_18d8d0;
        case 0x18d8d4u: goto label_18d8d4;
        case 0x18d8d8u: goto label_18d8d8;
        case 0x18d8dcu: goto label_18d8dc;
        case 0x18d8e0u: goto label_18d8e0;
        case 0x18d8e4u: goto label_18d8e4;
        case 0x18d8e8u: goto label_18d8e8;
        case 0x18d8ecu: goto label_18d8ec;
        case 0x18d8f0u: goto label_18d8f0;
        case 0x18d8f4u: goto label_18d8f4;
        case 0x18d8f8u: goto label_18d8f8;
        case 0x18d8fcu: goto label_18d8fc;
        case 0x18d900u: goto label_18d900;
        case 0x18d904u: goto label_18d904;
        case 0x18d908u: goto label_18d908;
        case 0x18d90cu: goto label_18d90c;
        case 0x18d910u: goto label_18d910;
        case 0x18d914u: goto label_18d914;
        case 0x18d918u: goto label_18d918;
        case 0x18d91cu: goto label_18d91c;
        case 0x18d920u: goto label_18d920;
        case 0x18d924u: goto label_18d924;
        case 0x18d928u: goto label_18d928;
        case 0x18d92cu: goto label_18d92c;
        case 0x18d930u: goto label_18d930;
        case 0x18d934u: goto label_18d934;
        case 0x18d938u: goto label_18d938;
        case 0x18d93cu: goto label_18d93c;
        case 0x18d940u: goto label_18d940;
        case 0x18d944u: goto label_18d944;
        case 0x18d948u: goto label_18d948;
        case 0x18d94cu: goto label_18d94c;
        case 0x18d950u: goto label_18d950;
        case 0x18d954u: goto label_18d954;
        case 0x18d958u: goto label_18d958;
        case 0x18d95cu: goto label_18d95c;
        case 0x18d960u: goto label_18d960;
        case 0x18d964u: goto label_18d964;
        case 0x18d968u: goto label_18d968;
        case 0x18d96cu: goto label_18d96c;
        case 0x18d970u: goto label_18d970;
        case 0x18d974u: goto label_18d974;
        case 0x18d978u: goto label_18d978;
        case 0x18d97cu: goto label_18d97c;
        case 0x18d980u: goto label_18d980;
        case 0x18d984u: goto label_18d984;
        case 0x18d988u: goto label_18d988;
        case 0x18d98cu: goto label_18d98c;
        case 0x18d990u: goto label_18d990;
        case 0x18d994u: goto label_18d994;
        case 0x18d998u: goto label_18d998;
        case 0x18d99cu: goto label_18d99c;
        case 0x18d9a0u: goto label_18d9a0;
        case 0x18d9a4u: goto label_18d9a4;
        case 0x18d9a8u: goto label_18d9a8;
        case 0x18d9acu: goto label_18d9ac;
        case 0x18d9b0u: goto label_18d9b0;
        case 0x18d9b4u: goto label_18d9b4;
        case 0x18d9b8u: goto label_18d9b8;
        case 0x18d9bcu: goto label_18d9bc;
        case 0x18d9c0u: goto label_18d9c0;
        case 0x18d9c4u: goto label_18d9c4;
        case 0x18d9c8u: goto label_18d9c8;
        case 0x18d9ccu: goto label_18d9cc;
        case 0x18d9d0u: goto label_18d9d0;
        case 0x18d9d4u: goto label_18d9d4;
        case 0x18d9d8u: goto label_18d9d8;
        case 0x18d9dcu: goto label_18d9dc;
        case 0x18d9e0u: goto label_18d9e0;
        case 0x18d9e4u: goto label_18d9e4;
        case 0x18d9e8u: goto label_18d9e8;
        case 0x18d9ecu: goto label_18d9ec;
        case 0x18d9f0u: goto label_18d9f0;
        case 0x18d9f4u: goto label_18d9f4;
        case 0x18d9f8u: goto label_18d9f8;
        case 0x18d9fcu: goto label_18d9fc;
        case 0x18da00u: goto label_18da00;
        case 0x18da04u: goto label_18da04;
        case 0x18da08u: goto label_18da08;
        case 0x18da0cu: goto label_18da0c;
        case 0x18da10u: goto label_18da10;
        case 0x18da14u: goto label_18da14;
        case 0x18da18u: goto label_18da18;
        case 0x18da1cu: goto label_18da1c;
        case 0x18da20u: goto label_18da20;
        case 0x18da24u: goto label_18da24;
        case 0x18da28u: goto label_18da28;
        case 0x18da2cu: goto label_18da2c;
        case 0x18da30u: goto label_18da30;
        case 0x18da34u: goto label_18da34;
        case 0x18da38u: goto label_18da38;
        case 0x18da3cu: goto label_18da3c;
        case 0x18da40u: goto label_18da40;
        case 0x18da44u: goto label_18da44;
        case 0x18da48u: goto label_18da48;
        case 0x18da4cu: goto label_18da4c;
        case 0x18da50u: goto label_18da50;
        case 0x18da54u: goto label_18da54;
        case 0x18da58u: goto label_18da58;
        case 0x18da5cu: goto label_18da5c;
        case 0x18da60u: goto label_18da60;
        case 0x18da64u: goto label_18da64;
        case 0x18da68u: goto label_18da68;
        case 0x18da6cu: goto label_18da6c;
        case 0x18da70u: goto label_18da70;
        case 0x18da74u: goto label_18da74;
        case 0x18da78u: goto label_18da78;
        case 0x18da7cu: goto label_18da7c;
        case 0x18da80u: goto label_18da80;
        case 0x18da84u: goto label_18da84;
        case 0x18da88u: goto label_18da88;
        case 0x18da8cu: goto label_18da8c;
        case 0x18da90u: goto label_18da90;
        case 0x18da94u: goto label_18da94;
        case 0x18da98u: goto label_18da98;
        case 0x18da9cu: goto label_18da9c;
        case 0x18daa0u: goto label_18daa0;
        case 0x18daa4u: goto label_18daa4;
        case 0x18daa8u: goto label_18daa8;
        case 0x18daacu: goto label_18daac;
        case 0x18dab0u: goto label_18dab0;
        case 0x18dab4u: goto label_18dab4;
        case 0x18dab8u: goto label_18dab8;
        case 0x18dabcu: goto label_18dabc;
        case 0x18dac0u: goto label_18dac0;
        case 0x18dac4u: goto label_18dac4;
        case 0x18dac8u: goto label_18dac8;
        case 0x18daccu: goto label_18dacc;
        case 0x18dad0u: goto label_18dad0;
        case 0x18dad4u: goto label_18dad4;
        case 0x18dad8u: goto label_18dad8;
        case 0x18dadcu: goto label_18dadc;
        case 0x18dae0u: goto label_18dae0;
        case 0x18dae4u: goto label_18dae4;
        case 0x18dae8u: goto label_18dae8;
        case 0x18daecu: goto label_18daec;
        case 0x18daf0u: goto label_18daf0;
        case 0x18daf4u: goto label_18daf4;
        case 0x18daf8u: goto label_18daf8;
        case 0x18dafcu: goto label_18dafc;
        case 0x18db00u: goto label_18db00;
        case 0x18db04u: goto label_18db04;
        case 0x18db08u: goto label_18db08;
        case 0x18db0cu: goto label_18db0c;
        case 0x18db10u: goto label_18db10;
        case 0x18db14u: goto label_18db14;
        case 0x18db18u: goto label_18db18;
        case 0x18db1cu: goto label_18db1c;
        case 0x18db20u: goto label_18db20;
        case 0x18db24u: goto label_18db24;
        case 0x18db28u: goto label_18db28;
        case 0x18db2cu: goto label_18db2c;
        case 0x18db30u: goto label_18db30;
        case 0x18db34u: goto label_18db34;
        case 0x18db38u: goto label_18db38;
        case 0x18db3cu: goto label_18db3c;
        case 0x18db40u: goto label_18db40;
        case 0x18db44u: goto label_18db44;
        case 0x18db48u: goto label_18db48;
        case 0x18db4cu: goto label_18db4c;
        case 0x18db50u: goto label_18db50;
        case 0x18db54u: goto label_18db54;
        case 0x18db58u: goto label_18db58;
        case 0x18db5cu: goto label_18db5c;
        case 0x18db60u: goto label_18db60;
        case 0x18db64u: goto label_18db64;
        case 0x18db68u: goto label_18db68;
        case 0x18db6cu: goto label_18db6c;
        case 0x18db70u: goto label_18db70;
        case 0x18db74u: goto label_18db74;
        case 0x18db78u: goto label_18db78;
        case 0x18db7cu: goto label_18db7c;
        case 0x18db80u: goto label_18db80;
        case 0x18db84u: goto label_18db84;
        case 0x18db88u: goto label_18db88;
        case 0x18db8cu: goto label_18db8c;
        case 0x18db90u: goto label_18db90;
        case 0x18db94u: goto label_18db94;
        case 0x18db98u: goto label_18db98;
        case 0x18db9cu: goto label_18db9c;
        case 0x18dba0u: goto label_18dba0;
        case 0x18dba4u: goto label_18dba4;
        case 0x18dba8u: goto label_18dba8;
        case 0x18dbacu: goto label_18dbac;
        case 0x18dbb0u: goto label_18dbb0;
        case 0x18dbb4u: goto label_18dbb4;
        case 0x18dbb8u: goto label_18dbb8;
        case 0x18dbbcu: goto label_18dbbc;
        case 0x18dbc0u: goto label_18dbc0;
        case 0x18dbc4u: goto label_18dbc4;
        case 0x18dbc8u: goto label_18dbc8;
        case 0x18dbccu: goto label_18dbcc;
        case 0x18dbd0u: goto label_18dbd0;
        case 0x18dbd4u: goto label_18dbd4;
        case 0x18dbd8u: goto label_18dbd8;
        case 0x18dbdcu: goto label_18dbdc;
        case 0x18dbe0u: goto label_18dbe0;
        case 0x18dbe4u: goto label_18dbe4;
        case 0x18dbe8u: goto label_18dbe8;
        case 0x18dbecu: goto label_18dbec;
        case 0x18dbf0u: goto label_18dbf0;
        case 0x18dbf4u: goto label_18dbf4;
        case 0x18dbf8u: goto label_18dbf8;
        case 0x18dbfcu: goto label_18dbfc;
        case 0x18dc00u: goto label_18dc00;
        case 0x18dc04u: goto label_18dc04;
        case 0x18dc08u: goto label_18dc08;
        case 0x18dc0cu: goto label_18dc0c;
        case 0x18dc10u: goto label_18dc10;
        case 0x18dc14u: goto label_18dc14;
        case 0x18dc18u: goto label_18dc18;
        case 0x18dc1cu: goto label_18dc1c;
        case 0x18dc20u: goto label_18dc20;
        default: break;
    }

    ctx->pc = 0x18d0f8u;

label_18d0f8:
    // 0x18d0f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18d0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_18d0fc:
    // 0x18d0fc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x18d0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_18d100:
    // 0x18d100: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18d100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d104:
    // 0x18d104: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x18d104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_18d108:
    // 0x18d108: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x18d108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_18d10c:
    // 0x18d10c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18d10cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18d110:
    // 0x18d110: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x18d110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_18d114:
    // 0x18d114: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x18d114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_18d118:
    // 0x18d118: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x18d118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_18d11c:
    // 0x18d11c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x18d11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_18d120:
    // 0x18d120: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x18d120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_18d124:
    // 0x18d124: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x18d124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_18d128:
    // 0x18d128: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x18d128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_18d12c:
    // 0x18d12c: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x18d12cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_18d130:
    // 0x18d130: 0x104002af  beqz        $v0, . + 4 + (0x2AF << 2)
label_18d134:
    if (ctx->pc == 0x18D134u) {
        ctx->pc = 0x18D134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D130u;
        // 0x18d134: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D138u;
        goto label_18d138;
    }
    ctx->pc = 0x18D130u;
    {
        const bool branch_taken_0x18d130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D130u;
        // 0x18d134: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d130) {
            ctx->pc = 0x18DBF0u;
            goto label_18dbf0;
        }
    }
    ctx->pc = 0x18D138u;
label_18d138:
    // 0x18d138: 0x263e023c  addiu       $fp, $s1, 0x23C
    ctx->pc = 0x18d138u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 572));
label_18d13c:
    // 0x18d13c: 0x92700000  lbu         $s0, 0x0($s3)
    ctx->pc = 0x18d13cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_18d140:
    // 0x18d140: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18d140u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18d144:
    // 0x18d144: 0xc067444  jal         func_19D110
label_18d148:
    if (ctx->pc == 0x18D148u) {
        ctx->pc = 0x18D148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D144u;
        // 0x18d148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D14Cu;
        goto label_18d14c;
    }
    ctx->pc = 0x18D144u;
    SET_GPR_U32(ctx, 31, 0x18D14Cu);
    ctx->pc = 0x18D148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D144u;
    // 0x18d148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D110u, 0x18D144u, 0x18D14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D14Cu;
label_18d14c:
    // 0x18d14c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_18d150:
    if (ctx->pc == 0x18D150u) {
        ctx->pc = 0x18D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D14Cu;
        // 0x18d150: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D154u;
        goto label_18d154;
    }
    ctx->pc = 0x18D14Cu;
    {
        const bool branch_taken_0x18d14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d14c) {
            ctx->pc = 0x18D150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D14Cu;
            // 0x18d150: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D170u;
            goto label_18d170;
        }
    }
    ctx->pc = 0x18D154u;
label_18d154:
    // 0x18d154: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x18d154u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_18d158:
    // 0x18d158: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18d158u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18d15c:
    // 0x18d15c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d15cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
label_18d160:
    // 0x18d160: 0xc06744c  jal         func_19D130
label_18d164:
    if (ctx->pc == 0x18D164u) {
        ctx->pc = 0x18D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D160u;
        // 0x18d164: 0x2042025  or          $a0, $s0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D168u;
        goto label_18d168;
    }
    ctx->pc = 0x18D160u;
    SET_GPR_U32(ctx, 31, 0x18D168u);
    ctx->pc = 0x18D164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D160u;
    // 0x18d164: 0x2042025  or          $a0, $s0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D130u, 0x18D160u, 0x18D168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D168u;
label_18d168:
    // 0x18d168: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18d168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d16c:
    // 0x18d16c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x18d16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_18d170:
    // 0x18d170: 0x12020205  beq         $s0, $v0, . + 4 + (0x205 << 2)
label_18d174:
    if (ctx->pc == 0x18D174u) {
        ctx->pc = 0x18D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D170u;
        // 0x18d174: 0x2a020041  slti        $v0, $s0, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D178u;
        goto label_18d178;
    }
    ctx->pc = 0x18D170u;
    {
        const bool branch_taken_0x18d170 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D170u;
        // 0x18d174: 0x2a020041  slti        $v0, $s0, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d170) {
            ctx->pc = 0x18D988u;
            goto label_18d988;
        }
    }
    ctx->pc = 0x18D178u;
label_18d178:
    // 0x18d178: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_18d17c:
    if (ctx->pc == 0x18D17Cu) {
        ctx->pc = 0x18D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D178u;
        // 0x18d17c: 0x2402007b  addiu       $v0, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D180u;
        goto label_18d180;
    }
    ctx->pc = 0x18D178u;
    {
        const bool branch_taken_0x18d178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D178u;
        // 0x18d17c: 0x2402007b  addiu       $v0, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d178) {
            ctx->pc = 0x18D1B8u;
            goto label_18d1b8;
        }
    }
    ctx->pc = 0x18D180u;
label_18d180:
    // 0x18d180: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x18d180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_18d184:
    // 0x18d184: 0x12020264  beq         $s0, $v0, . + 4 + (0x264 << 2)
label_18d188:
    if (ctx->pc == 0x18D188u) {
        ctx->pc = 0x18D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D184u;
        // 0x18d188: 0x2a02000b  slti        $v0, $s0, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D18Cu;
        goto label_18d18c;
    }
    ctx->pc = 0x18D184u;
    {
        const bool branch_taken_0x18d184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D184u;
        // 0x18d188: 0x2a02000b  slti        $v0, $s0, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d184) {
            ctx->pc = 0x18DB18u;
            goto label_18db18;
        }
    }
    ctx->pc = 0x18D18Cu;
label_18d18c:
    // 0x18d18c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_18d190:
    if (ctx->pc == 0x18D190u) {
        ctx->pc = 0x18D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D18Cu;
        // 0x18d190: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D194u;
        goto label_18d194;
    }
    ctx->pc = 0x18D18Cu;
    {
        const bool branch_taken_0x18d18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D18Cu;
        // 0x18d190: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d18c) {
            ctx->pc = 0x18D1A8u;
            goto label_18d1a8;
        }
    }
    ctx->pc = 0x18D194u;
label_18d194:
    // 0x18d194: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x18d194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_18d198:
    // 0x18d198: 0x12020285  beq         $s0, $v0, . + 4 + (0x285 << 2)
label_18d19c:
    if (ctx->pc == 0x18D19Cu) {
        ctx->pc = 0x18D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D198u;
        // 0x18d19c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D1A0u;
        goto label_18d1a0;
    }
    ctx->pc = 0x18D198u;
    {
        const bool branch_taken_0x18d198 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D198u;
        // 0x18d19c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d198) {
            ctx->pc = 0x18DBB0u;
            goto label_18dbb0;
        }
    }
    ctx->pc = 0x18D1A0u;
label_18d1a0:
    // 0x18d1a0: 0x1000028d  b           . + 4 + (0x28D << 2)
label_18d1a4:
    if (ctx->pc == 0x18D1A4u) {
        ctx->pc = 0x18D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1A0u;
        // 0x18d1a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D1A8u;
        goto label_18d1a8;
    }
    ctx->pc = 0x18D1A0u;
    {
        const bool branch_taken_0x18d1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1A0u;
        // 0x18d1a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1a0) {
            ctx->pc = 0x18DBD8u;
            goto label_18dbd8;
        }
    }
    ctx->pc = 0x18D1A8u;
label_18d1a8:
    // 0x18d1a8: 0x120201db  beq         $s0, $v0, . + 4 + (0x1DB << 2)
label_18d1ac:
    if (ctx->pc == 0x18D1ACu) {
        ctx->pc = 0x18D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1A8u;
        // 0x18d1ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D1B0u;
        goto label_18d1b0;
    }
    ctx->pc = 0x18D1A8u;
    {
        const bool branch_taken_0x18d1a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1A8u;
        // 0x18d1ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1a8) {
            ctx->pc = 0x18D918u;
            goto label_18d918;
        }
    }
    ctx->pc = 0x18D1B0u;
label_18d1b0:
    // 0x18d1b0: 0x10000289  b           . + 4 + (0x289 << 2)
label_18d1b4:
    if (ctx->pc == 0x18D1B4u) {
        ctx->pc = 0x18D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1B0u;
        // 0x18d1b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D1B8u;
        goto label_18d1b8;
    }
    ctx->pc = 0x18D1B0u;
    {
        const bool branch_taken_0x18d1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1B0u;
        // 0x18d1b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1b0) {
            ctx->pc = 0x18DBD8u;
            goto label_18dbd8;
        }
    }
    ctx->pc = 0x18D1B8u;
label_18d1b8:
    // 0x18d1b8: 0x12020233  beq         $s0, $v0, . + 4 + (0x233 << 2)
label_18d1bc:
    if (ctx->pc == 0x18D1BCu) {
        ctx->pc = 0x18D1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1B8u;
        // 0x18d1bc: 0x2a02007c  slti        $v0, $s0, 0x7C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)124) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D1C0u;
        goto label_18d1c0;
    }
    ctx->pc = 0x18D1B8u;
    {
        const bool branch_taken_0x18d1b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18D1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1B8u;
        // 0x18d1bc: 0x2a02007c  slti        $v0, $s0, 0x7C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)124) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1b8) {
            ctx->pc = 0x18DA88u;
            goto label_18da88;
        }
    }
    ctx->pc = 0x18D1C0u;
label_18d1c0:
    // 0x18d1c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_18d1c4:
    if (ctx->pc == 0x18D1C4u) {
        ctx->pc = 0x18D1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1C0u;
        // 0x18d1c4: 0x2402007d  addiu       $v0, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D1C8u;
        goto label_18d1c8;
    }
    ctx->pc = 0x18D1C0u;
    {
        const bool branch_taken_0x18d1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1C0u;
        // 0x18d1c4: 0x2402007d  addiu       $v0, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1c0) {
            ctx->pc = 0x18D1E0u;
            goto label_18d1e0;
        }
    }
    ctx->pc = 0x18D1C8u;
label_18d1c8:
    // 0x18d1c8: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x18d1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_18d1cc:
    // 0x18d1cc: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
label_18d1d0:
    if (ctx->pc == 0x18D1D0u) {
        ctx->pc = 0x18D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1CCu;
        // 0x18d1d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D1D4u;
        goto label_18d1d4;
    }
    ctx->pc = 0x18D1CCu;
    {
        const bool branch_taken_0x18d1cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1CCu;
        // 0x18d1d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1cc) {
            ctx->pc = 0x18D1F8u;
            goto label_18d1f8;
        }
    }
    ctx->pc = 0x18D1D4u;
label_18d1d4:
    // 0x18d1d4: 0x10000280  b           . + 4 + (0x280 << 2)
label_18d1d8:
    if (ctx->pc == 0x18D1D8u) {
        ctx->pc = 0x18D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1D4u;
        // 0x18d1d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D1DCu;
        goto label_18d1dc;
    }
    ctx->pc = 0x18D1D4u;
    {
        const bool branch_taken_0x18d1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1D4u;
        // 0x18d1d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1d4) {
            ctx->pc = 0x18DBD8u;
            goto label_18dbd8;
        }
    }
    ctx->pc = 0x18D1DCu;
label_18d1dc:
    // 0x18d1dc: 0x0  nop
    ctx->pc = 0x18d1dcu;
    // NOP
label_18d1e0:
    // 0x18d1e0: 0x1202023b  beq         $s0, $v0, . + 4 + (0x23B << 2)
label_18d1e4:
    if (ctx->pc == 0x18D1E4u) {
        ctx->pc = 0x18D1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1E0u;
        // 0x18d1e4: 0x3402818f  ori         $v0, $zero, 0x818F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33167);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D1E8u;
        goto label_18d1e8;
    }
    ctx->pc = 0x18D1E0u;
    {
        const bool branch_taken_0x18d1e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18D1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1E0u;
        // 0x18d1e4: 0x3402818f  ori         $v0, $zero, 0x818F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33167);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1e0) {
            ctx->pc = 0x18DAD0u;
            goto label_18dad0;
        }
    }
    ctx->pc = 0x18D1E8u;
label_18d1e8:
    // 0x18d1e8: 0x1202024b  beq         $s0, $v0, . + 4 + (0x24B << 2)
label_18d1ec:
    if (ctx->pc == 0x18D1ECu) {
        ctx->pc = 0x18D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1E8u;
        // 0x18d1ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D1F0u;
        goto label_18d1f0;
    }
    ctx->pc = 0x18D1E8u;
    {
        const bool branch_taken_0x18d1e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1E8u;
        // 0x18d1ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1e8) {
            ctx->pc = 0x18DB18u;
            goto label_18db18;
        }
    }
    ctx->pc = 0x18D1F0u;
label_18d1f0:
    // 0x18d1f0: 0x10000279  b           . + 4 + (0x279 << 2)
label_18d1f4:
    if (ctx->pc == 0x18D1F4u) {
        ctx->pc = 0x18D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1F0u;
        // 0x18d1f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D1F8u;
        goto label_18d1f8;
    }
    ctx->pc = 0x18D1F0u;
    {
        const bool branch_taken_0x18d1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1F0u;
        // 0x18d1f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1f0) {
            ctx->pc = 0x18DBD8u;
            goto label_18dbd8;
        }
    }
    ctx->pc = 0x18D1F8u;
label_18d1f8:
    // 0x18d1f8: 0x82660000  lb          $a2, 0x0($s3)
    ctx->pc = 0x18d1f8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_18d1fc:
    // 0x18d1fc: 0x24c3ffd0  addiu       $v1, $a2, -0x30
    ctx->pc = 0x18d1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
label_18d200:
    // 0x18d200: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x18d200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_18d204:
    // 0x18d204: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18d208:
    if (ctx->pc == 0x18D208u) {
        ctx->pc = 0x18D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D204u;
        // 0x18d208: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D20Cu;
        goto label_18d20c;
    }
    ctx->pc = 0x18D204u;
    {
        const bool branch_taken_0x18d204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D204u;
        // 0x18d208: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d204) {
            ctx->pc = 0x18D218u;
            goto label_18d218;
        }
    }
    ctx->pc = 0x18D20Cu;
label_18d20c:
    // 0x18d20c: 0x10000275  b           . + 4 + (0x275 << 2)
label_18d210:
    if (ctx->pc == 0x18D210u) {
        ctx->pc = 0x18D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D20Cu;
        // 0x18d210: 0xa3c30002  sb          $v1, 0x2($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D214u;
        goto label_18d214;
    }
    ctx->pc = 0x18D20Cu;
    {
        const bool branch_taken_0x18d20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D20Cu;
        // 0x18d210: 0xa3c30002  sb          $v1, 0x2($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d20c) {
            ctx->pc = 0x18DBE4u;
            goto label_18dbe4;
        }
    }
    ctx->pc = 0x18D214u;
label_18d214:
    // 0x18d214: 0x0  nop
    ctx->pc = 0x18d214u;
    // NOP
label_18d218:
    // 0x18d218: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x18d218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_18d21c:
    // 0x18d21c: 0x14c20024  bne         $a2, $v0, . + 4 + (0x24 << 2)
label_18d220:
    if (ctx->pc == 0x18D220u) {
        ctx->pc = 0x18D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D21Cu;
        // 0x18d220: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D224u;
        goto label_18d224;
    }
    ctx->pc = 0x18D21Cu;
    {
        const bool branch_taken_0x18d21c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D21Cu;
        // 0x18d220: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d21c) {
            ctx->pc = 0x18D2B0u;
            goto label_18d2b0;
        }
    }
    ctx->pc = 0x18D224u;
label_18d224:
    // 0x18d224: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x18d224u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_18d228:
    // 0x18d228: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x18d228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_18d22c:
    // 0x18d22c: 0x5443001c  bnel        $v0, $v1, . + 4 + (0x1C << 2)
label_18d230:
    if (ctx->pc == 0x18D230u) {
        ctx->pc = 0x18D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D22Cu;
        // 0x18d230: 0x97c20004  lhu         $v0, 0x4($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D234u;
        goto label_18d234;
    }
    ctx->pc = 0x18D22Cu;
    {
        const bool branch_taken_0x18d22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18d22c) {
            ctx->pc = 0x18D230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D22Cu;
            // 0x18d230: 0x97c20004  lhu         $v0, 0x4($fp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D2A0u;
            goto label_18d2a0;
        }
    }
    ctx->pc = 0x18D234u;
label_18d234:
    // 0x18d234: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x18d234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_18d238:
    // 0x18d238: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x18d238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18d23c:
    // 0x18d23c: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
label_18d240:
    if (ctx->pc == 0x18D240u) {
        ctx->pc = 0x18D240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D23Cu;
        // 0x18d240: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D244u;
        goto label_18d244;
    }
    ctx->pc = 0x18D23Cu;
    {
        const bool branch_taken_0x18d23c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x18D240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D23Cu;
        // 0x18d240: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d23c) {
            ctx->pc = 0x18D27Cu;
            goto label_18d27c;
        }
    }
    ctx->pc = 0x18D244u;
label_18d244:
    // 0x18d244: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18d244u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d248:
    // 0x18d248: 0x80a40000  lb          $a0, 0x0($a1)
    ctx->pc = 0x18d248u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_18d24c:
    // 0x18d24c: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x18d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_18d250:
    // 0x18d250: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x18d250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_18d254:
    // 0x18d254: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_18d258:
    if (ctx->pc == 0x18D258u) {
        ctx->pc = 0x18D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D254u;
        // 0x18d258: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D25Cu;
        goto label_18d25c;
    }
    ctx->pc = 0x18D254u;
    {
        const bool branch_taken_0x18d254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D254u;
        // 0x18d258: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d254) {
            ctx->pc = 0x18D278u;
            goto label_18d278;
        }
    }
    ctx->pc = 0x18D25Cu;
label_18d25c:
    // 0x18d25c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18d260:
    // 0x18d260: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d264:
    // 0x18d264: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x18d264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_18d268:
    // 0x18d268: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18d26c:
    // 0x18d26c: 0x1000fff6  b           . + 4 + (-0xA << 2)
label_18d270:
    if (ctx->pc == 0x18D270u) {
        ctx->pc = 0x18D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D26Cu;
        // 0x18d270: 0x2463ffd0  addiu       $v1, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D274u;
        goto label_18d274;
    }
    ctx->pc = 0x18D26Cu;
    {
        const bool branch_taken_0x18d26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D26Cu;
        // 0x18d270: 0x2463ffd0  addiu       $v1, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d26c) {
            ctx->pc = 0x18D248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d248;
        }
    }
    ctx->pc = 0x18D274u;
label_18d274:
    // 0x18d274: 0x0  nop
    ctx->pc = 0x18d274u;
    // NOP
label_18d278:
    // 0x18d278: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x18d278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_18d27c:
    // 0x18d27c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x18d27cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_18d280:
    // 0x18d280: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18d280u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18d284:
    // 0x18d284: 0x97c30004  lhu         $v1, 0x4($fp)
    ctx->pc = 0x18d284u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4)));
label_18d288:
    // 0x18d288: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x18d288u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_18d28c:
    // 0x18d28c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x18d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_18d290:
    // 0x18d290: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x18d290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
label_18d294:
    // 0x18d294: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18d294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_18d298:
    // 0x18d298: 0x10000252  b           . + 4 + (0x252 << 2)
label_18d29c:
    if (ctx->pc == 0x18D29Cu) {
        ctx->pc = 0x18D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D298u;
        // 0x18d29c: 0xa7c20004  sh          $v0, 0x4($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D2A0u;
        goto label_18d2a0;
    }
    ctx->pc = 0x18D298u;
    {
        const bool branch_taken_0x18d298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D298u;
        // 0x18d29c: 0xa7c20004  sh          $v0, 0x4($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d298) {
            ctx->pc = 0x18DBE4u;
            goto label_18dbe4;
        }
    }
    ctx->pc = 0x18D2A0u;
label_18d2a0:
    // 0x18d2a0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x18d2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_18d2a4:
    // 0x18d2a4: 0x1000024f  b           . + 4 + (0x24F << 2)
label_18d2a8:
    if (ctx->pc == 0x18D2A8u) {
        ctx->pc = 0x18D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2A4u;
        // 0x18d2a8: 0xa7c20004  sh          $v0, 0x4($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D2ACu;
        goto label_18d2ac;
    }
    ctx->pc = 0x18D2A4u;
    {
        const bool branch_taken_0x18d2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2A4u;
        // 0x18d2a8: 0xa7c20004  sh          $v0, 0x4($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2a4) {
            ctx->pc = 0x18DBE4u;
            goto label_18dbe4;
        }
    }
    ctx->pc = 0x18D2ACu;
label_18d2ac:
    // 0x18d2ac: 0x0  nop
    ctx->pc = 0x18d2acu;
    // NOP
label_18d2b0:
    // 0x18d2b0: 0x10c20219  beq         $a2, $v0, . + 4 + (0x219 << 2)
label_18d2b4:
    if (ctx->pc == 0x18D2B4u) {
        ctx->pc = 0x18D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2B0u;
        // 0x18d2b4: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D2B8u;
        goto label_18d2b8;
    }
    ctx->pc = 0x18D2B0u;
    {
        const bool branch_taken_0x18d2b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x18D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2B0u;
        // 0x18d2b4: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2b0) {
            ctx->pc = 0x18DB18u;
            goto label_18db18;
        }
    }
    ctx->pc = 0x18D2B8u;
label_18d2b8:
    // 0x18d2b8: 0x14c20009  bne         $a2, $v0, . + 4 + (0x9 << 2)
label_18d2bc:
    if (ctx->pc == 0x18D2BCu) {
        ctx->pc = 0x18D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2B8u;
        // 0x18d2bc: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D2C0u;
        goto label_18d2c0;
    }
    ctx->pc = 0x18D2B8u;
    {
        const bool branch_taken_0x18d2b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2B8u;
        // 0x18d2bc: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2b8) {
            ctx->pc = 0x18D2E0u;
            goto label_18d2e0;
        }
    }
    ctx->pc = 0x18D2C0u;
label_18d2c0:
    // 0x18d2c0: 0x8623023c  lh          $v1, 0x23C($s1)
    ctx->pc = 0x18d2c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 572)));
label_18d2c4:
    // 0x18d2c4: 0x1460024b  bnez        $v1, . + 4 + (0x24B << 2)
label_18d2c8:
    if (ctx->pc == 0x18D2C8u) {
        ctx->pc = 0x18D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2C4u;
        // 0x18d2c8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D2CCu;
        goto label_18d2cc;
    }
    ctx->pc = 0x18D2C4u;
    {
        const bool branch_taken_0x18d2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2C4u;
        // 0x18d2c8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2c4) {
            ctx->pc = 0x18DBF4u;
            goto label_18dbf4;
        }
    }
    ctx->pc = 0x18D2CCu;
label_18d2cc:
    // 0x18d2cc: 0xc0637a8  jal         func_18DEA0
label_18d2d0:
    if (ctx->pc == 0x18D2D0u) {
        ctx->pc = 0x18D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2CCu;
        // 0x18d2d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D2D4u;
        goto label_18d2d4;
    }
    ctx->pc = 0x18D2CCu;
    SET_GPR_U32(ctx, 31, 0x18D2D4u);
    ctx->pc = 0x18D2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D2CCu;
    // 0x18d2d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DEA0u, 0x18D2CCu, 0x18D2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D2D4u;
label_18d2d4:
    // 0x18d2d4: 0x10000243  b           . + 4 + (0x243 << 2)
label_18d2d8:
    if (ctx->pc == 0x18D2D8u) {
        ctx->pc = 0x18D2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2D4u;
        // 0x18d2d8: 0x8e320214  lw          $s2, 0x214($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D2DCu;
        goto label_18d2dc;
    }
    ctx->pc = 0x18D2D4u;
    {
        const bool branch_taken_0x18d2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2D4u;
        // 0x18d2d8: 0x8e320214  lw          $s2, 0x214($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2d4) {
            ctx->pc = 0x18DBE4u;
            goto label_18dbe4;
        }
    }
    ctx->pc = 0x18D2DCu;
label_18d2dc:
    // 0x18d2dc: 0x0  nop
    ctx->pc = 0x18d2dcu;
    // NOP
label_18d2e0:
    // 0x18d2e0: 0x14c2002b  bne         $a2, $v0, . + 4 + (0x2B << 2)
label_18d2e4:
    if (ctx->pc == 0x18D2E4u) {
        ctx->pc = 0x18D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2E0u;
        // 0x18d2e4: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D2E8u;
        goto label_18d2e8;
    }
    ctx->pc = 0x18D2E0u;
    {
        const bool branch_taken_0x18d2e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2E0u;
        // 0x18d2e4: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2e0) {
            ctx->pc = 0x18D390u;
            goto label_18d390;
        }
    }
    ctx->pc = 0x18D2E8u;
label_18d2e8:
    // 0x18d2e8: 0x8e220214  lw          $v0, 0x214($s1)
    ctx->pc = 0x18d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_18d2ec:
    // 0x18d2ec: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x18d2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
label_18d2f0:
    // 0x18d2f0: 0x8e230228  lw          $v1, 0x228($s1)
    ctx->pc = 0x18d2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
label_18d2f4:
    // 0x18d2f4: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x18d2f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18d2f8:
    // 0x18d2f8: 0x8e250218  lw          $a1, 0x218($s1)
    ctx->pc = 0x18d2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_18d2fc:
    // 0x18d2fc: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x18d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_18d300:
    // 0x18d300: 0x8e260238  lw          $a2, 0x238($s1)
    ctx->pc = 0x18d300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
label_18d304:
    // 0x18d304: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x18d304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_18d308:
    // 0x18d308: 0x8e24021c  lw          $a0, 0x21C($s1)
    ctx->pc = 0x18d308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
label_18d30c:
    // 0x18d30c: 0xa2b021  addu        $s6, $a1, $v0
    ctx->pc = 0x18d30cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_18d310:
    // 0x18d310: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x18d310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_18d314:
    // 0x18d314: 0x8cd40010  lw          $s4, 0x10($a2)
    ctx->pc = 0x18d314u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_18d318:
    // 0x18d318: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_18d31c:
    if (ctx->pc == 0x18D31Cu) {
        ctx->pc = 0x18D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D318u;
        // 0x18d31c: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D320u;
        goto label_18d320;
    }
    ctx->pc = 0x18D318u;
    {
        const bool branch_taken_0x18d318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x18D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D318u;
        // 0x18d31c: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d318) {
            ctx->pc = 0x18D330u;
            goto label_18d330;
        }
    }
    ctx->pc = 0x18D320u;
label_18d320:
    // 0x18d320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d324:
    // 0x18d324: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18d324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18d328:
    // 0x18d328: 0xc063b70  jal         func_18EDC0
label_18d32c:
    if (ctx->pc == 0x18D32Cu) {
        ctx->pc = 0x18D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D328u;
        // 0x18d32c: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D330u;
        goto label_18d330;
    }
    ctx->pc = 0x18D328u;
    SET_GPR_U32(ctx, 31, 0x18D330u);
    ctx->pc = 0x18D32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D328u;
    // 0x18d32c: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EDC0u, 0x18D328u, 0x18D330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D330u;
label_18d330:
    // 0x18d330: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18d330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18d334:
    // 0x18d334: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_18d338:
    if (ctx->pc == 0x18D338u) {
        ctx->pc = 0x18D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D334u;
        // 0x18d338: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D33Cu;
        goto label_18d33c;
    }
    ctx->pc = 0x18D334u;
    {
        const bool branch_taken_0x18d334 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D334u;
        // 0x18d338: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d334) {
            ctx->pc = 0x18D348u;
            goto label_18d348;
        }
    }
    ctx->pc = 0x18D33Cu;
label_18d33c:
    // 0x18d33c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d340:
    // 0x18d340: 0x280f809  jalr        $s4
label_18d344:
    if (ctx->pc == 0x18D344u) {
        ctx->pc = 0x18D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D340u;
        // 0x18d344: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D348u;
        goto label_18d348;
    }
    ctx->pc = 0x18D340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x18D348u);
        ctx->pc = 0x18D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D340u;
        // 0x18d344: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D340u, 0x18D348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D348u;
label_18d348:
    // 0x18d348: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x18d348u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_18d34c:
    // 0x18d34c: 0x8e250250  lw          $a1, 0x250($s1)
    ctx->pc = 0x18d34cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_18d350:
    // 0x18d350: 0x24048000  addiu       $a0, $zero, -0x8000
    ctx->pc = 0x18d350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_18d354:
    // 0x18d354: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18d354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d358:
    // 0x18d358: 0x26b20002  addiu       $s2, $s5, 0x2
    ctx->pc = 0x18d358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
label_18d35c:
    // 0x18d35c: 0x14a300cc  bne         $a1, $v1, . + 4 + (0xCC << 2)
label_18d360:
    if (ctx->pc == 0x18D360u) {
        ctx->pc = 0x18D360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D35Cu;
        // 0x18d360: 0xa6c40000  sh          $a0, 0x0($s6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D364u;
        goto label_18d364;
    }
    ctx->pc = 0x18D35Cu;
    {
        const bool branch_taken_0x18d35c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x18D360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D35Cu;
        // 0x18d360: 0xa6c40000  sh          $a0, 0x0($s6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d35c) {
            ctx->pc = 0x18D690u;
            goto label_18d690;
        }
    }
    ctx->pc = 0x18D364u;
label_18d364:
    // 0x18d364: 0x8622023c  lh          $v0, 0x23C($s1)
    ctx->pc = 0x18d364u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 572)));
label_18d368:
    // 0x18d368: 0x504000ca  beql        $v0, $zero, . + 4 + (0xCA << 2)
label_18d36c:
    if (ctx->pc == 0x18D36Cu) {
        ctx->pc = 0x18D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D368u;
        // 0x18d36c: 0x96220244  lhu         $v0, 0x244($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D370u;
        goto label_18d370;
    }
    ctx->pc = 0x18D368u;
    {
        const bool branch_taken_0x18d368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d368) {
            ctx->pc = 0x18D36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D368u;
            // 0x18d36c: 0x96220244  lhu         $v0, 0x244($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D694u;
            goto label_18d694;
        }
    }
    ctx->pc = 0x18D370u;
label_18d370:
    // 0x18d370: 0xc62101b0  lwc1        $f1, 0x1B0($s1)
    ctx->pc = 0x18d370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d374:
    // 0x18d374: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18d374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_18d378:
    // 0x18d378: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18d378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d37c:
    // 0x18d37c: 0x86220246  lh          $v0, 0x246($s1)
    ctx->pc = 0x18d37cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 582)));
label_18d380:
    // 0x18d380: 0x8e230254  lw          $v1, 0x254($s1)
    ctx->pc = 0x18d380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
label_18d384:
    // 0x18d384: 0x100000bd  b           . + 4 + (0xBD << 2)
label_18d388:
    if (ctx->pc == 0x18D388u) {
        ctx->pc = 0x18D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D384u;
        // 0x18d388: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D38Cu;
        goto label_18d38c;
    }
    ctx->pc = 0x18D384u;
    {
        const bool branch_taken_0x18d384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D384u;
        // 0x18d388: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d384) {
            ctx->pc = 0x18D67Cu;
            goto label_18d67c;
        }
    }
    ctx->pc = 0x18D38Cu;
label_18d38c:
    // 0x18d38c: 0x0  nop
    ctx->pc = 0x18d38cu;
    // NOP
label_18d390:
    // 0x18d390: 0x14c2003f  bne         $a2, $v0, . + 4 + (0x3F << 2)
label_18d394:
    if (ctx->pc == 0x18D394u) {
        ctx->pc = 0x18D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D390u;
        // 0x18d394: 0x24020074  addiu       $v0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D398u;
        goto label_18d398;
    }
    ctx->pc = 0x18D390u;
    {
        const bool branch_taken_0x18d390 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D390u;
        // 0x18d394: 0x24020074  addiu       $v0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d390) {
            ctx->pc = 0x18D490u;
            goto label_18d490;
        }
    }
    ctx->pc = 0x18D398u;
label_18d398:
    // 0x18d398: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x18d398u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_18d39c:
    // 0x18d39c: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x18d39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18d3a0:
    // 0x18d3a0: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x18d3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_18d3a4:
    // 0x18d3a4: 0x2c820009  sltiu       $v0, $a0, 0x9
    ctx->pc = 0x18d3a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_18d3a8:
    // 0x18d3a8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_18d3ac:
    if (ctx->pc == 0x18D3ACu) {
        ctx->pc = 0x18D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3A8u;
        // 0x18d3ac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3B0u;
        goto label_18d3b0;
    }
    ctx->pc = 0x18D3A8u;
    {
        const bool branch_taken_0x18d3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3A8u;
        // 0x18d3ac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3a8) {
            ctx->pc = 0x18D3F0u;
            goto label_18d3f0;
        }
    }
    ctx->pc = 0x18D3B0u;
label_18d3b0:
    // 0x18d3b0: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x18d3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_18d3b4:
    // 0x18d3b4: 0x54670010  bnel        $v1, $a3, . + 4 + (0x10 << 2)
label_18d3b8:
    if (ctx->pc == 0x18D3B8u) {
        ctx->pc = 0x18D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3B4u;
        // 0x18d3b8: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3BCu;
        goto label_18d3bc;
    }
    ctx->pc = 0x18D3B4u;
    {
        const bool branch_taken_0x18d3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x18d3b4) {
            ctx->pc = 0x18D3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D3B4u;
            // 0x18d3b8: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D3F8u;
            goto label_18d3f8;
        }
    }
    ctx->pc = 0x18D3BCu;
label_18d3bc:
    // 0x18d3bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18d3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d3c0:
    // 0x18d3c0: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x18d3c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_18d3c4:
    // 0x18d3c4: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x18d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_18d3c8:
    // 0x18d3c8: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x18d3c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_18d3cc:
    // 0x18d3cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_18d3d0:
    if (ctx->pc == 0x18D3D0u) {
        ctx->pc = 0x18D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3CCu;
        // 0x18d3d0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3D4u;
        goto label_18d3d4;
    }
    ctx->pc = 0x18D3CCu;
    {
        const bool branch_taken_0x18d3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3CCu;
        // 0x18d3d0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3cc) {
            ctx->pc = 0x18D3F0u;
            goto label_18d3f0;
        }
    }
    ctx->pc = 0x18D3D4u;
label_18d3d4:
    // 0x18d3d4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x18d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18d3d8:
    // 0x18d3d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18d3dc:
    // 0x18d3dc: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x18d3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_18d3e0:
    // 0x18d3e0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18d3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_18d3e4:
    // 0x18d3e4: 0x1000fff6  b           . + 4 + (-0xA << 2)
label_18d3e8:
    if (ctx->pc == 0x18D3E8u) {
        ctx->pc = 0x18D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3E4u;
        // 0x18d3e8: 0x2464ffd0  addiu       $a0, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3ECu;
        goto label_18d3ec;
    }
    ctx->pc = 0x18D3E4u;
    {
        const bool branch_taken_0x18d3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3E4u;
        // 0x18d3e8: 0x2464ffd0  addiu       $a0, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3e4) {
            ctx->pc = 0x18D3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d3c0;
        }
    }
    ctx->pc = 0x18D3ECu;
label_18d3ec:
    // 0x18d3ec: 0x0  nop
    ctx->pc = 0x18d3ecu;
    // NOP
label_18d3f0:
    // 0x18d3f0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x18d3f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d3f4:
    // 0x18d3f4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x18d3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_18d3f8:
    // 0x18d3f8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18d3f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18d3fc:
    // 0x18d3fc: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x18d3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_18d400:
    // 0x18d400: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x18d400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_18d404:
    // 0x18d404: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18d404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18d408:
    // 0x18d408: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x18d408u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18d40c:
    // 0x18d40c: 0x8e260238  lw          $a2, 0x238($s1)
    ctx->pc = 0x18d40cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
label_18d410:
    // 0x18d410: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x18d410u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_18d414:
    // 0x18d414: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18d414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_18d418:
    // 0x18d418: 0x8e240218  lw          $a0, 0x218($s1)
    ctx->pc = 0x18d418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_18d41c:
    // 0x18d41c: 0x8e25021c  lw          $a1, 0x21C($s1)
    ctx->pc = 0x18d41cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
label_18d420:
    // 0x18d420: 0x34560080  ori         $s6, $v0, 0x80
    ctx->pc = 0x18d420u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_18d424:
    // 0x18d424: 0x8cd50010  lw          $s5, 0x10($a2)
    ctx->pc = 0x18d424u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_18d428:
    // 0x18d428: 0x83b821  addu        $s7, $a0, $v1
    ctx->pc = 0x18d428u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_18d42c:
    // 0x18d42c: 0x16c70004  bne         $s6, $a3, . + 4 + (0x4 << 2)
label_18d430:
    if (ctx->pc == 0x18D430u) {
        ctx->pc = 0x18D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D42Cu;
        // 0x18d430: 0xa38021  addu        $s0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D434u;
        goto label_18d434;
    }
    ctx->pc = 0x18D42Cu;
    {
        const bool branch_taken_0x18d42c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 7));
        ctx->pc = 0x18D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D42Cu;
        // 0x18d430: 0xa38021  addu        $s0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d42c) {
            ctx->pc = 0x18D440u;
            goto label_18d440;
        }
    }
    ctx->pc = 0x18D434u;
label_18d434:
    // 0x18d434: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18d434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18d438:
    // 0x18d438: 0x10000011  b           . + 4 + (0x11 << 2)
label_18d43c:
    if (ctx->pc == 0x18D43Cu) {
        ctx->pc = 0x18D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D438u;
        // 0x18d43c: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D440u;
        goto label_18d440;
    }
    ctx->pc = 0x18D438u;
    {
        const bool branch_taken_0x18d438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D438u;
        // 0x18d43c: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d438) {
            ctx->pc = 0x18D480u;
            goto label_18d480;
        }
    }
    ctx->pc = 0x18D440u;
label_18d440:
    // 0x18d440: 0x8e220228  lw          $v0, 0x228($s1)
    ctx->pc = 0x18d440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
label_18d444:
    // 0x18d444: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x18d444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
label_18d448:
    // 0x18d448: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x18d448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
label_18d44c:
    // 0x18d44c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18d44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_18d450:
    // 0x18d450: 0x54440006  bnel        $v0, $a0, . + 4 + (0x6 << 2)
label_18d454:
    if (ctx->pc == 0x18D454u) {
        ctx->pc = 0x18D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D450u;
        // 0x18d454: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D458u;
        goto label_18d458;
    }
    ctx->pc = 0x18D450u;
    {
        const bool branch_taken_0x18d450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x18d450) {
            ctx->pc = 0x18D454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D450u;
            // 0x18d454: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D46Cu;
            goto label_18d46c;
        }
    }
    ctx->pc = 0x18D458u;
label_18d458:
    // 0x18d458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d45c:
    // 0x18d45c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18d45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18d460:
    // 0x18d460: 0xc063b70  jal         func_18EDC0
label_18d464:
    if (ctx->pc == 0x18D464u) {
        ctx->pc = 0x18D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D460u;
        // 0x18d464: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D468u;
        goto label_18d468;
    }
    ctx->pc = 0x18D460u;
    SET_GPR_U32(ctx, 31, 0x18D468u);
    ctx->pc = 0x18D464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D460u;
    // 0x18d464: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EDC0u, 0x18D460u, 0x18D468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D468u;
label_18d468:
    // 0x18d468: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18d468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18d46c:
    // 0x18d46c: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_18d470:
    if (ctx->pc == 0x18D470u) {
        ctx->pc = 0x18D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D46Cu;
        // 0x18d470: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D474u;
        goto label_18d474;
    }
    ctx->pc = 0x18D46Cu;
    {
        const bool branch_taken_0x18d46c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D46Cu;
        // 0x18d470: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d46c) {
            ctx->pc = 0x18D480u;
            goto label_18d480;
        }
    }
    ctx->pc = 0x18D474u;
label_18d474:
    // 0x18d474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d478:
    // 0x18d478: 0x2a0f809  jalr        $s5
label_18d47c:
    if (ctx->pc == 0x18D47Cu) {
        ctx->pc = 0x18D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D478u;
        // 0x18d47c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D480u;
        goto label_18d480;
    }
    ctx->pc = 0x18D478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x18D480u);
        ctx->pc = 0x18D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D478u;
        // 0x18d47c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D478u, 0x18D480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D480u;
label_18d480:
    // 0x18d480: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x18d480u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_18d484:
    // 0x18d484: 0xa6f60000  sh          $s6, 0x0($s7)
    ctx->pc = 0x18d484u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 22));
label_18d488:
    // 0x18d488: 0x10000081  b           . + 4 + (0x81 << 2)
label_18d48c:
    if (ctx->pc == 0x18D48Cu) {
        ctx->pc = 0x18D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D488u;
        // 0x18d48c: 0x26920002  addiu       $s2, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D490u;
        goto label_18d490;
    }
    ctx->pc = 0x18D488u;
    {
        const bool branch_taken_0x18d488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D488u;
        // 0x18d48c: 0x26920002  addiu       $s2, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d488) {
            ctx->pc = 0x18D690u;
            goto label_18d690;
        }
    }
    ctx->pc = 0x18D490u;
label_18d490:
    // 0x18d490: 0x14c2002f  bne         $a2, $v0, . + 4 + (0x2F << 2)
label_18d494:
    if (ctx->pc == 0x18D494u) {
        ctx->pc = 0x18D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D490u;
        // 0x18d494: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D498u;
        goto label_18d498;
    }
    ctx->pc = 0x18D490u;
    {
        const bool branch_taken_0x18d490 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D490u;
        // 0x18d494: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d490) {
            ctx->pc = 0x18D550u;
            goto label_18d550;
        }
    }
    ctx->pc = 0x18D498u;
label_18d498:
    // 0x18d498: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x18d498u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_18d49c:
    // 0x18d49c: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x18d49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18d4a0:
    // 0x18d4a0: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x18d4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_18d4a4:
    // 0x18d4a4: 0x2c820009  sltiu       $v0, $a0, 0x9
    ctx->pc = 0x18d4a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_18d4a8:
    // 0x18d4a8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_18d4ac:
    if (ctx->pc == 0x18D4ACu) {
        ctx->pc = 0x18D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4A8u;
        // 0x18d4ac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4B0u;
        goto label_18d4b0;
    }
    ctx->pc = 0x18D4A8u;
    {
        const bool branch_taken_0x18d4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4A8u;
        // 0x18d4ac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4a8) {
            ctx->pc = 0x18D4F0u;
            goto label_18d4f0;
        }
    }
    ctx->pc = 0x18D4B0u;
label_18d4b0:
    // 0x18d4b0: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x18d4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_18d4b4:
    // 0x18d4b4: 0x54670010  bnel        $v1, $a3, . + 4 + (0x10 << 2)
label_18d4b8:
    if (ctx->pc == 0x18D4B8u) {
        ctx->pc = 0x18D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4B4u;
        // 0x18d4b8: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4BCu;
        goto label_18d4bc;
    }
    ctx->pc = 0x18D4B4u;
    {
        const bool branch_taken_0x18d4b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x18d4b4) {
            ctx->pc = 0x18D4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D4B4u;
            // 0x18d4b8: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D4F8u;
            goto label_18d4f8;
        }
    }
    ctx->pc = 0x18D4BCu;
label_18d4bc:
    // 0x18d4bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18d4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d4c0:
    // 0x18d4c0: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x18d4c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_18d4c4:
    // 0x18d4c4: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x18d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_18d4c8:
    // 0x18d4c8: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x18d4c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_18d4cc:
    // 0x18d4cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_18d4d0:
    if (ctx->pc == 0x18D4D0u) {
        ctx->pc = 0x18D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4CCu;
        // 0x18d4d0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4D4u;
        goto label_18d4d4;
    }
    ctx->pc = 0x18D4CCu;
    {
        const bool branch_taken_0x18d4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4CCu;
        // 0x18d4d0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4cc) {
            ctx->pc = 0x18D4F0u;
            goto label_18d4f0;
        }
    }
    ctx->pc = 0x18D4D4u;
label_18d4d4:
    // 0x18d4d4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x18d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18d4d8:
    // 0x18d4d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18d4dc:
    // 0x18d4dc: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x18d4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_18d4e0:
    // 0x18d4e0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18d4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_18d4e4:
    // 0x18d4e4: 0x1000fff6  b           . + 4 + (-0xA << 2)
label_18d4e8:
    if (ctx->pc == 0x18D4E8u) {
        ctx->pc = 0x18D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4E4u;
        // 0x18d4e8: 0x2464ffd0  addiu       $a0, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4ECu;
        goto label_18d4ec;
    }
    ctx->pc = 0x18D4E4u;
    {
        const bool branch_taken_0x18d4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4E4u;
        // 0x18d4e8: 0x2464ffd0  addiu       $a0, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4e4) {
            ctx->pc = 0x18D4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d4c0;
        }
    }
    ctx->pc = 0x18D4ECu;
label_18d4ec:
    // 0x18d4ec: 0x0  nop
    ctx->pc = 0x18d4ecu;
    // NOP
label_18d4f0:
    // 0x18d4f0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x18d4f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d4f4:
    // 0x18d4f4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x18d4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_18d4f8:
    // 0x18d4f8: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x18d4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_18d4fc:
    // 0x18d4fc: 0xc62101b0  lwc1        $f1, 0x1B0($s1)
    ctx->pc = 0x18d4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d500:
    // 0x18d500: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18d500u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18d504:
    // 0x18d504: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x18d504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d508:
    // 0x18d508: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18d508u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18d50c:
    // 0x18d50c: 0x8e220214  lw          $v0, 0x214($s1)
    ctx->pc = 0x18d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_18d510:
    // 0x18d510: 0x8e250218  lw          $a1, 0x218($s1)
    ctx->pc = 0x18d510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_18d514:
    // 0x18d514: 0x8e23021c  lw          $v1, 0x21C($s1)
    ctx->pc = 0x18d514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
label_18d518:
    // 0x18d518: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x18d518u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_18d51c:
    // 0x18d51c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x18d51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_18d520:
    // 0x18d520: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18d520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18d524:
    // 0x18d524: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18d524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18d528:
    // 0x18d528: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18d528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18d52c:
    // 0x18d52c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x18d52cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_18d530:
    // 0x18d530: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18d530u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_18d534:
    // 0x18d534: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x18d534u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_18d538:
    // 0x18d538: 0xa6440000  sh          $a0, 0x0($s2)
    ctx->pc = 0x18d538u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 4));
label_18d53c:
    // 0x18d53c: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x18d53cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_18d540:
    // 0x18d540: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x18d540u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
label_18d544:
    // 0x18d544: 0x10000052  b           . + 4 + (0x52 << 2)
label_18d548:
    if (ctx->pc == 0x18D548u) {
        ctx->pc = 0x18D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D544u;
        // 0x18d548: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D54Cu;
        goto label_18d54c;
    }
    ctx->pc = 0x18D544u;
    {
        const bool branch_taken_0x18d544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D544u;
        // 0x18d548: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d544) {
            ctx->pc = 0x18D690u;
            goto label_18d690;
        }
    }
    ctx->pc = 0x18D54Cu;
label_18d54c:
    // 0x18d54c: 0x0  nop
    ctx->pc = 0x18d54cu;
    // NOP
label_18d550:
    // 0x18d550: 0x14c20053  bne         $a2, $v0, . + 4 + (0x53 << 2)
label_18d554:
    if (ctx->pc == 0x18D554u) {
        ctx->pc = 0x18D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D550u;
        // 0x18d554: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D558u;
        goto label_18d558;
    }
    ctx->pc = 0x18D550u;
    {
        const bool branch_taken_0x18d550 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D550u;
        // 0x18d554: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d550) {
            ctx->pc = 0x18D6A0u;
            goto label_18d6a0;
        }
    }
    ctx->pc = 0x18D558u;
label_18d558:
    // 0x18d558: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x18d558u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_18d55c:
    // 0x18d55c: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x18d55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18d560:
    // 0x18d560: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x18d560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_18d564:
    // 0x18d564: 0x2c820009  sltiu       $v0, $a0, 0x9
    ctx->pc = 0x18d564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_18d568:
    // 0x18d568: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_18d56c:
    if (ctx->pc == 0x18D56Cu) {
        ctx->pc = 0x18D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D568u;
        // 0x18d56c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D570u;
        goto label_18d570;
    }
    ctx->pc = 0x18D568u;
    {
        const bool branch_taken_0x18d568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D568u;
        // 0x18d56c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d568) {
            ctx->pc = 0x18D5B0u;
            goto label_18d5b0;
        }
    }
    ctx->pc = 0x18D570u;
label_18d570:
    // 0x18d570: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x18d570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_18d574:
    // 0x18d574: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
label_18d578:
    if (ctx->pc == 0x18D578u) {
        ctx->pc = 0x18D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D574u;
        // 0x18d578: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D57Cu;
        goto label_18d57c;
    }
    ctx->pc = 0x18D574u;
    {
        const bool branch_taken_0x18d574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18d574) {
            ctx->pc = 0x18D578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D574u;
            // 0x18d578: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D5B8u;
            goto label_18d5b8;
        }
    }
    ctx->pc = 0x18D57Cu;
label_18d57c:
    // 0x18d57c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18d57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d580:
    // 0x18d580: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x18d580u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_18d584:
    // 0x18d584: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x18d584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_18d588:
    // 0x18d588: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x18d588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_18d58c:
    // 0x18d58c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_18d590:
    if (ctx->pc == 0x18D590u) {
        ctx->pc = 0x18D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D58Cu;
        // 0x18d590: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D594u;
        goto label_18d594;
    }
    ctx->pc = 0x18D58Cu;
    {
        const bool branch_taken_0x18d58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D58Cu;
        // 0x18d590: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d58c) {
            ctx->pc = 0x18D5B0u;
            goto label_18d5b0;
        }
    }
    ctx->pc = 0x18D594u;
label_18d594:
    // 0x18d594: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x18d594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18d598:
    // 0x18d598: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18d598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18d59c:
    // 0x18d59c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x18d59cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_18d5a0:
    // 0x18d5a0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18d5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_18d5a4:
    // 0x18d5a4: 0x1000fff6  b           . + 4 + (-0xA << 2)
label_18d5a8:
    if (ctx->pc == 0x18D5A8u) {
        ctx->pc = 0x18D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5A4u;
        // 0x18d5a8: 0x2464ffd0  addiu       $a0, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5ACu;
        goto label_18d5ac;
    }
    ctx->pc = 0x18D5A4u;
    {
        const bool branch_taken_0x18d5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5A4u;
        // 0x18d5a8: 0x2464ffd0  addiu       $a0, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d5a4) {
            ctx->pc = 0x18D580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d580;
        }
    }
    ctx->pc = 0x18D5ACu;
label_18d5ac:
    // 0x18d5ac: 0x0  nop
    ctx->pc = 0x18d5acu;
    // NOP
label_18d5b0:
    // 0x18d5b0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x18d5b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d5b4:
    // 0x18d5b4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x18d5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_18d5b8:
    // 0x18d5b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18d5b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18d5bc:
    // 0x18d5bc: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x18d5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_18d5c0:
    // 0x18d5c0: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x18d5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_18d5c4:
    // 0x18d5c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18d5c8:
    // 0x18d5c8: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x18d5c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18d5cc:
    // 0x18d5cc: 0x8e260238  lw          $a2, 0x238($s1)
    ctx->pc = 0x18d5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
label_18d5d0:
    // 0x18d5d0: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x18d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_18d5d4:
    // 0x18d5d4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x18d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_18d5d8:
    // 0x18d5d8: 0x8e240218  lw          $a0, 0x218($s1)
    ctx->pc = 0x18d5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_18d5dc:
    // 0x18d5dc: 0x8e25021c  lw          $a1, 0x21C($s1)
    ctx->pc = 0x18d5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
label_18d5e0:
    // 0x18d5e0: 0x30560f00  andi        $s6, $v0, 0xF00
    ctx->pc = 0x18d5e0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
label_18d5e4:
    // 0x18d5e4: 0x8cd40010  lw          $s4, 0x10($a2)
    ctx->pc = 0x18d5e4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_18d5e8:
    // 0x18d5e8: 0x83b821  addu        $s7, $a0, $v1
    ctx->pc = 0x18d5e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_18d5ec:
    // 0x18d5ec: 0x16c70006  bne         $s6, $a3, . + 4 + (0x6 << 2)
label_18d5f0:
    if (ctx->pc == 0x18D5F0u) {
        ctx->pc = 0x18D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5ECu;
        // 0x18d5f0: 0xa38021  addu        $s0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5F4u;
        goto label_18d5f4;
    }
    ctx->pc = 0x18D5ECu;
    {
        const bool branch_taken_0x18d5ec = (GPR_U64(ctx, 22) != GPR_U64(ctx, 7));
        ctx->pc = 0x18D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5ECu;
        // 0x18d5f0: 0xa38021  addu        $s0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d5ec) {
            ctx->pc = 0x18D608u;
            goto label_18d608;
        }
    }
    ctx->pc = 0x18D5F4u;
label_18d5f4:
    // 0x18d5f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18d5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18d5f8:
    // 0x18d5f8: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x18d5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_18d5fc:
    // 0x18d5fc: 0x10000013  b           . + 4 + (0x13 << 2)
label_18d600:
    if (ctx->pc == 0x18D600u) {
        ctx->pc = 0x18D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5FCu;
        // 0x18d600: 0xa6430000  sh          $v1, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D604u;
        goto label_18d604;
    }
    ctx->pc = 0x18D5FCu;
    {
        const bool branch_taken_0x18d5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5FCu;
        // 0x18d600: 0xa6430000  sh          $v1, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d5fc) {
            ctx->pc = 0x18D64Cu;
            goto label_18d64c;
        }
    }
    ctx->pc = 0x18D604u;
label_18d604:
    // 0x18d604: 0x0  nop
    ctx->pc = 0x18d604u;
    // NOP
label_18d608:
    // 0x18d608: 0x8e220228  lw          $v0, 0x228($s1)
    ctx->pc = 0x18d608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
label_18d60c:
    // 0x18d60c: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x18d60cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
label_18d610:
    // 0x18d610: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x18d610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_18d614:
    // 0x18d614: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x18d614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_18d618:
    // 0x18d618: 0x54450006  bnel        $v0, $a1, . + 4 + (0x6 << 2)
label_18d61c:
    if (ctx->pc == 0x18D61Cu) {
        ctx->pc = 0x18D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D618u;
        // 0x18d61c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D620u;
        goto label_18d620;
    }
    ctx->pc = 0x18D618u;
    {
        const bool branch_taken_0x18d618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18d618) {
            ctx->pc = 0x18D61Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D618u;
            // 0x18d61c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D634u;
            goto label_18d634;
        }
    }
    ctx->pc = 0x18D620u;
label_18d620:
    // 0x18d620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d624:
    // 0x18d624: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18d624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18d628:
    // 0x18d628: 0xc063b70  jal         func_18EDC0
label_18d62c:
    if (ctx->pc == 0x18D62Cu) {
        ctx->pc = 0x18D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D628u;
        // 0x18d62c: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D630u;
        goto label_18d630;
    }
    ctx->pc = 0x18D628u;
    SET_GPR_U32(ctx, 31, 0x18D630u);
    ctx->pc = 0x18D62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D628u;
    // 0x18d62c: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EDC0u, 0x18D628u, 0x18D630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D630u;
label_18d630:
    // 0x18d630: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18d630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18d634:
    // 0x18d634: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_18d638:
    if (ctx->pc == 0x18D638u) {
        ctx->pc = 0x18D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D634u;
        // 0x18d638: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D63Cu;
        goto label_18d63c;
    }
    ctx->pc = 0x18D634u;
    {
        const bool branch_taken_0x18d634 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D634u;
        // 0x18d638: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d634) {
            ctx->pc = 0x18D648u;
            goto label_18d648;
        }
    }
    ctx->pc = 0x18D63Cu;
label_18d63c:
    // 0x18d63c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d640:
    // 0x18d640: 0x280f809  jalr        $s4
label_18d644:
    if (ctx->pc == 0x18D644u) {
        ctx->pc = 0x18D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D640u;
        // 0x18d644: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D648u;
        goto label_18d648;
    }
    ctx->pc = 0x18D640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x18D648u);
        ctx->pc = 0x18D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D640u;
        // 0x18d644: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D640u, 0x18D648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D648u;
label_18d648:
    // 0x18d648: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x18d648u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_18d64c:
    // 0x18d64c: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x18d64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_18d650:
    // 0x18d650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d654:
    // 0x18d654: 0xa6f60000  sh          $s6, 0x0($s7)
    ctx->pc = 0x18d654u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 22));
label_18d658:
    // 0x18d658: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_18d65c:
    if (ctx->pc == 0x18D65Cu) {
        ctx->pc = 0x18D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D658u;
        // 0x18d65c: 0x26b20002  addiu       $s2, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D660u;
        goto label_18d660;
    }
    ctx->pc = 0x18D658u;
    {
        const bool branch_taken_0x18d658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D658u;
        // 0x18d65c: 0x26b20002  addiu       $s2, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d658) {
            ctx->pc = 0x18D690u;
            goto label_18d690;
        }
    }
    ctx->pc = 0x18D660u;
label_18d660:
    // 0x18d660: 0x8622023c  lh          $v0, 0x23C($s1)
    ctx->pc = 0x18d660u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 572)));
label_18d664:
    // 0x18d664: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_18d668:
    if (ctx->pc == 0x18D668u) {
        ctx->pc = 0x18D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D664u;
        // 0x18d668: 0x96220244  lhu         $v0, 0x244($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D66Cu;
        goto label_18d66c;
    }
    ctx->pc = 0x18D664u;
    {
        const bool branch_taken_0x18d664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d664) {
            ctx->pc = 0x18D668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D664u;
            // 0x18d668: 0x96220244  lhu         $v0, 0x244($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D694u;
            goto label_18d694;
        }
    }
    ctx->pc = 0x18D66Cu;
label_18d66c:
    // 0x18d66c: 0x86220246  lh          $v0, 0x246($s1)
    ctx->pc = 0x18d66cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 582)));
label_18d670:
    // 0x18d670: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x18d670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d674:
    // 0x18d674: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18d674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18d678:
    // 0x18d678: 0x8e230254  lw          $v1, 0x254($s1)
    ctx->pc = 0x18d678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
label_18d67c:
    // 0x18d67c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18d680:
    // 0x18d680: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d684:
    // 0x18d684: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x18d684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d688:
    // 0x18d688: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18d688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_18d68c:
    // 0x18d68c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x18d68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_18d690:
    // 0x18d690: 0x96220244  lhu         $v0, 0x244($s1)
    ctx->pc = 0x18d690u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 580)));
label_18d694:
    // 0x18d694: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18d694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18d698:
    // 0x18d698: 0x10000152  b           . + 4 + (0x152 << 2)
label_18d69c:
    if (ctx->pc == 0x18D69Cu) {
        ctx->pc = 0x18D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D698u;
        // 0x18d69c: 0xa6220244  sh          $v0, 0x244($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 580), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D6A0u;
        goto label_18d6a0;
    }
    ctx->pc = 0x18D698u;
    {
        const bool branch_taken_0x18d698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D698u;
        // 0x18d69c: 0xa6220244  sh          $v0, 0x244($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 580), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d698) {
            ctx->pc = 0x18DBE4u;
            goto label_18dbe4;
        }
    }
    ctx->pc = 0x18D6A0u;
label_18d6a0:
    // 0x18d6a0: 0x54c2004f  bnel        $a2, $v0, . + 4 + (0x4F << 2)
label_18d6a4:
    if (ctx->pc == 0x18D6A4u) {
        ctx->pc = 0x18D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6A0u;
        // 0x18d6a4: 0x24020072  addiu       $v0, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D6A8u;
        goto label_18d6a8;
    }
    ctx->pc = 0x18D6A0u;
    {
        const bool branch_taken_0x18d6a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x18d6a0) {
            ctx->pc = 0x18D6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D6A0u;
            // 0x18d6a4: 0x24020072  addiu       $v0, $zero, 0x72 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D7E0u;
            goto label_18d7e0;
        }
    }
    ctx->pc = 0x18D6A8u;
label_18d6a8:
    // 0x18d6a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18d6a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18d6ac:
    // 0x18d6ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d6b0:
    // 0x18d6b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18d6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18d6b4:
    // 0x18d6b4: 0xc06370a  jal         func_18DC28
label_18d6b8:
    if (ctx->pc == 0x18D6B8u) {
        ctx->pc = 0x18D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6B4u;
        // 0x18d6b8: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D6BCu;
        goto label_18d6bc;
    }
    ctx->pc = 0x18D6B4u;
    SET_GPR_U32(ctx, 31, 0x18D6BCu);
    ctx->pc = 0x18D6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D6B4u;
    // 0x18d6b8: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC28u, 0x18D6B4u, 0x18D6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D6BCu;
label_18d6bc:
    // 0x18d6bc: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x18d6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_18d6c0:
    // 0x18d6c0: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
label_18d6c4:
    if (ctx->pc == 0x18D6C4u) {
        ctx->pc = 0x18D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6C0u;
        // 0x18d6c4: 0x97a70006  lhu         $a3, 0x6($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D6C8u;
        goto label_18d6c8;
    }
    ctx->pc = 0x18D6C0u;
    {
        const bool branch_taken_0x18d6c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6C0u;
        // 0x18d6c4: 0x97a70006  lhu         $a3, 0x6($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d6c0) {
            ctx->pc = 0x18D790u;
            goto label_18d790;
        }
    }
    ctx->pc = 0x18D6C8u;
label_18d6c8:
    // 0x18d6c8: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x18d6c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
label_18d6cc:
    // 0x18d6cc: 0x86240244  lh          $a0, 0x244($s1)
    ctx->pc = 0x18d6ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 580)));
label_18d6d0:
    // 0x18d6d0: 0x8e260208  lw          $a2, 0x208($s1)
    ctx->pc = 0x18d6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
label_18d6d4:
    // 0x18d6d4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x18d6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_18d6d8:
    // 0x18d6d8: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x18d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_18d6dc:
    // 0x18d6dc: 0x8e280214  lw          $t0, 0x214($s1)
    ctx->pc = 0x18d6dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_18d6e0:
    // 0x18d6e0: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x18d6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_18d6e4:
    // 0x18d6e4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18d6e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_18d6e8:
    // 0x18d6e8: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x18d6e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_18d6ec:
    // 0x18d6ec: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x18d6ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_18d6f0:
    // 0x18d6f0: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x18d6f0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_18d6f4:
    // 0x18d6f4: 0xa6270246  sh          $a3, 0x246($s1)
    ctx->pc = 0x18d6f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 582), (uint16_t)GPR_U32(ctx, 7));
label_18d6f8:
    // 0x18d6f8: 0x42843  sra         $a1, $a0, 1
    ctx->pc = 0x18d6f8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 1));
label_18d6fc:
    // 0x18d6fc: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x18d6fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_18d700:
    // 0x18d700: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x18d700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_18d704:
    // 0x18d704: 0xa6250244  sh          $a1, 0x244($s1)
    ctx->pc = 0x18d704u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 580), (uint16_t)GPR_U32(ctx, 5));
label_18d708:
    // 0x18d708: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x18d708u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_18d70c:
    // 0x18d70c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d710:
    // 0x18d710: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18d710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_18d714:
    // 0x18d714: 0x10800133  beqz        $a0, . + 4 + (0x133 << 2)
label_18d718:
    if (ctx->pc == 0x18D718u) {
        ctx->pc = 0x18D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D714u;
        // 0x18d718: 0x1029021  addu        $s2, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D71Cu;
        goto label_18d71c;
    }
    ctx->pc = 0x18D714u;
    {
        const bool branch_taken_0x18d714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D714u;
        // 0x18d718: 0x1029021  addu        $s2, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d714) {
            ctx->pc = 0x18DBE4u;
            goto label_18dbe4;
        }
    }
    ctx->pc = 0x18D71Cu;
label_18d71c:
    // 0x18d71c: 0x8e22021c  lw          $v0, 0x21C($s1)
    ctx->pc = 0x18d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
label_18d720:
    // 0x18d720: 0x2483023  subu        $a2, $s2, $t0
    ctx->pc = 0x18d720u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_18d724:
    // 0x18d724: 0x8e230228  lw          $v1, 0x228($s1)
    ctx->pc = 0x18d724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
label_18d728:
    // 0x18d728: 0x3c0700ff  lui         $a3, 0xFF
    ctx->pc = 0x18d728u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)255 << 16));
label_18d72c:
    // 0x18d72c: 0x8e250238  lw          $a1, 0x238($s1)
    ctx->pc = 0x18d72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
label_18d730:
    // 0x18d730: 0x46a021  addu        $s4, $v0, $a2
    ctx->pc = 0x18d730u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_18d734:
    // 0x18d734: 0x8e240218  lw          $a0, 0x218($s1)
    ctx->pc = 0x18d734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_18d738:
    // 0x18d738: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x18d738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_18d73c:
    // 0x18d73c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x18d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_18d740:
    // 0x18d740: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x18d740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18d744:
    // 0x18d744: 0x8cb50010  lw          $s5, 0x10($a1)
    ctx->pc = 0x18d744u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_18d748:
    // 0x18d748: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_18d74c:
    if (ctx->pc == 0x18D74Cu) {
        ctx->pc = 0x18D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D748u;
        // 0x18d74c: 0x86b021  addu        $s6, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D750u;
        goto label_18d750;
    }
    ctx->pc = 0x18D748u;
    {
        const bool branch_taken_0x18d748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D748u;
        // 0x18d74c: 0x86b021  addu        $s6, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d748) {
            ctx->pc = 0x18D760u;
            goto label_18d760;
        }
    }
    ctx->pc = 0x18D750u;
label_18d750:
    // 0x18d750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d754:
    // 0x18d754: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18d754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18d758:
    // 0x18d758: 0xc063b70  jal         func_18EDC0
label_18d75c:
    if (ctx->pc == 0x18D75Cu) {
        ctx->pc = 0x18D75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D758u;
        // 0x18d75c: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D760u;
        goto label_18d760;
    }
    ctx->pc = 0x18D758u;
    SET_GPR_U32(ctx, 31, 0x18D760u);
    ctx->pc = 0x18D75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D758u;
    // 0x18d75c: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EDC0u, 0x18D758u, 0x18D760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D760u;
label_18d760:
    // 0x18d760: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18d760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18d764:
    // 0x18d764: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_18d768:
    if (ctx->pc == 0x18D768u) {
        ctx->pc = 0x18D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D764u;
        // 0x18d768: 0xa6820000  sh          $v0, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D76Cu;
        goto label_18d76c;
    }
    ctx->pc = 0x18D764u;
    {
        const bool branch_taken_0x18d764 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D764u;
        // 0x18d768: 0xa6820000  sh          $v0, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d764) {
            ctx->pc = 0x18D778u;
            goto label_18d778;
        }
    }
    ctx->pc = 0x18D76Cu;
label_18d76c:
    // 0x18d76c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d770:
    // 0x18d770: 0x2a0f809  jalr        $s5
label_18d774:
    if (ctx->pc == 0x18D774u) {
        ctx->pc = 0x18D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D770u;
        // 0x18d774: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D778u;
        goto label_18d778;
    }
    ctx->pc = 0x18D770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x18D778u);
        ctx->pc = 0x18D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D770u;
        // 0x18d774: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D770u, 0x18D778u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D778u;
label_18d778:
    // 0x18d778: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x18d778u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_18d77c:
    // 0x18d77c: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x18d77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_18d780:
    // 0x18d780: 0x26120002  addiu       $s2, $s0, 0x2
    ctx->pc = 0x18d780u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_18d784:
    // 0x18d784: 0x10000117  b           . + 4 + (0x117 << 2)
label_18d788:
    if (ctx->pc == 0x18D788u) {
        ctx->pc = 0x18D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D784u;
        // 0x18d788: 0xa6c30000  sh          $v1, 0x0($s6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D78Cu;
        goto label_18d78c;
    }
    ctx->pc = 0x18D784u;
    {
        const bool branch_taken_0x18d784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D784u;
        // 0x18d788: 0xa6c30000  sh          $v1, 0x0($s6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d784) {
            ctx->pc = 0x18DBE4u;
            goto label_18dbe4;
        }
    }
    ctx->pc = 0x18D78Cu;
label_18d78c:
    // 0x18d78c: 0x0  nop
    ctx->pc = 0x18d78cu;
    // NOP
label_18d790:
    // 0x18d790: 0x8e250254  lw          $a1, 0x254($s1)
    ctx->pc = 0x18d790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
label_18d794:
    // 0x18d794: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x18d794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_18d798:
    // 0x18d798: 0x8e230208  lw          $v1, 0x208($s1)
    ctx->pc = 0x18d798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
label_18d79c:
    // 0x18d79c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18d79cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_18d7a0:
    // 0x18d7a0: 0x97a60004  lhu         $a2, 0x4($sp)
    ctx->pc = 0x18d7a0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
label_18d7a4:
    // 0x18d7a4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x18d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18d7a8:
    // 0x18d7a8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x18d7a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_18d7ac:
    // 0x18d7ac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18d7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_18d7b0:
    // 0x18d7b0: 0x8e250214  lw          $a1, 0x214($s1)
    ctx->pc = 0x18d7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_18d7b4:
    // 0x18d7b4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x18d7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d7b8:
    // 0x18d7b8: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x18d7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_18d7bc:
    // 0x18d7bc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x18d7bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_18d7c0:
    // 0x18d7c0: 0xa6260244  sh          $a2, 0x244($s1)
    ctx->pc = 0x18d7c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 580), (uint16_t)GPR_U32(ctx, 6));
label_18d7c4:
    // 0x18d7c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18d7c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_18d7c8:
    // 0x18d7c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d7cc:
    // 0x18d7cc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_18d7d0:
    // 0x18d7d0: 0xa6270246  sh          $a3, 0x246($s1)
    ctx->pc = 0x18d7d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 582), (uint16_t)GPR_U32(ctx, 7));
label_18d7d4:
    // 0x18d7d4: 0xa29021  addu        $s2, $a1, $v0
    ctx->pc = 0x18d7d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_18d7d8:
    // 0x18d7d8: 0x10000102  b           . + 4 + (0x102 << 2)
label_18d7dc:
    if (ctx->pc == 0x18D7DCu) {
        ctx->pc = 0x18D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D7D8u;
        // 0x18d7dc: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D7E0u;
        goto label_18d7e0;
    }
    ctx->pc = 0x18D7D8u;
    {
        const bool branch_taken_0x18d7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D7D8u;
        // 0x18d7dc: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d7d8) {
            ctx->pc = 0x18DBE4u;
            goto label_18dbe4;
        }
    }
    ctx->pc = 0x18D7E0u;
label_18d7e0:
    // 0x18d7e0: 0x14c2002d  bne         $a2, $v0, . + 4 + (0x2D << 2)
label_18d7e4:
    if (ctx->pc == 0x18D7E4u) {
        ctx->pc = 0x18D7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D7E0u;
        // 0x18d7e4: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D7E8u;
        goto label_18d7e8;
    }
    ctx->pc = 0x18D7E0u;
    {
        const bool branch_taken_0x18d7e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D7E0u;
        // 0x18d7e4: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d7e0) {
            ctx->pc = 0x18D898u;
            goto label_18d898;
        }
    }
    ctx->pc = 0x18D7E8u;
label_18d7e8:
    // 0x18d7e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18d7e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18d7ec:
    // 0x18d7ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d7f0:
    // 0x18d7f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18d7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18d7f4:
    // 0x18d7f4: 0xc06370a  jal         func_18DC28
label_18d7f8:
    if (ctx->pc == 0x18D7F8u) {
        ctx->pc = 0x18D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D7F4u;
        // 0x18d7f8: 0x27a70008  addiu       $a3, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D7FCu;
        goto label_18d7fc;
    }
    ctx->pc = 0x18D7F4u;
    SET_GPR_U32(ctx, 31, 0x18D7FCu);
    ctx->pc = 0x18D7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D7F4u;
    // 0x18d7f8: 0x27a70008  addiu       $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC28u, 0x18D7F4u, 0x18D7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D7FCu;
label_18d7fc:
    // 0x18d7fc: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x18d7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_18d800:
    // 0x18d800: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_18d804:
    if (ctx->pc == 0x18D804u) {
        ctx->pc = 0x18D804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D800u;
        // 0x18d804: 0x97a6000a  lhu         $a2, 0xA($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D808u;
        goto label_18d808;
    }
    ctx->pc = 0x18D800u;
    {
        const bool branch_taken_0x18d800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D800u;
        // 0x18d804: 0x97a6000a  lhu         $a2, 0xA($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d800) {
            ctx->pc = 0x18D860u;
            goto label_18d860;
        }
    }
    ctx->pc = 0x18D808u;
label_18d808:
    // 0x18d808: 0x97a40008  lhu         $a0, 0x8($sp)
    ctx->pc = 0x18d808u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
label_18d80c:
    // 0x18d80c: 0x96230244  lhu         $v1, 0x244($s1)
    ctx->pc = 0x18d80cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 580)));
label_18d810:
    // 0x18d810: 0x96220208  lhu         $v0, 0x208($s1)
    ctx->pc = 0x18d810u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 520)));
label_18d814:
    // 0x18d814: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x18d814u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18d818:
    // 0x18d818: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18d818u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d81c:
    // 0x18d81c: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x18d81cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18d820:
    // 0x18d820: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
label_18d824:
    if (ctx->pc == 0x18D824u) {
        ctx->pc = 0x18D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D820u;
        // 0x18d824: 0xa6220244  sh          $v0, 0x244($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 580), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D828u;
        goto label_18d828;
    }
    ctx->pc = 0x18D820u;
    {
        const bool branch_taken_0x18d820 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x18D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D820u;
        // 0x18d824: 0xa6220244  sh          $v0, 0x244($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 580), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d820) {
            ctx->pc = 0x18D82Cu;
            goto label_18d82c;
        }
    }
    ctx->pc = 0x18D828u;
label_18d828:
    // 0x18d828: 0xa6200244  sh          $zero, 0x244($s1)
    ctx->pc = 0x18d828u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 580), (uint16_t)GPR_U32(ctx, 0));
label_18d82c:
    // 0x18d82c: 0x97a3000a  lhu         $v1, 0xA($sp)
    ctx->pc = 0x18d82cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
label_18d830:
    // 0x18d830: 0x8e240208  lw          $a0, 0x208($s1)
    ctx->pc = 0x18d830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
label_18d834:
    // 0x18d834: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x18d834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_18d838:
    // 0x18d838: 0x86250244  lh          $a1, 0x244($s1)
    ctx->pc = 0x18d838u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 580)));
label_18d83c:
    // 0x18d83c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18d83cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_18d840:
    // 0x18d840: 0x8e260214  lw          $a2, 0x214($s1)
    ctx->pc = 0x18d840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_18d844:
    // 0x18d844: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x18d844u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_18d848:
    // 0x18d848: 0xa6230246  sh          $v1, 0x246($s1)
    ctx->pc = 0x18d848u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 582), (uint16_t)GPR_U32(ctx, 3));
label_18d84c:
    // 0x18d84c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_18d850:
    // 0x18d850: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18d850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_18d854:
    // 0x18d854: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_18d858:
    if (ctx->pc == 0x18D858u) {
        ctx->pc = 0x18D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D854u;
        // 0x18d858: 0xc29021  addu        $s2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D85Cu;
        goto label_18d85c;
    }
    ctx->pc = 0x18D854u;
    {
        const bool branch_taken_0x18d854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D854u;
        // 0x18d858: 0xc29021  addu        $s2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d854) {
            ctx->pc = 0x18DBE4u;
            goto label_18dbe4;
        }
    }
    ctx->pc = 0x18D85Cu;
label_18d85c:
    // 0x18d85c: 0x0  nop
    ctx->pc = 0x18d85cu;
    // NOP
label_18d860:
    // 0x18d860: 0x8e250208  lw          $a1, 0x208($s1)
    ctx->pc = 0x18d860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
label_18d864:
    // 0x18d864: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x18d864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_18d868:
    // 0x18d868: 0x97a40008  lhu         $a0, 0x8($sp)
    ctx->pc = 0x18d868u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
label_18d86c:
    // 0x18d86c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18d86cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_18d870:
    // 0x18d870: 0x8e270214  lw          $a3, 0x214($s1)
    ctx->pc = 0x18d870u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_18d874:
    // 0x18d874: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x18d874u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_18d878:
    // 0x18d878: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x18d878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_18d87c:
    // 0x18d87c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x18d87cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_18d880:
    // 0x18d880: 0xa6240244  sh          $a0, 0x244($s1)
    ctx->pc = 0x18d880u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 580), (uint16_t)GPR_U32(ctx, 4));
label_18d884:
    // 0x18d884: 0xa6260246  sh          $a2, 0x246($s1)
    ctx->pc = 0x18d884u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 582), (uint16_t)GPR_U32(ctx, 6));
label_18d888:
    // 0x18d888: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d88c:
    // 0x18d88c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_18d890:
    // 0x18d890: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_18d894:
    if (ctx->pc == 0x18D894u) {
        ctx->pc = 0x18D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D890u;
        // 0x18d894: 0xe29021  addu        $s2, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D898u;
        goto label_18d898;
    }
    ctx->pc = 0x18D890u;
    {
        const bool branch_taken_0x18d890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D890u;
        // 0x18d894: 0xe29021  addu        $s2, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d890) {
            ctx->pc = 0x18DBE4u;
            goto label_18dbe4;
        }
    }
    ctx->pc = 0x18D898u;
label_18d898:
    // 0x18d898: 0x14c300cf  bne         $a2, $v1, . + 4 + (0xCF << 2)
label_18d89c:
    if (ctx->pc == 0x18D89Cu) {
        ctx->pc = 0x18D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D898u;
        // 0x18d89c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D8A0u;
        goto label_18d8a0;
    }
    ctx->pc = 0x18D898u;
    {
        const bool branch_taken_0x18d898 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x18D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D898u;
        // 0x18d89c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d898) {
            ctx->pc = 0x18DBD8u;
            goto label_18dbd8;
        }
    }
    ctx->pc = 0x18D8A0u;
label_18d8a0:
    // 0x18d8a0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x18d8a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_18d8a4:
    // 0x18d8a4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18d8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18d8a8:
    // 0x18d8a8: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x18d8a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_18d8ac:
    // 0x18d8ac: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x18d8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_18d8b0:
    // 0x18d8b0: 0x2c820009  sltiu       $v0, $a0, 0x9
    ctx->pc = 0x18d8b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_18d8b4:
    // 0x18d8b4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_18d8b8:
    if (ctx->pc == 0x18D8B8u) {
        ctx->pc = 0x18D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D8B4u;
        // 0x18d8b8: 0x26650001  addiu       $a1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D8BCu;
        goto label_18d8bc;
    }
    ctx->pc = 0x18D8B4u;
    {
        const bool branch_taken_0x18d8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D8B4u;
        // 0x18d8b8: 0x26650001  addiu       $a1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d8b4) {
            ctx->pc = 0x18D900u;
            goto label_18d900;
        }
    }
    ctx->pc = 0x18D8BCu;
label_18d8bc:
    // 0x18d8bc: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x18d8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_18d8c0:
    // 0x18d8c0: 0x54640011  bnel        $v1, $a0, . + 4 + (0x11 << 2)
label_18d8c4:
    if (ctx->pc == 0x18D8C4u) {
        ctx->pc = 0x18D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D8C0u;
        // 0x18d8c4: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D8C8u;
        goto label_18d8c8;
    }
    ctx->pc = 0x18D8C0u;
    {
        const bool branch_taken_0x18d8c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x18d8c0) {
            ctx->pc = 0x18D8C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D8C0u;
            // 0x18d8c4: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D908u;
            goto label_18d908;
        }
    }
    ctx->pc = 0x18D8C8u;
label_18d8c8:
    // 0x18d8c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18d8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d8cc:
    // 0x18d8cc: 0x0  nop
    ctx->pc = 0x18d8ccu;
    // NOP
label_18d8d0:
    // 0x18d8d0: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x18d8d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_18d8d4:
    // 0x18d8d4: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x18d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_18d8d8:
    // 0x18d8d8: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x18d8d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_18d8dc:
    // 0x18d8dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_18d8e0:
    if (ctx->pc == 0x18D8E0u) {
        ctx->pc = 0x18D8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D8DCu;
        // 0x18d8e0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D8E4u;
        goto label_18d8e4;
    }
    ctx->pc = 0x18D8DCu;
    {
        const bool branch_taken_0x18d8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D8DCu;
        // 0x18d8e0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d8dc) {
            ctx->pc = 0x18D900u;
            goto label_18d900;
        }
    }
    ctx->pc = 0x18D8E4u;
label_18d8e4:
    // 0x18d8e4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x18d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18d8e8:
    // 0x18d8e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18d8ec:
    // 0x18d8ec: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x18d8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_18d8f0:
    // 0x18d8f0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_18d8f4:
    // 0x18d8f4: 0x1000fff6  b           . + 4 + (-0xA << 2)
label_18d8f8:
    if (ctx->pc == 0x18D8F8u) {
        ctx->pc = 0x18D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D8F4u;
        // 0x18d8f8: 0x2464ffd0  addiu       $a0, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D8FCu;
        goto label_18d8fc;
    }
    ctx->pc = 0x18D8F4u;
    {
        const bool branch_taken_0x18d8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D8F4u;
        // 0x18d8f8: 0x2464ffd0  addiu       $a0, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d8f4) {
            ctx->pc = 0x18D8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d8d0;
        }
    }
    ctx->pc = 0x18D8FCu;
label_18d8fc:
    // 0x18d8fc: 0x0  nop
    ctx->pc = 0x18d8fcu;
    // NOP
label_18d900:
    // 0x18d900: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x18d900u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d904:
    // 0x18d904: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x18d904u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_18d908:
    // 0x18d908: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18d908u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18d90c:
    // 0x18d90c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18d910:
    // 0x18d910: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_18d914:
    if (ctx->pc == 0x18D914u) {
        ctx->pc = 0x18D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D910u;
        // 0x18d914: 0xa3c20002  sb          $v0, 0x2($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D918u;
        goto label_18d918;
    }
    ctx->pc = 0x18D910u;
    {
        const bool branch_taken_0x18d910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D910u;
        // 0x18d914: 0xa3c20002  sb          $v0, 0x2($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d910) {
            ctx->pc = 0x18DBE4u;
            goto label_18dbe4;
        }
    }
    ctx->pc = 0x18D918u;
label_18d918:
    // 0x18d918: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x18d918u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_18d91c:
    // 0x18d91c: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x18d91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18d920:
    // 0x18d920: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x18d920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_18d924:
    // 0x18d924: 0x2c820009  sltiu       $v0, $a0, 0x9
    ctx->pc = 0x18d924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_18d928:
    // 0x18d928: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_18d92c:
    if (ctx->pc == 0x18D92Cu) {
        ctx->pc = 0x18D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D928u;
        // 0x18d92c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D930u;
        goto label_18d930;
    }
    ctx->pc = 0x18D928u;
    {
        const bool branch_taken_0x18d928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D928u;
        // 0x18d92c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d928) {
            ctx->pc = 0x18D970u;
            goto label_18d970;
        }
    }
    ctx->pc = 0x18D930u;
label_18d930:
    // 0x18d930: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x18d930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_18d934:
    // 0x18d934: 0x54670010  bnel        $v1, $a3, . + 4 + (0x10 << 2)
label_18d938:
    if (ctx->pc == 0x18D938u) {
        ctx->pc = 0x18D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D934u;
        // 0x18d938: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D93Cu;
        goto label_18d93c;
    }
    ctx->pc = 0x18D934u;
    {
        const bool branch_taken_0x18d934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x18d934) {
            ctx->pc = 0x18D938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D934u;
            // 0x18d938: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D978u;
            goto label_18d978;
        }
    }
    ctx->pc = 0x18D93Cu;
label_18d93c:
    // 0x18d93c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18d93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d940:
    // 0x18d940: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x18d940u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_18d944:
    // 0x18d944: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x18d944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_18d948:
    // 0x18d948: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x18d948u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_18d94c:
    // 0x18d94c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_18d950:
    if (ctx->pc == 0x18D950u) {
        ctx->pc = 0x18D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D94Cu;
        // 0x18d950: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D954u;
        goto label_18d954;
    }
    ctx->pc = 0x18D94Cu;
    {
        const bool branch_taken_0x18d94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D94Cu;
        // 0x18d950: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d94c) {
            ctx->pc = 0x18D970u;
            goto label_18d970;
        }
    }
    ctx->pc = 0x18D954u;
label_18d954:
    // 0x18d954: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x18d954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18d958:
    // 0x18d958: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18d958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18d95c:
    // 0x18d95c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x18d95cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_18d960:
    // 0x18d960: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18d960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_18d964:
    // 0x18d964: 0x1000fff6  b           . + 4 + (-0xA << 2)
label_18d968:
    if (ctx->pc == 0x18D968u) {
        ctx->pc = 0x18D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D964u;
        // 0x18d968: 0x2464ffd0  addiu       $a0, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D96Cu;
        goto label_18d96c;
    }
    ctx->pc = 0x18D964u;
    {
        const bool branch_taken_0x18d964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D964u;
        // 0x18d968: 0x2464ffd0  addiu       $a0, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d964) {
            ctx->pc = 0x18D940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d940;
        }
    }
    ctx->pc = 0x18D96Cu;
label_18d96c:
    // 0x18d96c: 0x0  nop
    ctx->pc = 0x18d96cu;
    // NOP
label_18d970:
    // 0x18d970: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x18d970u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d974:
    // 0x18d974: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x18d974u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_18d978:
    // 0x18d978: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18d978u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18d97c:
    // 0x18d97c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18d980:
    // 0x18d980: 0x10000098  b           . + 4 + (0x98 << 2)
label_18d984:
    if (ctx->pc == 0x18D984u) {
        ctx->pc = 0x18D984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D980u;
        // 0x18d984: 0xa3c20003  sb          $v0, 0x3($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D988u;
        goto label_18d988;
    }
    ctx->pc = 0x18D980u;
    {
        const bool branch_taken_0x18d980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D980u;
        // 0x18d984: 0xa3c20003  sb          $v0, 0x3($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d980) {
            ctx->pc = 0x18DBE4u;
            goto label_18dbe4;
        }
    }
    ctx->pc = 0x18D988u;
label_18d988:
    // 0x18d988: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x18d988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_18d98c:
    // 0x18d98c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x18d98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_18d990:
    // 0x18d990: 0x50600039  beql        $v1, $zero, . + 4 + (0x39 << 2)
label_18d994:
    if (ctx->pc == 0x18D994u) {
        ctx->pc = 0x18D994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D990u;
        // 0x18d994: 0x82660000  lb          $a2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D998u;
        goto label_18d998;
    }
    ctx->pc = 0x18D990u;
    {
        const bool branch_taken_0x18d990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d990) {
            ctx->pc = 0x18D994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D990u;
            // 0x18d994: 0x82660000  lb          $a2, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DA78u;
            goto label_18da78;
        }
    }
    ctx->pc = 0x18D998u;
label_18d998:
    // 0x18d998: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x18d998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_18d99c:
    // 0x18d99c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18d99cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d9a0:
    // 0x18d9a0: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x18d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_18d9a4:
    // 0x18d9a4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x18d9a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_18d9a8:
    // 0x18d9a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_18d9ac:
    if (ctx->pc == 0x18D9ACu) {
        ctx->pc = 0x18D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9A8u;
        // 0x18d9ac: 0x32600  sll         $a0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D9B0u;
        goto label_18d9b0;
    }
    ctx->pc = 0x18D9A8u;
    {
        const bool branch_taken_0x18d9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9A8u;
        // 0x18d9ac: 0x32600  sll         $a0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9a8) {
            ctx->pc = 0x18D9C0u;
            goto label_18d9c0;
        }
    }
    ctx->pc = 0x18D9B0u;
label_18d9b0:
    // 0x18d9b0: 0x41503  sra         $v0, $a0, 20
    ctx->pc = 0x18d9b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 20));
label_18d9b4:
    // 0x18d9b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18d9b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18d9b8:
    // 0x18d9b8: 0x1000000f  b           . + 4 + (0xF << 2)
label_18d9bc:
    if (ctx->pc == 0x18D9BCu) {
        ctx->pc = 0x18D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9B8u;
        // 0x18d9bc: 0x2446fd00  addiu       $a2, $v0, -0x300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D9C0u;
        goto label_18d9c0;
    }
    ctx->pc = 0x18D9B8u;
    {
        const bool branch_taken_0x18d9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9B8u;
        // 0x18d9bc: 0x2446fd00  addiu       $a2, $v0, -0x300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9b8) {
            ctx->pc = 0x18D9F8u;
            goto label_18d9f8;
        }
    }
    ctx->pc = 0x18D9C0u;
label_18d9c0:
    // 0x18d9c0: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x18d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
label_18d9c4:
    // 0x18d9c4: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x18d9c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_18d9c8:
    // 0x18d9c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_18d9cc:
    if (ctx->pc == 0x18D9CCu) {
        ctx->pc = 0x18D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9C8u;
        // 0x18d9cc: 0x2462ffbf  addiu       $v0, $v1, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D9D0u;
        goto label_18d9d0;
    }
    ctx->pc = 0x18D9C8u;
    {
        const bool branch_taken_0x18d9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9C8u;
        // 0x18d9cc: 0x2462ffbf  addiu       $v0, $v1, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9c8) {
            ctx->pc = 0x18D9E0u;
            goto label_18d9e0;
        }
    }
    ctx->pc = 0x18D9D0u;
label_18d9d0:
    // 0x18d9d0: 0x41503  sra         $v0, $a0, 20
    ctx->pc = 0x18d9d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 20));
label_18d9d4:
    // 0x18d9d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18d9d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18d9d8:
    // 0x18d9d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_18d9dc:
    if (ctx->pc == 0x18D9DCu) {
        ctx->pc = 0x18D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9D8u;
        // 0x18d9dc: 0x2446fa90  addiu       $a2, $v0, -0x570 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D9E0u;
        goto label_18d9e0;
    }
    ctx->pc = 0x18D9D8u;
    {
        const bool branch_taken_0x18d9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9D8u;
        // 0x18d9dc: 0x2446fa90  addiu       $a2, $v0, -0x570 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9d8) {
            ctx->pc = 0x18D9F8u;
            goto label_18d9f8;
        }
    }
    ctx->pc = 0x18D9E0u;
label_18d9e0:
    // 0x18d9e0: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x18d9e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_18d9e4:
    // 0x18d9e4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_18d9e8:
    if (ctx->pc == 0x18D9E8u) {
        ctx->pc = 0x18D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9E4u;
        // 0x18d9e8: 0x92630000  lbu         $v1, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D9ECu;
        goto label_18d9ec;
    }
    ctx->pc = 0x18D9E4u;
    {
        const bool branch_taken_0x18d9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d9e4) {
            ctx->pc = 0x18D9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D9E4u;
            // 0x18d9e8: 0x92630000  lbu         $v1, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D9FCu;
            goto label_18d9fc;
        }
    }
    ctx->pc = 0x18D9ECu;
label_18d9ec:
    // 0x18d9ec: 0x41503  sra         $v0, $a0, 20
    ctx->pc = 0x18d9ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 20));
label_18d9f0:
    // 0x18d9f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18d9f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18d9f4:
    // 0x18d9f4: 0x2446fc90  addiu       $a2, $v0, -0x370
    ctx->pc = 0x18d9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966416));
label_18d9f8:
    // 0x18d9f8: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x18d9f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_18d9fc:
    // 0x18d9fc: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x18d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_18da00:
    // 0x18da00: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x18da00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_18da04:
    // 0x18da04: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_18da08:
    if (ctx->pc == 0x18DA08u) {
        ctx->pc = 0x18DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA04u;
        // 0x18da08: 0x2462ff9f  addiu       $v0, $v1, -0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA0Cu;
        goto label_18da0c;
    }
    ctx->pc = 0x18DA04u;
    {
        const bool branch_taken_0x18da04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18da04) {
            ctx->pc = 0x18DA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DA04u;
            // 0x18da08: 0x2462ff9f  addiu       $v0, $v1, -0x61 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DA20u;
            goto label_18da20;
        }
    }
    ctx->pc = 0x18DA0Cu;
label_18da0c:
    // 0x18da0c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x18da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_18da10:
    // 0x18da10: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18da10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18da14:
    // 0x18da14: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x18da14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_18da18:
    // 0x18da18: 0x10000010  b           . + 4 + (0x10 << 2)
label_18da1c:
    if (ctx->pc == 0x18DA1Cu) {
        ctx->pc = 0x18DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA18u;
        // 0x18da1c: 0x2442ffd0  addiu       $v0, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA20u;
        goto label_18da20;
    }
    ctx->pc = 0x18DA18u;
    {
        const bool branch_taken_0x18da18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA18u;
        // 0x18da1c: 0x2442ffd0  addiu       $v0, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da18) {
            ctx->pc = 0x18DA5Cu;
            goto label_18da5c;
        }
    }
    ctx->pc = 0x18DA20u;
label_18da20:
    // 0x18da20: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x18da20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_18da24:
    // 0x18da24: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_18da28:
    if (ctx->pc == 0x18DA28u) {
        ctx->pc = 0x18DA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA24u;
        // 0x18da28: 0x2462ffbf  addiu       $v0, $v1, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA2Cu;
        goto label_18da2c;
    }
    ctx->pc = 0x18DA24u;
    {
        const bool branch_taken_0x18da24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18da24) {
            ctx->pc = 0x18DA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DA24u;
            // 0x18da28: 0x2462ffbf  addiu       $v0, $v1, -0x41 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DA40u;
            goto label_18da40;
        }
    }
    ctx->pc = 0x18DA2Cu;
label_18da2c:
    // 0x18da2c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x18da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_18da30:
    // 0x18da30: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18da30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18da34:
    // 0x18da34: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x18da34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_18da38:
    // 0x18da38: 0x10000008  b           . + 4 + (0x8 << 2)
label_18da3c:
    if (ctx->pc == 0x18DA3Cu) {
        ctx->pc = 0x18DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA38u;
        // 0x18da3c: 0x2442ffa9  addiu       $v0, $v0, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967209));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA40u;
        goto label_18da40;
    }
    ctx->pc = 0x18DA38u;
    {
        const bool branch_taken_0x18da38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA38u;
        // 0x18da3c: 0x2442ffa9  addiu       $v0, $v0, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da38) {
            ctx->pc = 0x18DA5Cu;
            goto label_18da5c;
        }
    }
    ctx->pc = 0x18DA40u;
label_18da40:
    // 0x18da40: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x18da40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_18da44:
    // 0x18da44: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_18da48:
    if (ctx->pc == 0x18DA48u) {
        ctx->pc = 0x18DA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA44u;
        // 0x18da48: 0x24c2ffb0  addiu       $v0, $a2, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA4Cu;
        goto label_18da4c;
    }
    ctx->pc = 0x18DA44u;
    {
        const bool branch_taken_0x18da44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA44u;
        // 0x18da48: 0x24c2ffb0  addiu       $v0, $a2, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da44) {
            ctx->pc = 0x18DA64u;
            goto label_18da64;
        }
    }
    ctx->pc = 0x18DA4Cu;
label_18da4c:
    // 0x18da4c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x18da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_18da50:
    // 0x18da50: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18da50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18da54:
    // 0x18da54: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x18da54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_18da58:
    // 0x18da58: 0x2442ffc9  addiu       $v0, $v0, -0x37
    ctx->pc = 0x18da58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967241));
label_18da5c:
    // 0x18da5c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x18da5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_18da60:
    // 0x18da60: 0x24c2ffb0  addiu       $v0, $a2, -0x50
    ctx->pc = 0x18da60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967216));
label_18da64:
    // 0x18da64: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x18da64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_18da68:
    // 0x18da68: 0x5040005f  beql        $v0, $zero, . + 4 + (0x5F << 2)
label_18da6c:
    if (ctx->pc == 0x18DA6Cu) {
        ctx->pc = 0x18DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA68u;
        // 0x18da6c: 0x82620000  lb          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA70u;
        goto label_18da70;
    }
    ctx->pc = 0x18DA68u;
    {
        const bool branch_taken_0x18da68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18da68) {
            ctx->pc = 0x18DA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DA68u;
            // 0x18da6c: 0x82620000  lb          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DBE8u;
            goto label_18dbe8;
        }
    }
    ctx->pc = 0x18DA70u;
label_18da70:
    // 0x18da70: 0x10000059  b           . + 4 + (0x59 << 2)
label_18da74:
    if (ctx->pc == 0x18DA74u) {
        ctx->pc = 0x18DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA70u;
        // 0x18da74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA78u;
        goto label_18da78;
    }
    ctx->pc = 0x18DA70u;
    {
        const bool branch_taken_0x18da70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA70u;
        // 0x18da74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da70) {
            ctx->pc = 0x18DBD8u;
            goto label_18dbd8;
        }
    }
    ctx->pc = 0x18DA78u;
label_18da78:
    // 0x18da78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18da78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18da7c:
    // 0x18da7c: 0x10000056  b           . + 4 + (0x56 << 2)
label_18da80:
    if (ctx->pc == 0x18DA80u) {
        ctx->pc = 0x18DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA7Cu;
        // 0x18da80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA84u;
        goto label_18da84;
    }
    ctx->pc = 0x18DA7Cu;
    {
        const bool branch_taken_0x18da7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA7Cu;
        // 0x18da80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da7c) {
            ctx->pc = 0x18DBD8u;
            goto label_18dbd8;
        }
    }
    ctx->pc = 0x18DA84u;
label_18da84:
    // 0x18da84: 0x0  nop
    ctx->pc = 0x18da84u;
    // NOP
label_18da88:
    // 0x18da88: 0x8e22025c  lw          $v0, 0x25C($s1)
    ctx->pc = 0x18da88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_18da8c:
    // 0x18da8c: 0x262402a0  addiu       $a0, $s1, 0x2A0
    ctx->pc = 0x18da8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 672));
label_18da90:
    // 0x18da90: 0x6a230243  ldl         $v1, 0x243($s1)
    ctx->pc = 0x18da90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 579); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_18da94:
    // 0x18da94: 0x6e23023c  ldr         $v1, 0x23C($s1)
    ctx->pc = 0x18da94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 572); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_18da98:
    // 0x18da98: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x18da98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18da9c:
    // 0x18da9c: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x18da9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18daa0:
    // 0x18daa0: 0x8e23025c  lw          $v1, 0x25C($s1)
    ctx->pc = 0x18daa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_18daa4:
    // 0x18daa4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x18daa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_18daa8:
    // 0x18daa8: 0x64202b  sltu        $a0, $v1, $a0
    ctx->pc = 0x18daa8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_18daac:
    // 0x18daac: 0x1480004d  bnez        $a0, . + 4 + (0x4D << 2)
label_18dab0:
    if (ctx->pc == 0x18DAB0u) {
        ctx->pc = 0x18DAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAACu;
        // 0x18dab0: 0xae23025c  sw          $v1, 0x25C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 604), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DAB4u;
        goto label_18dab4;
    }
    ctx->pc = 0x18DAACu;
    {
        const bool branch_taken_0x18daac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAACu;
        // 0x18dab0: 0xae23025c  sw          $v1, 0x25C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 604), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18daac) {
            ctx->pc = 0x18DBE4u;
            goto label_18dbe4;
        }
    }
    ctx->pc = 0x18DAB4u;
label_18dab4:
    // 0x18dab4: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18dab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_18dab8:
    // 0x18dab8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18dab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18dabc:
    // 0x18dabc: 0x24a58118  addiu       $a1, $a1, -0x7EE8
    ctx->pc = 0x18dabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934808));
label_18dac0:
    // 0x18dac0: 0xc068186  jal         func_1A0618
label_18dac4:
    if (ctx->pc == 0x18DAC4u) {
        ctx->pc = 0x18DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAC0u;
        // 0x18dac4: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DAC8u;
        goto label_18dac8;
    }
    ctx->pc = 0x18DAC0u;
    SET_GPR_U32(ctx, 31, 0x18DAC8u);
    ctx->pc = 0x18DAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DAC0u;
    // 0x18dac4: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18DAC0u, 0x18DAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DAC8u;
label_18dac8:
    // 0x18dac8: 0x10000047  b           . + 4 + (0x47 << 2)
label_18dacc:
    if (ctx->pc == 0x18DACCu) {
        ctx->pc = 0x18DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAC8u;
        // 0x18dacc: 0x82620000  lb          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DAD0u;
        goto label_18dad0;
    }
    ctx->pc = 0x18DAC8u;
    {
        const bool branch_taken_0x18dac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAC8u;
        // 0x18dacc: 0x82620000  lb          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dac8) {
            ctx->pc = 0x18DBE8u;
            goto label_18dbe8;
        }
    }
    ctx->pc = 0x18DAD0u;
label_18dad0:
    // 0x18dad0: 0x8e23025c  lw          $v1, 0x25C($s1)
    ctx->pc = 0x18dad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_18dad4:
    // 0x18dad4: 0x26220260  addiu       $v0, $s1, 0x260
    ctx->pc = 0x18dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
label_18dad8:
    // 0x18dad8: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_18dadc:
    if (ctx->pc == 0x18DADCu) {
        ctx->pc = 0x18DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAD8u;
        // 0x18dadc: 0x8e22025c  lw          $v0, 0x25C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DAE0u;
        goto label_18dae0;
    }
    ctx->pc = 0x18DAD8u;
    {
        const bool branch_taken_0x18dad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18dad8) {
            ctx->pc = 0x18DADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DAD8u;
            // 0x18dadc: 0x8e22025c  lw          $v0, 0x25C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DAF8u;
            goto label_18daf8;
        }
    }
    ctx->pc = 0x18DAE0u;
label_18dae0:
    // 0x18dae0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18dae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_18dae4:
    // 0x18dae4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18dae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18dae8:
    // 0x18dae8: 0x24a58130  addiu       $a1, $a1, -0x7ED0
    ctx->pc = 0x18dae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934832));
label_18daec:
    // 0x18daec: 0xc068186  jal         func_1A0618
label_18daf0:
    if (ctx->pc == 0x18DAF0u) {
        ctx->pc = 0x18DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAECu;
        // 0x18daf0: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DAF4u;
        goto label_18daf4;
    }
    ctx->pc = 0x18DAECu;
    SET_GPR_U32(ctx, 31, 0x18DAF4u);
    ctx->pc = 0x18DAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DAECu;
    // 0x18daf0: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18DAECu, 0x18DAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DAF4u;
label_18daf4:
    // 0x18daf4: 0x8e22025c  lw          $v0, 0x25C($s1)
    ctx->pc = 0x18daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_18daf8:
    // 0x18daf8: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x18daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_18dafc:
    // 0x18dafc: 0xae22025c  sw          $v0, 0x25C($s1)
    ctx->pc = 0x18dafcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 604), GPR_U32(ctx, 2));
label_18db00:
    // 0x18db00: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x18db00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_18db04:
    // 0x18db04: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x18db04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_18db08:
    // 0x18db08: 0xb2230243  sdl         $v1, 0x243($s1)
    ctx->pc = 0x18db08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 579); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18db0c:
    // 0x18db0c: 0xb623023c  sdr         $v1, 0x23C($s1)
    ctx->pc = 0x18db0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 572); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18db10:
    // 0x18db10: 0x10000035  b           . + 4 + (0x35 << 2)
label_18db14:
    if (ctx->pc == 0x18DB14u) {
        ctx->pc = 0x18DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB10u;
        // 0x18db14: 0x82620000  lb          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB18u;
        goto label_18db18;
    }
    ctx->pc = 0x18DB10u;
    {
        const bool branch_taken_0x18db10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB10u;
        // 0x18db14: 0x82620000  lb          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db10) {
            ctx->pc = 0x18DBE8u;
            goto label_18dbe8;
        }
    }
    ctx->pc = 0x18DB18u;
label_18db18:
    // 0x18db18: 0x8623023c  lh          $v1, 0x23C($s1)
    ctx->pc = 0x18db18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 572)));
label_18db1c:
    // 0x18db1c: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
label_18db20:
    if (ctx->pc == 0x18DB20u) {
        ctx->pc = 0x18DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB1Cu;
        // 0x18db20: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB24u;
        goto label_18db24;
    }
    ctx->pc = 0x18DB1Cu;
    {
        const bool branch_taken_0x18db1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB1Cu;
        // 0x18db20: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db1c) {
            ctx->pc = 0x18DBF4u;
            goto label_18dbf4;
        }
    }
    ctx->pc = 0x18DB24u;
label_18db24:
    // 0x18db24: 0x86220244  lh          $v0, 0x244($s1)
    ctx->pc = 0x18db24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 580)));
label_18db28:
    // 0x18db28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18db28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18db2c:
    // 0x18db2c: 0x8e230208  lw          $v1, 0x208($s1)
    ctx->pc = 0x18db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
label_18db30:
    // 0x18db30: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x18db30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_18db34:
    // 0x18db34: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_18db38:
    if (ctx->pc == 0x18DB38u) {
        ctx->pc = 0x18DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB34u;
        // 0x18db38: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB3Cu;
        goto label_18db3c;
    }
    ctx->pc = 0x18DB34u;
    {
        const bool branch_taken_0x18db34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB34u;
        // 0x18db38: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db34) {
            ctx->pc = 0x18DBA4u;
            goto label_18dba4;
        }
    }
    ctx->pc = 0x18DB3Cu;
label_18db3c:
    // 0x18db3c: 0x96250246  lhu         $a1, 0x246($s1)
    ctx->pc = 0x18db3cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 582)));
label_18db40:
    // 0x18db40: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x18db40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_18db44:
    // 0x18db44: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x18db44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_18db48:
    // 0x18db48: 0xa6200244  sh          $zero, 0x244($s1)
    ctx->pc = 0x18db48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 580), (uint16_t)GPR_U32(ctx, 0));
label_18db4c:
    // 0x18db4c: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x18db4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_18db50:
    // 0x18db50: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x18db50u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_18db54:
    // 0x18db54: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x18db54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_18db58:
    // 0x18db58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_18db5c:
    if (ctx->pc == 0x18DB5Cu) {
        ctx->pc = 0x18DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB58u;
        // 0x18db5c: 0xa6230246  sh          $v1, 0x246($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 582), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB60u;
        goto label_18db60;
    }
    ctx->pc = 0x18DB58u;
    {
        const bool branch_taken_0x18db58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB58u;
        // 0x18db5c: 0xa6230246  sh          $v1, 0x246($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 582), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db58) {
            ctx->pc = 0x18DB68u;
            goto label_18db68;
        }
    }
    ctx->pc = 0x18DB60u;
label_18db60:
    // 0x18db60: 0x10000005  b           . + 4 + (0x5 << 2)
label_18db64:
    if (ctx->pc == 0x18DB64u) {
        ctx->pc = 0x18DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB60u;
        // 0x18db64: 0xa6250246  sh          $a1, 0x246($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 582), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB68u;
        goto label_18db68;
    }
    ctx->pc = 0x18DB60u;
    {
        const bool branch_taken_0x18db60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB60u;
        // 0x18db64: 0xa6250246  sh          $a1, 0x246($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 582), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db60) {
            ctx->pc = 0x18DB78u;
            goto label_18db78;
        }
    }
    ctx->pc = 0x18DB68u;
label_18db68:
    // 0x18db68: 0x8e230254  lw          $v1, 0x254($s1)
    ctx->pc = 0x18db68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
label_18db6c:
    // 0x18db6c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x18db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18db70:
    // 0x18db70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18db70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18db74:
    // 0x18db74: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x18db74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_18db78:
    // 0x18db78: 0x8d020208  lw          $v0, 0x208($t0)
    ctx->pc = 0x18db78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 520)));
label_18db7c:
    // 0x18db7c: 0x85030246  lh          $v1, 0x246($t0)
    ctx->pc = 0x18db7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 582)));
label_18db80:
    // 0x18db80: 0x95040248  lhu         $a0, 0x248($t0)
    ctx->pc = 0x18db80u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 584)));
label_18db84:
    // 0x18db84: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x18db84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_18db88:
    // 0x18db88: 0x8d050214  lw          $a1, 0x214($t0)
    ctx->pc = 0x18db88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 532)));
label_18db8c:
    // 0x18db8c: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x18db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_18db90:
    // 0x18db90: 0xa5040244  sh          $a0, 0x244($t0)
    ctx->pc = 0x18db90u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 580), (uint16_t)GPR_U32(ctx, 4));
label_18db94:
    // 0x18db94: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18db94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_18db98:
    // 0x18db98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18db98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18db9c:
    // 0x18db9c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_18dba0:
    // 0x18dba0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x18dba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_18dba4:
    // 0x18dba4: 0x1000000f  b           . + 4 + (0xF << 2)
label_18dba8:
    if (ctx->pc == 0x18DBA8u) {
        ctx->pc = 0x18DBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBA4u;
        // 0x18dba8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DBACu;
        goto label_18dbac;
    }
    ctx->pc = 0x18DBA4u;
    {
        const bool branch_taken_0x18dba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBA4u;
        // 0x18dba8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dba4) {
            ctx->pc = 0x18DBE4u;
            goto label_18dbe4;
        }
    }
    ctx->pc = 0x18DBACu;
label_18dbac:
    // 0x18dbac: 0x0  nop
    ctx->pc = 0x18dbacu;
    // NOP
label_18dbb0:
    // 0x18dbb0: 0x86230244  lh          $v1, 0x244($s1)
    ctx->pc = 0x18dbb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 580)));
label_18dbb4:
    // 0x18dbb4: 0x86220248  lh          $v0, 0x248($s1)
    ctx->pc = 0x18dbb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 584)));
label_18dbb8:
    // 0x18dbb8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x18dbb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_18dbbc:
    // 0x18dbbc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_18dbc0:
    if (ctx->pc == 0x18DBC0u) {
        ctx->pc = 0x18DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBBCu;
        // 0x18dbc0: 0x96240244  lhu         $a0, 0x244($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DBC4u;
        goto label_18dbc4;
    }
    ctx->pc = 0x18DBBCu;
    {
        const bool branch_taken_0x18dbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBBCu;
        // 0x18dbc0: 0x96240244  lhu         $a0, 0x244($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dbbc) {
            ctx->pc = 0x18DBE4u;
            goto label_18dbe4;
        }
    }
    ctx->pc = 0x18DBC4u;
label_18dbc4:
    // 0x18dbc4: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x18dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_18dbc8:
    // 0x18dbc8: 0x2652fffe  addiu       $s2, $s2, -0x2
    ctx->pc = 0x18dbc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
label_18dbcc:
    // 0x18dbcc: 0x10000005  b           . + 4 + (0x5 << 2)
label_18dbd0:
    if (ctx->pc == 0x18DBD0u) {
        ctx->pc = 0x18DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBCCu;
        // 0x18dbd0: 0xa6220244  sh          $v0, 0x244($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 580), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DBD4u;
        goto label_18dbd4;
    }
    ctx->pc = 0x18DBCCu;
    {
        const bool branch_taken_0x18dbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBCCu;
        // 0x18dbd0: 0xa6220244  sh          $v0, 0x244($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 580), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dbcc) {
            ctx->pc = 0x18DBE4u;
            goto label_18dbe4;
        }
    }
    ctx->pc = 0x18DBD4u;
label_18dbd4:
    // 0x18dbd4: 0x0  nop
    ctx->pc = 0x18dbd4u;
    // NOP
label_18dbd8:
    // 0x18dbd8: 0xc0633ba  jal         func_18CEE8
label_18dbdc:
    if (ctx->pc == 0x18DBDCu) {
        ctx->pc = 0x18DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBD8u;
        // 0x18dbdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DBE0u;
        goto label_18dbe0;
    }
    ctx->pc = 0x18DBD8u;
    SET_GPR_U32(ctx, 31, 0x18DBE0u);
    ctx->pc = 0x18DBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DBD8u;
    // 0x18dbdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CEE8u, 0x18DBD8u, 0x18DBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DBE0u;
label_18dbe0:
    // 0x18dbe0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18dbe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18dbe4:
    // 0x18dbe4: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x18dbe4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_18dbe8:
    // 0x18dbe8: 0x5440fd55  bnel        $v0, $zero, . + 4 + (-0x2AB << 2)
label_18dbec:
    if (ctx->pc == 0x18DBECu) {
        ctx->pc = 0x18DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBE8u;
        // 0x18dbec: 0x92700000  lbu         $s0, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DBF0u;
        goto label_18dbf0;
    }
    ctx->pc = 0x18DBE8u;
    {
        const bool branch_taken_0x18dbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dbe8) {
            ctx->pc = 0x18DBECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DBE8u;
            // 0x18dbec: 0x92700000  lbu         $s0, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d140;
        }
    }
    ctx->pc = 0x18DBF0u;
label_18dbf0:
    // 0x18dbf0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x18dbf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18dbf4:
    // 0x18dbf4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x18dbf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18dbf8:
    // 0x18dbf8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x18dbf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_18dbfc:
    // 0x18dbfc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x18dbfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18dc00:
    // 0x18dc00: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x18dc00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_18dc04:
    // 0x18dc04: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x18dc04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18dc08:
    // 0x18dc08: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x18dc08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_18dc0c:
    // 0x18dc0c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x18dc0cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_18dc10:
    // 0x18dc10: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x18dc10u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_18dc14:
    // 0x18dc14: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x18dc14u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_18dc18:
    // 0x18dc18: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x18dc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_18dc1c:
    // 0x18dc1c: 0x3e00008  jr          $ra
label_18dc20:
    if (ctx->pc == 0x18DC20u) {
        ctx->pc = 0x18DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC1Cu;
        // 0x18dc20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DC24u;
        goto label_fallthrough_0x18dc1c;
    }
    ctx->pc = 0x18DC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC1Cu;
        // 0x18dc20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18dc1c:
    ctx->pc = 0x18DC24u;
}
