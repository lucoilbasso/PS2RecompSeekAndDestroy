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

// Function: ApCMTraceTracking__FP16CameraMotionWork
// Address: 0x13ff68 - 0x140630
void ApCMTraceTracking__FP16CameraMotionWork_0x13ff68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCMTraceTracking__FP16CameraMotionWork_0x13ff68");
#endif

    switch (ctx->pc) {
        case 0x13ff68u: goto label_13ff68;
        case 0x13ff6cu: goto label_13ff6c;
        case 0x13ff70u: goto label_13ff70;
        case 0x13ff74u: goto label_13ff74;
        case 0x13ff78u: goto label_13ff78;
        case 0x13ff7cu: goto label_13ff7c;
        case 0x13ff80u: goto label_13ff80;
        case 0x13ff84u: goto label_13ff84;
        case 0x13ff88u: goto label_13ff88;
        case 0x13ff8cu: goto label_13ff8c;
        case 0x13ff90u: goto label_13ff90;
        case 0x13ff94u: goto label_13ff94;
        case 0x13ff98u: goto label_13ff98;
        case 0x13ff9cu: goto label_13ff9c;
        case 0x13ffa0u: goto label_13ffa0;
        case 0x13ffa4u: goto label_13ffa4;
        case 0x13ffa8u: goto label_13ffa8;
        case 0x13ffacu: goto label_13ffac;
        case 0x13ffb0u: goto label_13ffb0;
        case 0x13ffb4u: goto label_13ffb4;
        case 0x13ffb8u: goto label_13ffb8;
        case 0x13ffbcu: goto label_13ffbc;
        case 0x13ffc0u: goto label_13ffc0;
        case 0x13ffc4u: goto label_13ffc4;
        case 0x13ffc8u: goto label_13ffc8;
        case 0x13ffccu: goto label_13ffcc;
        case 0x13ffd0u: goto label_13ffd0;
        case 0x13ffd4u: goto label_13ffd4;
        case 0x13ffd8u: goto label_13ffd8;
        case 0x13ffdcu: goto label_13ffdc;
        case 0x13ffe0u: goto label_13ffe0;
        case 0x13ffe4u: goto label_13ffe4;
        case 0x13ffe8u: goto label_13ffe8;
        case 0x13ffecu: goto label_13ffec;
        case 0x13fff0u: goto label_13fff0;
        case 0x13fff4u: goto label_13fff4;
        case 0x13fff8u: goto label_13fff8;
        case 0x13fffcu: goto label_13fffc;
        case 0x140000u: goto label_140000;
        case 0x140004u: goto label_140004;
        case 0x140008u: goto label_140008;
        case 0x14000cu: goto label_14000c;
        case 0x140010u: goto label_140010;
        case 0x140014u: goto label_140014;
        case 0x140018u: goto label_140018;
        case 0x14001cu: goto label_14001c;
        case 0x140020u: goto label_140020;
        case 0x140024u: goto label_140024;
        case 0x140028u: goto label_140028;
        case 0x14002cu: goto label_14002c;
        case 0x140030u: goto label_140030;
        case 0x140034u: goto label_140034;
        case 0x140038u: goto label_140038;
        case 0x14003cu: goto label_14003c;
        case 0x140040u: goto label_140040;
        case 0x140044u: goto label_140044;
        case 0x140048u: goto label_140048;
        case 0x14004cu: goto label_14004c;
        case 0x140050u: goto label_140050;
        case 0x140054u: goto label_140054;
        case 0x140058u: goto label_140058;
        case 0x14005cu: goto label_14005c;
        case 0x140060u: goto label_140060;
        case 0x140064u: goto label_140064;
        case 0x140068u: goto label_140068;
        case 0x14006cu: goto label_14006c;
        case 0x140070u: goto label_140070;
        case 0x140074u: goto label_140074;
        case 0x140078u: goto label_140078;
        case 0x14007cu: goto label_14007c;
        case 0x140080u: goto label_140080;
        case 0x140084u: goto label_140084;
        case 0x140088u: goto label_140088;
        case 0x14008cu: goto label_14008c;
        case 0x140090u: goto label_140090;
        case 0x140094u: goto label_140094;
        case 0x140098u: goto label_140098;
        case 0x14009cu: goto label_14009c;
        case 0x1400a0u: goto label_1400a0;
        case 0x1400a4u: goto label_1400a4;
        case 0x1400a8u: goto label_1400a8;
        case 0x1400acu: goto label_1400ac;
        case 0x1400b0u: goto label_1400b0;
        case 0x1400b4u: goto label_1400b4;
        case 0x1400b8u: goto label_1400b8;
        case 0x1400bcu: goto label_1400bc;
        case 0x1400c0u: goto label_1400c0;
        case 0x1400c4u: goto label_1400c4;
        case 0x1400c8u: goto label_1400c8;
        case 0x1400ccu: goto label_1400cc;
        case 0x1400d0u: goto label_1400d0;
        case 0x1400d4u: goto label_1400d4;
        case 0x1400d8u: goto label_1400d8;
        case 0x1400dcu: goto label_1400dc;
        case 0x1400e0u: goto label_1400e0;
        case 0x1400e4u: goto label_1400e4;
        case 0x1400e8u: goto label_1400e8;
        case 0x1400ecu: goto label_1400ec;
        case 0x1400f0u: goto label_1400f0;
        case 0x1400f4u: goto label_1400f4;
        case 0x1400f8u: goto label_1400f8;
        case 0x1400fcu: goto label_1400fc;
        case 0x140100u: goto label_140100;
        case 0x140104u: goto label_140104;
        case 0x140108u: goto label_140108;
        case 0x14010cu: goto label_14010c;
        case 0x140110u: goto label_140110;
        case 0x140114u: goto label_140114;
        case 0x140118u: goto label_140118;
        case 0x14011cu: goto label_14011c;
        case 0x140120u: goto label_140120;
        case 0x140124u: goto label_140124;
        case 0x140128u: goto label_140128;
        case 0x14012cu: goto label_14012c;
        case 0x140130u: goto label_140130;
        case 0x140134u: goto label_140134;
        case 0x140138u: goto label_140138;
        case 0x14013cu: goto label_14013c;
        case 0x140140u: goto label_140140;
        case 0x140144u: goto label_140144;
        case 0x140148u: goto label_140148;
        case 0x14014cu: goto label_14014c;
        case 0x140150u: goto label_140150;
        case 0x140154u: goto label_140154;
        case 0x140158u: goto label_140158;
        case 0x14015cu: goto label_14015c;
        case 0x140160u: goto label_140160;
        case 0x140164u: goto label_140164;
        case 0x140168u: goto label_140168;
        case 0x14016cu: goto label_14016c;
        case 0x140170u: goto label_140170;
        case 0x140174u: goto label_140174;
        case 0x140178u: goto label_140178;
        case 0x14017cu: goto label_14017c;
        case 0x140180u: goto label_140180;
        case 0x140184u: goto label_140184;
        case 0x140188u: goto label_140188;
        case 0x14018cu: goto label_14018c;
        case 0x140190u: goto label_140190;
        case 0x140194u: goto label_140194;
        case 0x140198u: goto label_140198;
        case 0x14019cu: goto label_14019c;
        case 0x1401a0u: goto label_1401a0;
        case 0x1401a4u: goto label_1401a4;
        case 0x1401a8u: goto label_1401a8;
        case 0x1401acu: goto label_1401ac;
        case 0x1401b0u: goto label_1401b0;
        case 0x1401b4u: goto label_1401b4;
        case 0x1401b8u: goto label_1401b8;
        case 0x1401bcu: goto label_1401bc;
        case 0x1401c0u: goto label_1401c0;
        case 0x1401c4u: goto label_1401c4;
        case 0x1401c8u: goto label_1401c8;
        case 0x1401ccu: goto label_1401cc;
        case 0x1401d0u: goto label_1401d0;
        case 0x1401d4u: goto label_1401d4;
        case 0x1401d8u: goto label_1401d8;
        case 0x1401dcu: goto label_1401dc;
        case 0x1401e0u: goto label_1401e0;
        case 0x1401e4u: goto label_1401e4;
        case 0x1401e8u: goto label_1401e8;
        case 0x1401ecu: goto label_1401ec;
        case 0x1401f0u: goto label_1401f0;
        case 0x1401f4u: goto label_1401f4;
        case 0x1401f8u: goto label_1401f8;
        case 0x1401fcu: goto label_1401fc;
        case 0x140200u: goto label_140200;
        case 0x140204u: goto label_140204;
        case 0x140208u: goto label_140208;
        case 0x14020cu: goto label_14020c;
        case 0x140210u: goto label_140210;
        case 0x140214u: goto label_140214;
        case 0x140218u: goto label_140218;
        case 0x14021cu: goto label_14021c;
        case 0x140220u: goto label_140220;
        case 0x140224u: goto label_140224;
        case 0x140228u: goto label_140228;
        case 0x14022cu: goto label_14022c;
        case 0x140230u: goto label_140230;
        case 0x140234u: goto label_140234;
        case 0x140238u: goto label_140238;
        case 0x14023cu: goto label_14023c;
        case 0x140240u: goto label_140240;
        case 0x140244u: goto label_140244;
        case 0x140248u: goto label_140248;
        case 0x14024cu: goto label_14024c;
        case 0x140250u: goto label_140250;
        case 0x140254u: goto label_140254;
        case 0x140258u: goto label_140258;
        case 0x14025cu: goto label_14025c;
        case 0x140260u: goto label_140260;
        case 0x140264u: goto label_140264;
        case 0x140268u: goto label_140268;
        case 0x14026cu: goto label_14026c;
        case 0x140270u: goto label_140270;
        case 0x140274u: goto label_140274;
        case 0x140278u: goto label_140278;
        case 0x14027cu: goto label_14027c;
        case 0x140280u: goto label_140280;
        case 0x140284u: goto label_140284;
        case 0x140288u: goto label_140288;
        case 0x14028cu: goto label_14028c;
        case 0x140290u: goto label_140290;
        case 0x140294u: goto label_140294;
        case 0x140298u: goto label_140298;
        case 0x14029cu: goto label_14029c;
        case 0x1402a0u: goto label_1402a0;
        case 0x1402a4u: goto label_1402a4;
        case 0x1402a8u: goto label_1402a8;
        case 0x1402acu: goto label_1402ac;
        case 0x1402b0u: goto label_1402b0;
        case 0x1402b4u: goto label_1402b4;
        case 0x1402b8u: goto label_1402b8;
        case 0x1402bcu: goto label_1402bc;
        case 0x1402c0u: goto label_1402c0;
        case 0x1402c4u: goto label_1402c4;
        case 0x1402c8u: goto label_1402c8;
        case 0x1402ccu: goto label_1402cc;
        case 0x1402d0u: goto label_1402d0;
        case 0x1402d4u: goto label_1402d4;
        case 0x1402d8u: goto label_1402d8;
        case 0x1402dcu: goto label_1402dc;
        case 0x1402e0u: goto label_1402e0;
        case 0x1402e4u: goto label_1402e4;
        case 0x1402e8u: goto label_1402e8;
        case 0x1402ecu: goto label_1402ec;
        case 0x1402f0u: goto label_1402f0;
        case 0x1402f4u: goto label_1402f4;
        case 0x1402f8u: goto label_1402f8;
        case 0x1402fcu: goto label_1402fc;
        case 0x140300u: goto label_140300;
        case 0x140304u: goto label_140304;
        case 0x140308u: goto label_140308;
        case 0x14030cu: goto label_14030c;
        case 0x140310u: goto label_140310;
        case 0x140314u: goto label_140314;
        case 0x140318u: goto label_140318;
        case 0x14031cu: goto label_14031c;
        case 0x140320u: goto label_140320;
        case 0x140324u: goto label_140324;
        case 0x140328u: goto label_140328;
        case 0x14032cu: goto label_14032c;
        case 0x140330u: goto label_140330;
        case 0x140334u: goto label_140334;
        case 0x140338u: goto label_140338;
        case 0x14033cu: goto label_14033c;
        case 0x140340u: goto label_140340;
        case 0x140344u: goto label_140344;
        case 0x140348u: goto label_140348;
        case 0x14034cu: goto label_14034c;
        case 0x140350u: goto label_140350;
        case 0x140354u: goto label_140354;
        case 0x140358u: goto label_140358;
        case 0x14035cu: goto label_14035c;
        case 0x140360u: goto label_140360;
        case 0x140364u: goto label_140364;
        case 0x140368u: goto label_140368;
        case 0x14036cu: goto label_14036c;
        case 0x140370u: goto label_140370;
        case 0x140374u: goto label_140374;
        case 0x140378u: goto label_140378;
        case 0x14037cu: goto label_14037c;
        case 0x140380u: goto label_140380;
        case 0x140384u: goto label_140384;
        case 0x140388u: goto label_140388;
        case 0x14038cu: goto label_14038c;
        case 0x140390u: goto label_140390;
        case 0x140394u: goto label_140394;
        case 0x140398u: goto label_140398;
        case 0x14039cu: goto label_14039c;
        case 0x1403a0u: goto label_1403a0;
        case 0x1403a4u: goto label_1403a4;
        case 0x1403a8u: goto label_1403a8;
        case 0x1403acu: goto label_1403ac;
        case 0x1403b0u: goto label_1403b0;
        case 0x1403b4u: goto label_1403b4;
        case 0x1403b8u: goto label_1403b8;
        case 0x1403bcu: goto label_1403bc;
        case 0x1403c0u: goto label_1403c0;
        case 0x1403c4u: goto label_1403c4;
        case 0x1403c8u: goto label_1403c8;
        case 0x1403ccu: goto label_1403cc;
        case 0x1403d0u: goto label_1403d0;
        case 0x1403d4u: goto label_1403d4;
        case 0x1403d8u: goto label_1403d8;
        case 0x1403dcu: goto label_1403dc;
        case 0x1403e0u: goto label_1403e0;
        case 0x1403e4u: goto label_1403e4;
        case 0x1403e8u: goto label_1403e8;
        case 0x1403ecu: goto label_1403ec;
        case 0x1403f0u: goto label_1403f0;
        case 0x1403f4u: goto label_1403f4;
        case 0x1403f8u: goto label_1403f8;
        case 0x1403fcu: goto label_1403fc;
        case 0x140400u: goto label_140400;
        case 0x140404u: goto label_140404;
        case 0x140408u: goto label_140408;
        case 0x14040cu: goto label_14040c;
        case 0x140410u: goto label_140410;
        case 0x140414u: goto label_140414;
        case 0x140418u: goto label_140418;
        case 0x14041cu: goto label_14041c;
        case 0x140420u: goto label_140420;
        case 0x140424u: goto label_140424;
        case 0x140428u: goto label_140428;
        case 0x14042cu: goto label_14042c;
        case 0x140430u: goto label_140430;
        case 0x140434u: goto label_140434;
        case 0x140438u: goto label_140438;
        case 0x14043cu: goto label_14043c;
        case 0x140440u: goto label_140440;
        case 0x140444u: goto label_140444;
        case 0x140448u: goto label_140448;
        case 0x14044cu: goto label_14044c;
        case 0x140450u: goto label_140450;
        case 0x140454u: goto label_140454;
        case 0x140458u: goto label_140458;
        case 0x14045cu: goto label_14045c;
        case 0x140460u: goto label_140460;
        case 0x140464u: goto label_140464;
        case 0x140468u: goto label_140468;
        case 0x14046cu: goto label_14046c;
        case 0x140470u: goto label_140470;
        case 0x140474u: goto label_140474;
        case 0x140478u: goto label_140478;
        case 0x14047cu: goto label_14047c;
        case 0x140480u: goto label_140480;
        case 0x140484u: goto label_140484;
        case 0x140488u: goto label_140488;
        case 0x14048cu: goto label_14048c;
        case 0x140490u: goto label_140490;
        case 0x140494u: goto label_140494;
        case 0x140498u: goto label_140498;
        case 0x14049cu: goto label_14049c;
        case 0x1404a0u: goto label_1404a0;
        case 0x1404a4u: goto label_1404a4;
        case 0x1404a8u: goto label_1404a8;
        case 0x1404acu: goto label_1404ac;
        case 0x1404b0u: goto label_1404b0;
        case 0x1404b4u: goto label_1404b4;
        case 0x1404b8u: goto label_1404b8;
        case 0x1404bcu: goto label_1404bc;
        case 0x1404c0u: goto label_1404c0;
        case 0x1404c4u: goto label_1404c4;
        case 0x1404c8u: goto label_1404c8;
        case 0x1404ccu: goto label_1404cc;
        case 0x1404d0u: goto label_1404d0;
        case 0x1404d4u: goto label_1404d4;
        case 0x1404d8u: goto label_1404d8;
        case 0x1404dcu: goto label_1404dc;
        case 0x1404e0u: goto label_1404e0;
        case 0x1404e4u: goto label_1404e4;
        case 0x1404e8u: goto label_1404e8;
        case 0x1404ecu: goto label_1404ec;
        case 0x1404f0u: goto label_1404f0;
        case 0x1404f4u: goto label_1404f4;
        case 0x1404f8u: goto label_1404f8;
        case 0x1404fcu: goto label_1404fc;
        case 0x140500u: goto label_140500;
        case 0x140504u: goto label_140504;
        case 0x140508u: goto label_140508;
        case 0x14050cu: goto label_14050c;
        case 0x140510u: goto label_140510;
        case 0x140514u: goto label_140514;
        case 0x140518u: goto label_140518;
        case 0x14051cu: goto label_14051c;
        case 0x140520u: goto label_140520;
        case 0x140524u: goto label_140524;
        case 0x140528u: goto label_140528;
        case 0x14052cu: goto label_14052c;
        case 0x140530u: goto label_140530;
        case 0x140534u: goto label_140534;
        case 0x140538u: goto label_140538;
        case 0x14053cu: goto label_14053c;
        case 0x140540u: goto label_140540;
        case 0x140544u: goto label_140544;
        case 0x140548u: goto label_140548;
        case 0x14054cu: goto label_14054c;
        case 0x140550u: goto label_140550;
        case 0x140554u: goto label_140554;
        case 0x140558u: goto label_140558;
        case 0x14055cu: goto label_14055c;
        case 0x140560u: goto label_140560;
        case 0x140564u: goto label_140564;
        case 0x140568u: goto label_140568;
        case 0x14056cu: goto label_14056c;
        case 0x140570u: goto label_140570;
        case 0x140574u: goto label_140574;
        case 0x140578u: goto label_140578;
        case 0x14057cu: goto label_14057c;
        case 0x140580u: goto label_140580;
        case 0x140584u: goto label_140584;
        case 0x140588u: goto label_140588;
        case 0x14058cu: goto label_14058c;
        case 0x140590u: goto label_140590;
        case 0x140594u: goto label_140594;
        case 0x140598u: goto label_140598;
        case 0x14059cu: goto label_14059c;
        case 0x1405a0u: goto label_1405a0;
        case 0x1405a4u: goto label_1405a4;
        case 0x1405a8u: goto label_1405a8;
        case 0x1405acu: goto label_1405ac;
        case 0x1405b0u: goto label_1405b0;
        case 0x1405b4u: goto label_1405b4;
        case 0x1405b8u: goto label_1405b8;
        case 0x1405bcu: goto label_1405bc;
        case 0x1405c0u: goto label_1405c0;
        case 0x1405c4u: goto label_1405c4;
        case 0x1405c8u: goto label_1405c8;
        case 0x1405ccu: goto label_1405cc;
        case 0x1405d0u: goto label_1405d0;
        case 0x1405d4u: goto label_1405d4;
        case 0x1405d8u: goto label_1405d8;
        case 0x1405dcu: goto label_1405dc;
        case 0x1405e0u: goto label_1405e0;
        case 0x1405e4u: goto label_1405e4;
        case 0x1405e8u: goto label_1405e8;
        case 0x1405ecu: goto label_1405ec;
        case 0x1405f0u: goto label_1405f0;
        case 0x1405f4u: goto label_1405f4;
        case 0x1405f8u: goto label_1405f8;
        case 0x1405fcu: goto label_1405fc;
        case 0x140600u: goto label_140600;
        case 0x140604u: goto label_140604;
        case 0x140608u: goto label_140608;
        case 0x14060cu: goto label_14060c;
        case 0x140610u: goto label_140610;
        case 0x140614u: goto label_140614;
        case 0x140618u: goto label_140618;
        case 0x14061cu: goto label_14061c;
        case 0x140620u: goto label_140620;
        case 0x140624u: goto label_140624;
        case 0x140628u: goto label_140628;
        case 0x14062cu: goto label_14062c;
        default: break;
    }

    ctx->pc = 0x13ff68u;

label_13ff68:
    // 0x13ff68: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13ff68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_13ff6c:
    // 0x13ff6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13ff6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13ff70:
    // 0x13ff70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13ff70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_13ff74:
    // 0x13ff74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13ff74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13ff78:
    // 0x13ff78: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x13ff78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_13ff7c:
    // 0x13ff7c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x13ff7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_13ff80:
    // 0x13ff80: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x13ff80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_13ff84:
    // 0x13ff84: 0xe7b60068  swc1        $f22, 0x68($sp)
    ctx->pc = 0x13ff84u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_13ff88:
    // 0x13ff88: 0xe7b50060  swc1        $f21, 0x60($sp)
    ctx->pc = 0x13ff88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_13ff8c:
    // 0x13ff8c: 0xe7b40058  swc1        $f20, 0x58($sp)
    ctx->pc = 0x13ff8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_13ff90:
    // 0x13ff90: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13ff90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_13ff94:
    // 0x13ff94: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13ff94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_13ff98:
    // 0x13ff98: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x13ff98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_13ff9c:
    // 0x13ff9c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x13ff9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_13ffa0:
    // 0x13ffa0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x13ffa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_13ffa4:
    // 0x13ffa4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x13ffa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13ffa8:
    // 0x13ffa8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x13ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_13ffac:
    // 0x13ffac: 0x8e500014  lw          $s0, 0x14($s2)
    ctx->pc = 0x13ffacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_13ffb0:
    // 0x13ffb0: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x13ffb0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_13ffb4:
    // 0x13ffb4: 0x30430200  andi        $v1, $v0, 0x200
    ctx->pc = 0x13ffb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_13ffb8:
    // 0x13ffb8: 0x30442000  andi        $a0, $v0, 0x2000
    ctx->pc = 0x13ffb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_13ffbc:
    // 0x13ffbc: 0x30450400  andi        $a1, $v0, 0x400
    ctx->pc = 0x13ffbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_13ffc0:
    // 0x13ffc0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x13ffc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_13ffc4:
    // 0x13ffc4: 0x3a82b  sltu        $s5, $zero, $v1
    ctx->pc = 0x13ffc4u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_13ffc8:
    // 0x13ffc8: 0x4b02b  sltu        $s6, $zero, $a0
    ctx->pc = 0x13ffc8u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_13ffcc:
    // 0x13ffcc: 0x2b82b  sltu        $s7, $zero, $v0
    ctx->pc = 0x13ffccu;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13ffd0:
    // 0x13ffd0: 0x8e510060  lw          $s1, 0x60($s2)
    ctx->pc = 0x13ffd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_13ffd4:
    // 0x13ffd4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_13ffd8:
    if (ctx->pc == 0x13FFD8u) {
        ctx->pc = 0x13FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFD4u;
        // 0x13ffd8: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FFDCu;
        goto label_13ffdc;
    }
    ctx->pc = 0x13FFD4u;
    {
        const bool branch_taken_0x13ffd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFD4u;
        // 0x13ffd8: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ffd4) {
            ctx->pc = 0x13FFE8u;
            goto label_13ffe8;
        }
    }
    ctx->pc = 0x13FFDCu;
label_13ffdc:
    // 0x13ffdc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x13ffdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_13ffe0:
    // 0x13ffe0: 0x38421118  xori        $v0, $v0, 0x1118
    ctx->pc = 0x13ffe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4376);
label_13ffe4:
    // 0x13ffe4: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x13ffe4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_13ffe8:
    // 0x13ffe8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x13ffe8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13ffec:
    // 0x13ffec: 0x12800073  beqz        $s4, . + 4 + (0x73 << 2)
label_13fff0:
    if (ctx->pc == 0x13FFF0u) {
        ctx->pc = 0x13FFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFECu;
        // 0x13fff0: 0x3c03001f  lui         $v1, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FFF4u;
        goto label_13fff4;
    }
    ctx->pc = 0x13FFECu;
    {
        const bool branch_taken_0x13ffec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFECu;
        // 0x13fff0: 0x3c03001f  lui         $v1, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ffec) {
            ctx->pc = 0x1401BCu;
            goto label_1401bc;
        }
    }
    ctx->pc = 0x13FFF4u;
label_13fff4:
    // 0x13fff4: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x13fff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_13fff8:
    // 0x13fff8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x13fff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_13fffc:
    // 0x13fffc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_140000:
    if (ctx->pc == 0x140000u) {
        ctx->pc = 0x140000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFFCu;
        // 0x140000: 0x8c73d188  lw          $s3, -0x2E78($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140004u;
        goto label_140004;
    }
    ctx->pc = 0x13FFFCu;
    {
        const bool branch_taken_0x13fffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFFCu;
        // 0x140000: 0x8c73d188  lw          $s3, -0x2E78($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fffc) {
            ctx->pc = 0x140050u;
            goto label_140050;
        }
    }
    ctx->pc = 0x140004u;
label_140004:
    // 0x140004: 0xc6020154  lwc1        $f2, 0x154($s0)
    ctx->pc = 0x140004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_140008:
    // 0x140008: 0xc781813c  lwc1        $f1, -0x7EC4($gp)
    ctx->pc = 0x140008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14000c:
    // 0x14000c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x14000cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_140010:
    // 0x140010: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_140014:
    if (ctx->pc == 0x140014u) {
        ctx->pc = 0x140014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140010u;
        // 0x140014: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140018u;
        goto label_140018;
    }
    ctx->pc = 0x140010u;
    {
        const bool branch_taken_0x140010 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x140014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140010u;
        // 0x140014: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140010) {
            ctx->pc = 0x14008Cu;
            goto label_14008c;
        }
    }
    ctx->pc = 0x140018u;
label_140018:
    // 0x140018: 0x3c013f88  lui         $at, 0x3F88
    ctx->pc = 0x140018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16264 << 16));
label_14001c:
    // 0x14001c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14001cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_140020:
    // 0x140020: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x140020u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_140024:
    // 0x140024: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x140024u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
label_140028:
    // 0x140028: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x140028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_14002c:
    // 0x14002c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14002cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_140030:
    // 0x140030: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x140030u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_140034:
    // 0x140034: 0xe6000154  swc1        $f0, 0x154($s0)
    ctx->pc = 0x140034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
label_140038:
    // 0x140038: 0x0  nop
    ctx->pc = 0x140038u;
    // NOP
label_14003c:
    // 0x14003c: 0x0  nop
    ctx->pc = 0x14003cu;
    // NOP
label_140040:
    // 0x140040: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x140040u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_140044:
    // 0x140044: 0x1000000e  b           . + 4 + (0xE << 2)
label_140048:
    if (ctx->pc == 0x140048u) {
        ctx->pc = 0x140048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140044u;
        // 0x140048: 0xe601015c  swc1        $f1, 0x15C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 348), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14004Cu;
        goto label_14004c;
    }
    ctx->pc = 0x140044u;
    {
        const bool branch_taken_0x140044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140044u;
        // 0x140048: 0xe601015c  swc1        $f1, 0x15C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 348), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x140044) {
            ctx->pc = 0x140080u;
            goto label_140080;
        }
    }
    ctx->pc = 0x14004Cu;
label_14004c:
    // 0x14004c: 0x0  nop
    ctx->pc = 0x14004cu;
    // NOP
label_140050:
    // 0x140050: 0xc6000154  lwc1        $f0, 0x154($s0)
    ctx->pc = 0x140050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140054:
    // 0x140054: 0xc6010204  lwc1        $f1, 0x204($s0)
    ctx->pc = 0x140054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_140058:
    // 0x140058: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x140058u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14005c:
    // 0x14005c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_140060:
    if (ctx->pc == 0x140060u) {
        ctx->pc = 0x140060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14005Cu;
        // 0x140060: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x140064u;
        goto label_140064;
    }
    ctx->pc = 0x14005Cu;
    {
        const bool branch_taken_0x14005c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x140060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14005Cu;
        // 0x140060: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14005c) {
            ctx->pc = 0x14008Cu;
            goto label_14008c;
        }
    }
    ctx->pc = 0x140064u;
label_140064:
    // 0x140064: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x140064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_140068:
    // 0x140068: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x140068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14006c:
    // 0x14006c: 0xe6010154  swc1        $f1, 0x154($s0)
    ctx->pc = 0x14006cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
label_140070:
    // 0x140070: 0x0  nop
    ctx->pc = 0x140070u;
    // NOP
label_140074:
    // 0x140074: 0x0  nop
    ctx->pc = 0x140074u;
    // NOP
label_140078:
    // 0x140078: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x140078u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_14007c:
    // 0x14007c: 0xe600015c  swc1        $f0, 0x15C($s0)
    ctx->pc = 0x14007cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 348), bits); }
label_140080:
    // 0x140080: 0xc067a5e  jal         func_19E978
label_140084:
    if (ctx->pc == 0x140084u) {
        ctx->pc = 0x140088u;
        goto label_140088;
    }
    ctx->pc = 0x140080u;
    SET_GPR_U32(ctx, 31, 0x140088u);
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x140080u, 0x140088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140088u;
label_140088:
    // 0x140088: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x140088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
label_14008c:
    // 0x14008c: 0x16600048  bnez        $s3, . + 4 + (0x48 << 2)
label_140090:
    if (ctx->pc == 0x140090u) {
        ctx->pc = 0x140094u;
        goto label_140094;
    }
    ctx->pc = 0x14008Cu;
    {
        const bool branch_taken_0x14008c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x14008c) {
            ctx->pc = 0x1401B0u;
            goto label_1401b0;
        }
    }
    ctx->pc = 0x140094u;
label_140094:
    // 0x140094: 0xc62003cc  lwc1        $f0, 0x3CC($s1)
    ctx->pc = 0x140094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140098:
    // 0x140098: 0xc7828140  lwc1        $f2, -0x7EC0($gp)
    ctx->pc = 0x140098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14009c:
    // 0x14009c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14009cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1400a0:
    // 0x1400a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1400a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1400a4:
    // 0x1400a4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1400a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1400a8:
    // 0x1400a8: 0x46010569  min.s       $f21, $f0, $f1
    ctx->pc = 0x1400a8u;
    ctx->f[21] = std::min(ctx->f[0], ctx->f[1]);
label_1400ac:
    // 0x1400ac: 0x8e2203b0  lw          $v0, 0x3B0($s1)
    ctx->pc = 0x1400acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 944)));
label_1400b0:
    // 0x1400b0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1400b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_1400b4:
    // 0x1400b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1400b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1400b8:
    // 0x1400b8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1400b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_1400bc:
    // 0x1400bc: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1400bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1400c0:
    // 0x1400c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1400c4:
    if (ctx->pc == 0x1400C4u) {
        ctx->pc = 0x1400C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1400C0u;
        // 0x1400c4: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1400C8u;
        goto label_1400c8;
    }
    ctx->pc = 0x1400C0u;
    {
        const bool branch_taken_0x1400c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1400C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1400C0u;
        // 0x1400c4: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1400c0) {
            ctx->pc = 0x1400F4u;
            goto label_1400f4;
        }
    }
    ctx->pc = 0x1400C8u;
label_1400c8:
    // 0x1400c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1400c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1400cc:
    // 0x1400cc: 0xc052fa2  jal         func_14BE88
label_1400d0:
    if (ctx->pc == 0x1400D0u) {
        ctx->pc = 0x1400D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1400CCu;
        // 0x1400d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1400D4u;
        goto label_1400d4;
    }
    ctx->pc = 0x1400CCu;
    SET_GPR_U32(ctx, 31, 0x1400D4u);
    ctx->pc = 0x1400D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1400CCu;
    // 0x1400d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BE88u, 0x1400CCu, 0x1400D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1400D4u;
label_1400d4:
    // 0x1400d4: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x1400d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
label_1400d8:
    // 0x1400d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1400d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1400dc:
    // 0x1400dc: 0x3c013d00  lui         $at, 0x3D00
    ctx->pc = 0x1400dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15616 << 16));
label_1400e0:
    // 0x1400e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1400e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1400e4:
    // 0x1400e4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1400e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1400e8:
    // 0x1400e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1400e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1400ec:
    // 0x1400ec: 0x46160d80  add.s       $f22, $f1, $f22
    ctx->pc = 0x1400ecu;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
label_1400f0:
    // 0x1400f0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1400f0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1400f4:
    // 0x1400f4: 0xc64101ac  lwc1        $f1, 0x1AC($s2)
    ctx->pc = 0x1400f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1400f8:
    // 0x1400f8: 0xc7828144  lwc1        $f2, -0x7EBC($gp)
    ctx->pc = 0x1400f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1400fc:
    // 0x1400fc: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x1400fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_140100:
    // 0x140100: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x140100u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_140104:
    // 0x140104: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x140104u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_140108:
    // 0x140108: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x140108u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_14010c:
    // 0x14010c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x14010cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_140110:
    // 0x140110: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x140110u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_140114:
    // 0x140114: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x140114u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_140118:
    // 0x140118: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x140118u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_14011c:
    // 0x14011c: 0x4b0621bc  vmulax.x    $ACC, $vf4, $vf6x
    ctx->pc = 0x14011cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_140120:
    // 0x140120: 0x4b082b08  vmaddx.x    $vf12, $vf5, $vf8x
    ctx->pc = 0x140120u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_140124:
    // 0x140124: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x140124u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
label_140128:
    // 0x140128: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x140128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14012c:
    // 0x14012c: 0xe64101ac  swc1        $f1, 0x1AC($s2)
    ctx->pc = 0x14012cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 428), bits); }
label_140130:
    // 0x140130: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x140130u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_140134:
    // 0x140134: 0xc64001b0  lwc1        $f0, 0x1B0($s2)
    ctx->pc = 0x140134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140138:
    // 0x140138: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x140138u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14013c:
    // 0x14013c: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x14013cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_140140:
    // 0x140140: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x140140u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_140144:
    // 0x140144: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x140144u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_140148:
    // 0x140148: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x140148u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14014c:
    // 0x14014c: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x14014cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_140150:
    // 0x140150: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x140150u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_140154:
    // 0x140154: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x140154u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_140158:
    // 0x140158: 0x4b0621bc  vmulax.x    $ACC, $vf4, $vf6x
    ctx->pc = 0x140158u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_14015c:
    // 0x14015c: 0x4b082b08  vmaddx.x    $vf12, $vf5, $vf8x
    ctx->pc = 0x14015cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_140160:
    // 0x140160: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x140160u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
label_140164:
    // 0x140164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_140168:
    // 0x140168: 0xe64001b0  swc1        $f0, 0x1B0($s2)
    ctx->pc = 0x140168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 432), bits); }
label_14016c:
    // 0x14016c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x14016cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_140170:
    // 0x140170: 0xc64101b4  lwc1        $f1, 0x1B4($s2)
    ctx->pc = 0x140170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_140174:
    // 0x140174: 0x4402b000  mfc1        $v0, $f22
    ctx->pc = 0x140174u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_140178:
    // 0x140178: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x140178u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_14017c:
    // 0x14017c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x14017cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_140180:
    // 0x140180: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x140180u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_140184:
    // 0x140184: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x140184u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_140188:
    // 0x140188: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x140188u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_14018c:
    // 0x14018c: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x14018cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_140190:
    // 0x140190: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x140190u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_140194:
    // 0x140194: 0x4b0621bc  vmulax.x    $ACC, $vf4, $vf6x
    ctx->pc = 0x140194u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_140198:
    // 0x140198: 0x4b082b08  vmaddx.x    $vf12, $vf5, $vf8x
    ctx->pc = 0x140198u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_14019c:
    // 0x14019c: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x14019cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
label_1401a0:
    // 0x1401a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1401a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1401a4:
    // 0x1401a4: 0xe64101b4  swc1        $f1, 0x1B4($s2)
    ctx->pc = 0x1401a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 436), bits); }
label_1401a8:
    // 0x1401a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1401ac:
    if (ctx->pc == 0x1401ACu) {
        ctx->pc = 0x1401ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1401A8u;
        // 0x1401ac: 0x46000d86  mov.s       $f22, $f1 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1401B0u;
        goto label_1401b0;
    }
    ctx->pc = 0x1401A8u;
    {
        const bool branch_taken_0x1401a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1401ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1401A8u;
        // 0x1401ac: 0x46000d86  mov.s       $f22, $f1 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1401a8) {
            ctx->pc = 0x1401BCu;
            goto label_1401bc;
        }
    }
    ctx->pc = 0x1401B0u;
label_1401b0:
    // 0x1401b0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1401b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1401b4:
    // 0x1401b4: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1401b4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_1401b8:
    // 0x1401b8: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x1401b8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
label_1401bc:
    // 0x1401bc: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_1401c0:
    if (ctx->pc == 0x1401C0u) {
        ctx->pc = 0x1401C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1401BCu;
        // 0x1401c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1401C4u;
        goto label_1401c4;
    }
    ctx->pc = 0x1401BCu;
    {
        const bool branch_taken_0x1401bc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1401C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1401BCu;
        // 0x1401c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1401bc) {
            ctx->pc = 0x1401D8u;
            goto label_1401d8;
        }
    }
    ctx->pc = 0x1401C4u;
label_1401c4:
    // 0x1401c4: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x1401c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_1401c8:
    // 0x1401c8: 0x8e430190  lw          $v1, 0x190($s2)
    ctx->pc = 0x1401c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
label_1401cc:
    // 0x1401cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1401ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1401d0:
    // 0x1401d0: 0x1000004d  b           . + 4 + (0x4D << 2)
label_1401d4:
    if (ctx->pc == 0x1401D4u) {
        ctx->pc = 0x1401D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1401D0u;
        // 0x1401d4: 0xae420084  sw          $v0, 0x84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1401D8u;
        goto label_1401d8;
    }
    ctx->pc = 0x1401D0u;
    {
        const bool branch_taken_0x1401d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1401D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1401D0u;
        // 0x1401d4: 0xae420084  sw          $v0, 0x84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1401d0) {
            ctx->pc = 0x140308u;
            goto label_140308;
        }
    }
    ctx->pc = 0x1401D8u;
label_1401d8:
    // 0x1401d8: 0xc05018c  jal         func_140630
label_1401dc:
    if (ctx->pc == 0x1401DCu) {
        ctx->pc = 0x1401DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1401D8u;
        // 0x1401dc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1401E0u;
        goto label_1401e0;
    }
    ctx->pc = 0x1401D8u;
    SET_GPR_U32(ctx, 31, 0x1401E0u);
    ctx->pc = 0x1401DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1401D8u;
    // 0x1401dc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140630u, 0x1401D8u, 0x1401E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1401E0u;
label_1401e0:
    // 0x1401e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1401e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1401e4:
    // 0x1401e4: 0xae4201a0  sw          $v0, 0x1A0($s2)
    ctx->pc = 0x1401e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 2));
label_1401e8:
    // 0x1401e8: 0xc050868  jal         func_1421A0
label_1401ec:
    if (ctx->pc == 0x1401ECu) {
        ctx->pc = 0x1401ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1401E8u;
        // 0x1401ec: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1401F0u;
        goto label_1401f0;
    }
    ctx->pc = 0x1401E8u;
    SET_GPR_U32(ctx, 31, 0x1401F0u);
    ctx->pc = 0x1401ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1401E8u;
    // 0x1401ec: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1421A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1421A0u, 0x1401E8u, 0x1401F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1401F0u;
label_1401f0:
    // 0x1401f0: 0x12c00013  beqz        $s6, . + 4 + (0x13 << 2)
label_1401f4:
    if (ctx->pc == 0x1401F4u) {
        ctx->pc = 0x1401F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1401F0u;
        // 0x1401f4: 0x264302c8  addiu       $v1, $s2, 0x2C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1401F8u;
        goto label_1401f8;
    }
    ctx->pc = 0x1401F0u;
    {
        const bool branch_taken_0x1401f0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1401F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1401F0u;
        // 0x1401f4: 0x264302c8  addiu       $v1, $s2, 0x2C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1401f0) {
            ctx->pc = 0x140240u;
            goto label_140240;
        }
    }
    ctx->pc = 0x1401F8u;
label_1401f8:
    // 0x1401f8: 0x8e4201a0  lw          $v0, 0x1A0($s2)
    ctx->pc = 0x1401f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
label_1401fc:
    // 0x1401fc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1401fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_140200:
    // 0x140200: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140204:
    // 0x140204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_140208:
    // 0x140208: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x140208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_14020c:
    // 0x14020c: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x14020cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
label_140210:
    // 0x140210: 0xac600080  sw          $zero, 0x80($v1)
    ctx->pc = 0x140210u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 0));
label_140214:
    // 0x140214: 0x0  nop
    ctx->pc = 0x140214u;
    // NOP
label_140218:
    // 0x140218: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x140218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_14021c:
    // 0x14021c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x14021cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_140220:
    // 0x140220: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x140220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_140224:
    // 0x140224: 0x0  nop
    ctx->pc = 0x140224u;
    // NOP
label_140228:
    // 0x140228: 0x0  nop
    ctx->pc = 0x140228u;
    // NOP
label_14022c:
    // 0x14022c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_140230:
    if (ctx->pc == 0x140230u) {
        ctx->pc = 0x140230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14022Cu;
        // 0x140230: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140234u;
        goto label_140234;
    }
    ctx->pc = 0x14022Cu;
    {
        const bool branch_taken_0x14022c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14022Cu;
        // 0x140230: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14022c) {
            ctx->pc = 0x140218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140218;
        }
    }
    ctx->pc = 0x140234u;
label_140234:
    // 0x140234: 0x1000000a  b           . + 4 + (0xA << 2)
label_140238:
    if (ctx->pc == 0x140238u) {
        ctx->pc = 0x14023Cu;
        goto label_14023c;
    }
    ctx->pc = 0x140234u;
    {
        const bool branch_taken_0x140234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140234) {
            ctx->pc = 0x140260u;
            goto label_140260;
        }
    }
    ctx->pc = 0x14023Cu;
label_14023c:
    // 0x14023c: 0x0  nop
    ctx->pc = 0x14023cu;
    // NOP
label_140240:
    // 0x140240: 0x8e4501a0  lw          $a1, 0x1A0($s2)
    ctx->pc = 0x140240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
label_140244:
    // 0x140244: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x140244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_140248:
    // 0x140248: 0xc64c0168  lwc1        $f12, 0x168($s2)
    ctx->pc = 0x140248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14024c:
    // 0x14024c: 0x26440084  addiu       $a0, $s2, 0x84
    ctx->pc = 0x14024cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
label_140250:
    // 0x140250: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x140250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_140254:
    // 0x140254: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x140254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140258:
    // 0x140258: 0xc067c32  jal         func_19F0C8
label_14025c:
    if (ctx->pc == 0x14025Cu) {
        ctx->pc = 0x14025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140258u;
        // 0x14025c: 0xae4501a0  sw          $a1, 0x1A0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140260u;
        goto label_140260;
    }
    ctx->pc = 0x140258u;
    SET_GPR_U32(ctx, 31, 0x140260u);
    ctx->pc = 0x14025Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140258u;
    // 0x14025c: 0xae4501a0  sw          $a1, 0x1A0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F0C8u, 0x140258u, 0x140260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140260u;
label_140260:
    // 0x140260: 0x12800029  beqz        $s4, . + 4 + (0x29 << 2)
label_140264:
    if (ctx->pc == 0x140264u) {
        ctx->pc = 0x140268u;
        goto label_140268;
    }
    ctx->pc = 0x140260u;
    {
        const bool branch_taken_0x140260 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x140260) {
            ctx->pc = 0x140308u;
            goto label_140308;
        }
    }
    ctx->pc = 0x140268u;
label_140268:
    // 0x140268: 0x4402b000  mfc1        $v0, $f22
    ctx->pc = 0x140268u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14026c:
    // 0x14026c: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x14026cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_140270:
    // 0x140270: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x140270u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_140274:
    // 0x140274: 0x48302800  qmfc2.ni    $s0, $vf5
    ctx->pc = 0x140274u;
    SET_GPR_VEC(ctx, 16, _mm_castps_si128(ctx->vu0_vf[5]));
label_140278:
    // 0x140278: 0x108000  sll         $s0, $s0, 0
    ctx->pc = 0x140278u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 0));
label_14027c:
    // 0x14027c: 0xc64d0078  lwc1        $f13, 0x78($s2)
    ctx->pc = 0x14027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_140280:
    // 0x140280: 0xc64c0074  lwc1        $f12, 0x74($s2)
    ctx->pc = 0x140280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_140284:
    // 0x140284: 0xc067a02  jal         func_19E808
label_140288:
    if (ctx->pc == 0x140288u) {
        ctx->pc = 0x140288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140284u;
        // 0x140288: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14028Cu;
        goto label_14028c;
    }
    ctx->pc = 0x140284u;
    SET_GPR_U32(ctx, 31, 0x14028Cu);
    ctx->pc = 0x140288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140284u;
    // 0x140288: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x140284u, 0x14028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14028Cu;
label_14028c:
    // 0x14028c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14028cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140290:
    // 0x140290: 0x244202d8  addiu       $v0, $v0, 0x2D8
    ctx->pc = 0x140290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
label_140294:
    // 0x140294: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x140294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_140298:
    // 0x140298: 0x720380c8  pmaxw       $s0, $s0, $v1
    ctx->pc = 0x140298u;
    SET_GPR_VEC(ctx, 16, PS2_PMAXW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 3)));
label_14029c:
    // 0x14029c: 0x108000  sll         $s0, $s0, 0
    ctx->pc = 0x14029cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 0));
label_1402a0:
    // 0x1402a0: 0x720480e8  pminw       $s0, $s0, $a0
    ctx->pc = 0x1402a0u;
    SET_GPR_VEC(ctx, 16, PS2_PMINW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 4)));
label_1402a4:
    // 0x1402a4: 0x108000  sll         $s0, $s0, 0
    ctx->pc = 0x1402a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 0));
label_1402a8:
    // 0x1402a8: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x1402a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1402ac:
    // 0x1402ac: 0x8e430160  lw          $v1, 0x160($s2)
    ctx->pc = 0x1402acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
label_1402b0:
    // 0x1402b0: 0x500018  mult        $zero, $v0, $s0
    ctx->pc = 0x1402b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1402b4:
    // 0x1402b4: 0x70640000  madd        $zero, $v1, $a0
    ctx->pc = 0x1402b4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
label_1402b8:
    // 0x1402b8: 0x70008030  pmfhl.lw    $s0
    ctx->pc = 0x1402b8u;
    SET_GPR_VEC(ctx, 16, PS2_PMFHL_LW(ctx->hi, ctx->lo));
label_1402bc:
    // 0x1402bc: 0x1083fb  dsra        $s0, $s0, 15
    ctx->pc = 0x1402bcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> 15);
label_1402c0:
    // 0x1402c0: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x1402c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_1402c4:
    // 0x1402c4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1402c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_1402c8:
    // 0x1402c8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_1402cc:
    if (ctx->pc == 0x1402CCu) {
        ctx->pc = 0x1402CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1402C8u;
        // 0x1402cc: 0xae5000f0  sw          $s0, 0xF0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1402D0u;
        goto label_1402d0;
    }
    ctx->pc = 0x1402C8u;
    {
        const bool branch_taken_0x1402c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1402c8) {
            ctx->pc = 0x1402CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1402C8u;
            // 0x1402cc: 0xae5000f0  sw          $s0, 0xF0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140308u;
            goto label_140308;
        }
    }
    ctx->pc = 0x1402D0u;
label_1402d0:
    // 0x1402d0: 0x8e220690  lw          $v0, 0x690($s1)
    ctx->pc = 0x1402d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_1402d4:
    // 0x1402d4: 0x8c431a64  lw          $v1, 0x1A64($v0)
    ctx->pc = 0x1402d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6756)));
label_1402d8:
    // 0x1402d8: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x1402d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
label_1402dc:
    // 0x1402dc: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1402dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_1402e0:
    // 0x1402e0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1402e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1402e4:
    // 0x1402e4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1402e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1402e8:
    // 0x1402e8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1402e8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1402ec:
    // 0x1402ec: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x1402ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1402f0:
    // 0x1402f0: 0x46006b45  abs.s       $f13, $f13
    ctx->pc = 0x1402f0u;
    ctx->f[13] = FPU_ABS_S(ctx->f[13]);
label_1402f4:
    // 0x1402f4: 0x460d0340  add.s       $f13, $f0, $f13
    ctx->pc = 0x1402f4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
label_1402f8:
    // 0x1402f8: 0xc067a02  jal         func_19E808
label_1402fc:
    if (ctx->pc == 0x1402FCu) {
        ctx->pc = 0x1402FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1402F8u;
        // 0x1402fc: 0xc7ac0004  lwc1        $f12, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x140300u;
        goto label_140300;
    }
    ctx->pc = 0x1402F8u;
    SET_GPR_U32(ctx, 31, 0x140300u);
    ctx->pc = 0x1402FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1402F8u;
    // 0x1402fc: 0xc7ac0004  lwc1        $f12, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x1402F8u, 0x140300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140300u;
label_140300:
    // 0x140300: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x140300u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_140304:
    // 0x140304: 0xae5000f0  sw          $s0, 0xF0($s2)
    ctx->pc = 0x140304u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 16));
label_140308:
    // 0x140308: 0x52a00007  beql        $s5, $zero, . + 4 + (0x7 << 2)
label_14030c:
    if (ctx->pc == 0x14030Cu) {
        ctx->pc = 0x14030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140308u;
        // 0x14030c: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140310u;
        goto label_140310;
    }
    ctx->pc = 0x140308u;
    {
        const bool branch_taken_0x140308 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x140308) {
            ctx->pc = 0x14030Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140308u;
            // 0x14030c: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140328u;
            goto label_140328;
        }
    }
    ctx->pc = 0x140310u;
label_140310:
    // 0x140310: 0xc6400184  lwc1        $f0, 0x184($s2)
    ctx->pc = 0x140310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140314:
    // 0x140314: 0xc6410188  lwc1        $f1, 0x188($s2)
    ctx->pc = 0x140314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_140318:
    // 0x140318: 0xe64001a4  swc1        $f0, 0x1A4($s2)
    ctx->pc = 0x140318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 420), bits); }
label_14031c:
    // 0x14031c: 0x10000045  b           . + 4 + (0x45 << 2)
label_140320:
    if (ctx->pc == 0x140320u) {
        ctx->pc = 0x140320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14031Cu;
        // 0x140320: 0xe64101a8  swc1        $f1, 0x1A8($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 424), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x140324u;
        goto label_140324;
    }
    ctx->pc = 0x14031Cu;
    {
        const bool branch_taken_0x14031c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14031Cu;
        // 0x140320: 0xe64101a8  swc1        $f1, 0x1A8($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 424), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14031c) {
            ctx->pc = 0x140434u;
            goto label_140434;
        }
    }
    ctx->pc = 0x140324u;
label_140324:
    // 0x140324: 0x0  nop
    ctx->pc = 0x140324u;
    // NOP
label_140328:
    // 0x140328: 0xc6410154  lwc1        $f1, 0x154($s2)
    ctx->pc = 0x140328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14032c:
    // 0x14032c: 0xc6400158  lwc1        $f0, 0x158($s2)
    ctx->pc = 0x14032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140330:
    // 0x140330: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x140330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_140334:
    // 0x140334: 0xe64101a4  swc1        $f1, 0x1A4($s2)
    ctx->pc = 0x140334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 420), bits); }
label_140338:
    // 0x140338: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_14033c:
    if (ctx->pc == 0x14033Cu) {
        ctx->pc = 0x14033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140338u;
        // 0x14033c: 0xe64001a8  swc1        $f0, 0x1A8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 424), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x140340u;
        goto label_140340;
    }
    ctx->pc = 0x140338u;
    {
        const bool branch_taken_0x140338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140338u;
        // 0x14033c: 0xe64001a8  swc1        $f0, 0x1A8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 424), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x140338) {
            ctx->pc = 0x140348u;
            goto label_140348;
        }
    }
    ctx->pc = 0x140340u;
label_140340:
    // 0x140340: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x140340u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_140344:
    // 0x140344: 0xe64001a4  swc1        $f0, 0x1A4($s2)
    ctx->pc = 0x140344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 420), bits); }
label_140348:
    // 0x140348: 0x1280002c  beqz        $s4, . + 4 + (0x2C << 2)
label_14034c:
    if (ctx->pc == 0x14034Cu) {
        ctx->pc = 0x140350u;
        goto label_140350;
    }
    ctx->pc = 0x140348u;
    {
        const bool branch_taken_0x140348 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x140348) {
            ctx->pc = 0x1403FCu;
            goto label_1403fc;
        }
    }
    ctx->pc = 0x140350u;
label_140350:
    // 0x140350: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x140350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_140354:
    // 0x140354: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x140354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_140358:
    // 0x140358: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_14035c:
    if (ctx->pc == 0x14035Cu) {
        ctx->pc = 0x140360u;
        goto label_140360;
    }
    ctx->pc = 0x140358u;
    {
        const bool branch_taken_0x140358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140358) {
            ctx->pc = 0x140398u;
            goto label_140398;
        }
    }
    ctx->pc = 0x140360u;
label_140360:
    // 0x140360: 0xc7808148  lwc1        $f0, -0x7EB8($gp)
    ctx->pc = 0x140360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140364:
    // 0x140364: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x140364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_140368:
    // 0x140368: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x140368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_14036c:
    // 0x14036c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x14036cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_140370:
    // 0x140370: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x140370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_140374:
    // 0x140374: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x140374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_140378:
    // 0x140378: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x140378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_14037c:
    // 0x14037c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14037cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_140380:
    // 0x140380: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x140380u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_140384:
    // 0x140384: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x140384u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
label_140388:
    // 0x140388: 0x46020569  min.s       $f21, $f0, $f2
    ctx->pc = 0x140388u;
    ctx->f[21] = std::min(ctx->f[0], ctx->f[2]);
label_14038c:
    // 0x14038c: 0x10000014  b           . + 4 + (0x14 << 2)
label_140390:
    if (ctx->pc == 0x140390u) {
        ctx->pc = 0x140390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14038Cu;
        // 0x140390: 0x46001d06  mov.s       $f20, $f3 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x140394u;
        goto label_140394;
    }
    ctx->pc = 0x14038Cu;
    {
        const bool branch_taken_0x14038c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14038Cu;
        // 0x140390: 0x46001d06  mov.s       $f20, $f3 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14038c) {
            ctx->pc = 0x1403E0u;
            goto label_1403e0;
        }
    }
    ctx->pc = 0x140394u;
label_140394:
    // 0x140394: 0x0  nop
    ctx->pc = 0x140394u;
    // NOP
label_140398:
    // 0x140398: 0xc781814c  lwc1        $f1, -0x7EB4($gp)
    ctx->pc = 0x140398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14039c:
    // 0x14039c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14039cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1403a0:
    // 0x1403a0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1403a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1403a4:
    // 0x1403a4: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1403a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1403a8:
    // 0x1403a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1403a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1403ac:
    // 0x1403ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1403acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1403b0:
    // 0x1403b0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1403b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1403b4:
    // 0x1403b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1403b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1403b8:
    // 0x1403b8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1403b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1403bc:
    // 0x1403bc: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x1403bcu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
label_1403c0:
    // 0x1403c0: 0x46020d69  min.s       $f21, $f1, $f2
    ctx->pc = 0x1403c0u;
    ctx->f[21] = std::min(ctx->f[1], ctx->f[2]);
label_1403c4:
    // 0x1403c4: 0xc7808150  lwc1        $f0, -0x7EB0($gp)
    ctx->pc = 0x1403c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1403c8:
    // 0x1403c8: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1403c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_1403cc:
    // 0x1403cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1403ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1403d0:
    // 0x1403d0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1403d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1403d4:
    // 0x1403d4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1403d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1403d8:
    // 0x1403d8: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x1403d8u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
label_1403dc:
    // 0x1403dc: 0x46010529  min.s       $f20, $f0, $f1
    ctx->pc = 0x1403dcu;
    ctx->f[20] = std::min(ctx->f[0], ctx->f[1]);
label_1403e0:
    // 0x1403e0: 0xc64001a8  lwc1        $f0, 0x1A8($s2)
    ctx->pc = 0x1403e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1403e4:
    // 0x1403e4: 0xc64101a4  lwc1        $f1, 0x1A4($s2)
    ctx->pc = 0x1403e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1403e8:
    // 0x1403e8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1403e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1403ec:
    // 0x1403ec: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1403ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1403f0:
    // 0x1403f0: 0xe64001a8  swc1        $f0, 0x1A8($s2)
    ctx->pc = 0x1403f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 424), bits); }
label_1403f4:
    // 0x1403f4: 0x1680000d  bnez        $s4, . + 4 + (0xD << 2)
label_1403f8:
    if (ctx->pc == 0x1403F8u) {
        ctx->pc = 0x1403F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1403F4u;
        // 0x1403f8: 0xe64101a4  swc1        $f1, 0x1A4($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 420), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1403FCu;
        goto label_1403fc;
    }
    ctx->pc = 0x1403F4u;
    {
        const bool branch_taken_0x1403f4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1403F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1403F4u;
        // 0x1403f8: 0xe64101a4  swc1        $f1, 0x1A4($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 420), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1403f4) {
            ctx->pc = 0x14042Cu;
            goto label_14042c;
        }
    }
    ctx->pc = 0x1403FCu;
label_1403fc:
    // 0x1403fc: 0xc06a202  jal         func_1A8808
label_140400:
    if (ctx->pc == 0x140400u) {
        ctx->pc = 0x140400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1403FCu;
        // 0x140400: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140404u;
        goto label_140404;
    }
    ctx->pc = 0x1403FCu;
    SET_GPR_U32(ctx, 31, 0x140404u);
    ctx->pc = 0x140400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1403FCu;
    // 0x140400: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x1403FCu, 0x140404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140404u;
label_140404:
    // 0x140404: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_140408:
    if (ctx->pc == 0x140408u) {
        ctx->pc = 0x14040Cu;
        goto label_14040c;
    }
    ctx->pc = 0x140404u;
    {
        const bool branch_taken_0x140404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140404) {
            ctx->pc = 0x140434u;
            goto label_140434;
        }
    }
    ctx->pc = 0x14040Cu;
label_14040c:
    // 0x14040c: 0xc06a202  jal         func_1A8808
label_140410:
    if (ctx->pc == 0x140410u) {
        ctx->pc = 0x140410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14040Cu;
        // 0x140410: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140414u;
        goto label_140414;
    }
    ctx->pc = 0x14040Cu;
    SET_GPR_U32(ctx, 31, 0x140414u);
    ctx->pc = 0x140410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14040Cu;
    // 0x140410: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x14040Cu, 0x140414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140414u;
label_140414:
    // 0x140414: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_140418:
    if (ctx->pc == 0x140418u) {
        ctx->pc = 0x140418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140414u;
        // 0x140418: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14041Cu;
        goto label_14041c;
    }
    ctx->pc = 0x140414u;
    {
        const bool branch_taken_0x140414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140414u;
        // 0x140418: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140414) {
            ctx->pc = 0x140434u;
            goto label_140434;
        }
    }
    ctx->pc = 0x14041Cu;
label_14041c:
    // 0x14041c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x14041cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_140420:
    // 0x140420: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x140420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_140424:
    // 0x140424: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_140428:
    if (ctx->pc == 0x140428u) {
        ctx->pc = 0x14042Cu;
        goto label_14042c;
    }
    ctx->pc = 0x140424u;
    {
        const bool branch_taken_0x140424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140424) {
            ctx->pc = 0x140434u;
            goto label_140434;
        }
    }
    ctx->pc = 0x14042Cu;
label_14042c:
    // 0x14042c: 0xc0501b0  jal         func_1406C0
label_140430:
    if (ctx->pc == 0x140430u) {
        ctx->pc = 0x140430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14042Cu;
        // 0x140430: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140434u;
        goto label_140434;
    }
    ctx->pc = 0x14042Cu;
    SET_GPR_U32(ctx, 31, 0x140434u);
    ctx->pc = 0x140430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14042Cu;
    // 0x140430: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1406C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1406C0u, 0x14042Cu, 0x140434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140434u;
label_140434:
    // 0x140434: 0x12e0001e  beqz        $s7, . + 4 + (0x1E << 2)
label_140438:
    if (ctx->pc == 0x140438u) {
        ctx->pc = 0x140438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140434u;
        // 0x140438: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14043Cu;
        goto label_14043c;
    }
    ctx->pc = 0x140434u;
    {
        const bool branch_taken_0x140434 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x140438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140434u;
        // 0x140438: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140434) {
            ctx->pc = 0x1404B0u;
            goto label_1404b0;
        }
    }
    ctx->pc = 0x14043Cu;
label_14043c:
    // 0x14043c: 0xc64001a8  lwc1        $f0, 0x1A8($s2)
    ctx->pc = 0x14043cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140440:
    // 0x140440: 0xc64101a4  lwc1        $f1, 0x1A4($s2)
    ctx->pc = 0x140440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_140444:
    // 0x140444: 0x264202c0  addiu       $v0, $s2, 0x2C0
    ctx->pc = 0x140444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_140448:
    // 0x140448: 0xe6400078  swc1        $f0, 0x78($s2)
    ctx->pc = 0x140448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
label_14044c:
    // 0x14044c: 0xe6410074  swc1        $f1, 0x74($s2)
    ctx->pc = 0x14044cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
label_140450:
    // 0x140450: 0xae4002c4  sw          $zero, 0x2C4($s2)
    ctx->pc = 0x140450u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 708), GPR_U32(ctx, 0));
label_140454:
    // 0x140454: 0x0  nop
    ctx->pc = 0x140454u;
    // NOP
label_140458:
    // 0x140458: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x140458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_14045c:
    // 0x14045c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14045cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_140460:
    // 0x140460: 0x0  nop
    ctx->pc = 0x140460u;
    // NOP
label_140464:
    // 0x140464: 0x0  nop
    ctx->pc = 0x140464u;
    // NOP
label_140468:
    // 0x140468: 0x0  nop
    ctx->pc = 0x140468u;
    // NOP
label_14046c:
    // 0x14046c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
label_140470:
    if (ctx->pc == 0x140470u) {
        ctx->pc = 0x140470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14046Cu;
        // 0x140470: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140474u;
        goto label_140474;
    }
    ctx->pc = 0x14046Cu;
    {
        const bool branch_taken_0x14046c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x140470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14046Cu;
        // 0x140470: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14046c) {
            ctx->pc = 0x140458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140458;
        }
    }
    ctx->pc = 0x140474u;
label_140474:
    // 0x140474: 0x264201c0  addiu       $v0, $s2, 0x1C0
    ctx->pc = 0x140474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
label_140478:
    // 0x140478: 0xc64001a4  lwc1        $f0, 0x1A4($s2)
    ctx->pc = 0x140478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14047c:
    // 0x14047c: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x14047cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
label_140480:
    // 0x140480: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x140480u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140484:
    // 0x140484: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x140484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140488:
    // 0x140488: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x140488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_14048c:
    // 0x14048c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x14048cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_140490:
    // 0x140490: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x140490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
label_140494:
    // 0x140494: 0x0  nop
    ctx->pc = 0x140494u;
    // NOP
label_140498:
    // 0x140498: 0x0  nop
    ctx->pc = 0x140498u;
    // NOP
label_14049c:
    // 0x14049c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1404a0:
    if (ctx->pc == 0x1404A0u) {
        ctx->pc = 0x1404A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14049Cu;
        // 0x1404a0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1404A4u;
        goto label_1404a4;
    }
    ctx->pc = 0x14049Cu;
    {
        const bool branch_taken_0x14049c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1404A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14049Cu;
        // 0x1404a0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14049c) {
            ctx->pc = 0x140488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140488;
        }
    }
    ctx->pc = 0x1404A4u;
label_1404a4:
    // 0x1404a4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1404a8:
    if (ctx->pc == 0x1404A8u) {
        ctx->pc = 0x1404A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404A4u;
        // 0x1404a8: 0x8e42019c  lw          $v0, 0x19C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1404ACu;
        goto label_1404ac;
    }
    ctx->pc = 0x1404A4u;
    {
        const bool branch_taken_0x1404a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1404A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404A4u;
        // 0x1404a8: 0x8e42019c  lw          $v0, 0x19C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1404a4) {
            ctx->pc = 0x140510u;
            goto label_140510;
        }
    }
    ctx->pc = 0x1404ACu;
label_1404ac:
    // 0x1404ac: 0x0  nop
    ctx->pc = 0x1404acu;
    // NOP
label_1404b0:
    // 0x1404b0: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
label_1404b4:
    if (ctx->pc == 0x1404B4u) {
        ctx->pc = 0x1404B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404B0u;
        // 0x1404b4: 0x26440078  addiu       $a0, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1404B8u;
        goto label_1404b8;
    }
    ctx->pc = 0x1404B0u;
    {
        const bool branch_taken_0x1404b0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1404B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404B0u;
        // 0x1404b4: 0x26440078  addiu       $a0, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1404b0) {
            ctx->pc = 0x1404E8u;
            goto label_1404e8;
        }
    }
    ctx->pc = 0x1404B8u;
label_1404b8:
    // 0x1404b8: 0xc64c01a8  lwc1        $f12, 0x1A8($s2)
    ctx->pc = 0x1404b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1404bc:
    // 0x1404bc: 0xc64d016c  lwc1        $f13, 0x16C($s2)
    ctx->pc = 0x1404bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1404c0:
    // 0x1404c0: 0xc067c0a  jal         func_19F028
label_1404c4:
    if (ctx->pc == 0x1404C4u) {
        ctx->pc = 0x1404C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404C0u;
        // 0x1404c4: 0xc64e0170  lwc1        $f14, 0x170($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1404C8u;
        goto label_1404c8;
    }
    ctx->pc = 0x1404C0u;
    SET_GPR_U32(ctx, 31, 0x1404C8u);
    ctx->pc = 0x1404C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1404C0u;
    // 0x1404c4: 0xc64e0170  lwc1        $f14, 0x170($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F028u, 0x1404C0u, 0x1404C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404C8u;
label_1404c8:
    // 0x1404c8: 0x26440074  addiu       $a0, $s2, 0x74
    ctx->pc = 0x1404c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
label_1404cc:
    // 0x1404cc: 0xc64c01a4  lwc1        $f12, 0x1A4($s2)
    ctx->pc = 0x1404ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1404d0:
    // 0x1404d0: 0xc64d0174  lwc1        $f13, 0x174($s2)
    ctx->pc = 0x1404d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1404d4:
    // 0x1404d4: 0xc067c0a  jal         func_19F028
label_1404d8:
    if (ctx->pc == 0x1404D8u) {
        ctx->pc = 0x1404D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404D4u;
        // 0x1404d8: 0xc64e0178  lwc1        $f14, 0x178($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1404DCu;
        goto label_1404dc;
    }
    ctx->pc = 0x1404D4u;
    SET_GPR_U32(ctx, 31, 0x1404DCu);
    ctx->pc = 0x1404D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1404D4u;
    // 0x1404d8: 0xc64e0178  lwc1        $f14, 0x178($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F028u, 0x1404D4u, 0x1404DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404DCu;
label_1404dc:
    // 0x1404dc: 0x1000000c  b           . + 4 + (0xC << 2)
label_1404e0:
    if (ctx->pc == 0x1404E0u) {
        ctx->pc = 0x1404E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404DCu;
        // 0x1404e0: 0x8e42019c  lw          $v0, 0x19C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1404E4u;
        goto label_1404e4;
    }
    ctx->pc = 0x1404DCu;
    {
        const bool branch_taken_0x1404dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1404E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404DCu;
        // 0x1404e0: 0x8e42019c  lw          $v0, 0x19C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1404dc) {
            ctx->pc = 0x140510u;
            goto label_140510;
        }
    }
    ctx->pc = 0x1404E4u;
label_1404e4:
    // 0x1404e4: 0x0  nop
    ctx->pc = 0x1404e4u;
    // NOP
label_1404e8:
    // 0x1404e8: 0xc64c01a8  lwc1        $f12, 0x1A8($s2)
    ctx->pc = 0x1404e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1404ec:
    // 0x1404ec: 0xc64d016c  lwc1        $f13, 0x16C($s2)
    ctx->pc = 0x1404ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1404f0:
    // 0x1404f0: 0xc067c0a  jal         func_19F028
label_1404f4:
    if (ctx->pc == 0x1404F4u) {
        ctx->pc = 0x1404F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404F0u;
        // 0x1404f4: 0xc64e0170  lwc1        $f14, 0x170($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1404F8u;
        goto label_1404f8;
    }
    ctx->pc = 0x1404F0u;
    SET_GPR_U32(ctx, 31, 0x1404F8u);
    ctx->pc = 0x1404F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1404F0u;
    // 0x1404f4: 0xc64e0170  lwc1        $f14, 0x170($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F028u, 0x1404F0u, 0x1404F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404F8u;
label_1404f8:
    // 0x1404f8: 0x26440074  addiu       $a0, $s2, 0x74
    ctx->pc = 0x1404f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
label_1404fc:
    // 0x1404fc: 0xc64c01a4  lwc1        $f12, 0x1A4($s2)
    ctx->pc = 0x1404fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_140500:
    // 0x140500: 0xc64d0174  lwc1        $f13, 0x174($s2)
    ctx->pc = 0x140500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_140504:
    // 0x140504: 0xc067c0a  jal         func_19F028
label_140508:
    if (ctx->pc == 0x140508u) {
        ctx->pc = 0x140508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140504u;
        // 0x140508: 0xc64e0178  lwc1        $f14, 0x178($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14050Cu;
        goto label_14050c;
    }
    ctx->pc = 0x140504u;
    SET_GPR_U32(ctx, 31, 0x14050Cu);
    ctx->pc = 0x140508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140504u;
    // 0x140508: 0xc64e0178  lwc1        $f14, 0x178($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F028u, 0x140504u, 0x14050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14050Cu;
label_14050c:
    // 0x14050c: 0x8e42019c  lw          $v0, 0x19C($s2)
    ctx->pc = 0x14050cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 412)));
label_140510:
    // 0x140510: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_140514:
    if (ctx->pc == 0x140514u) {
        ctx->pc = 0x140514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140510u;
        // 0x140514: 0x26500050  addiu       $s0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140518u;
        goto label_140518;
    }
    ctx->pc = 0x140510u;
    {
        const bool branch_taken_0x140510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140510u;
        // 0x140514: 0x26500050  addiu       $s0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140510) {
            ctx->pc = 0x140528u;
            goto label_140528;
        }
    }
    ctx->pc = 0x140518u;
label_140518:
    // 0x140518: 0x8e450198  lw          $a1, 0x198($s2)
    ctx->pc = 0x140518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
label_14051c:
    // 0x14051c: 0x40f809  jalr        $v0
label_140520:
    if (ctx->pc == 0x140520u) {
        ctx->pc = 0x140520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14051Cu;
        // 0x140520: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140524u;
        goto label_140524;
    }
    ctx->pc = 0x14051Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x140524u);
        ctx->pc = 0x140520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14051Cu;
        // 0x140520: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14051Cu, 0x140524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x140524u;
label_140524:
    // 0x140524: 0x26500050  addiu       $s0, $s2, 0x50
    ctx->pc = 0x140524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_140528:
    // 0x140528: 0x26510030  addiu       $s1, $s2, 0x30
    ctx->pc = 0x140528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_14052c:
    // 0x14052c: 0xc050a76  jal         func_1429D8
label_140530:
    if (ctx->pc == 0x140530u) {
        ctx->pc = 0x140530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14052Cu;
        // 0x140530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140534u;
        goto label_140534;
    }
    ctx->pc = 0x14052Cu;
    SET_GPR_U32(ctx, 31, 0x140534u);
    ctx->pc = 0x140530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14052Cu;
    // 0x140530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1429D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1429D8u, 0x14052Cu, 0x140534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140534u;
label_140534:
    // 0x140534: 0xc0503e6  jal         func_140F98
label_140538:
    if (ctx->pc == 0x140538u) {
        ctx->pc = 0x140538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140534u;
        // 0x140538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14053Cu;
        goto label_14053c;
    }
    ctx->pc = 0x140534u;
    SET_GPR_U32(ctx, 31, 0x14053Cu);
    ctx->pc = 0x140538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140534u;
    // 0x140538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F98u, 0x140534u, 0x14053Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14053Cu;
label_14053c:
    // 0x14053c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14053cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140540:
    // 0x140540: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x140540u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_140544:
    // 0x140544: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x140544u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_140548:
    // 0x140548: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x140548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_14054c:
    // 0x14054c: 0xc050494  jal         func_141250
label_140550:
    if (ctx->pc == 0x140550u) {
        ctx->pc = 0x140550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14054Cu;
        // 0x140550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140554u;
        goto label_140554;
    }
    ctx->pc = 0x14054Cu;
    SET_GPR_U32(ctx, 31, 0x140554u);
    ctx->pc = 0x140550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14054Cu;
    // 0x140550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141250u, 0x14054Cu, 0x140554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140554u;
label_140554:
    // 0x140554: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x140554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_140558:
    // 0x140558: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x140558u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14055c:
    // 0x14055c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x14055cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_140560:
    // 0x140560: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x140560u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_140564:
    // 0x140564: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x140564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_140568:
    // 0x140568: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x140568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_14056c:
    // 0x14056c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x14056cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_140570:
    // 0x140570: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_140574:
    if (ctx->pc == 0x140574u) {
        ctx->pc = 0x140574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140570u;
        // 0x140574: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140578u;
        goto label_140578;
    }
    ctx->pc = 0x140570u;
    {
        const bool branch_taken_0x140570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140570) {
            ctx->pc = 0x140574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140570u;
            // 0x140574: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1405A4u;
            goto label_1405a4;
        }
    }
    ctx->pc = 0x140578u;
label_140578:
    // 0x140578: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x140578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14057c:
    // 0x14057c: 0x2862fc72  slti        $v0, $v1, -0x38E
    ctx->pc = 0x14057cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294966386) ? 1 : 0);
label_140580:
    // 0x140580: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_140584:
    if (ctx->pc == 0x140584u) {
        ctx->pc = 0x140584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140580u;
        // 0x140584: 0x2862038f  slti        $v0, $v1, 0x38F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)911) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x140588u;
        goto label_140588;
    }
    ctx->pc = 0x140580u;
    {
        const bool branch_taken_0x140580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140580) {
            ctx->pc = 0x140584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140580u;
            // 0x140584: 0x2862038f  slti        $v0, $v1, 0x38F (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)911) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x140590u;
            goto label_140590;
        }
    }
    ctx->pc = 0x140588u;
label_140588:
    // 0x140588: 0x10000004  b           . + 4 + (0x4 << 2)
label_14058c:
    if (ctx->pc == 0x14058Cu) {
        ctx->pc = 0x14058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140588u;
        // 0x14058c: 0x2402fc72  addiu       $v0, $zero, -0x38E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966386));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140590u;
        goto label_140590;
    }
    ctx->pc = 0x140588u;
    {
        const bool branch_taken_0x140588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140588u;
        // 0x14058c: 0x2402fc72  addiu       $v0, $zero, -0x38E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966386));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140588) {
            ctx->pc = 0x14059Cu;
            goto label_14059c;
        }
    }
    ctx->pc = 0x140590u;
label_140590:
    // 0x140590: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_140594:
    if (ctx->pc == 0x140594u) {
        ctx->pc = 0x140594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140590u;
        // 0x140594: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140598u;
        goto label_140598;
    }
    ctx->pc = 0x140590u;
    {
        const bool branch_taken_0x140590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140590) {
            ctx->pc = 0x140594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140590u;
            // 0x140594: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1405A4u;
            goto label_1405a4;
        }
    }
    ctx->pc = 0x140598u;
label_140598:
    // 0x140598: 0x2402038e  addiu       $v0, $zero, 0x38E
    ctx->pc = 0x140598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 910));
label_14059c:
    // 0x14059c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x14059cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1405a0:
    // 0x1405a0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1405a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1405a4:
    // 0x1405a4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1405a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_1405a8:
    // 0x1405a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1405a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1405ac:
    // 0x1405ac: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_1405b0:
    if (ctx->pc == 0x1405B0u) {
        ctx->pc = 0x1405B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1405ACu;
        // 0x1405b0: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1405B4u;
        goto label_1405b4;
    }
    ctx->pc = 0x1405ACu;
    {
        const bool branch_taken_0x1405ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1405ac) {
            ctx->pc = 0x1405B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1405ACu;
            // 0x1405b0: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1405E4u;
            goto label_1405e4;
        }
    }
    ctx->pc = 0x1405B4u;
label_1405b4:
    // 0x1405b4: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x1405b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1405b8:
    // 0x1405b8: 0x2862f556  slti        $v0, $v1, -0xAAA
    ctx->pc = 0x1405b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294964566) ? 1 : 0);
label_1405bc:
    // 0x1405bc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1405c0:
    if (ctx->pc == 0x1405C0u) {
        ctx->pc = 0x1405C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1405BCu;
        // 0x1405c0: 0x28620aab  slti        $v0, $v1, 0xAAB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2731) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1405C4u;
        goto label_1405c4;
    }
    ctx->pc = 0x1405BCu;
    {
        const bool branch_taken_0x1405bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1405bc) {
            ctx->pc = 0x1405C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1405BCu;
            // 0x1405c0: 0x28620aab  slti        $v0, $v1, 0xAAB (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2731) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1405D0u;
            goto label_1405d0;
        }
    }
    ctx->pc = 0x1405C4u;
label_1405c4:
    // 0x1405c4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1405c8:
    if (ctx->pc == 0x1405C8u) {
        ctx->pc = 0x1405C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1405C4u;
        // 0x1405c8: 0x2402f556  addiu       $v0, $zero, -0xAAA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964566));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1405CCu;
        goto label_1405cc;
    }
    ctx->pc = 0x1405C4u;
    {
        const bool branch_taken_0x1405c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1405C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1405C4u;
        // 0x1405c8: 0x2402f556  addiu       $v0, $zero, -0xAAA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964566));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1405c4) {
            ctx->pc = 0x1405DCu;
            goto label_1405dc;
        }
    }
    ctx->pc = 0x1405CCu;
label_1405cc:
    // 0x1405cc: 0x0  nop
    ctx->pc = 0x1405ccu;
    // NOP
label_1405d0:
    // 0x1405d0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1405d4:
    if (ctx->pc == 0x1405D4u) {
        ctx->pc = 0x1405D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1405D0u;
        // 0x1405d4: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1405D8u;
        goto label_1405d8;
    }
    ctx->pc = 0x1405D0u;
    {
        const bool branch_taken_0x1405d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1405d0) {
            ctx->pc = 0x1405D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1405D0u;
            // 0x1405d4: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1405E4u;
            goto label_1405e4;
        }
    }
    ctx->pc = 0x1405D8u;
label_1405d8:
    // 0x1405d8: 0x24020aaa  addiu       $v0, $zero, 0xAAA
    ctx->pc = 0x1405d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2730));
label_1405dc:
    // 0x1405dc: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x1405dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_1405e0:
    // 0x1405e0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1405e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1405e4:
    // 0x1405e4: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x1405e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
label_1405e8:
    // 0x1405e8: 0x2404efff  addiu       $a0, $zero, -0x1001
    ctx->pc = 0x1405e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_1405ec:
    // 0x1405ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1405ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1405f0:
    // 0x1405f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1405f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1405f4:
    // 0x1405f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1405f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1405f8:
    // 0x1405f8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1405f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1405fc:
    // 0x1405fc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1405fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_140600:
    // 0x140600: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x140600u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_140604:
    // 0x140604: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x140604u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_140608:
    // 0x140608: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x140608u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14060c:
    // 0x14060c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x14060cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_140610:
    // 0x140610: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x140610u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_140614:
    // 0x140614: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x140614u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_140618:
    // 0x140618: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x140618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_14061c:
    // 0x14061c: 0xc7b60068  lwc1        $f22, 0x68($sp)
    ctx->pc = 0x14061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_140620:
    // 0x140620: 0xc7b50060  lwc1        $f21, 0x60($sp)
    ctx->pc = 0x140620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_140624:
    // 0x140624: 0xc7b40058  lwc1        $f20, 0x58($sp)
    ctx->pc = 0x140624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_140628:
    // 0x140628: 0x3e00008  jr          $ra
label_14062c:
    if (ctx->pc == 0x14062Cu) {
        ctx->pc = 0x14062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140628u;
        // 0x14062c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140630u;
        goto label_fallthrough_0x140628;
    }
    ctx->pc = 0x140628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140628u;
        // 0x14062c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x140628:
    ctx->pc = 0x140630u;
}
