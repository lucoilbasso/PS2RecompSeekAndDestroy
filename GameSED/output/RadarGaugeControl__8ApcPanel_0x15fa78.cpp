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

// Function: RadarGaugeControl__8ApcPanel
// Address: 0x15fa78 - 0x160300
void RadarGaugeControl__8ApcPanel_0x15fa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RadarGaugeControl__8ApcPanel_0x15fa78");
#endif

    switch (ctx->pc) {
        case 0x15fa78u: goto label_15fa78;
        case 0x15fa7cu: goto label_15fa7c;
        case 0x15fa80u: goto label_15fa80;
        case 0x15fa84u: goto label_15fa84;
        case 0x15fa88u: goto label_15fa88;
        case 0x15fa8cu: goto label_15fa8c;
        case 0x15fa90u: goto label_15fa90;
        case 0x15fa94u: goto label_15fa94;
        case 0x15fa98u: goto label_15fa98;
        case 0x15fa9cu: goto label_15fa9c;
        case 0x15faa0u: goto label_15faa0;
        case 0x15faa4u: goto label_15faa4;
        case 0x15faa8u: goto label_15faa8;
        case 0x15faacu: goto label_15faac;
        case 0x15fab0u: goto label_15fab0;
        case 0x15fab4u: goto label_15fab4;
        case 0x15fab8u: goto label_15fab8;
        case 0x15fabcu: goto label_15fabc;
        case 0x15fac0u: goto label_15fac0;
        case 0x15fac4u: goto label_15fac4;
        case 0x15fac8u: goto label_15fac8;
        case 0x15faccu: goto label_15facc;
        case 0x15fad0u: goto label_15fad0;
        case 0x15fad4u: goto label_15fad4;
        case 0x15fad8u: goto label_15fad8;
        case 0x15fadcu: goto label_15fadc;
        case 0x15fae0u: goto label_15fae0;
        case 0x15fae4u: goto label_15fae4;
        case 0x15fae8u: goto label_15fae8;
        case 0x15faecu: goto label_15faec;
        case 0x15faf0u: goto label_15faf0;
        case 0x15faf4u: goto label_15faf4;
        case 0x15faf8u: goto label_15faf8;
        case 0x15fafcu: goto label_15fafc;
        case 0x15fb00u: goto label_15fb00;
        case 0x15fb04u: goto label_15fb04;
        case 0x15fb08u: goto label_15fb08;
        case 0x15fb0cu: goto label_15fb0c;
        case 0x15fb10u: goto label_15fb10;
        case 0x15fb14u: goto label_15fb14;
        case 0x15fb18u: goto label_15fb18;
        case 0x15fb1cu: goto label_15fb1c;
        case 0x15fb20u: goto label_15fb20;
        case 0x15fb24u: goto label_15fb24;
        case 0x15fb28u: goto label_15fb28;
        case 0x15fb2cu: goto label_15fb2c;
        case 0x15fb30u: goto label_15fb30;
        case 0x15fb34u: goto label_15fb34;
        case 0x15fb38u: goto label_15fb38;
        case 0x15fb3cu: goto label_15fb3c;
        case 0x15fb40u: goto label_15fb40;
        case 0x15fb44u: goto label_15fb44;
        case 0x15fb48u: goto label_15fb48;
        case 0x15fb4cu: goto label_15fb4c;
        case 0x15fb50u: goto label_15fb50;
        case 0x15fb54u: goto label_15fb54;
        case 0x15fb58u: goto label_15fb58;
        case 0x15fb5cu: goto label_15fb5c;
        case 0x15fb60u: goto label_15fb60;
        case 0x15fb64u: goto label_15fb64;
        case 0x15fb68u: goto label_15fb68;
        case 0x15fb6cu: goto label_15fb6c;
        case 0x15fb70u: goto label_15fb70;
        case 0x15fb74u: goto label_15fb74;
        case 0x15fb78u: goto label_15fb78;
        case 0x15fb7cu: goto label_15fb7c;
        case 0x15fb80u: goto label_15fb80;
        case 0x15fb84u: goto label_15fb84;
        case 0x15fb88u: goto label_15fb88;
        case 0x15fb8cu: goto label_15fb8c;
        case 0x15fb90u: goto label_15fb90;
        case 0x15fb94u: goto label_15fb94;
        case 0x15fb98u: goto label_15fb98;
        case 0x15fb9cu: goto label_15fb9c;
        case 0x15fba0u: goto label_15fba0;
        case 0x15fba4u: goto label_15fba4;
        case 0x15fba8u: goto label_15fba8;
        case 0x15fbacu: goto label_15fbac;
        case 0x15fbb0u: goto label_15fbb0;
        case 0x15fbb4u: goto label_15fbb4;
        case 0x15fbb8u: goto label_15fbb8;
        case 0x15fbbcu: goto label_15fbbc;
        case 0x15fbc0u: goto label_15fbc0;
        case 0x15fbc4u: goto label_15fbc4;
        case 0x15fbc8u: goto label_15fbc8;
        case 0x15fbccu: goto label_15fbcc;
        case 0x15fbd0u: goto label_15fbd0;
        case 0x15fbd4u: goto label_15fbd4;
        case 0x15fbd8u: goto label_15fbd8;
        case 0x15fbdcu: goto label_15fbdc;
        case 0x15fbe0u: goto label_15fbe0;
        case 0x15fbe4u: goto label_15fbe4;
        case 0x15fbe8u: goto label_15fbe8;
        case 0x15fbecu: goto label_15fbec;
        case 0x15fbf0u: goto label_15fbf0;
        case 0x15fbf4u: goto label_15fbf4;
        case 0x15fbf8u: goto label_15fbf8;
        case 0x15fbfcu: goto label_15fbfc;
        case 0x15fc00u: goto label_15fc00;
        case 0x15fc04u: goto label_15fc04;
        case 0x15fc08u: goto label_15fc08;
        case 0x15fc0cu: goto label_15fc0c;
        case 0x15fc10u: goto label_15fc10;
        case 0x15fc14u: goto label_15fc14;
        case 0x15fc18u: goto label_15fc18;
        case 0x15fc1cu: goto label_15fc1c;
        case 0x15fc20u: goto label_15fc20;
        case 0x15fc24u: goto label_15fc24;
        case 0x15fc28u: goto label_15fc28;
        case 0x15fc2cu: goto label_15fc2c;
        case 0x15fc30u: goto label_15fc30;
        case 0x15fc34u: goto label_15fc34;
        case 0x15fc38u: goto label_15fc38;
        case 0x15fc3cu: goto label_15fc3c;
        case 0x15fc40u: goto label_15fc40;
        case 0x15fc44u: goto label_15fc44;
        case 0x15fc48u: goto label_15fc48;
        case 0x15fc4cu: goto label_15fc4c;
        case 0x15fc50u: goto label_15fc50;
        case 0x15fc54u: goto label_15fc54;
        case 0x15fc58u: goto label_15fc58;
        case 0x15fc5cu: goto label_15fc5c;
        case 0x15fc60u: goto label_15fc60;
        case 0x15fc64u: goto label_15fc64;
        case 0x15fc68u: goto label_15fc68;
        case 0x15fc6cu: goto label_15fc6c;
        case 0x15fc70u: goto label_15fc70;
        case 0x15fc74u: goto label_15fc74;
        case 0x15fc78u: goto label_15fc78;
        case 0x15fc7cu: goto label_15fc7c;
        case 0x15fc80u: goto label_15fc80;
        case 0x15fc84u: goto label_15fc84;
        case 0x15fc88u: goto label_15fc88;
        case 0x15fc8cu: goto label_15fc8c;
        case 0x15fc90u: goto label_15fc90;
        case 0x15fc94u: goto label_15fc94;
        case 0x15fc98u: goto label_15fc98;
        case 0x15fc9cu: goto label_15fc9c;
        case 0x15fca0u: goto label_15fca0;
        case 0x15fca4u: goto label_15fca4;
        case 0x15fca8u: goto label_15fca8;
        case 0x15fcacu: goto label_15fcac;
        case 0x15fcb0u: goto label_15fcb0;
        case 0x15fcb4u: goto label_15fcb4;
        case 0x15fcb8u: goto label_15fcb8;
        case 0x15fcbcu: goto label_15fcbc;
        case 0x15fcc0u: goto label_15fcc0;
        case 0x15fcc4u: goto label_15fcc4;
        case 0x15fcc8u: goto label_15fcc8;
        case 0x15fcccu: goto label_15fccc;
        case 0x15fcd0u: goto label_15fcd0;
        case 0x15fcd4u: goto label_15fcd4;
        case 0x15fcd8u: goto label_15fcd8;
        case 0x15fcdcu: goto label_15fcdc;
        case 0x15fce0u: goto label_15fce0;
        case 0x15fce4u: goto label_15fce4;
        case 0x15fce8u: goto label_15fce8;
        case 0x15fcecu: goto label_15fcec;
        case 0x15fcf0u: goto label_15fcf0;
        case 0x15fcf4u: goto label_15fcf4;
        case 0x15fcf8u: goto label_15fcf8;
        case 0x15fcfcu: goto label_15fcfc;
        case 0x15fd00u: goto label_15fd00;
        case 0x15fd04u: goto label_15fd04;
        case 0x15fd08u: goto label_15fd08;
        case 0x15fd0cu: goto label_15fd0c;
        case 0x15fd10u: goto label_15fd10;
        case 0x15fd14u: goto label_15fd14;
        case 0x15fd18u: goto label_15fd18;
        case 0x15fd1cu: goto label_15fd1c;
        case 0x15fd20u: goto label_15fd20;
        case 0x15fd24u: goto label_15fd24;
        case 0x15fd28u: goto label_15fd28;
        case 0x15fd2cu: goto label_15fd2c;
        case 0x15fd30u: goto label_15fd30;
        case 0x15fd34u: goto label_15fd34;
        case 0x15fd38u: goto label_15fd38;
        case 0x15fd3cu: goto label_15fd3c;
        case 0x15fd40u: goto label_15fd40;
        case 0x15fd44u: goto label_15fd44;
        case 0x15fd48u: goto label_15fd48;
        case 0x15fd4cu: goto label_15fd4c;
        case 0x15fd50u: goto label_15fd50;
        case 0x15fd54u: goto label_15fd54;
        case 0x15fd58u: goto label_15fd58;
        case 0x15fd5cu: goto label_15fd5c;
        case 0x15fd60u: goto label_15fd60;
        case 0x15fd64u: goto label_15fd64;
        case 0x15fd68u: goto label_15fd68;
        case 0x15fd6cu: goto label_15fd6c;
        case 0x15fd70u: goto label_15fd70;
        case 0x15fd74u: goto label_15fd74;
        case 0x15fd78u: goto label_15fd78;
        case 0x15fd7cu: goto label_15fd7c;
        case 0x15fd80u: goto label_15fd80;
        case 0x15fd84u: goto label_15fd84;
        case 0x15fd88u: goto label_15fd88;
        case 0x15fd8cu: goto label_15fd8c;
        case 0x15fd90u: goto label_15fd90;
        case 0x15fd94u: goto label_15fd94;
        case 0x15fd98u: goto label_15fd98;
        case 0x15fd9cu: goto label_15fd9c;
        case 0x15fda0u: goto label_15fda0;
        case 0x15fda4u: goto label_15fda4;
        case 0x15fda8u: goto label_15fda8;
        case 0x15fdacu: goto label_15fdac;
        case 0x15fdb0u: goto label_15fdb0;
        case 0x15fdb4u: goto label_15fdb4;
        case 0x15fdb8u: goto label_15fdb8;
        case 0x15fdbcu: goto label_15fdbc;
        case 0x15fdc0u: goto label_15fdc0;
        case 0x15fdc4u: goto label_15fdc4;
        case 0x15fdc8u: goto label_15fdc8;
        case 0x15fdccu: goto label_15fdcc;
        case 0x15fdd0u: goto label_15fdd0;
        case 0x15fdd4u: goto label_15fdd4;
        case 0x15fdd8u: goto label_15fdd8;
        case 0x15fddcu: goto label_15fddc;
        case 0x15fde0u: goto label_15fde0;
        case 0x15fde4u: goto label_15fde4;
        case 0x15fde8u: goto label_15fde8;
        case 0x15fdecu: goto label_15fdec;
        case 0x15fdf0u: goto label_15fdf0;
        case 0x15fdf4u: goto label_15fdf4;
        case 0x15fdf8u: goto label_15fdf8;
        case 0x15fdfcu: goto label_15fdfc;
        case 0x15fe00u: goto label_15fe00;
        case 0x15fe04u: goto label_15fe04;
        case 0x15fe08u: goto label_15fe08;
        case 0x15fe0cu: goto label_15fe0c;
        case 0x15fe10u: goto label_15fe10;
        case 0x15fe14u: goto label_15fe14;
        case 0x15fe18u: goto label_15fe18;
        case 0x15fe1cu: goto label_15fe1c;
        case 0x15fe20u: goto label_15fe20;
        case 0x15fe24u: goto label_15fe24;
        case 0x15fe28u: goto label_15fe28;
        case 0x15fe2cu: goto label_15fe2c;
        case 0x15fe30u: goto label_15fe30;
        case 0x15fe34u: goto label_15fe34;
        case 0x15fe38u: goto label_15fe38;
        case 0x15fe3cu: goto label_15fe3c;
        case 0x15fe40u: goto label_15fe40;
        case 0x15fe44u: goto label_15fe44;
        case 0x15fe48u: goto label_15fe48;
        case 0x15fe4cu: goto label_15fe4c;
        case 0x15fe50u: goto label_15fe50;
        case 0x15fe54u: goto label_15fe54;
        case 0x15fe58u: goto label_15fe58;
        case 0x15fe5cu: goto label_15fe5c;
        case 0x15fe60u: goto label_15fe60;
        case 0x15fe64u: goto label_15fe64;
        case 0x15fe68u: goto label_15fe68;
        case 0x15fe6cu: goto label_15fe6c;
        case 0x15fe70u: goto label_15fe70;
        case 0x15fe74u: goto label_15fe74;
        case 0x15fe78u: goto label_15fe78;
        case 0x15fe7cu: goto label_15fe7c;
        case 0x15fe80u: goto label_15fe80;
        case 0x15fe84u: goto label_15fe84;
        case 0x15fe88u: goto label_15fe88;
        case 0x15fe8cu: goto label_15fe8c;
        case 0x15fe90u: goto label_15fe90;
        case 0x15fe94u: goto label_15fe94;
        case 0x15fe98u: goto label_15fe98;
        case 0x15fe9cu: goto label_15fe9c;
        case 0x15fea0u: goto label_15fea0;
        case 0x15fea4u: goto label_15fea4;
        case 0x15fea8u: goto label_15fea8;
        case 0x15feacu: goto label_15feac;
        case 0x15feb0u: goto label_15feb0;
        case 0x15feb4u: goto label_15feb4;
        case 0x15feb8u: goto label_15feb8;
        case 0x15febcu: goto label_15febc;
        case 0x15fec0u: goto label_15fec0;
        case 0x15fec4u: goto label_15fec4;
        case 0x15fec8u: goto label_15fec8;
        case 0x15feccu: goto label_15fecc;
        case 0x15fed0u: goto label_15fed0;
        case 0x15fed4u: goto label_15fed4;
        case 0x15fed8u: goto label_15fed8;
        case 0x15fedcu: goto label_15fedc;
        case 0x15fee0u: goto label_15fee0;
        case 0x15fee4u: goto label_15fee4;
        case 0x15fee8u: goto label_15fee8;
        case 0x15feecu: goto label_15feec;
        case 0x15fef0u: goto label_15fef0;
        case 0x15fef4u: goto label_15fef4;
        case 0x15fef8u: goto label_15fef8;
        case 0x15fefcu: goto label_15fefc;
        case 0x15ff00u: goto label_15ff00;
        case 0x15ff04u: goto label_15ff04;
        case 0x15ff08u: goto label_15ff08;
        case 0x15ff0cu: goto label_15ff0c;
        case 0x15ff10u: goto label_15ff10;
        case 0x15ff14u: goto label_15ff14;
        case 0x15ff18u: goto label_15ff18;
        case 0x15ff1cu: goto label_15ff1c;
        case 0x15ff20u: goto label_15ff20;
        case 0x15ff24u: goto label_15ff24;
        case 0x15ff28u: goto label_15ff28;
        case 0x15ff2cu: goto label_15ff2c;
        case 0x15ff30u: goto label_15ff30;
        case 0x15ff34u: goto label_15ff34;
        case 0x15ff38u: goto label_15ff38;
        case 0x15ff3cu: goto label_15ff3c;
        case 0x15ff40u: goto label_15ff40;
        case 0x15ff44u: goto label_15ff44;
        case 0x15ff48u: goto label_15ff48;
        case 0x15ff4cu: goto label_15ff4c;
        case 0x15ff50u: goto label_15ff50;
        case 0x15ff54u: goto label_15ff54;
        case 0x15ff58u: goto label_15ff58;
        case 0x15ff5cu: goto label_15ff5c;
        case 0x15ff60u: goto label_15ff60;
        case 0x15ff64u: goto label_15ff64;
        case 0x15ff68u: goto label_15ff68;
        case 0x15ff6cu: goto label_15ff6c;
        case 0x15ff70u: goto label_15ff70;
        case 0x15ff74u: goto label_15ff74;
        case 0x15ff78u: goto label_15ff78;
        case 0x15ff7cu: goto label_15ff7c;
        case 0x15ff80u: goto label_15ff80;
        case 0x15ff84u: goto label_15ff84;
        case 0x15ff88u: goto label_15ff88;
        case 0x15ff8cu: goto label_15ff8c;
        case 0x15ff90u: goto label_15ff90;
        case 0x15ff94u: goto label_15ff94;
        case 0x15ff98u: goto label_15ff98;
        case 0x15ff9cu: goto label_15ff9c;
        case 0x15ffa0u: goto label_15ffa0;
        case 0x15ffa4u: goto label_15ffa4;
        case 0x15ffa8u: goto label_15ffa8;
        case 0x15ffacu: goto label_15ffac;
        case 0x15ffb0u: goto label_15ffb0;
        case 0x15ffb4u: goto label_15ffb4;
        case 0x15ffb8u: goto label_15ffb8;
        case 0x15ffbcu: goto label_15ffbc;
        case 0x15ffc0u: goto label_15ffc0;
        case 0x15ffc4u: goto label_15ffc4;
        case 0x15ffc8u: goto label_15ffc8;
        case 0x15ffccu: goto label_15ffcc;
        case 0x15ffd0u: goto label_15ffd0;
        case 0x15ffd4u: goto label_15ffd4;
        case 0x15ffd8u: goto label_15ffd8;
        case 0x15ffdcu: goto label_15ffdc;
        case 0x15ffe0u: goto label_15ffe0;
        case 0x15ffe4u: goto label_15ffe4;
        case 0x15ffe8u: goto label_15ffe8;
        case 0x15ffecu: goto label_15ffec;
        case 0x15fff0u: goto label_15fff0;
        case 0x15fff4u: goto label_15fff4;
        case 0x15fff8u: goto label_15fff8;
        case 0x15fffcu: goto label_15fffc;
        case 0x160000u: goto label_160000;
        case 0x160004u: goto label_160004;
        case 0x160008u: goto label_160008;
        case 0x16000cu: goto label_16000c;
        case 0x160010u: goto label_160010;
        case 0x160014u: goto label_160014;
        case 0x160018u: goto label_160018;
        case 0x16001cu: goto label_16001c;
        case 0x160020u: goto label_160020;
        case 0x160024u: goto label_160024;
        case 0x160028u: goto label_160028;
        case 0x16002cu: goto label_16002c;
        case 0x160030u: goto label_160030;
        case 0x160034u: goto label_160034;
        case 0x160038u: goto label_160038;
        case 0x16003cu: goto label_16003c;
        case 0x160040u: goto label_160040;
        case 0x160044u: goto label_160044;
        case 0x160048u: goto label_160048;
        case 0x16004cu: goto label_16004c;
        case 0x160050u: goto label_160050;
        case 0x160054u: goto label_160054;
        case 0x160058u: goto label_160058;
        case 0x16005cu: goto label_16005c;
        case 0x160060u: goto label_160060;
        case 0x160064u: goto label_160064;
        case 0x160068u: goto label_160068;
        case 0x16006cu: goto label_16006c;
        case 0x160070u: goto label_160070;
        case 0x160074u: goto label_160074;
        case 0x160078u: goto label_160078;
        case 0x16007cu: goto label_16007c;
        case 0x160080u: goto label_160080;
        case 0x160084u: goto label_160084;
        case 0x160088u: goto label_160088;
        case 0x16008cu: goto label_16008c;
        case 0x160090u: goto label_160090;
        case 0x160094u: goto label_160094;
        case 0x160098u: goto label_160098;
        case 0x16009cu: goto label_16009c;
        case 0x1600a0u: goto label_1600a0;
        case 0x1600a4u: goto label_1600a4;
        case 0x1600a8u: goto label_1600a8;
        case 0x1600acu: goto label_1600ac;
        case 0x1600b0u: goto label_1600b0;
        case 0x1600b4u: goto label_1600b4;
        case 0x1600b8u: goto label_1600b8;
        case 0x1600bcu: goto label_1600bc;
        case 0x1600c0u: goto label_1600c0;
        case 0x1600c4u: goto label_1600c4;
        case 0x1600c8u: goto label_1600c8;
        case 0x1600ccu: goto label_1600cc;
        case 0x1600d0u: goto label_1600d0;
        case 0x1600d4u: goto label_1600d4;
        case 0x1600d8u: goto label_1600d8;
        case 0x1600dcu: goto label_1600dc;
        case 0x1600e0u: goto label_1600e0;
        case 0x1600e4u: goto label_1600e4;
        case 0x1600e8u: goto label_1600e8;
        case 0x1600ecu: goto label_1600ec;
        case 0x1600f0u: goto label_1600f0;
        case 0x1600f4u: goto label_1600f4;
        case 0x1600f8u: goto label_1600f8;
        case 0x1600fcu: goto label_1600fc;
        case 0x160100u: goto label_160100;
        case 0x160104u: goto label_160104;
        case 0x160108u: goto label_160108;
        case 0x16010cu: goto label_16010c;
        case 0x160110u: goto label_160110;
        case 0x160114u: goto label_160114;
        case 0x160118u: goto label_160118;
        case 0x16011cu: goto label_16011c;
        case 0x160120u: goto label_160120;
        case 0x160124u: goto label_160124;
        case 0x160128u: goto label_160128;
        case 0x16012cu: goto label_16012c;
        case 0x160130u: goto label_160130;
        case 0x160134u: goto label_160134;
        case 0x160138u: goto label_160138;
        case 0x16013cu: goto label_16013c;
        case 0x160140u: goto label_160140;
        case 0x160144u: goto label_160144;
        case 0x160148u: goto label_160148;
        case 0x16014cu: goto label_16014c;
        case 0x160150u: goto label_160150;
        case 0x160154u: goto label_160154;
        case 0x160158u: goto label_160158;
        case 0x16015cu: goto label_16015c;
        case 0x160160u: goto label_160160;
        case 0x160164u: goto label_160164;
        case 0x160168u: goto label_160168;
        case 0x16016cu: goto label_16016c;
        case 0x160170u: goto label_160170;
        case 0x160174u: goto label_160174;
        case 0x160178u: goto label_160178;
        case 0x16017cu: goto label_16017c;
        case 0x160180u: goto label_160180;
        case 0x160184u: goto label_160184;
        case 0x160188u: goto label_160188;
        case 0x16018cu: goto label_16018c;
        case 0x160190u: goto label_160190;
        case 0x160194u: goto label_160194;
        case 0x160198u: goto label_160198;
        case 0x16019cu: goto label_16019c;
        case 0x1601a0u: goto label_1601a0;
        case 0x1601a4u: goto label_1601a4;
        case 0x1601a8u: goto label_1601a8;
        case 0x1601acu: goto label_1601ac;
        case 0x1601b0u: goto label_1601b0;
        case 0x1601b4u: goto label_1601b4;
        case 0x1601b8u: goto label_1601b8;
        case 0x1601bcu: goto label_1601bc;
        case 0x1601c0u: goto label_1601c0;
        case 0x1601c4u: goto label_1601c4;
        case 0x1601c8u: goto label_1601c8;
        case 0x1601ccu: goto label_1601cc;
        case 0x1601d0u: goto label_1601d0;
        case 0x1601d4u: goto label_1601d4;
        case 0x1601d8u: goto label_1601d8;
        case 0x1601dcu: goto label_1601dc;
        case 0x1601e0u: goto label_1601e0;
        case 0x1601e4u: goto label_1601e4;
        case 0x1601e8u: goto label_1601e8;
        case 0x1601ecu: goto label_1601ec;
        case 0x1601f0u: goto label_1601f0;
        case 0x1601f4u: goto label_1601f4;
        case 0x1601f8u: goto label_1601f8;
        case 0x1601fcu: goto label_1601fc;
        case 0x160200u: goto label_160200;
        case 0x160204u: goto label_160204;
        case 0x160208u: goto label_160208;
        case 0x16020cu: goto label_16020c;
        case 0x160210u: goto label_160210;
        case 0x160214u: goto label_160214;
        case 0x160218u: goto label_160218;
        case 0x16021cu: goto label_16021c;
        case 0x160220u: goto label_160220;
        case 0x160224u: goto label_160224;
        case 0x160228u: goto label_160228;
        case 0x16022cu: goto label_16022c;
        case 0x160230u: goto label_160230;
        case 0x160234u: goto label_160234;
        case 0x160238u: goto label_160238;
        case 0x16023cu: goto label_16023c;
        case 0x160240u: goto label_160240;
        case 0x160244u: goto label_160244;
        case 0x160248u: goto label_160248;
        case 0x16024cu: goto label_16024c;
        case 0x160250u: goto label_160250;
        case 0x160254u: goto label_160254;
        case 0x160258u: goto label_160258;
        case 0x16025cu: goto label_16025c;
        case 0x160260u: goto label_160260;
        case 0x160264u: goto label_160264;
        case 0x160268u: goto label_160268;
        case 0x16026cu: goto label_16026c;
        case 0x160270u: goto label_160270;
        case 0x160274u: goto label_160274;
        case 0x160278u: goto label_160278;
        case 0x16027cu: goto label_16027c;
        case 0x160280u: goto label_160280;
        case 0x160284u: goto label_160284;
        case 0x160288u: goto label_160288;
        case 0x16028cu: goto label_16028c;
        case 0x160290u: goto label_160290;
        case 0x160294u: goto label_160294;
        case 0x160298u: goto label_160298;
        case 0x16029cu: goto label_16029c;
        case 0x1602a0u: goto label_1602a0;
        case 0x1602a4u: goto label_1602a4;
        case 0x1602a8u: goto label_1602a8;
        case 0x1602acu: goto label_1602ac;
        case 0x1602b0u: goto label_1602b0;
        case 0x1602b4u: goto label_1602b4;
        case 0x1602b8u: goto label_1602b8;
        case 0x1602bcu: goto label_1602bc;
        case 0x1602c0u: goto label_1602c0;
        case 0x1602c4u: goto label_1602c4;
        case 0x1602c8u: goto label_1602c8;
        case 0x1602ccu: goto label_1602cc;
        case 0x1602d0u: goto label_1602d0;
        case 0x1602d4u: goto label_1602d4;
        case 0x1602d8u: goto label_1602d8;
        case 0x1602dcu: goto label_1602dc;
        case 0x1602e0u: goto label_1602e0;
        case 0x1602e4u: goto label_1602e4;
        case 0x1602e8u: goto label_1602e8;
        case 0x1602ecu: goto label_1602ec;
        case 0x1602f0u: goto label_1602f0;
        case 0x1602f4u: goto label_1602f4;
        case 0x1602f8u: goto label_1602f8;
        case 0x1602fcu: goto label_1602fc;
        default: break;
    }

    ctx->pc = 0x15fa78u;

label_15fa78:
    // 0x15fa78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15fa78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_15fa7c:
    // 0x15fa7c: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x15fa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15fa80:
    // 0x15fa80: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x15fa80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_15fa84:
    // 0x15fa84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15fa84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15fa88:
    // 0x15fa88: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x15fa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_15fa8c:
    // 0x15fa8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15fa8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15fa90:
    // 0x15fa90: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x15fa90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_15fa94:
    // 0x15fa94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15fa94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15fa98:
    // 0x15fa98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15fa98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_15fa9c:
    // 0x15fa9c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15fa9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_15faa0:
    // 0x15faa0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x15faa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_15faa4:
    // 0x15faa4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x15faa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_15faa8:
    // 0x15faa8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x15faa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_15faac:
    // 0x15faac: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x15faacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_15fab0:
    // 0x15fab0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x15fab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_15fab4:
    // 0x15fab4: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x15fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_15fab8:
    // 0x15fab8: 0x8e640f38  lw          $a0, 0xF38($s3)
    ctx->pc = 0x15fab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3896)));
label_15fabc:
    // 0x15fabc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15fac0:
    // 0x15fac0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15fac4:
    // 0x15fac4: 0x8c513630  lw          $s1, 0x3630($v0)
    ctx->pc = 0x15fac4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
label_15fac8:
    // 0x15fac8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x15fac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_15facc:
    // 0x15facc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15faccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15fad0:
    // 0x15fad0: 0xc06135e  jal         func_184D78
label_15fad4:
    if (ctx->pc == 0x15FAD4u) {
        ctx->pc = 0x15FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FAD0u;
        // 0x15fad4: 0x8c450034  lw          $a1, 0x34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FAD8u;
        goto label_15fad8;
    }
    ctx->pc = 0x15FAD0u;
    SET_GPR_U32(ctx, 31, 0x15FAD8u);
    ctx->pc = 0x15FAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FAD0u;
    // 0x15fad4: 0x8c450034  lw          $a1, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184D78u, 0x15FAD0u, 0x15FAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FAD8u;
label_15fad8:
    // 0x15fad8: 0x8e740fbc  lw          $s4, 0xFBC($s3)
    ctx->pc = 0x15fad8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4028)));
label_15fadc:
    // 0x15fadc: 0x8e640f20  lw          $a0, 0xF20($s3)
    ctx->pc = 0x15fadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3872)));
label_15fae0:
    // 0x15fae0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15fae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15fae4:
    // 0x15fae4: 0x26820222  addiu       $v0, $s4, 0x222
    ctx->pc = 0x15fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 546));
label_15fae8:
    // 0x15fae8: 0x30457fff  andi        $a1, $v0, 0x7FFF
    ctx->pc = 0x15fae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_15faec:
    // 0x15faec: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
label_15faf0:
    if (ctx->pc == 0x15FAF0u) {
        ctx->pc = 0x15FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FAECu;
        // 0x15faf0: 0xae650fbc  sw          $a1, 0xFBC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4028), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FAF4u;
        goto label_15faf4;
    }
    ctx->pc = 0x15FAECu;
    {
        const bool branch_taken_0x15faec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FAECu;
        // 0x15faf0: 0xae650fbc  sw          $a1, 0xFBC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4028), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15faec) {
            ctx->pc = 0x15FB50u;
            goto label_15fb50;
        }
    }
    ctx->pc = 0x15FAF4u;
label_15faf4:
    // 0x15faf4: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x15faf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_15faf8:
    // 0x15faf8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_15fafc:
    if (ctx->pc == 0x15FAFCu) {
        ctx->pc = 0x15FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FAF8u;
        // 0x15fafc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FB00u;
        goto label_15fb00;
    }
    ctx->pc = 0x15FAF8u;
    {
        const bool branch_taken_0x15faf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FAF8u;
        // 0x15fafc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15faf8) {
            ctx->pc = 0x15FB18u;
            goto label_15fb18;
        }
    }
    ctx->pc = 0x15FB00u;
label_15fb00:
    // 0x15fb00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15fb04:
    // 0x15fb04: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
label_15fb08:
    if (ctx->pc == 0x15FB08u) {
        ctx->pc = 0x15FB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB04u;
        // 0x15fb08: 0x8e640f34  lw          $a0, 0xF34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3892)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FB0Cu;
        goto label_15fb0c;
    }
    ctx->pc = 0x15FB04u;
    {
        const bool branch_taken_0x15fb04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x15fb04) {
            ctx->pc = 0x15FB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FB04u;
            // 0x15fb08: 0x8e640f34  lw          $a0, 0xF34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3892)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FB28u;
            goto label_15fb28;
        }
    }
    ctx->pc = 0x15FB0Cu;
label_15fb0c:
    // 0x15fb0c: 0x100000ef  b           . + 4 + (0xEF << 2)
label_15fb10:
    if (ctx->pc == 0x15FB10u) {
        ctx->pc = 0x15FB14u;
        goto label_15fb14;
    }
    ctx->pc = 0x15FB0Cu;
    {
        const bool branch_taken_0x15fb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fb0c) {
            ctx->pc = 0x15FECCu;
            goto label_15fecc;
        }
    }
    ctx->pc = 0x15FB14u;
label_15fb14:
    // 0x15fb14: 0x0  nop
    ctx->pc = 0x15fb14u;
    // NOP
label_15fb18:
    // 0x15fb18: 0x10820039  beq         $a0, $v0, . + 4 + (0x39 << 2)
label_15fb1c:
    if (ctx->pc == 0x15FB1Cu) {
        ctx->pc = 0x15FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB18u;
        // 0x15fb1c: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FB20u;
        goto label_15fb20;
    }
    ctx->pc = 0x15FB18u;
    {
        const bool branch_taken_0x15fb18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x15FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB18u;
        // 0x15fb1c: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fb18) {
            ctx->pc = 0x15FC00u;
            goto label_15fc00;
        }
    }
    ctx->pc = 0x15FB20u;
label_15fb20:
    // 0x15fb20: 0x100000ea  b           . + 4 + (0xEA << 2)
label_15fb24:
    if (ctx->pc == 0x15FB24u) {
        ctx->pc = 0x15FB28u;
        goto label_15fb28;
    }
    ctx->pc = 0x15FB20u;
    {
        const bool branch_taken_0x15fb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fb20) {
            ctx->pc = 0x15FECCu;
            goto label_15fecc;
        }
    }
    ctx->pc = 0x15FB28u;
label_15fb28:
    // 0x15fb28: 0x52823  negu        $a1, $a1
    ctx->pc = 0x15fb28u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_15fb2c:
    // 0x15fb2c: 0xc06135e  jal         func_184D78
label_15fb30:
    if (ctx->pc == 0x15FB30u) {
        ctx->pc = 0x15FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB2Cu;
        // 0x15fb30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FB34u;
        goto label_15fb34;
    }
    ctx->pc = 0x15FB2Cu;
    SET_GPR_U32(ctx, 31, 0x15FB34u);
    ctx->pc = 0x15FB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FB2Cu;
    // 0x15fb30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184D78u, 0x15FB2Cu, 0x15FB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FB34u;
label_15fb34:
    // 0x15fb34: 0x8e620fbc  lw          $v0, 0xFBC($s3)
    ctx->pc = 0x15fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4028)));
label_15fb38:
    // 0x15fb38: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x15fb38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_15fb3c:
    // 0x15fb3c: 0x544000e3  bnel        $v0, $zero, . + 4 + (0xE3 << 2)
label_15fb40:
    if (ctx->pc == 0x15FB40u) {
        ctx->pc = 0x15FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB3Cu;
        // 0x15fb40: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FB44u;
        goto label_15fb44;
    }
    ctx->pc = 0x15FB3Cu;
    {
        const bool branch_taken_0x15fb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fb3c) {
            ctx->pc = 0x15FB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FB3Cu;
            // 0x15fb40: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FECCu;
            goto label_15fecc;
        }
    }
    ctx->pc = 0x15FB44u;
label_15fb44:
    // 0x15fb44: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_15fb48:
    if (ctx->pc == 0x15FB48u) {
        ctx->pc = 0x15FB4Cu;
        goto label_15fb4c;
    }
    ctx->pc = 0x15FB44u;
    {
        const bool branch_taken_0x15fb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fb44) {
            ctx->pc = 0x15FECCu;
            goto label_15fecc;
        }
    }
    ctx->pc = 0x15FB4Cu;
label_15fb4c:
    // 0x15fb4c: 0x0  nop
    ctx->pc = 0x15fb4cu;
    // NOP
label_15fb50:
    // 0x15fb50: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x15fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_15fb54:
    // 0x15fb54: 0x3442b333  ori         $v0, $v0, 0xB333
    ctx->pc = 0x15fb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45875);
label_15fb58:
    // 0x15fb58: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x15fb58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_15fb5c:
    // 0x15fb5c: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x15fb5cu;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
label_15fb60:
    // 0x15fb60: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x15fb60u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
label_15fb64:
    // 0x15fb64: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x15fb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_15fb68:
    // 0x15fb68: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x15fb68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_15fb6c:
    // 0x15fb6c: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x15fb6cu;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
label_15fb70:
    // 0x15fb70: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x15fb70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
label_15fb74:
    // 0x15fb74: 0xae630fc0  sw          $v1, 0xFC0($s3)
    ctx->pc = 0x15fb74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4032), GPR_U32(ctx, 3));
label_15fb78:
    // 0x15fb78: 0x3402f999  ori         $v0, $zero, 0xF999
    ctx->pc = 0x15fb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63897);
label_15fb7c:
    // 0x15fb7c: 0x70a210e8  pminw       $v0, $a1, $v0
    ctx->pc = 0x15fb7cu;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
label_15fb80:
    // 0x15fb80: 0x22800  sll         $a1, $v0, 0
    ctx->pc = 0x15fb80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_15fb84:
    // 0x15fb84: 0x8e630fc8  lw          $v1, 0xFC8($s3)
    ctx->pc = 0x15fb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4040)));
label_15fb88:
    // 0x15fb88: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_15fb8c:
    if (ctx->pc == 0x15FB8Cu) {
        ctx->pc = 0x15FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB88u;
        // 0x15fb8c: 0x8e640f34  lw          $a0, 0xF34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3892)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FB90u;
        goto label_15fb90;
    }
    ctx->pc = 0x15FB88u;
    {
        const bool branch_taken_0x15fb88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fb88) {
            ctx->pc = 0x15FB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FB88u;
            // 0x15fb8c: 0x8e640f34  lw          $a0, 0xF34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3892)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FBA4u;
            goto label_15fba4;
        }
    }
    ctx->pc = 0x15FB90u;
label_15fb90:
    // 0x15fb90: 0x24026000  addiu       $v0, $zero, 0x6000
    ctx->pc = 0x15fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
label_15fb94:
    // 0x15fb94: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x15fb94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_15fb98:
    // 0x15fb98: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x15fb98u;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
label_15fb9c:
    // 0x15fb9c: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x15fb9cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
label_15fba0:
    // 0x15fba0: 0x8e640f34  lw          $a0, 0xF34($s3)
    ctx->pc = 0x15fba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3892)));
label_15fba4:
    // 0x15fba4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x15fba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15fba8:
    // 0x15fba8: 0xc061372  jal         func_184DC8
label_15fbac:
    if (ctx->pc == 0x15FBACu) {
        ctx->pc = 0x15FBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBA8u;
        // 0x15fbac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FBB0u;
        goto label_15fbb0;
    }
    ctx->pc = 0x15FBA8u;
    SET_GPR_U32(ctx, 31, 0x15FBB0u);
    ctx->pc = 0x15FBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FBA8u;
    // 0x15fbac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184DC8u, 0x15FBA8u, 0x15FBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FBB0u;
label_15fbb0:
    // 0x15fbb0: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x15fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_15fbb4:
    // 0x15fbb4: 0x8e640fbc  lw          $a0, 0xFBC($s3)
    ctx->pc = 0x15fbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4028)));
label_15fbb8:
    // 0x15fbb8: 0x24036000  addiu       $v1, $zero, 0x6000
    ctx->pc = 0x15fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
label_15fbbc:
    // 0x15fbbc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x15fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15fbc0:
    // 0x15fbc0: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x15fbc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_15fbc4:
    // 0x15fbc4: 0x70001030  pmfhl.lw    $v0
    ctx->pc = 0x15fbc4u;
    SET_GPR_VEC(ctx, 2, PS2_PMFHL_LW(ctx->hi, ctx->lo));
label_15fbc8:
    // 0x15fbc8: 0x213fb  dsra        $v0, $v0, 15
    ctx->pc = 0x15fbc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 15);
label_15fbcc:
    // 0x15fbcc: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x15fbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_15fbd0:
    // 0x15fbd0: 0x705210c8  pmaxw       $v0, $v0, $s2
    ctx->pc = 0x15fbd0u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 18)));
label_15fbd4:
    // 0x15fbd4: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x15fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_15fbd8:
    // 0x15fbd8: 0x704410e8  pminw       $v0, $v0, $a0
    ctx->pc = 0x15fbd8u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_15fbdc:
    // 0x15fbdc: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x15fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_15fbe0:
    // 0x15fbe0: 0x8e640f34  lw          $a0, 0xF34($s3)
    ctx->pc = 0x15fbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3892)));
label_15fbe4:
    // 0x15fbe4: 0xa0820157  sb          $v0, 0x157($a0)
    ctx->pc = 0x15fbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 343), (uint8_t)GPR_U32(ctx, 2));
label_15fbe8:
    // 0x15fbe8: 0x8e630fbc  lw          $v1, 0xFBC($s3)
    ctx->pc = 0x15fbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4028)));
label_15fbec:
    // 0x15fbec: 0x74182a  slt         $v1, $v1, $s4
    ctx->pc = 0x15fbecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_15fbf0:
    // 0x15fbf0: 0x546000b6  bnel        $v1, $zero, . + 4 + (0xB6 << 2)
label_15fbf4:
    if (ctx->pc == 0x15FBF4u) {
        ctx->pc = 0x15FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBF0u;
        // 0x15fbf4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FBF8u;
        goto label_15fbf8;
    }
    ctx->pc = 0x15FBF0u;
    {
        const bool branch_taken_0x15fbf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fbf0) {
            ctx->pc = 0x15FBF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FBF0u;
            // 0x15fbf4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FECCu;
            goto label_15fecc;
        }
    }
    ctx->pc = 0x15FBF8u;
label_15fbf8:
    // 0x15fbf8: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_15fbfc:
    if (ctx->pc == 0x15FBFCu) {
        ctx->pc = 0x15FC00u;
        goto label_15fc00;
    }
    ctx->pc = 0x15FBF8u;
    {
        const bool branch_taken_0x15fbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fbf8) {
            ctx->pc = 0x15FECCu;
            goto label_15fecc;
        }
    }
    ctx->pc = 0x15FC00u;
label_15fc00:
    // 0x15fc00: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x15fc00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_15fc04:
    // 0x15fc04: 0x70001030  pmfhl.lw    $v0
    ctx->pc = 0x15fc04u;
    SET_GPR_VEC(ctx, 2, PS2_PMFHL_LW(ctx->hi, ctx->lo));
label_15fc08:
    // 0x15fc08: 0x213fb  dsra        $v0, $v0, 15
    ctx->pc = 0x15fc08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 15);
label_15fc0c:
    // 0x15fc0c: 0x2442ff9c  addiu       $v0, $v0, -0x64
    ctx->pc = 0x15fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_15fc10:
    // 0x15fc10: 0x2403ffc6  addiu       $v1, $zero, -0x3A
    ctx->pc = 0x15fc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967238));
label_15fc14:
    // 0x15fc14: 0xae620fc0  sw          $v0, 0xFC0($s3)
    ctx->pc = 0x15fc14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4032), GPR_U32(ctx, 2));
label_15fc18:
    // 0x15fc18: 0x2404003a  addiu       $a0, $zero, 0x3A
    ctx->pc = 0x15fc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_15fc1c:
    // 0x15fc1c: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x15fc1cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_15fc20:
    // 0x15fc20: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x15fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_15fc24:
    // 0x15fc24: 0x704410e8  pminw       $v0, $v0, $a0
    ctx->pc = 0x15fc24u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_15fc28:
    // 0x15fc28: 0x28000  sll         $s0, $v0, 0
    ctx->pc = 0x15fc28u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_15fc2c:
    // 0x15fc2c: 0x8e630fc8  lw          $v1, 0xFC8($s3)
    ctx->pc = 0x15fc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4040)));
label_15fc30:
    // 0x15fc30: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
label_15fc34:
    if (ctx->pc == 0x15FC34u) {
        ctx->pc = 0x15FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC30u;
        // 0x15fc34: 0x8e660f2c  lw          $a2, 0xF2C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3884)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FC38u;
        goto label_15fc38;
    }
    ctx->pc = 0x15FC30u;
    {
        const bool branch_taken_0x15fc30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fc30) {
            ctx->pc = 0x15FC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FC30u;
            // 0x15fc34: 0x8e660f2c  lw          $a2, 0xF2C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3884)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FC68u;
            goto label_15fc68;
        }
    }
    ctx->pc = 0x15FC38u;
label_15fc38:
    // 0x15fc38: 0x24066000  addiu       $a2, $zero, 0x6000
    ctx->pc = 0x15fc38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
label_15fc3c:
    // 0x15fc3c: 0x2060018  mult        $zero, $s0, $a2
    ctx->pc = 0x15fc3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_15fc40:
    // 0x15fc40: 0x70003030  pmfhl.lw    $a2
    ctx->pc = 0x15fc40u;
    SET_GPR_VEC(ctx, 6, PS2_PMFHL_LW(ctx->hi, ctx->lo));
label_15fc44:
    // 0x15fc44: 0x633fb  dsra        $a2, $a2, 15
    ctx->pc = 0x15fc44u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> 15);
label_15fc48:
    // 0x15fc48: 0x8e620f2c  lw          $v0, 0xF2C($s3)
    ctx->pc = 0x15fc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3884)));
label_15fc4c:
    // 0x15fc4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15fc4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15fc50:
    // 0x15fc50: 0x8e640f34  lw          $a0, 0xF34($s3)
    ctx->pc = 0x15fc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3892)));
label_15fc54:
    // 0x15fc54: 0x8e650f28  lw          $a1, 0xF28($s3)
    ctx->pc = 0x15fc54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3880)));
label_15fc58:
    // 0x15fc58: 0xc061344  jal         func_184D10
label_15fc5c:
    if (ctx->pc == 0x15FC5Cu) {
        ctx->pc = 0x15FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC58u;
        // 0x15fc5c: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FC60u;
        goto label_15fc60;
    }
    ctx->pc = 0x15FC58u;
    SET_GPR_U32(ctx, 31, 0x15FC60u);
    ctx->pc = 0x15FC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FC58u;
    // 0x15fc5c: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184D10u, 0x15FC58u, 0x15FC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FC60u;
label_15fc60:
    // 0x15fc60: 0x10000006  b           . + 4 + (0x6 << 2)
label_15fc64:
    if (ctx->pc == 0x15FC64u) {
        ctx->pc = 0x15FC68u;
        goto label_15fc68;
    }
    ctx->pc = 0x15FC60u;
    {
        const bool branch_taken_0x15fc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fc60) {
            ctx->pc = 0x15FC7Cu;
            goto label_15fc7c;
        }
    }
    ctx->pc = 0x15FC68u;
label_15fc68:
    // 0x15fc68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15fc68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15fc6c:
    // 0x15fc6c: 0x8e640f34  lw          $a0, 0xF34($s3)
    ctx->pc = 0x15fc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3892)));
label_15fc70:
    // 0x15fc70: 0x8e650f28  lw          $a1, 0xF28($s3)
    ctx->pc = 0x15fc70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3880)));
label_15fc74:
    // 0x15fc74: 0xc061344  jal         func_184D10
label_15fc78:
    if (ctx->pc == 0x15FC78u) {
        ctx->pc = 0x15FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC74u;
        // 0x15fc78: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FC7Cu;
        goto label_15fc7c;
    }
    ctx->pc = 0x15FC74u;
    SET_GPR_U32(ctx, 31, 0x15FC7Cu);
    ctx->pc = 0x15FC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FC74u;
    // 0x15fc78: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184D10u, 0x15FC74u, 0x15FC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FC7Cu;
label_15fc7c:
    // 0x15fc7c: 0x6030081  bgezl       $s0, . + 4 + (0x81 << 2)
label_15fc80:
    if (ctx->pc == 0x15FC80u) {
        ctx->pc = 0x15FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC7Cu;
        // 0x15fc80: 0x8e630fc0  lw          $v1, 0xFC0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4032)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FC84u;
        goto label_15fc84;
    }
    ctx->pc = 0x15FC7Cu;
    {
        const bool branch_taken_0x15fc7c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x15fc7c) {
            ctx->pc = 0x15FC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FC7Cu;
            // 0x15fc80: 0x8e630fc0  lw          $v1, 0xFC0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4032)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FE84u;
            goto label_15fe84;
        }
    }
    ctx->pc = 0x15FC84u;
label_15fc84:
    // 0x15fc84: 0x8e680f34  lw          $t0, 0xF34($s3)
    ctx->pc = 0x15fc84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3892)));
label_15fc88:
    // 0x15fc88: 0x2607003a  addiu       $a3, $s0, 0x3A
    ctx->pc = 0x15fc88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 58));
label_15fc8c:
    // 0x15fc8c: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x15fc8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_15fc90:
    // 0x15fc90: 0x95020204  lhu         $v0, 0x204($t0)
    ctx->pc = 0x15fc90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 516)));
label_15fc94:
    // 0x15fc94: 0x25060150  addiu       $a2, $t0, 0x150
    ctx->pc = 0x15fc94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 336));
label_15fc98:
    // 0x15fc98: 0x95040206  lhu         $a0, 0x206($t0)
    ctx->pc = 0x15fc98u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 518)));
label_15fc9c:
    // 0x15fc9c: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x15fc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15fca0:
    // 0x15fca0: 0x94ca0008  lhu         $t2, 0x8($a2)
    ctx->pc = 0x15fca0u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
label_15fca4:
    // 0x15fca4: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x15fca4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
label_15fca8:
    // 0x15fca8: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x15fca8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_15fcac:
    // 0x15fcac: 0x51bc0  sll         $v1, $a1, 15
    ctx->pc = 0x15fcacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
label_15fcb0:
    // 0x15fcb0: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x15fcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_15fcb4:
    // 0x15fcb4: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x15fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
label_15fcb8:
    // 0x15fcb8: 0xa4c20050  sh          $v0, 0x50($a2)
    ctx->pc = 0x15fcb8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 80), (uint16_t)GPR_U32(ctx, 2));
label_15fcbc:
    // 0x15fcbc: 0xa4c40052  sh          $a0, 0x52($a2)
    ctx->pc = 0x15fcbcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 82), (uint16_t)GPR_U32(ctx, 4));
label_15fcc0:
    // 0x15fcc0: 0x1431807  srav        $v1, $v1, $t2
    ctx->pc = 0x15fcc0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 10) & 0x1F));
label_15fcc4:
    // 0x15fcc4: 0xa4cb0054  sh          $t3, 0x54($a2)
    ctx->pc = 0x15fcc4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 84), (uint16_t)GPR_U32(ctx, 11));
label_15fcc8:
    // 0x15fcc8: 0xa4c70056  sh          $a3, 0x56($a2)
    ctx->pc = 0x15fcc8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 86), (uint16_t)GPR_U32(ctx, 7));
label_15fccc:
    // 0x15fccc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x15fcccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_15fcd0:
    // 0x15fcd0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x15fcd0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_15fcd4:
    // 0x15fcd4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15fcd4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_15fcd8:
    // 0x15fcd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fcd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15fcdc:
    // 0x15fcdc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x15fcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_15fce0:
    // 0x15fce0: 0x94c9000a  lhu         $t1, 0xA($a2)
    ctx->pc = 0x15fce0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
label_15fce4:
    // 0x15fce4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x15fce4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_15fce8:
    // 0x15fce8: 0xe4c00060  swc1        $f0, 0x60($a2)
    ctx->pc = 0x15fce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 96), bits); }
label_15fcec:
    // 0x15fcec: 0x41bc0  sll         $v1, $a0, 15
    ctx->pc = 0x15fcecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
label_15fcf0:
    // 0x15fcf0: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x15fcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
label_15fcf4:
    // 0x15fcf4: 0x1231807  srav        $v1, $v1, $t1
    ctx->pc = 0x15fcf4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 9) & 0x1F));
label_15fcf8:
    // 0x15fcf8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x15fcf8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_15fcfc:
    // 0x15fcfc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x15fcfcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_15fd00:
    // 0x15fd00: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15fd00u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_15fd04:
    // 0x15fd04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fd04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15fd08:
    // 0x15fd08: 0x52bc0  sll         $a1, $a1, 15
    ctx->pc = 0x15fd08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
label_15fd0c:
    // 0x15fd0c: 0xe4c00064  swc1        $f0, 0x64($a2)
    ctx->pc = 0x15fd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 100), bits); }
label_15fd10:
    // 0x15fd10: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15fd10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_15fd14:
    // 0x15fd14: 0x3421c000  ori         $at, $at, 0xC000
    ctx->pc = 0x15fd14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49152);
label_15fd18:
    // 0x15fd18: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x15fd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
label_15fd1c:
    // 0x15fd1c: 0x1452807  srav        $a1, $a1, $t2
    ctx->pc = 0x15fd1cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 10) & 0x1F));
label_15fd20:
    // 0x15fd20: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x15fd20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_15fd24:
    // 0x15fd24: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x15fd24u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_15fd28:
    // 0x15fd28: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15fd28u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_15fd2c:
    // 0x15fd2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fd2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15fd30:
    // 0x15fd30: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x15fd30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_15fd34:
    // 0x15fd34: 0xe4c00068  swc1        $f0, 0x68($a2)
    ctx->pc = 0x15fd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 104), bits); }
label_15fd38:
    // 0x15fd38: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x15fd38u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_15fd3c:
    // 0x15fd3c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x15fd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_15fd40:
    // 0x15fd40: 0x423c0  sll         $a0, $a0, 15
    ctx->pc = 0x15fd40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
label_15fd44:
    // 0x15fd44: 0x2484c000  addiu       $a0, $a0, -0x4000
    ctx->pc = 0x15fd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950912));
label_15fd48:
    // 0x15fd48: 0x1242007  srav        $a0, $a0, $t1
    ctx->pc = 0x15fd48u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 9) & 0x1F));
label_15fd4c:
    // 0x15fd4c: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x15fd4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_15fd50:
    // 0x15fd50: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x15fd50u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_15fd54:
    // 0x15fd54: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15fd54u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_15fd58:
    // 0x15fd58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15fd58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15fd5c:
    // 0x15fd5c: 0x44872000  mtc1        $a3, $f4
    ctx->pc = 0x15fd5cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_15fd60:
    // 0x15fd60: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x15fd60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_15fd64:
    // 0x15fd64: 0x25070180  addiu       $a3, $t0, 0x180
    ctx->pc = 0x15fd64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 384));
label_15fd68:
    // 0x15fd68: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x15fd68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_15fd6c:
    // 0x15fd6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15fd6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15fd70:
    // 0x15fd70: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x15fd70u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15fd74:
    // 0x15fd74: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x15fd74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_15fd78:
    // 0x15fd78: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x15fd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
label_15fd7c:
    // 0x15fd7c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x15fd7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_15fd80:
    // 0x15fd80: 0xe4c1006c  swc1        $f1, 0x6C($a2)
    ctx->pc = 0x15fd80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 108), bits); }
label_15fd84:
    // 0x15fd84: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x15fd84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_15fd88:
    // 0x15fd88: 0xa4c0000e  sh          $zero, 0xE($a2)
    ctx->pc = 0x15fd88u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 0));
label_15fd8c:
    // 0x15fd8c: 0xe4c20028  swc1        $f2, 0x28($a2)
    ctx->pc = 0x15fd8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
label_15fd90:
    // 0x15fd90: 0x460028c7  neg.s       $f3, $f5
    ctx->pc = 0x15fd90u;
    ctx->f[3] = FPU_NEG_S(ctx->f[5]);
label_15fd94:
    // 0x15fd94: 0xe4c4002c  swc1        $f4, 0x2C($a2)
    ctx->pc = 0x15fd94u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
label_15fd98:
    // 0x15fd98: 0xe4c50020  swc1        $f5, 0x20($a2)
    ctx->pc = 0x15fd98u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
label_15fd9c:
    // 0x15fd9c: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x15fd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
label_15fda0:
    // 0x15fda0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15fda0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15fda4:
    // 0x15fda4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15fda4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15fda8:
    // 0x15fda8: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x15fda8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15fdac:
    // 0x15fdac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15fdacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15fdb0:
    // 0x15fdb0: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15fdb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15fdb4:
    // 0x15fdb4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15fdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15fdb8:
    // 0x15fdb8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15fdb8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15fdbc:
    // 0x15fdbc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15fdbcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15fdc0:
    // 0x15fdc0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15fdc0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15fdc4:
    // 0x15fdc4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15fdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15fdc8:
    // 0x15fdc8: 0x25080190  addiu       $t0, $t0, 0x190
    ctx->pc = 0x15fdc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 400));
label_15fdcc:
    // 0x15fdcc: 0xc4c1002c  lwc1        $f1, 0x2C($a2)
    ctx->pc = 0x15fdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15fdd0:
    // 0x15fdd0: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x15fdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15fdd4:
    // 0x15fdd4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15fdd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15fdd8:
    // 0x15fdd8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15fdd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15fddc:
    // 0x15fddc: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15fddcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15fde0:
    // 0x15fde0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15fde0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15fde4:
    // 0x15fde4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15fde4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15fde8:
    // 0x15fde8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15fde8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15fdec:
    // 0x15fdec: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15fdecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15fdf0:
    // 0x15fdf0: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x15fdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
label_15fdf4:
    // 0x15fdf4: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x15fdf4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_15fdf8:
    // 0x15fdf8: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15fdf8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15fdfc:
    // 0x15fdfc: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15fdfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15fe00:
    // 0x15fe00: 0xf9020000  sqc2        $vf2, 0x0($t0)
    ctx->pc = 0x15fe00u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_15fe04:
    // 0x15fe04: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x15fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15fe08:
    // 0x15fe08: 0x8e660f34  lw          $a2, 0xF34($s3)
    ctx->pc = 0x15fe08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3892)));
label_15fe0c:
    // 0x15fe0c: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x15fe0cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
label_15fe10:
    // 0x15fe10: 0x24c70150  addiu       $a3, $a2, 0x150
    ctx->pc = 0x15fe10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 336));
label_15fe14:
    // 0x15fe14: 0x24c80180  addiu       $t0, $a2, 0x180
    ctx->pc = 0x15fe14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
label_15fe18:
    // 0x15fe18: 0xe4e50020  swc1        $f5, 0x20($a3)
    ctx->pc = 0x15fe18u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
label_15fe1c:
    // 0x15fe1c: 0xa4e2000e  sh          $v0, 0xE($a3)
    ctx->pc = 0x15fe1cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 2));
label_15fe20:
    // 0x15fe20: 0xe4e40024  swc1        $f4, 0x24($a3)
    ctx->pc = 0x15fe20u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
label_15fe24:
    // 0x15fe24: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x15fe24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15fe28:
    // 0x15fe28: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15fe28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15fe2c:
    // 0x15fe2c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15fe2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15fe30:
    // 0x15fe30: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15fe30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15fe34:
    // 0x15fe34: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15fe34u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15fe38:
    // 0x15fe38: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15fe38u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15fe3c:
    // 0x15fe3c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15fe3cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15fe40:
    // 0x15fe40: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x15fe40u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
label_15fe44:
    // 0x15fe44: 0x24c60190  addiu       $a2, $a2, 0x190
    ctx->pc = 0x15fe44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 400));
label_15fe48:
    // 0x15fe48: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x15fe48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15fe4c:
    // 0x15fe4c: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x15fe4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15fe50:
    // 0x15fe50: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15fe50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15fe54:
    // 0x15fe54: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15fe54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15fe58:
    // 0x15fe58: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15fe58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15fe5c:
    // 0x15fe5c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15fe5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15fe60:
    // 0x15fe60: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15fe60u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15fe64:
    // 0x15fe64: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15fe64u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15fe68:
    // 0x15fe68: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15fe68u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15fe6c:
    // 0x15fe6c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15fe6cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15fe70:
    // 0x15fe70: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15fe70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15fe74:
    // 0x15fe74: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x15fe74u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_15fe78:
    // 0x15fe78: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15fe78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15fe7c:
    // 0x15fe7c: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15fe7cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_15fe80:
    // 0x15fe80: 0x8e630fc0  lw          $v1, 0xFC0($s3)
    ctx->pc = 0x15fe80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4032)));
label_15fe84:
    // 0x15fe84: 0x70031868  pabsw       $v1, $v1
    ctx->pc = 0x15fe84u;
    SET_GPR_VEC(ctx, 3, PS2_PABSW(GPR_VEC(ctx, 0)));
label_15fe88:
    // 0x15fe88: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x15fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_15fe8c:
    // 0x15fe8c: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x15fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_15fe90:
    // 0x15fe90: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15fe90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15fe94:
    // 0x15fe94: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x15fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_15fe98:
    // 0x15fe98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15fe98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15fe9c:
    // 0x15fe9c: 0x704410c8  pmaxw       $v0, $v0, $a0
    ctx->pc = 0x15fe9cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_15fea0:
    // 0x15fea0: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x15fea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_15fea4:
    // 0x15fea4: 0x704310e8  pminw       $v0, $v0, $v1
    ctx->pc = 0x15fea4u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_15fea8:
    // 0x15fea8: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x15fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_15feac:
    // 0x15feac: 0x8e630f34  lw          $v1, 0xF34($s3)
    ctx->pc = 0x15feacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3892)));
label_15feb0:
    // 0x15feb0: 0x2a844000  slti        $a0, $s4, 0x4000
    ctx->pc = 0x15feb0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16384) ? 1 : 0);
label_15feb4:
    // 0x15feb4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_15feb8:
    if (ctx->pc == 0x15FEB8u) {
        ctx->pc = 0x15FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FEB4u;
        // 0x15feb8: 0xa0620157  sb          $v0, 0x157($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 343), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FEBCu;
        goto label_15febc;
    }
    ctx->pc = 0x15FEB4u;
    {
        const bool branch_taken_0x15feb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FEB4u;
        // 0x15feb8: 0xa0620157  sb          $v0, 0x157($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 343), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15feb4) {
            ctx->pc = 0x15FECCu;
            goto label_15fecc;
        }
    }
    ctx->pc = 0x15FEBCu;
label_15febc:
    // 0x15febc: 0x8e620fbc  lw          $v0, 0xFBC($s3)
    ctx->pc = 0x15febcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4028)));
label_15fec0:
    // 0x15fec0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15fec4:
    // 0x15fec4: 0x28424000  slti        $v0, $v0, 0x4000
    ctx->pc = 0x15fec4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
label_15fec8:
    // 0x15fec8: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x15fec8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_15fecc:
    // 0x15fecc: 0x5240000d  beql        $s2, $zero, . + 4 + (0xD << 2)
label_15fed0:
    if (ctx->pc == 0x15FED0u) {
        ctx->pc = 0x15FED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FECCu;
        // 0x15fed0: 0x8e630f24  lw          $v1, 0xF24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FED4u;
        goto label_15fed4;
    }
    ctx->pc = 0x15FECCu;
    {
        const bool branch_taken_0x15fecc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fecc) {
            ctx->pc = 0x15FED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FECCu;
            // 0x15fed0: 0x8e630f24  lw          $v1, 0xF24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FF04u;
            goto label_15ff04;
        }
    }
    ctx->pc = 0x15FED4u;
label_15fed4:
    // 0x15fed4: 0x96620016  lhu         $v0, 0x16($s3)
    ctx->pc = 0x15fed4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_15fed8:
    // 0x15fed8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x15fed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_15fedc:
    // 0x15fedc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_15fee0:
    if (ctx->pc == 0x15FEE0u) {
        ctx->pc = 0x15FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FEDCu;
        // 0x15fee0: 0x8e630f24  lw          $v1, 0xF24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FEE4u;
        goto label_15fee4;
    }
    ctx->pc = 0x15FEDCu;
    {
        const bool branch_taken_0x15fedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fedc) {
            ctx->pc = 0x15FEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FEDCu;
            // 0x15fee0: 0x8e630f24  lw          $v1, 0xF24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FF04u;
            goto label_15ff04;
        }
    }
    ctx->pc = 0x15FEE4u;
label_15fee4:
    // 0x15fee4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x15fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15fee8:
    // 0x15fee8: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x15fee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_15feec:
    // 0x15feec: 0x24061999  addiu       $a2, $zero, 0x1999
    ctx->pc = 0x15feecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6553));
label_15fef0:
    // 0x15fef0: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x15fef0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_15fef4:
    // 0x15fef4: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x15fef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_15fef8:
    // 0x15fef8: 0xc0477ba  jal         func_11DEE8
label_15fefc:
    if (ctx->pc == 0x15FEFCu) {
        ctx->pc = 0x15FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FEF8u;
        // 0x15fefc: 0x34088000  ori         $t0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF00u;
        goto label_15ff00;
    }
    ctx->pc = 0x15FEF8u;
    SET_GPR_U32(ctx, 31, 0x15FF00u);
    ctx->pc = 0x15FEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FEF8u;
    // 0x15fefc: 0x34088000  ori         $t0, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DEE8u, 0x15FEF8u, 0x15FF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FF00u;
label_15ff00:
    // 0x15ff00: 0x8e630f24  lw          $v1, 0xF24($s3)
    ctx->pc = 0x15ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3876)));
label_15ff04:
    // 0x15ff04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15ff08:
    // 0x15ff08: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
label_15ff0c:
    if (ctx->pc == 0x15FF0Cu) {
        ctx->pc = 0x15FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF08u;
        // 0x15ff0c: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF10u;
        goto label_15ff10;
    }
    ctx->pc = 0x15FF08u;
    {
        const bool branch_taken_0x15ff08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15ff08) {
            ctx->pc = 0x15FF0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FF08u;
            // 0x15ff0c: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FF50u;
            goto label_15ff50;
        }
    }
    ctx->pc = 0x15FF10u;
label_15ff10:
    // 0x15ff10: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x15ff10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_15ff14:
    // 0x15ff14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_15ff18:
    if (ctx->pc == 0x15FF18u) {
        ctx->pc = 0x15FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF14u;
        // 0x15ff18: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF1Cu;
        goto label_15ff1c;
    }
    ctx->pc = 0x15FF14u;
    {
        const bool branch_taken_0x15ff14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF14u;
        // 0x15ff18: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff14) {
            ctx->pc = 0x15FF30u;
            goto label_15ff30;
        }
    }
    ctx->pc = 0x15FF1Cu;
label_15ff1c:
    // 0x15ff1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ff20:
    // 0x15ff20: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_15ff24:
    if (ctx->pc == 0x15FF24u) {
        ctx->pc = 0x15FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF20u;
        // 0x15ff24: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF28u;
        goto label_15ff28;
    }
    ctx->pc = 0x15FF20u;
    {
        const bool branch_taken_0x15ff20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF20u;
        // 0x15ff24: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff20) {
            ctx->pc = 0x15FF40u;
            goto label_15ff40;
        }
    }
    ctx->pc = 0x15FF28u;
label_15ff28:
    // 0x15ff28: 0x10000017  b           . + 4 + (0x17 << 2)
label_15ff2c:
    if (ctx->pc == 0x15FF2Cu) {
        ctx->pc = 0x15FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF28u;
        // 0x15ff2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF30u;
        goto label_15ff30;
    }
    ctx->pc = 0x15FF28u;
    {
        const bool branch_taken_0x15ff28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF28u;
        // 0x15ff2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff28) {
            ctx->pc = 0x15FF88u;
            goto label_15ff88;
        }
    }
    ctx->pc = 0x15FF30u;
label_15ff30:
    // 0x15ff30: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_15ff34:
    if (ctx->pc == 0x15FF34u) {
        ctx->pc = 0x15FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF30u;
        // 0x15ff34: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF38u;
        goto label_15ff38;
    }
    ctx->pc = 0x15FF30u;
    {
        const bool branch_taken_0x15ff30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF30u;
        // 0x15ff34: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff30) {
            ctx->pc = 0x15FF60u;
            goto label_15ff60;
        }
    }
    ctx->pc = 0x15FF38u;
label_15ff38:
    // 0x15ff38: 0x10000013  b           . + 4 + (0x13 << 2)
label_15ff3c:
    if (ctx->pc == 0x15FF3Cu) {
        ctx->pc = 0x15FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF38u;
        // 0x15ff3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF40u;
        goto label_15ff40;
    }
    ctx->pc = 0x15FF38u;
    {
        const bool branch_taken_0x15ff38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF38u;
        // 0x15ff3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff38) {
            ctx->pc = 0x15FF88u;
            goto label_15ff88;
        }
    }
    ctx->pc = 0x15FF40u;
label_15ff40:
    // 0x15ff40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ff40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15ff44:
    // 0x15ff44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15ff44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15ff48:
    // 0x15ff48: 0x10000008  b           . + 4 + (0x8 << 2)
label_15ff4c:
    if (ctx->pc == 0x15FF4Cu) {
        ctx->pc = 0x15FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF48u;
        // 0x15ff4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF50u;
        goto label_15ff50;
    }
    ctx->pc = 0x15FF48u;
    {
        const bool branch_taken_0x15ff48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF48u;
        // 0x15ff4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff48) {
            ctx->pc = 0x15FF6Cu;
            goto label_15ff6c;
        }
    }
    ctx->pc = 0x15FF50u;
label_15ff50:
    // 0x15ff50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ff50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15ff54:
    // 0x15ff54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15ff54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15ff58:
    // 0x15ff58: 0x10000004  b           . + 4 + (0x4 << 2)
label_15ff5c:
    if (ctx->pc == 0x15FF5Cu) {
        ctx->pc = 0x15FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF58u;
        // 0x15ff5c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF60u;
        goto label_15ff60;
    }
    ctx->pc = 0x15FF58u;
    {
        const bool branch_taken_0x15ff58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF58u;
        // 0x15ff5c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff58) {
            ctx->pc = 0x15FF6Cu;
            goto label_15ff6c;
        }
    }
    ctx->pc = 0x15FF60u;
label_15ff60:
    // 0x15ff60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ff60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15ff64:
    // 0x15ff64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15ff64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15ff68:
    // 0x15ff68: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x15ff68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15ff6c:
    // 0x15ff6c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15ff6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15ff70:
    // 0x15ff70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15ff70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ff74:
    // 0x15ff74: 0xc04dbd2  jal         func_136F48
label_15ff78:
    if (ctx->pc == 0x15FF78u) {
        ctx->pc = 0x15FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF74u;
        // 0x15ff78: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF7Cu;
        goto label_15ff7c;
    }
    ctx->pc = 0x15FF74u;
    SET_GPR_U32(ctx, 31, 0x15FF7Cu);
    ctx->pc = 0x15FF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FF74u;
    // 0x15ff78: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F48u, 0x15FF74u, 0x15FF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FF7Cu;
label_15ff7c:
    // 0x15ff7c: 0x10000009  b           . + 4 + (0x9 << 2)
label_15ff80:
    if (ctx->pc == 0x15FF80u) {
        ctx->pc = 0x15FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF7Cu;
        // 0x15ff80: 0x8e650fc8  lw          $a1, 0xFC8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4040)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF84u;
        goto label_15ff84;
    }
    ctx->pc = 0x15FF7Cu;
    {
        const bool branch_taken_0x15ff7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF7Cu;
        // 0x15ff80: 0x8e650fc8  lw          $a1, 0xFC8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff7c) {
            ctx->pc = 0x15FFA4u;
            goto label_15ffa4;
        }
    }
    ctx->pc = 0x15FF84u;
label_15ff84:
    // 0x15ff84: 0x0  nop
    ctx->pc = 0x15ff84u;
    // NOP
label_15ff88:
    // 0x15ff88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15ff88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15ff8c:
    // 0x15ff8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15ff8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ff90:
    // 0x15ff90: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15ff90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15ff94:
    // 0x15ff94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15ff94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ff98:
    // 0x15ff98: 0xc04dbd2  jal         func_136F48
label_15ff9c:
    if (ctx->pc == 0x15FF9Cu) {
        ctx->pc = 0x15FF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF98u;
        // 0x15ff9c: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FFA0u;
        goto label_15ffa0;
    }
    ctx->pc = 0x15FF98u;
    SET_GPR_U32(ctx, 31, 0x15FFA0u);
    ctx->pc = 0x15FF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FF98u;
    // 0x15ff9c: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F48u, 0x15FF98u, 0x15FFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FFA0u;
label_15ffa0:
    // 0x15ffa0: 0x8e650fc8  lw          $a1, 0xFC8($s3)
    ctx->pc = 0x15ffa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4040)));
label_15ffa4:
    // 0x15ffa4: 0x241e003a  addiu       $fp, $zero, 0x3A
    ctx->pc = 0x15ffa4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_15ffa8:
    // 0x15ffa8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x15ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_15ffac:
    // 0x15ffac: 0x8e640f20  lw          $a0, 0xF20($s3)
    ctx->pc = 0x15ffacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3872)));
label_15ffb0:
    // 0x15ffb0: 0x45f00b  movn        $fp, $v0, $a1
    ctx->pc = 0x15ffb0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 2));
label_15ffb4:
    // 0x15ffb4: 0x96630016  lhu         $v1, 0x16($s3)
    ctx->pc = 0x15ffb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_15ffb8:
    // 0x15ffb8: 0x3de2818  mult        $a1, $fp, $fp
    ctx->pc = 0x15ffb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_15ffbc:
    // 0x15ffbc: 0x38840003  xori        $a0, $a0, 0x3
    ctx->pc = 0x15ffbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)3);
label_15ffc0:
    // 0x15ffc0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x15ffc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_15ffc4:
    // 0x15ffc4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x15ffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_15ffc8:
    // 0x15ffc8: 0x146000ad  bnez        $v1, . + 4 + (0xAD << 2)
label_15ffcc:
    if (ctx->pc == 0x15FFCCu) {
        ctx->pc = 0x15FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFC8u;
        // 0x15ffcc: 0xa4f00b  movn        $fp, $a1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FFD0u;
        goto label_15ffd0;
    }
    ctx->pc = 0x15FFC8u;
    {
        const bool branch_taken_0x15ffc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFC8u;
        // 0x15ffcc: 0xa4f00b  movn        $fp, $a1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ffc8) {
            ctx->pc = 0x160280u;
            goto label_160280;
        }
    }
    ctx->pc = 0x15FFD0u;
label_15ffd0:
    // 0x15ffd0: 0x3c170020  lui         $s7, 0x20
    ctx->pc = 0x15ffd0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32 << 16));
label_15ffd4:
    // 0x15ffd4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15ffd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ffd8:
    // 0x15ffd8: 0x26f7bc50  addiu       $s7, $s7, -0x43B0
    ctx->pc = 0x15ffd8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949968));
label_15ffdc:
    // 0x15ffdc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x15ffdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_15ffe0:
    // 0x15ffe0: 0x8ee20400  lw          $v0, 0x400($s7)
    ctx->pc = 0x15ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1024)));
label_15ffe4:
    // 0x15ffe4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x15ffe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15ffe8:
    // 0x15ffe8: 0x104000a6  beqz        $v0, . + 4 + (0xA6 << 2)
label_15ffec:
    if (ctx->pc == 0x15FFECu) {
        ctx->pc = 0x15FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFE8u;
        // 0x15ffec: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FFF0u;
        goto label_15fff0;
    }
    ctx->pc = 0x15FFE8u;
    {
        const bool branch_taken_0x15ffe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFE8u;
        // 0x15ffec: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ffe8) {
            ctx->pc = 0x160284u;
            goto label_160284;
        }
    }
    ctx->pc = 0x15FFF0u;
label_15fff0:
    // 0x15fff0: 0x24050f30  addiu       $a1, $zero, 0xF30
    ctx->pc = 0x15fff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3888));
label_15fff4:
    // 0x15fff4: 0x24160082  addiu       $s6, $zero, 0x82
    ctx->pc = 0x15fff4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_15fff8:
    // 0x15fff8: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x15fff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_15fffc:
    // 0x15fffc: 0x241500fa  addiu       $s5, $zero, 0xFA
    ctx->pc = 0x15fffcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_160000:
    // 0x160000: 0xc6620fc4  lwc1        $f2, 0xFC4($s3)
    ctx->pc = 0x160000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_160004:
    // 0x160004: 0xc6e00010  lwc1        $f0, 0x10($s7)
    ctx->pc = 0x160004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_160008:
    // 0x160008: 0xc6e10018  lwc1        $f1, 0x18($s7)
    ctx->pc = 0x160008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16000c:
    // 0x16000c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x16000cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_160010:
    // 0x160010: 0x8e620f20  lw          $v0, 0xF20($s3)
    ctx->pc = 0x160010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3872)));
label_160014:
    // 0x160014: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x160014u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_160018:
    // 0x160018: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x160018u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_16001c:
    // 0x16001c: 0x44121000  mfc1        $s2, $f2
    ctx->pc = 0x16001cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_160020:
    // 0x160020: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x160020u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_160024:
    // 0x160024: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x160024u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_160028:
    // 0x160028: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x160028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16002c:
    // 0x16002c: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_160030:
    if (ctx->pc == 0x160030u) {
        ctx->pc = 0x160030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16002Cu;
        // 0x160030: 0x2521018  mult        $v0, $s2, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x160034u;
        goto label_160034;
    }
    ctx->pc = 0x16002Cu;
    {
        const bool branch_taken_0x16002c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x160030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16002Cu;
        // 0x160030: 0x2521018  mult        $v0, $s2, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16002c) {
            ctx->pc = 0x160050u;
            goto label_160050;
        }
    }
    ctx->pc = 0x160034u;
label_160034:
    // 0x160034: 0x72101818  mult1       $v1, $s0, $s0
    ctx->pc = 0x160034u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_160038:
    // 0x160038: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16003c:
    // 0x16003c: 0x5e102a  slt         $v0, $v0, $fp
    ctx->pc = 0x16003cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_160040:
    // 0x160040: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_160044:
    if (ctx->pc == 0x160044u) {
        ctx->pc = 0x160044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160040u;
        // 0x160044: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160048u;
        goto label_160048;
    }
    ctx->pc = 0x160040u;
    {
        const bool branch_taken_0x160040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160040) {
            ctx->pc = 0x160044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160040u;
            // 0x160044: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16007Cu;
            goto label_16007c;
        }
    }
    ctx->pc = 0x160048u;
label_160048:
    // 0x160048: 0x10000085  b           . + 4 + (0x85 << 2)
label_16004c:
    if (ctx->pc == 0x16004Cu) {
        ctx->pc = 0x16004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160048u;
        // 0x16004c: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160050u;
        goto label_160050;
    }
    ctx->pc = 0x160048u;
    {
        const bool branch_taken_0x160048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160048u;
        // 0x16004c: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160048) {
            ctx->pc = 0x160260u;
            goto label_160260;
        }
    }
    ctx->pc = 0x160050u;
label_160050:
    // 0x160050: 0x70121068  pabsw       $v0, $s2
    ctx->pc = 0x160050u;
    SET_GPR_VEC(ctx, 2, PS2_PABSW(GPR_VEC(ctx, 0)));
label_160054:
    // 0x160054: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x160054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_160058:
    // 0x160058: 0x5e102a  slt         $v0, $v0, $fp
    ctx->pc = 0x160058u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_16005c:
    // 0x16005c: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
label_160060:
    if (ctx->pc == 0x160060u) {
        ctx->pc = 0x160060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16005Cu;
        // 0x160060: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160064u;
        goto label_160064;
    }
    ctx->pc = 0x16005Cu;
    {
        const bool branch_taken_0x16005c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16005Cu;
        // 0x160060: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16005c) {
            ctx->pc = 0x160260u;
            goto label_160260;
        }
    }
    ctx->pc = 0x160064u;
label_160064:
    // 0x160064: 0x70101068  pabsw       $v0, $s0
    ctx->pc = 0x160064u;
    SET_GPR_VEC(ctx, 2, PS2_PABSW(GPR_VEC(ctx, 0)));
label_160068:
    // 0x160068: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x160068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_16006c:
    // 0x16006c: 0x5e102a  slt         $v0, $v0, $fp
    ctx->pc = 0x16006cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_160070:
    // 0x160070: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
label_160074:
    if (ctx->pc == 0x160074u) {
        ctx->pc = 0x160074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160070u;
        // 0x160074: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160078u;
        goto label_160078;
    }
    ctx->pc = 0x160070u;
    {
        const bool branch_taken_0x160070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160070u;
        // 0x160074: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160070) {
            ctx->pc = 0x160260u;
            goto label_160260;
        }
    }
    ctx->pc = 0x160078u;
label_160078:
    // 0x160078: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x160078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_16007c:
    // 0x16007c: 0x24110082  addiu       $s1, $zero, 0x82
    ctx->pc = 0x16007cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_160080:
    // 0x160080: 0x2651021  addu        $v0, $s3, $a1
    ctx->pc = 0x160080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_160084:
    // 0x160084: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x160084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_160088:
    // 0x160088: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x160088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_16008c:
    // 0x16008c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16008cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160090:
    // 0x160090: 0x8c54000c  lw          $s4, 0xC($v0)
    ctx->pc = 0x160090u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_160094:
    // 0x160094: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_160098:
    // 0x160098: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x160098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16009c:
    // 0x16009c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x16009cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1600a0:
    // 0x1600a0: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1600a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1600a4:
    // 0x1600a4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1600a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1600a8:
    // 0x1600a8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1600a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1600ac:
    // 0x1600ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1600acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1600b0:
    // 0x1600b0: 0x60f809  jalr        $v1
label_1600b4:
    if (ctx->pc == 0x1600B4u) {
        ctx->pc = 0x1600B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600B0u;
        // 0x1600b4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1600B8u;
        goto label_1600b8;
    }
    ctx->pc = 0x1600B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1600B8u);
        ctx->pc = 0x1600B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600B0u;
        // 0x1600b4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1600B0u, 0x1600B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1600B8u;
label_1600b8:
    // 0x1600b8: 0x8e650f28  lw          $a1, 0xF28($s3)
    ctx->pc = 0x1600b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3880)));
label_1600bc:
    // 0x1600bc: 0x8e660f2c  lw          $a2, 0xF2C($s3)
    ctx->pc = 0x1600bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3884)));
label_1600c0:
    // 0x1600c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1600c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1600c4:
    // 0x1600c4: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x1600c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_1600c8:
    // 0x1600c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1600c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1600cc:
    // 0x1600cc: 0xc061344  jal         func_184D10
label_1600d0:
    if (ctx->pc == 0x1600D0u) {
        ctx->pc = 0x1600D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600CCu;
        // 0x1600d0: 0xd03023  subu        $a2, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1600D4u;
        goto label_1600d4;
    }
    ctx->pc = 0x1600CCu;
    SET_GPR_U32(ctx, 31, 0x1600D4u);
    ctx->pc = 0x1600D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1600CCu;
    // 0x1600d0: 0xd03023  subu        $a2, $a2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184D10u, 0x1600CCu, 0x1600D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1600D4u;
label_1600d4:
    // 0x1600d4: 0x8e630f20  lw          $v1, 0xF20($s3)
    ctx->pc = 0x1600d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3872)));
label_1600d8:
    // 0x1600d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1600d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1600dc:
    // 0x1600dc: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
label_1600e0:
    if (ctx->pc == 0x1600E0u) {
        ctx->pc = 0x1600E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600DCu;
        // 0x1600e0: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1600E4u;
        goto label_1600e4;
    }
    ctx->pc = 0x1600DCu;
    {
        const bool branch_taken_0x1600dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1600E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600DCu;
        // 0x1600e0: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1600dc) {
            ctx->pc = 0x160168u;
            goto label_160168;
        }
    }
    ctx->pc = 0x1600E4u;
label_1600e4:
    // 0x1600e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1600e8:
    if (ctx->pc == 0x1600E8u) {
        ctx->pc = 0x1600E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600E4u;
        // 0x1600e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1600ECu;
        goto label_1600ec;
    }
    ctx->pc = 0x1600E4u;
    {
        const bool branch_taken_0x1600e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1600E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600E4u;
        // 0x1600e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1600e4) {
            ctx->pc = 0x160100u;
            goto label_160100;
        }
    }
    ctx->pc = 0x1600ECu;
label_1600ec:
    // 0x1600ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1600ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1600f0:
    // 0x1600f0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1600f4:
    if (ctx->pc == 0x1600F4u) {
        ctx->pc = 0x1600F8u;
        goto label_1600f8;
    }
    ctx->pc = 0x1600F0u;
    {
        const bool branch_taken_0x1600f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1600f0) {
            ctx->pc = 0x160110u;
            goto label_160110;
        }
    }
    ctx->pc = 0x1600F8u;
label_1600f8:
    // 0x1600f8: 0x10000039  b           . + 4 + (0x39 << 2)
label_1600fc:
    if (ctx->pc == 0x1600FCu) {
        ctx->pc = 0x1600FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600F8u;
        // 0x1600fc: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160100u;
        goto label_160100;
    }
    ctx->pc = 0x1600F8u;
    {
        const bool branch_taken_0x1600f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1600FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600F8u;
        // 0x1600fc: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1600f8) {
            ctx->pc = 0x1601E0u;
            goto label_1601e0;
        }
    }
    ctx->pc = 0x160100u;
label_160100:
    // 0x160100: 0x50650029  beql        $v1, $a1, . + 4 + (0x29 << 2)
label_160104:
    if (ctx->pc == 0x160104u) {
        ctx->pc = 0x160104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160100u;
        // 0x160104: 0x8e630fc0  lw          $v1, 0xFC0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4032)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160108u;
        goto label_160108;
    }
    ctx->pc = 0x160100u;
    {
        const bool branch_taken_0x160100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x160100) {
            ctx->pc = 0x160104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160100u;
            // 0x160104: 0x8e630fc0  lw          $v1, 0xFC0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4032)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1601A8u;
            goto label_1601a8;
        }
    }
    ctx->pc = 0x160108u;
label_160108:
    // 0x160108: 0x10000035  b           . + 4 + (0x35 << 2)
label_16010c:
    if (ctx->pc == 0x16010Cu) {
        ctx->pc = 0x16010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160108u;
        // 0x16010c: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160110u;
        goto label_160110;
    }
    ctx->pc = 0x160108u;
    {
        const bool branch_taken_0x160108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160108u;
        // 0x16010c: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160108) {
            ctx->pc = 0x1601E0u;
            goto label_1601e0;
        }
    }
    ctx->pc = 0x160110u;
label_160110:
    // 0x160110: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x160110u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_160114:
    // 0x160114: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x160114u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_160118:
    // 0x160118: 0x8e700fbc  lw          $s0, 0xFBC($s3)
    ctx->pc = 0x160118u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4028)));
label_16011c:
    // 0x16011c: 0x44926800  mtc1        $s2, $f13
    ctx->pc = 0x16011cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_160120:
    // 0x160120: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x160120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_160124:
    // 0x160124: 0x261011c7  addiu       $s0, $s0, 0x11C7
    ctx->pc = 0x160124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4551));
label_160128:
    // 0x160128: 0xc067a02  jal         func_19E808
label_16012c:
    if (ctx->pc == 0x16012Cu) {
        ctx->pc = 0x16012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160128u;
        // 0x16012c: 0x32107fff  andi        $s0, $s0, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        ctx->pc = 0x160130u;
        goto label_160130;
    }
    ctx->pc = 0x160128u;
    SET_GPR_U32(ctx, 31, 0x160130u);
    ctx->pc = 0x16012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160128u;
    // 0x16012c: 0x32107fff  andi        $s0, $s0, 0x7FFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x160128u, 0x160130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160130u;
label_160130:
    // 0x160130: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x160130u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_160134:
    // 0x160134: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x160134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
label_160138:
    // 0x160138: 0x28444000  slti        $a0, $v0, 0x4000
    ctx->pc = 0x160138u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
label_16013c:
    // 0x16013c: 0x24438000  addiu       $v1, $v0, -0x8000
    ctx->pc = 0x16013cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
label_160140:
    // 0x160140: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x160140u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_160144:
    // 0x160144: 0x4610025  bgez        $v1, . + 4 + (0x25 << 2)
label_160148:
    if (ctx->pc == 0x160148u) {
        ctx->pc = 0x160148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160144u;
        // 0x160148: 0x2405ce39  addiu       $a1, $zero, -0x31C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294954553));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16014Cu;
        goto label_16014c;
    }
    ctx->pc = 0x160144u;
    {
        const bool branch_taken_0x160144 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x160148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160144u;
        // 0x160148: 0x2405ce39  addiu       $a1, $zero, -0x31C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294954553));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160144) {
            ctx->pc = 0x1601DCu;
            goto label_1601dc;
        }
    }
    ctx->pc = 0x16014Cu;
label_16014c:
    // 0x16014c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x16014cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_160150:
    // 0x160150: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
label_160154:
    if (ctx->pc == 0x160154u) {
        ctx->pc = 0x160154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160150u;
        // 0x160154: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160158u;
        goto label_160158;
    }
    ctx->pc = 0x160150u;
    {
        const bool branch_taken_0x160150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160150) {
            ctx->pc = 0x160154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160150u;
            // 0x160154: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1601E0u;
            goto label_1601e0;
        }
    }
    ctx->pc = 0x160158u;
label_160158:
    // 0x160158: 0x246331c7  addiu       $v1, $v1, 0x31C7
    ctx->pc = 0x160158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12743));
label_16015c:
    // 0x16015c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_160160:
    if (ctx->pc == 0x160160u) {
        ctx->pc = 0x160160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16015Cu;
        // 0x160160: 0x38942  srl         $s1, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160164u;
        goto label_160164;
    }
    ctx->pc = 0x16015Cu;
    {
        const bool branch_taken_0x16015c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16015Cu;
        // 0x160160: 0x38942  srl         $s1, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16015c) {
            ctx->pc = 0x1601CCu;
            goto label_1601cc;
        }
    }
    ctx->pc = 0x160164u;
label_160164:
    // 0x160164: 0x0  nop
    ctx->pc = 0x160164u;
    // NOP
label_160168:
    // 0x160168: 0xc6610fc4  lwc1        $f1, 0xFC4($s3)
    ctx->pc = 0x160168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16016c:
    // 0x16016c: 0xc6e00004  lwc1        $f0, 0x4($s7)
    ctx->pc = 0x16016cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_160170:
    // 0x160170: 0x8e630fc0  lw          $v1, 0xFC0($s3)
    ctx->pc = 0x160170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4032)));
label_160174:
    // 0x160174: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x160174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_160178:
    // 0x160178: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x160178u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_16017c:
    // 0x16017c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x16017cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_160180:
    // 0x160180: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x160180u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_160184:
    // 0x160184: 0x4610015  bgez        $v1, . + 4 + (0x15 << 2)
label_160188:
    if (ctx->pc == 0x160188u) {
        ctx->pc = 0x160188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160184u;
        // 0x160188: 0x2404ffce  addiu       $a0, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16018Cu;
        goto label_16018c;
    }
    ctx->pc = 0x160184u;
    {
        const bool branch_taken_0x160184 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x160188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160184u;
        // 0x160188: 0x2404ffce  addiu       $a0, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160184) {
            ctx->pc = 0x1601DCu;
            goto label_1601dc;
        }
    }
    ctx->pc = 0x16018Cu;
label_16018c:
    // 0x16018c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x16018cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_160190:
    // 0x160190: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_160194:
    if (ctx->pc == 0x160194u) {
        ctx->pc = 0x160194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160190u;
        // 0x160194: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160198u;
        goto label_160198;
    }
    ctx->pc = 0x160190u;
    {
        const bool branch_taken_0x160190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160190) {
            ctx->pc = 0x160194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160190u;
            // 0x160194: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1601E0u;
            goto label_1601e0;
        }
    }
    ctx->pc = 0x160198u;
label_160198:
    // 0x160198: 0x24620032  addiu       $v0, $v1, 0x32
    ctx->pc = 0x160198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
label_16019c:
    // 0x16019c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x16019cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1601a0:
    // 0x1601a0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1601a4:
    if (ctx->pc == 0x1601A4u) {
        ctx->pc = 0x1601A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601A0u;
        // 0x1601a4: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1601A8u;
        goto label_1601a8;
    }
    ctx->pc = 0x1601A0u;
    {
        const bool branch_taken_0x1601a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1601A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601A0u;
        // 0x1601a4: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1601a0) {
            ctx->pc = 0x1601C8u;
            goto label_1601c8;
        }
    }
    ctx->pc = 0x1601A8u;
label_1601a8:
    // 0x1601a8: 0x101023  negu        $v0, $s0
    ctx->pc = 0x1601a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_1601ac:
    // 0x1601ac: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1601acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1601b0:
    // 0x1601b0: 0x461000a  bgez        $v1, . + 4 + (0xA << 2)
label_1601b4:
    if (ctx->pc == 0x1601B4u) {
        ctx->pc = 0x1601B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601B0u;
        // 0x1601b4: 0x2404ff7e  addiu       $a0, $zero, -0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967166));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1601B8u;
        goto label_1601b8;
    }
    ctx->pc = 0x1601B0u;
    {
        const bool branch_taken_0x1601b0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1601B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601B0u;
        // 0x1601b4: 0x2404ff7e  addiu       $a0, $zero, -0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967166));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1601b0) {
            ctx->pc = 0x1601DCu;
            goto label_1601dc;
        }
    }
    ctx->pc = 0x1601B8u;
label_1601b8:
    // 0x1601b8: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1601b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1601bc:
    // 0x1601bc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1601c0:
    if (ctx->pc == 0x1601C0u) {
        ctx->pc = 0x1601C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601BCu;
        // 0x1601c0: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1601C4u;
        goto label_1601c4;
    }
    ctx->pc = 0x1601BCu;
    {
        const bool branch_taken_0x1601bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1601bc) {
            ctx->pc = 0x1601C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1601BCu;
            // 0x1601c0: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1601E0u;
            goto label_1601e0;
        }
    }
    ctx->pc = 0x1601C4u;
label_1601c4:
    // 0x1601c4: 0x24630082  addiu       $v1, $v1, 0x82
    ctx->pc = 0x1601c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 130));
label_1601c8:
    // 0x1601c8: 0x38840  sll         $s1, $v1, 1
    ctx->pc = 0x1601c8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1601cc:
    // 0x1601cc: 0x723610c8  pmaxw       $v0, $s1, $s6
    ctx->pc = 0x1601ccu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 17), GPR_VEC(ctx, 22)));
label_1601d0:
    // 0x1601d0: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1601d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_1601d4:
    // 0x1601d4: 0x705510e8  pminw       $v0, $v0, $s5
    ctx->pc = 0x1601d4u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 21)));
label_1601d8:
    // 0x1601d8: 0x28800  sll         $s1, $v0, 0
    ctx->pc = 0x1601d8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_1601dc:
    // 0x1601dc: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1601dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1601e0:
    // 0x1601e0: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1601e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1601e4:
    // 0x1601e4: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x1601e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_1601e8:
    // 0x1601e8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_1601ec:
    if (ctx->pc == 0x1601ECu) {
        ctx->pc = 0x1601ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601E8u;
        // 0x1601ec: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1601F0u;
        goto label_1601f0;
    }
    ctx->pc = 0x1601E8u;
    {
        const bool branch_taken_0x1601e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1601e8) {
            ctx->pc = 0x1601ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1601E8u;
            // 0x1601ec: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160208u;
            goto label_160208;
        }
    }
    ctx->pc = 0x1601F0u;
label_1601f0:
    // 0x1601f0: 0x26820154  addiu       $v0, $s4, 0x154
    ctx->pc = 0x1601f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 340));
label_1601f4:
    // 0x1601f4: 0x112043  sra         $a0, $s1, 1
    ctx->pc = 0x1601f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 1));
label_1601f8:
    // 0x1601f8: 0x111883  sra         $v1, $s1, 2
    ctx->pc = 0x1601f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 2));
label_1601fc:
    // 0x1601fc: 0xa0510000  sb          $s1, 0x0($v0)
    ctx->pc = 0x1601fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 17));
label_160200:
    // 0x160200: 0x10000011  b           . + 4 + (0x11 << 2)
label_160204:
    if (ctx->pc == 0x160204u) {
        ctx->pc = 0x160204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160200u;
        // 0x160204: 0xa0430002  sb          $v1, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160208u;
        goto label_160208;
    }
    ctx->pc = 0x160200u;
    {
        const bool branch_taken_0x160200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160200u;
        // 0x160204: 0xa0430002  sb          $v1, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160200) {
            ctx->pc = 0x160248u;
            goto label_160248;
        }
    }
    ctx->pc = 0x160208u;
label_160208:
    // 0x160208: 0x8c433628  lw          $v1, 0x3628($v0)
    ctx->pc = 0x160208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13864)));
label_16020c:
    // 0x16020c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_160210:
    if (ctx->pc == 0x160210u) {
        ctx->pc = 0x160210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16020Cu;
        // 0x160210: 0x26820154  addiu       $v0, $s4, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 340));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160214u;
        goto label_160214;
    }
    ctx->pc = 0x16020Cu;
    {
        const bool branch_taken_0x16020c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16020Cu;
        // 0x160210: 0x26820154  addiu       $v0, $s4, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16020c) {
            ctx->pc = 0x160220u;
            goto label_160220;
        }
    }
    ctx->pc = 0x160214u;
label_160214:
    // 0x160214: 0x30820200  andi        $v0, $a0, 0x200
    ctx->pc = 0x160214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
label_160218:
    // 0x160218: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_16021c:
    if (ctx->pc == 0x16021Cu) {
        ctx->pc = 0x16021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160218u;
        // 0x16021c: 0x26820154  addiu       $v0, $s4, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 340));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160220u;
        goto label_160220;
    }
    ctx->pc = 0x160218u;
    {
        const bool branch_taken_0x160218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160218u;
        // 0x16021c: 0x26820154  addiu       $v0, $s4, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160218) {
            ctx->pc = 0x160238u;
            goto label_160238;
        }
    }
    ctx->pc = 0x160220u;
label_160220:
    // 0x160220: 0x112043  sra         $a0, $s1, 1
    ctx->pc = 0x160220u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 1));
label_160224:
    // 0x160224: 0x111883  sra         $v1, $s1, 2
    ctx->pc = 0x160224u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 2));
label_160228:
    // 0x160228: 0xa0510000  sb          $s1, 0x0($v0)
    ctx->pc = 0x160228u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 17));
label_16022c:
    // 0x16022c: 0x10000006  b           . + 4 + (0x6 << 2)
label_160230:
    if (ctx->pc == 0x160230u) {
        ctx->pc = 0x160230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16022Cu;
        // 0x160230: 0xa0430002  sb          $v1, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160234u;
        goto label_160234;
    }
    ctx->pc = 0x16022Cu;
    {
        const bool branch_taken_0x16022c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16022Cu;
        // 0x160230: 0xa0430002  sb          $v1, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16022c) {
            ctx->pc = 0x160248u;
            goto label_160248;
        }
    }
    ctx->pc = 0x160234u;
label_160234:
    // 0x160234: 0x0  nop
    ctx->pc = 0x160234u;
    // NOP
label_160238:
    // 0x160238: 0x111883  sra         $v1, $s1, 2
    ctx->pc = 0x160238u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 2));
label_16023c:
    // 0x16023c: 0x112043  sra         $a0, $s1, 1
    ctx->pc = 0x16023cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 1));
label_160240:
    // 0x160240: 0xa0510002  sb          $s1, 0x2($v0)
    ctx->pc = 0x160240u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 17));
label_160244:
    // 0x160244: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x160244u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_160248:
    // 0x160248: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x160248u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
label_16024c:
    // 0x16024c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16024cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_160250:
    // 0x160250: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x160250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
label_160254:
    // 0x160254: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_160258:
    if (ctx->pc == 0x160258u) {
        ctx->pc = 0x160258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160254u;
        // 0x160258: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16025Cu;
        goto label_16025c;
    }
    ctx->pc = 0x160254u;
    {
        const bool branch_taken_0x160254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160254u;
        // 0x160258: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160254) {
            ctx->pc = 0x160284u;
            goto label_160284;
        }
    }
    ctx->pc = 0x16025Cu;
label_16025c:
    // 0x16025c: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x16025cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
label_160260:
    // 0x160260: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x160260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_160264:
    // 0x160264: 0x24a5bc50  addiu       $a1, $a1, -0x43B0
    ctx->pc = 0x160264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949968));
label_160268:
    // 0x160268: 0x26f70020  addiu       $s7, $s7, 0x20
    ctx->pc = 0x160268u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
label_16026c:
    // 0x16026c: 0x8ca20400  lw          $v0, 0x400($a1)
    ctx->pc = 0x16026cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1024)));
label_160270:
    // 0x160270: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x160270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_160274:
    // 0x160274: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x160274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_160278:
    // 0x160278: 0x1440ff61  bnez        $v0, . + 4 + (-0x9F << 2)
label_16027c:
    if (ctx->pc == 0x16027Cu) {
        ctx->pc = 0x16027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160278u;
        // 0x16027c: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160280u;
        goto label_160280;
    }
    ctx->pc = 0x160278u;
    {
        const bool branch_taken_0x160278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160278u;
        // 0x16027c: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160278) {
            ctx->pc = 0x160000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160000;
        }
    }
    ctx->pc = 0x160280u;
label_160280:
    // 0x160280: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x160280u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_160284:
    // 0x160284: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x160284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
label_160288:
    // 0x160288: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_16028c:
    if (ctx->pc == 0x16028Cu) {
        ctx->pc = 0x16028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160288u;
        // 0x16028c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160290u;
        goto label_160290;
    }
    ctx->pc = 0x160288u;
    {
        const bool branch_taken_0x160288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160288) {
            ctx->pc = 0x16028Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160288u;
            // 0x16028c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1602D4u;
            goto label_1602d4;
        }
    }
    ctx->pc = 0x160290u;
label_160290:
    // 0x160290: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x160290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_160294:
    // 0x160294: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x160294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_160298:
    // 0x160298: 0x24510f3c  addiu       $s1, $v0, 0xF3C
    ctx->pc = 0x160298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3900));
label_16029c:
    // 0x16029c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x16029cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1602a0:
    // 0x1602a0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1602a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1602a4:
    // 0x1602a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1602a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1602a8:
    // 0x1602a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1602a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1602ac:
    // 0x1602ac: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1602acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1602b0:
    // 0x1602b0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1602b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1602b4:
    // 0x1602b4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1602b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1602b8:
    // 0x1602b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1602b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1602bc:
    // 0x1602bc: 0x60f809  jalr        $v1
label_1602c0:
    if (ctx->pc == 0x1602C0u) {
        ctx->pc = 0x1602C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602BCu;
        // 0x1602c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1602C4u;
        goto label_1602c4;
    }
    ctx->pc = 0x1602BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1602C4u);
        ctx->pc = 0x1602C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602BCu;
        // 0x1602c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1602BCu, 0x1602C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1602C4u;
label_1602c4:
    // 0x1602c4: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x1602c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
label_1602c8:
    // 0x1602c8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_1602cc:
    if (ctx->pc == 0x1602CCu) {
        ctx->pc = 0x1602CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602C8u;
        // 0x1602cc: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1602D0u;
        goto label_1602d0;
    }
    ctx->pc = 0x1602C8u;
    {
        const bool branch_taken_0x1602c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1602c8) {
            ctx->pc = 0x1602CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1602C8u;
            // 0x1602cc: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1602A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1602a0;
        }
    }
    ctx->pc = 0x1602D0u;
label_1602d0:
    // 0x1602d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1602d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1602d4:
    // 0x1602d4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1602d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1602d8:
    // 0x1602d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1602d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1602dc:
    // 0x1602dc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1602dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1602e0:
    // 0x1602e0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1602e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1602e4:
    // 0x1602e4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1602e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1602e8:
    // 0x1602e8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1602e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1602ec:
    // 0x1602ec: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1602ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1602f0:
    // 0x1602f0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1602f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1602f4:
    // 0x1602f4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1602f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1602f8:
    // 0x1602f8: 0x3e00008  jr          $ra
label_1602fc:
    if (ctx->pc == 0x1602FCu) {
        ctx->pc = 0x1602FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602F8u;
        // 0x1602fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160300u;
        goto label_fallthrough_0x1602f8;
    }
    ctx->pc = 0x1602F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1602FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602F8u;
        // 0x1602fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1602F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1602f8:
    ctx->pc = 0x160300u;
}
