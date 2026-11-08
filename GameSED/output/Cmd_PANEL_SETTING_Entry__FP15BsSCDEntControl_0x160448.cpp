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

// Function: Cmd_PANEL_SETTING_Entry__FP15BsSCDEntControl
// Address: 0x160448 - 0x160a54
void Cmd_PANEL_SETTING_Entry__FP15BsSCDEntControl_0x160448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PANEL_SETTING_Entry__FP15BsSCDEntControl_0x160448");
#endif

    switch (ctx->pc) {
        case 0x160448u: goto label_160448;
        case 0x16044cu: goto label_16044c;
        case 0x160450u: goto label_160450;
        case 0x160454u: goto label_160454;
        case 0x160458u: goto label_160458;
        case 0x16045cu: goto label_16045c;
        case 0x160460u: goto label_160460;
        case 0x160464u: goto label_160464;
        case 0x160468u: goto label_160468;
        case 0x16046cu: goto label_16046c;
        case 0x160470u: goto label_160470;
        case 0x160474u: goto label_160474;
        case 0x160478u: goto label_160478;
        case 0x16047cu: goto label_16047c;
        case 0x160480u: goto label_160480;
        case 0x160484u: goto label_160484;
        case 0x160488u: goto label_160488;
        case 0x16048cu: goto label_16048c;
        case 0x160490u: goto label_160490;
        case 0x160494u: goto label_160494;
        case 0x160498u: goto label_160498;
        case 0x16049cu: goto label_16049c;
        case 0x1604a0u: goto label_1604a0;
        case 0x1604a4u: goto label_1604a4;
        case 0x1604a8u: goto label_1604a8;
        case 0x1604acu: goto label_1604ac;
        case 0x1604b0u: goto label_1604b0;
        case 0x1604b4u: goto label_1604b4;
        case 0x1604b8u: goto label_1604b8;
        case 0x1604bcu: goto label_1604bc;
        case 0x1604c0u: goto label_1604c0;
        case 0x1604c4u: goto label_1604c4;
        case 0x1604c8u: goto label_1604c8;
        case 0x1604ccu: goto label_1604cc;
        case 0x1604d0u: goto label_1604d0;
        case 0x1604d4u: goto label_1604d4;
        case 0x1604d8u: goto label_1604d8;
        case 0x1604dcu: goto label_1604dc;
        case 0x1604e0u: goto label_1604e0;
        case 0x1604e4u: goto label_1604e4;
        case 0x1604e8u: goto label_1604e8;
        case 0x1604ecu: goto label_1604ec;
        case 0x1604f0u: goto label_1604f0;
        case 0x1604f4u: goto label_1604f4;
        case 0x1604f8u: goto label_1604f8;
        case 0x1604fcu: goto label_1604fc;
        case 0x160500u: goto label_160500;
        case 0x160504u: goto label_160504;
        case 0x160508u: goto label_160508;
        case 0x16050cu: goto label_16050c;
        case 0x160510u: goto label_160510;
        case 0x160514u: goto label_160514;
        case 0x160518u: goto label_160518;
        case 0x16051cu: goto label_16051c;
        case 0x160520u: goto label_160520;
        case 0x160524u: goto label_160524;
        case 0x160528u: goto label_160528;
        case 0x16052cu: goto label_16052c;
        case 0x160530u: goto label_160530;
        case 0x160534u: goto label_160534;
        case 0x160538u: goto label_160538;
        case 0x16053cu: goto label_16053c;
        case 0x160540u: goto label_160540;
        case 0x160544u: goto label_160544;
        case 0x160548u: goto label_160548;
        case 0x16054cu: goto label_16054c;
        case 0x160550u: goto label_160550;
        case 0x160554u: goto label_160554;
        case 0x160558u: goto label_160558;
        case 0x16055cu: goto label_16055c;
        case 0x160560u: goto label_160560;
        case 0x160564u: goto label_160564;
        case 0x160568u: goto label_160568;
        case 0x16056cu: goto label_16056c;
        case 0x160570u: goto label_160570;
        case 0x160574u: goto label_160574;
        case 0x160578u: goto label_160578;
        case 0x16057cu: goto label_16057c;
        case 0x160580u: goto label_160580;
        case 0x160584u: goto label_160584;
        case 0x160588u: goto label_160588;
        case 0x16058cu: goto label_16058c;
        case 0x160590u: goto label_160590;
        case 0x160594u: goto label_160594;
        case 0x160598u: goto label_160598;
        case 0x16059cu: goto label_16059c;
        case 0x1605a0u: goto label_1605a0;
        case 0x1605a4u: goto label_1605a4;
        case 0x1605a8u: goto label_1605a8;
        case 0x1605acu: goto label_1605ac;
        case 0x1605b0u: goto label_1605b0;
        case 0x1605b4u: goto label_1605b4;
        case 0x1605b8u: goto label_1605b8;
        case 0x1605bcu: goto label_1605bc;
        case 0x1605c0u: goto label_1605c0;
        case 0x1605c4u: goto label_1605c4;
        case 0x1605c8u: goto label_1605c8;
        case 0x1605ccu: goto label_1605cc;
        case 0x1605d0u: goto label_1605d0;
        case 0x1605d4u: goto label_1605d4;
        case 0x1605d8u: goto label_1605d8;
        case 0x1605dcu: goto label_1605dc;
        case 0x1605e0u: goto label_1605e0;
        case 0x1605e4u: goto label_1605e4;
        case 0x1605e8u: goto label_1605e8;
        case 0x1605ecu: goto label_1605ec;
        case 0x1605f0u: goto label_1605f0;
        case 0x1605f4u: goto label_1605f4;
        case 0x1605f8u: goto label_1605f8;
        case 0x1605fcu: goto label_1605fc;
        case 0x160600u: goto label_160600;
        case 0x160604u: goto label_160604;
        case 0x160608u: goto label_160608;
        case 0x16060cu: goto label_16060c;
        case 0x160610u: goto label_160610;
        case 0x160614u: goto label_160614;
        case 0x160618u: goto label_160618;
        case 0x16061cu: goto label_16061c;
        case 0x160620u: goto label_160620;
        case 0x160624u: goto label_160624;
        case 0x160628u: goto label_160628;
        case 0x16062cu: goto label_16062c;
        case 0x160630u: goto label_160630;
        case 0x160634u: goto label_160634;
        case 0x160638u: goto label_160638;
        case 0x16063cu: goto label_16063c;
        case 0x160640u: goto label_160640;
        case 0x160644u: goto label_160644;
        case 0x160648u: goto label_160648;
        case 0x16064cu: goto label_16064c;
        case 0x160650u: goto label_160650;
        case 0x160654u: goto label_160654;
        case 0x160658u: goto label_160658;
        case 0x16065cu: goto label_16065c;
        case 0x160660u: goto label_160660;
        case 0x160664u: goto label_160664;
        case 0x160668u: goto label_160668;
        case 0x16066cu: goto label_16066c;
        case 0x160670u: goto label_160670;
        case 0x160674u: goto label_160674;
        case 0x160678u: goto label_160678;
        case 0x16067cu: goto label_16067c;
        case 0x160680u: goto label_160680;
        case 0x160684u: goto label_160684;
        case 0x160688u: goto label_160688;
        case 0x16068cu: goto label_16068c;
        case 0x160690u: goto label_160690;
        case 0x160694u: goto label_160694;
        case 0x160698u: goto label_160698;
        case 0x16069cu: goto label_16069c;
        case 0x1606a0u: goto label_1606a0;
        case 0x1606a4u: goto label_1606a4;
        case 0x1606a8u: goto label_1606a8;
        case 0x1606acu: goto label_1606ac;
        case 0x1606b0u: goto label_1606b0;
        case 0x1606b4u: goto label_1606b4;
        case 0x1606b8u: goto label_1606b8;
        case 0x1606bcu: goto label_1606bc;
        case 0x1606c0u: goto label_1606c0;
        case 0x1606c4u: goto label_1606c4;
        case 0x1606c8u: goto label_1606c8;
        case 0x1606ccu: goto label_1606cc;
        case 0x1606d0u: goto label_1606d0;
        case 0x1606d4u: goto label_1606d4;
        case 0x1606d8u: goto label_1606d8;
        case 0x1606dcu: goto label_1606dc;
        case 0x1606e0u: goto label_1606e0;
        case 0x1606e4u: goto label_1606e4;
        case 0x1606e8u: goto label_1606e8;
        case 0x1606ecu: goto label_1606ec;
        case 0x1606f0u: goto label_1606f0;
        case 0x1606f4u: goto label_1606f4;
        case 0x1606f8u: goto label_1606f8;
        case 0x1606fcu: goto label_1606fc;
        case 0x160700u: goto label_160700;
        case 0x160704u: goto label_160704;
        case 0x160708u: goto label_160708;
        case 0x16070cu: goto label_16070c;
        case 0x160710u: goto label_160710;
        case 0x160714u: goto label_160714;
        case 0x160718u: goto label_160718;
        case 0x16071cu: goto label_16071c;
        case 0x160720u: goto label_160720;
        case 0x160724u: goto label_160724;
        case 0x160728u: goto label_160728;
        case 0x16072cu: goto label_16072c;
        case 0x160730u: goto label_160730;
        case 0x160734u: goto label_160734;
        case 0x160738u: goto label_160738;
        case 0x16073cu: goto label_16073c;
        case 0x160740u: goto label_160740;
        case 0x160744u: goto label_160744;
        case 0x160748u: goto label_160748;
        case 0x16074cu: goto label_16074c;
        case 0x160750u: goto label_160750;
        case 0x160754u: goto label_160754;
        case 0x160758u: goto label_160758;
        case 0x16075cu: goto label_16075c;
        case 0x160760u: goto label_160760;
        case 0x160764u: goto label_160764;
        case 0x160768u: goto label_160768;
        case 0x16076cu: goto label_16076c;
        case 0x160770u: goto label_160770;
        case 0x160774u: goto label_160774;
        case 0x160778u: goto label_160778;
        case 0x16077cu: goto label_16077c;
        case 0x160780u: goto label_160780;
        case 0x160784u: goto label_160784;
        case 0x160788u: goto label_160788;
        case 0x16078cu: goto label_16078c;
        case 0x160790u: goto label_160790;
        case 0x160794u: goto label_160794;
        case 0x160798u: goto label_160798;
        case 0x16079cu: goto label_16079c;
        case 0x1607a0u: goto label_1607a0;
        case 0x1607a4u: goto label_1607a4;
        case 0x1607a8u: goto label_1607a8;
        case 0x1607acu: goto label_1607ac;
        case 0x1607b0u: goto label_1607b0;
        case 0x1607b4u: goto label_1607b4;
        case 0x1607b8u: goto label_1607b8;
        case 0x1607bcu: goto label_1607bc;
        case 0x1607c0u: goto label_1607c0;
        case 0x1607c4u: goto label_1607c4;
        case 0x1607c8u: goto label_1607c8;
        case 0x1607ccu: goto label_1607cc;
        case 0x1607d0u: goto label_1607d0;
        case 0x1607d4u: goto label_1607d4;
        case 0x1607d8u: goto label_1607d8;
        case 0x1607dcu: goto label_1607dc;
        case 0x1607e0u: goto label_1607e0;
        case 0x1607e4u: goto label_1607e4;
        case 0x1607e8u: goto label_1607e8;
        case 0x1607ecu: goto label_1607ec;
        case 0x1607f0u: goto label_1607f0;
        case 0x1607f4u: goto label_1607f4;
        case 0x1607f8u: goto label_1607f8;
        case 0x1607fcu: goto label_1607fc;
        case 0x160800u: goto label_160800;
        case 0x160804u: goto label_160804;
        case 0x160808u: goto label_160808;
        case 0x16080cu: goto label_16080c;
        case 0x160810u: goto label_160810;
        case 0x160814u: goto label_160814;
        case 0x160818u: goto label_160818;
        case 0x16081cu: goto label_16081c;
        case 0x160820u: goto label_160820;
        case 0x160824u: goto label_160824;
        case 0x160828u: goto label_160828;
        case 0x16082cu: goto label_16082c;
        case 0x160830u: goto label_160830;
        case 0x160834u: goto label_160834;
        case 0x160838u: goto label_160838;
        case 0x16083cu: goto label_16083c;
        case 0x160840u: goto label_160840;
        case 0x160844u: goto label_160844;
        case 0x160848u: goto label_160848;
        case 0x16084cu: goto label_16084c;
        case 0x160850u: goto label_160850;
        case 0x160854u: goto label_160854;
        case 0x160858u: goto label_160858;
        case 0x16085cu: goto label_16085c;
        case 0x160860u: goto label_160860;
        case 0x160864u: goto label_160864;
        case 0x160868u: goto label_160868;
        case 0x16086cu: goto label_16086c;
        case 0x160870u: goto label_160870;
        case 0x160874u: goto label_160874;
        case 0x160878u: goto label_160878;
        case 0x16087cu: goto label_16087c;
        case 0x160880u: goto label_160880;
        case 0x160884u: goto label_160884;
        case 0x160888u: goto label_160888;
        case 0x16088cu: goto label_16088c;
        case 0x160890u: goto label_160890;
        case 0x160894u: goto label_160894;
        case 0x160898u: goto label_160898;
        case 0x16089cu: goto label_16089c;
        case 0x1608a0u: goto label_1608a0;
        case 0x1608a4u: goto label_1608a4;
        case 0x1608a8u: goto label_1608a8;
        case 0x1608acu: goto label_1608ac;
        case 0x1608b0u: goto label_1608b0;
        case 0x1608b4u: goto label_1608b4;
        case 0x1608b8u: goto label_1608b8;
        case 0x1608bcu: goto label_1608bc;
        case 0x1608c0u: goto label_1608c0;
        case 0x1608c4u: goto label_1608c4;
        case 0x1608c8u: goto label_1608c8;
        case 0x1608ccu: goto label_1608cc;
        case 0x1608d0u: goto label_1608d0;
        case 0x1608d4u: goto label_1608d4;
        case 0x1608d8u: goto label_1608d8;
        case 0x1608dcu: goto label_1608dc;
        case 0x1608e0u: goto label_1608e0;
        case 0x1608e4u: goto label_1608e4;
        case 0x1608e8u: goto label_1608e8;
        case 0x1608ecu: goto label_1608ec;
        case 0x1608f0u: goto label_1608f0;
        case 0x1608f4u: goto label_1608f4;
        case 0x1608f8u: goto label_1608f8;
        case 0x1608fcu: goto label_1608fc;
        case 0x160900u: goto label_160900;
        case 0x160904u: goto label_160904;
        case 0x160908u: goto label_160908;
        case 0x16090cu: goto label_16090c;
        case 0x160910u: goto label_160910;
        case 0x160914u: goto label_160914;
        case 0x160918u: goto label_160918;
        case 0x16091cu: goto label_16091c;
        case 0x160920u: goto label_160920;
        case 0x160924u: goto label_160924;
        case 0x160928u: goto label_160928;
        case 0x16092cu: goto label_16092c;
        case 0x160930u: goto label_160930;
        case 0x160934u: goto label_160934;
        case 0x160938u: goto label_160938;
        case 0x16093cu: goto label_16093c;
        case 0x160940u: goto label_160940;
        case 0x160944u: goto label_160944;
        case 0x160948u: goto label_160948;
        case 0x16094cu: goto label_16094c;
        case 0x160950u: goto label_160950;
        case 0x160954u: goto label_160954;
        case 0x160958u: goto label_160958;
        case 0x16095cu: goto label_16095c;
        case 0x160960u: goto label_160960;
        case 0x160964u: goto label_160964;
        case 0x160968u: goto label_160968;
        case 0x16096cu: goto label_16096c;
        case 0x160970u: goto label_160970;
        case 0x160974u: goto label_160974;
        case 0x160978u: goto label_160978;
        case 0x16097cu: goto label_16097c;
        case 0x160980u: goto label_160980;
        case 0x160984u: goto label_160984;
        case 0x160988u: goto label_160988;
        case 0x16098cu: goto label_16098c;
        case 0x160990u: goto label_160990;
        case 0x160994u: goto label_160994;
        case 0x160998u: goto label_160998;
        case 0x16099cu: goto label_16099c;
        case 0x1609a0u: goto label_1609a0;
        case 0x1609a4u: goto label_1609a4;
        case 0x1609a8u: goto label_1609a8;
        case 0x1609acu: goto label_1609ac;
        case 0x1609b0u: goto label_1609b0;
        case 0x1609b4u: goto label_1609b4;
        case 0x1609b8u: goto label_1609b8;
        case 0x1609bcu: goto label_1609bc;
        case 0x1609c0u: goto label_1609c0;
        case 0x1609c4u: goto label_1609c4;
        case 0x1609c8u: goto label_1609c8;
        case 0x1609ccu: goto label_1609cc;
        case 0x1609d0u: goto label_1609d0;
        case 0x1609d4u: goto label_1609d4;
        case 0x1609d8u: goto label_1609d8;
        case 0x1609dcu: goto label_1609dc;
        case 0x1609e0u: goto label_1609e0;
        case 0x1609e4u: goto label_1609e4;
        case 0x1609e8u: goto label_1609e8;
        case 0x1609ecu: goto label_1609ec;
        case 0x1609f0u: goto label_1609f0;
        case 0x1609f4u: goto label_1609f4;
        case 0x1609f8u: goto label_1609f8;
        case 0x1609fcu: goto label_1609fc;
        case 0x160a00u: goto label_160a00;
        case 0x160a04u: goto label_160a04;
        case 0x160a08u: goto label_160a08;
        case 0x160a0cu: goto label_160a0c;
        case 0x160a10u: goto label_160a10;
        case 0x160a14u: goto label_160a14;
        case 0x160a18u: goto label_160a18;
        case 0x160a1cu: goto label_160a1c;
        case 0x160a20u: goto label_160a20;
        case 0x160a24u: goto label_160a24;
        case 0x160a28u: goto label_160a28;
        case 0x160a2cu: goto label_160a2c;
        case 0x160a30u: goto label_160a30;
        case 0x160a34u: goto label_160a34;
        case 0x160a38u: goto label_160a38;
        case 0x160a3cu: goto label_160a3c;
        case 0x160a40u: goto label_160a40;
        case 0x160a44u: goto label_160a44;
        case 0x160a48u: goto label_160a48;
        case 0x160a4cu: goto label_160a4c;
        case 0x160a50u: goto label_160a50;
        default: break;
    }

    ctx->pc = 0x160448u;

label_160448:
    // 0x160448: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x160448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16044c:
    // 0x16044c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16044cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_160450:
    // 0x160450: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x160450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_160454:
    // 0x160454: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x160454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_160458:
    // 0x160458: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x160458u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16045c:
    // 0x16045c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16045cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_160460:
    // 0x160460: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x160460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_160464:
    // 0x160464: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x160464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_160468:
    // 0x160468: 0xc06a26e  jal         func_1A89B8
label_16046c:
    if (ctx->pc == 0x16046Cu) {
        ctx->pc = 0x16046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160468u;
        // 0x16046c: 0x8630000e  lh          $s0, 0xE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160470u;
        goto label_160470;
    }
    ctx->pc = 0x160468u;
    SET_GPR_U32(ctx, 31, 0x160470u);
    ctx->pc = 0x16046Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160468u;
    // 0x16046c: 0x8630000e  lh          $s0, 0xE($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x160468u, 0x160470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160470u;
label_160470:
    // 0x160470: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x160470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160474:
    // 0x160474: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x160474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_160478:
    // 0x160478: 0x14520017  bne         $v0, $s2, . + 4 + (0x17 << 2)
label_16047c:
    if (ctx->pc == 0x16047Cu) {
        ctx->pc = 0x16047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160478u;
        // 0x16047c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160480u;
        goto label_160480;
    }
    ctx->pc = 0x160478u;
    {
        const bool branch_taken_0x160478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x16047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160478u;
        // 0x16047c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160478) {
            ctx->pc = 0x1604D8u;
            goto label_1604d8;
        }
    }
    ctx->pc = 0x160480u;
label_160480:
    // 0x160480: 0xaf848b38  sw          $a0, -0x74C8($gp)
    ctx->pc = 0x160480u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937400), GPR_U32(ctx, 4));
label_160484:
    // 0x160484: 0x14850004  bne         $a0, $a1, . + 4 + (0x4 << 2)
label_160488:
    if (ctx->pc == 0x160488u) {
        ctx->pc = 0x160488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160484u;
        // 0x160488: 0xaf808b3c  sw          $zero, -0x74C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16048Cu;
        goto label_16048c;
    }
    ctx->pc = 0x160484u;
    {
        const bool branch_taken_0x160484 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x160488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160484u;
        // 0x160488: 0xaf808b3c  sw          $zero, -0x74C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160484) {
            ctx->pc = 0x160498u;
            goto label_160498;
        }
    }
    ctx->pc = 0x16048Cu;
label_16048c:
    // 0x16048c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x16048cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_160490:
    // 0x160490: 0x10000169  b           . + 4 + (0x169 << 2)
label_160494:
    if (ctx->pc == 0x160494u) {
        ctx->pc = 0x160494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160490u;
        // 0x160494: 0xa440a294  sh          $zero, -0x5D6C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294943380), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160498u;
        goto label_160498;
    }
    ctx->pc = 0x160490u;
    {
        const bool branch_taken_0x160490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160490u;
        // 0x160494: 0xa440a294  sh          $zero, -0x5D6C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294943380), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160490) {
            ctx->pc = 0x160A38u;
            goto label_160a38;
        }
    }
    ctx->pc = 0x160498u;
label_160498:
    // 0x160498: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x160498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_16049c:
    // 0x16049c: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
label_1604a0:
    if (ctx->pc == 0x1604A0u) {
        ctx->pc = 0x1604A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16049Cu;
        // 0x1604a0: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604A4u;
        goto label_1604a4;
    }
    ctx->pc = 0x16049Cu;
    {
        const bool branch_taken_0x16049c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1604A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16049Cu;
        // 0x1604a0: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16049c) {
            ctx->pc = 0x1604B8u;
            goto label_1604b8;
        }
    }
    ctx->pc = 0x1604A4u;
label_1604a4:
    // 0x1604a4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1604a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_1604a8:
    // 0x1604a8: 0xaf858b38  sw          $a1, -0x74C8($gp)
    ctx->pc = 0x1604a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937400), GPR_U32(ctx, 5));
label_1604ac:
    // 0x1604ac: 0x10000162  b           . + 4 + (0x162 << 2)
label_1604b0:
    if (ctx->pc == 0x1604B0u) {
        ctx->pc = 0x1604B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604ACu;
        // 0x1604b0: 0xa452a294  sh          $s2, -0x5D6C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294943380), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604B4u;
        goto label_1604b4;
    }
    ctx->pc = 0x1604ACu;
    {
        const bool branch_taken_0x1604ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1604B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604ACu;
        // 0x1604b0: 0xa452a294  sh          $s2, -0x5D6C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294943380), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604ac) {
            ctx->pc = 0x160A38u;
            goto label_160a38;
        }
    }
    ctx->pc = 0x1604B4u;
label_1604b4:
    // 0x1604b4: 0x0  nop
    ctx->pc = 0x1604b4u;
    // NOP
label_1604b8:
    // 0x1604b8: 0x14820160  bne         $a0, $v0, . + 4 + (0x160 << 2)
label_1604bc:
    if (ctx->pc == 0x1604BCu) {
        ctx->pc = 0x1604BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604B8u;
        // 0x1604bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604C0u;
        goto label_1604c0;
    }
    ctx->pc = 0x1604B8u;
    {
        const bool branch_taken_0x1604b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1604BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604B8u;
        // 0x1604bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604b8) {
            ctx->pc = 0x160A3Cu;
            goto label_160a3c;
        }
    }
    ctx->pc = 0x1604C0u;
label_1604c0:
    // 0x1604c0: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1604c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_1604c4:
    // 0x1604c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1604c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1604c8:
    // 0x1604c8: 0xa462a294  sh          $v0, -0x5D6C($v1)
    ctx->pc = 0x1604c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294943380), (uint16_t)GPR_U32(ctx, 2));
label_1604cc:
    // 0x1604cc: 0x1000015b  b           . + 4 + (0x15B << 2)
label_1604d0:
    if (ctx->pc == 0x1604D0u) {
        ctx->pc = 0x1604D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604CCu;
        // 0x1604d0: 0xaf858b38  sw          $a1, -0x74C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937400), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604D4u;
        goto label_1604d4;
    }
    ctx->pc = 0x1604CCu;
    {
        const bool branch_taken_0x1604cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1604D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604CCu;
        // 0x1604d0: 0xaf858b38  sw          $a1, -0x74C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937400), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604cc) {
            ctx->pc = 0x160A3Cu;
            goto label_160a3c;
        }
    }
    ctx->pc = 0x1604D4u;
label_1604d4:
    // 0x1604d4: 0x0  nop
    ctx->pc = 0x1604d4u;
    // NOP
label_1604d8:
    // 0x1604d8: 0xc06a26e  jal         func_1A89B8
label_1604dc:
    if (ctx->pc == 0x1604DCu) {
        ctx->pc = 0x1604DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604D8u;
        // 0x1604dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604E0u;
        goto label_1604e0;
    }
    ctx->pc = 0x1604D8u;
    SET_GPR_U32(ctx, 31, 0x1604E0u);
    ctx->pc = 0x1604DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1604D8u;
    // 0x1604dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1604D8u, 0x1604E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1604E0u;
label_1604e0:
    // 0x1604e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1604e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1604e4:
    // 0x1604e4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1604e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1604e8:
    // 0x1604e8: 0x10820119  beq         $a0, $v0, . + 4 + (0x119 << 2)
label_1604ec:
    if (ctx->pc == 0x1604ECu) {
        ctx->pc = 0x1604ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604E8u;
        // 0x1604ec: 0x28820008  slti        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604F0u;
        goto label_1604f0;
    }
    ctx->pc = 0x1604E8u;
    {
        const bool branch_taken_0x1604e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1604ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604E8u;
        // 0x1604ec: 0x28820008  slti        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604e8) {
            ctx->pc = 0x160950u;
            goto label_160950;
        }
    }
    ctx->pc = 0x1604F0u;
label_1604f0:
    // 0x1604f0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1604f4:
    if (ctx->pc == 0x1604F4u) {
        ctx->pc = 0x1604F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604F0u;
        // 0x1604f4: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604F8u;
        goto label_1604f8;
    }
    ctx->pc = 0x1604F0u;
    {
        const bool branch_taken_0x1604f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1604F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604F0u;
        // 0x1604f4: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604f0) {
            ctx->pc = 0x160540u;
            goto label_160540;
        }
    }
    ctx->pc = 0x1604F8u;
label_1604f8:
    // 0x1604f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1604f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1604fc:
    // 0x1604fc: 0x1082004e  beq         $a0, $v0, . + 4 + (0x4E << 2)
label_160500:
    if (ctx->pc == 0x160500u) {
        ctx->pc = 0x160500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604FCu;
        // 0x160500: 0x28820005  slti        $v0, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x160504u;
        goto label_160504;
    }
    ctx->pc = 0x1604FCu;
    {
        const bool branch_taken_0x1604fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x160500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604FCu;
        // 0x160500: 0x28820005  slti        $v0, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604fc) {
            ctx->pc = 0x160638u;
            goto label_160638;
        }
    }
    ctx->pc = 0x160504u;
label_160504:
    // 0x160504: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_160508:
    if (ctx->pc == 0x160508u) {
        ctx->pc = 0x160508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160504u;
        // 0x160508: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16050Cu;
        goto label_16050c;
    }
    ctx->pc = 0x160504u;
    {
        const bool branch_taken_0x160504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160504) {
            ctx->pc = 0x160508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160504u;
            // 0x160508: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160528u;
            goto label_160528;
        }
    }
    ctx->pc = 0x16050Cu;
label_16050c:
    // 0x16050c: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
label_160510:
    if (ctx->pc == 0x160510u) {
        ctx->pc = 0x160510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16050Cu;
        // 0x160510: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160514u;
        goto label_160514;
    }
    ctx->pc = 0x16050Cu;
    {
        const bool branch_taken_0x16050c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x160510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16050Cu;
        // 0x160510: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16050c) {
            ctx->pc = 0x1605A8u;
            goto label_1605a8;
        }
    }
    ctx->pc = 0x160514u;
label_160514:
    // 0x160514: 0x50920036  beql        $a0, $s2, . + 4 + (0x36 << 2)
label_160518:
    if (ctx->pc == 0x160518u) {
        ctx->pc = 0x160518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160514u;
        // 0x160518: 0x24103630  addiu       $s0, $zero, 0x3630 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13872));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16051Cu;
        goto label_16051c;
    }
    ctx->pc = 0x160514u;
    {
        const bool branch_taken_0x160514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x160514) {
            ctx->pc = 0x160518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160514u;
            // 0x160518: 0x24103630  addiu       $s0, $zero, 0x3630 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13872));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1605F0u;
            goto label_1605f0;
        }
    }
    ctx->pc = 0x16051Cu;
label_16051c:
    // 0x16051c: 0x10000147  b           . + 4 + (0x147 << 2)
label_160520:
    if (ctx->pc == 0x160520u) {
        ctx->pc = 0x160520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16051Cu;
        // 0x160520: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160524u;
        goto label_160524;
    }
    ctx->pc = 0x16051Cu;
    {
        const bool branch_taken_0x16051c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16051Cu;
        // 0x160520: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16051c) {
            ctx->pc = 0x160A3Cu;
            goto label_160a3c;
        }
    }
    ctx->pc = 0x160524u;
label_160524:
    // 0x160524: 0x0  nop
    ctx->pc = 0x160524u;
    // NOP
label_160528:
    // 0x160528: 0x10820053  beq         $a0, $v0, . + 4 + (0x53 << 2)
label_16052c:
    if (ctx->pc == 0x16052Cu) {
        ctx->pc = 0x16052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160528u;
        // 0x16052c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160530u;
        goto label_160530;
    }
    ctx->pc = 0x160528u;
    {
        const bool branch_taken_0x160528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160528u;
        // 0x16052c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160528) {
            ctx->pc = 0x160678u;
            goto label_160678;
        }
    }
    ctx->pc = 0x160530u;
label_160530:
    // 0x160530: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
label_160534:
    if (ctx->pc == 0x160534u) {
        ctx->pc = 0x160534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160530u;
        // 0x160534: 0x8f838d10  lw          $v1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160538u;
        goto label_160538;
    }
    ctx->pc = 0x160530u;
    {
        const bool branch_taken_0x160530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x160534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160530u;
        // 0x160534: 0x8f838d10  lw          $v1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160530) {
            ctx->pc = 0x1606D8u;
            goto label_1606d8;
        }
    }
    ctx->pc = 0x160538u;
label_160538:
    // 0x160538: 0x10000140  b           . + 4 + (0x140 << 2)
label_16053c:
    if (ctx->pc == 0x16053Cu) {
        ctx->pc = 0x16053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160538u;
        // 0x16053c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160540u;
        goto label_160540;
    }
    ctx->pc = 0x160538u;
    {
        const bool branch_taken_0x160538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160538u;
        // 0x16053c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160538) {
            ctx->pc = 0x160A3Cu;
            goto label_160a3c;
        }
    }
    ctx->pc = 0x160540u;
label_160540:
    // 0x160540: 0x1082012b  beq         $a0, $v0, . + 4 + (0x12B << 2)
label_160544:
    if (ctx->pc == 0x160544u) {
        ctx->pc = 0x160544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160540u;
        // 0x160544: 0x28820801  slti        $v0, $a0, 0x801 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2049) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x160548u;
        goto label_160548;
    }
    ctx->pc = 0x160540u;
    {
        const bool branch_taken_0x160540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x160544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160540u;
        // 0x160544: 0x28820801  slti        $v0, $a0, 0x801 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2049) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160540) {
            ctx->pc = 0x1609F0u;
            goto label_1609f0;
        }
    }
    ctx->pc = 0x160548u;
label_160548:
    // 0x160548: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_16054c:
    if (ctx->pc == 0x16054Cu) {
        ctx->pc = 0x16054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160548u;
        // 0x16054c: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160550u;
        goto label_160550;
    }
    ctx->pc = 0x160548u;
    {
        const bool branch_taken_0x160548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160548u;
        // 0x16054c: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160548) {
            ctx->pc = 0x160570u;
            goto label_160570;
        }
    }
    ctx->pc = 0x160550u;
label_160550:
    // 0x160550: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x160550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_160554:
    // 0x160554: 0x10820112  beq         $a0, $v0, . + 4 + (0x112 << 2)
label_160558:
    if (ctx->pc == 0x160558u) {
        ctx->pc = 0x160558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160554u;
        // 0x160558: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16055Cu;
        goto label_16055c;
    }
    ctx->pc = 0x160554u;
    {
        const bool branch_taken_0x160554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x160558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160554u;
        // 0x160558: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160554) {
            ctx->pc = 0x1609A0u;
            goto label_1609a0;
        }
    }
    ctx->pc = 0x16055Cu;
label_16055c:
    // 0x16055c: 0x10820124  beq         $a0, $v0, . + 4 + (0x124 << 2)
label_160560:
    if (ctx->pc == 0x160560u) {
        ctx->pc = 0x160560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16055Cu;
        // 0x160560: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160564u;
        goto label_160564;
    }
    ctx->pc = 0x16055Cu;
    {
        const bool branch_taken_0x16055c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x160560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16055Cu;
        // 0x160560: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16055c) {
            ctx->pc = 0x1609F0u;
            goto label_1609f0;
        }
    }
    ctx->pc = 0x160564u;
label_160564:
    // 0x160564: 0x10000136  b           . + 4 + (0x136 << 2)
label_160568:
    if (ctx->pc == 0x160568u) {
        ctx->pc = 0x160568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160564u;
        // 0x160568: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16056Cu;
        goto label_16056c;
    }
    ctx->pc = 0x160564u;
    {
        const bool branch_taken_0x160564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160564u;
        // 0x160568: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160564) {
            ctx->pc = 0x160A40u;
            goto label_160a40;
        }
    }
    ctx->pc = 0x16056Cu;
label_16056c:
    // 0x16056c: 0x0  nop
    ctx->pc = 0x16056cu;
    // NOP
label_160570:
    // 0x160570: 0x1082011f  beq         $a0, $v0, . + 4 + (0x11F << 2)
label_160574:
    if (ctx->pc == 0x160574u) {
        ctx->pc = 0x160574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160570u;
        // 0x160574: 0x28822001  slti        $v0, $a0, 0x2001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8193) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x160578u;
        goto label_160578;
    }
    ctx->pc = 0x160570u;
    {
        const bool branch_taken_0x160570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x160574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160570u;
        // 0x160574: 0x28822001  slti        $v0, $a0, 0x2001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8193) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160570) {
            ctx->pc = 0x1609F0u;
            goto label_1609f0;
        }
    }
    ctx->pc = 0x160578u;
label_160578:
    // 0x160578: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_16057c:
    if (ctx->pc == 0x16057Cu) {
        ctx->pc = 0x16057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160578u;
        // 0x16057c: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160580u;
        goto label_160580;
    }
    ctx->pc = 0x160578u;
    {
        const bool branch_taken_0x160578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160578u;
        // 0x16057c: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160578) {
            ctx->pc = 0x160598u;
            goto label_160598;
        }
    }
    ctx->pc = 0x160580u;
label_160580:
    // 0x160580: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x160580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_160584:
    // 0x160584: 0x1082011a  beq         $a0, $v0, . + 4 + (0x11A << 2)
label_160588:
    if (ctx->pc == 0x160588u) {
        ctx->pc = 0x160588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160584u;
        // 0x160588: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16058Cu;
        goto label_16058c;
    }
    ctx->pc = 0x160584u;
    {
        const bool branch_taken_0x160584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x160588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160584u;
        // 0x160588: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160584) {
            ctx->pc = 0x1609F0u;
            goto label_1609f0;
        }
    }
    ctx->pc = 0x16058Cu;
label_16058c:
    // 0x16058c: 0x1000012c  b           . + 4 + (0x12C << 2)
label_160590:
    if (ctx->pc == 0x160590u) {
        ctx->pc = 0x160590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16058Cu;
        // 0x160590: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160594u;
        goto label_160594;
    }
    ctx->pc = 0x16058Cu;
    {
        const bool branch_taken_0x16058c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16058Cu;
        // 0x160590: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16058c) {
            ctx->pc = 0x160A40u;
            goto label_160a40;
        }
    }
    ctx->pc = 0x160594u;
label_160594:
    // 0x160594: 0x0  nop
    ctx->pc = 0x160594u;
    // NOP
label_160598:
    // 0x160598: 0x1082011b  beq         $a0, $v0, . + 4 + (0x11B << 2)
label_16059c:
    if (ctx->pc == 0x16059Cu) {
        ctx->pc = 0x16059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160598u;
        // 0x16059c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1605A0u;
        goto label_1605a0;
    }
    ctx->pc = 0x160598u;
    {
        const bool branch_taken_0x160598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160598u;
        // 0x16059c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160598) {
            ctx->pc = 0x160A08u;
            goto label_160a08;
        }
    }
    ctx->pc = 0x1605A0u;
label_1605a0:
    // 0x1605a0: 0x10000127  b           . + 4 + (0x127 << 2)
label_1605a4:
    if (ctx->pc == 0x1605A4u) {
        ctx->pc = 0x1605A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605A0u;
        // 0x1605a4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1605A8u;
        goto label_1605a8;
    }
    ctx->pc = 0x1605A0u;
    {
        const bool branch_taken_0x1605a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1605A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605A0u;
        // 0x1605a4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1605a0) {
            ctx->pc = 0x160A40u;
            goto label_160a40;
        }
    }
    ctx->pc = 0x1605A8u;
label_1605a8:
    // 0x1605a8: 0x24103630  addiu       $s0, $zero, 0x3630
    ctx->pc = 0x1605a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13872));
label_1605ac:
    // 0x1605ac: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1605acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_1605b0:
    // 0x1605b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1605b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1605b4:
    // 0x1605b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1605b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1605b8:
    // 0x1605b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1605bc:
    if (ctx->pc == 0x1605BCu) {
        ctx->pc = 0x1605BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605B8u;
        // 0x1605bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1605C0u;
        goto label_1605c0;
    }
    ctx->pc = 0x1605B8u;
    {
        const bool branch_taken_0x1605b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1605BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605B8u;
        // 0x1605bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1605b8) {
            ctx->pc = 0x1605D4u;
            goto label_1605d4;
        }
    }
    ctx->pc = 0x1605C0u;
label_1605c0:
    // 0x1605c0: 0x8c4201b0  lw          $v0, 0x1B0($v0)
    ctx->pc = 0x1605c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
label_1605c4:
    // 0x1605c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1605c8:
    if (ctx->pc == 0x1605C8u) {
        ctx->pc = 0x1605C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605C4u;
        // 0x1605c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1605CCu;
        goto label_1605cc;
    }
    ctx->pc = 0x1605C4u;
    {
        const bool branch_taken_0x1605c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1605C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605C4u;
        // 0x1605c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1605c4) {
            ctx->pc = 0x1605D4u;
            goto label_1605d4;
        }
    }
    ctx->pc = 0x1605CCu;
label_1605cc:
    // 0x1605cc: 0xc056a3e  jal         func_15A8F8
label_1605d0:
    if (ctx->pc == 0x1605D0u) {
        ctx->pc = 0x1605D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605CCu;
        // 0x1605d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1605D4u;
        goto label_1605d4;
    }
    ctx->pc = 0x1605CCu;
    SET_GPR_U32(ctx, 31, 0x1605D4u);
    ctx->pc = 0x1605D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1605CCu;
    // 0x1605d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A8F8u, 0x1605CCu, 0x1605D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1605D4u;
label_1605d4:
    // 0x1605d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1605d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1605d8:
    // 0x1605d8: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1605d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_1605dc:
    // 0x1605dc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1605e0:
    if (ctx->pc == 0x1605E0u) {
        ctx->pc = 0x1605E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605DCu;
        // 0x1605e0: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1605E4u;
        goto label_1605e4;
    }
    ctx->pc = 0x1605DCu;
    {
        const bool branch_taken_0x1605dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1605E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605DCu;
        // 0x1605e0: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1605dc) {
            ctx->pc = 0x1605B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1605b0;
        }
    }
    ctx->pc = 0x1605E4u;
label_1605e4:
    // 0x1605e4: 0x10000115  b           . + 4 + (0x115 << 2)
label_1605e8:
    if (ctx->pc == 0x1605E8u) {
        ctx->pc = 0x1605E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605E4u;
        // 0x1605e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1605ECu;
        goto label_1605ec;
    }
    ctx->pc = 0x1605E4u;
    {
        const bool branch_taken_0x1605e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1605E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605E4u;
        // 0x1605e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1605e4) {
            ctx->pc = 0x160A3Cu;
            goto label_160a3c;
        }
    }
    ctx->pc = 0x1605ECu;
label_1605ec:
    // 0x1605ec: 0x0  nop
    ctx->pc = 0x1605ecu;
    // NOP
label_1605f0:
    // 0x1605f0: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1605f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_1605f4:
    // 0x1605f4: 0x0  nop
    ctx->pc = 0x1605f4u;
    // NOP
label_1605f8:
    // 0x1605f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1605f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1605fc:
    // 0x1605fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1605fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_160600:
    // 0x160600: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_160604:
    if (ctx->pc == 0x160604u) {
        ctx->pc = 0x160604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160600u;
        // 0x160604: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160608u;
        goto label_160608;
    }
    ctx->pc = 0x160600u;
    {
        const bool branch_taken_0x160600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160600u;
        // 0x160604: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160600) {
            ctx->pc = 0x16061Cu;
            goto label_16061c;
        }
    }
    ctx->pc = 0x160608u;
label_160608:
    // 0x160608: 0x8c4201b0  lw          $v0, 0x1B0($v0)
    ctx->pc = 0x160608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
label_16060c:
    // 0x16060c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_160610:
    if (ctx->pc == 0x160610u) {
        ctx->pc = 0x160610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16060Cu;
        // 0x160610: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160614u;
        goto label_160614;
    }
    ctx->pc = 0x16060Cu;
    {
        const bool branch_taken_0x16060c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16060Cu;
        // 0x160610: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16060c) {
            ctx->pc = 0x16061Cu;
            goto label_16061c;
        }
    }
    ctx->pc = 0x160614u;
label_160614:
    // 0x160614: 0xc056a3e  jal         func_15A8F8
label_160618:
    if (ctx->pc == 0x160618u) {
        ctx->pc = 0x160618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160614u;
        // 0x160618: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16061Cu;
        goto label_16061c;
    }
    ctx->pc = 0x160614u;
    SET_GPR_U32(ctx, 31, 0x16061Cu);
    ctx->pc = 0x160618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160614u;
    // 0x160618: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A8F8u, 0x160614u, 0x16061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16061Cu;
label_16061c:
    // 0x16061c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16061cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_160620:
    // 0x160620: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x160620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_160624:
    // 0x160624: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_160628:
    if (ctx->pc == 0x160628u) {
        ctx->pc = 0x160628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160624u;
        // 0x160628: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16062Cu;
        goto label_16062c;
    }
    ctx->pc = 0x160624u;
    {
        const bool branch_taken_0x160624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160624u;
        // 0x160628: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160624) {
            ctx->pc = 0x1605F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1605f8;
        }
    }
    ctx->pc = 0x16062Cu;
label_16062c:
    // 0x16062c: 0x10000103  b           . + 4 + (0x103 << 2)
label_160630:
    if (ctx->pc == 0x160630u) {
        ctx->pc = 0x160630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16062Cu;
        // 0x160630: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160634u;
        goto label_160634;
    }
    ctx->pc = 0x16062Cu;
    {
        const bool branch_taken_0x16062c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16062Cu;
        // 0x160630: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16062c) {
            ctx->pc = 0x160A3Cu;
            goto label_160a3c;
        }
    }
    ctx->pc = 0x160634u;
label_160634:
    // 0x160634: 0x0  nop
    ctx->pc = 0x160634u;
    // NOP
label_160638:
    // 0x160638: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x160638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_16063c:
    // 0x16063c: 0x8c423630  lw          $v0, 0x3630($v0)
    ctx->pc = 0x16063cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
label_160640:
    // 0x160640: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_160644:
    if (ctx->pc == 0x160644u) {
        ctx->pc = 0x160644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160640u;
        // 0x160644: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160648u;
        goto label_160648;
    }
    ctx->pc = 0x160640u;
    {
        const bool branch_taken_0x160640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160640u;
        // 0x160644: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160640) {
            ctx->pc = 0x160658u;
            goto label_160658;
        }
    }
    ctx->pc = 0x160648u;
label_160648:
    // 0x160648: 0x8c4201b0  lw          $v0, 0x1B0($v0)
    ctx->pc = 0x160648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
label_16064c:
    // 0x16064c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_160650:
    if (ctx->pc == 0x160650u) {
        ctx->pc = 0x160650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16064Cu;
        // 0x160650: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160654u;
        goto label_160654;
    }
    ctx->pc = 0x16064Cu;
    {
        const bool branch_taken_0x16064c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16064Cu;
        // 0x160650: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16064c) {
            ctx->pc = 0x160658u;
            goto label_160658;
        }
    }
    ctx->pc = 0x160654u;
label_160654:
    // 0x160654: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x160654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160658:
    // 0x160658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x160658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16065c:
    // 0x16065c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16065cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160660:
    // 0x160660: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x160660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_160664:
    // 0x160664: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x160664u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_160668:
    // 0x160668: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x160668u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16066c:
    // 0x16066c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16066cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_160670:
    // 0x160670: 0x8057a12  j           func_15E848
label_160674:
    if (ctx->pc == 0x160674u) {
        ctx->pc = 0x160674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160670u;
        // 0x160674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160678u;
        goto label_160678;
    }
    ctx->pc = 0x160670u;
    ctx->pc = 0x160674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160670u;
    // 0x160674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E848u;
    BossDamageVisible__8ApcPanelb_0x15e848(rdram, ctx, runtime); return;
    ctx->pc = 0x160678u;
label_160678:
    // 0x160678: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x160678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_16067c:
    // 0x16067c: 0x8c423630  lw          $v0, 0x3630($v0)
    ctx->pc = 0x16067cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
label_160680:
    // 0x160680: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_160684:
    if (ctx->pc == 0x160684u) {
        ctx->pc = 0x160684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160680u;
        // 0x160684: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160688u;
        goto label_160688;
    }
    ctx->pc = 0x160680u;
    {
        const bool branch_taken_0x160680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160680u;
        // 0x160684: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160680) {
            ctx->pc = 0x160698u;
            goto label_160698;
        }
    }
    ctx->pc = 0x160688u;
label_160688:
    // 0x160688: 0x8c4201b0  lw          $v0, 0x1B0($v0)
    ctx->pc = 0x160688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
label_16068c:
    // 0x16068c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_160690:
    if (ctx->pc == 0x160690u) {
        ctx->pc = 0x160690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16068Cu;
        // 0x160690: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160694u;
        goto label_160694;
    }
    ctx->pc = 0x16068Cu;
    {
        const bool branch_taken_0x16068c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16068Cu;
        // 0x160690: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16068c) {
            ctx->pc = 0x160698u;
            goto label_160698;
        }
    }
    ctx->pc = 0x160694u;
label_160694:
    // 0x160694: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x160694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160698:
    // 0x160698: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x160698u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_16069c:
    // 0x16069c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x16069cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_1606a0:
    // 0x1606a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1606a4:
    if (ctx->pc == 0x1606A4u) {
        ctx->pc = 0x1606A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606A0u;
        // 0x1606a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606A8u;
        goto label_1606a8;
    }
    ctx->pc = 0x1606A0u;
    {
        const bool branch_taken_0x1606a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1606A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606A0u;
        // 0x1606a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1606a0) {
            ctx->pc = 0x1606B4u;
            goto label_1606b4;
        }
    }
    ctx->pc = 0x1606A8u;
label_1606a8:
    // 0x1606a8: 0xc05767a  jal         func_15D9E8
label_1606ac:
    if (ctx->pc == 0x1606ACu) {
        ctx->pc = 0x1606ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606A8u;
        // 0x1606ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606B0u;
        goto label_1606b0;
    }
    ctx->pc = 0x1606A8u;
    SET_GPR_U32(ctx, 31, 0x1606B0u);
    ctx->pc = 0x1606ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1606A8u;
    // 0x1606ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D9E8u, 0x1606A8u, 0x1606B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1606B0u;
label_1606b0:
    // 0x1606b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1606b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1606b4:
    // 0x1606b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1606b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1606b8:
    // 0x1606b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1606b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1606bc:
    // 0x1606bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1606bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1606c0:
    // 0x1606c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1606c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1606c4:
    // 0x1606c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1606c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1606c8:
    // 0x1606c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1606c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1606cc:
    // 0x1606cc: 0x8057a12  j           func_15E848
label_1606d0:
    if (ctx->pc == 0x1606D0u) {
        ctx->pc = 0x1606D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606CCu;
        // 0x1606d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606D4u;
        goto label_1606d4;
    }
    ctx->pc = 0x1606CCu;
    ctx->pc = 0x1606D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1606CCu;
    // 0x1606d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E848u;
    BossDamageVisible__8ApcPanelb_0x15e848(rdram, ctx, runtime); return;
    ctx->pc = 0x1606D4u;
label_1606d4:
    // 0x1606d4: 0x0  nop
    ctx->pc = 0x1606d4u;
    // NOP
label_1606d8:
    // 0x1606d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1606d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1606dc:
    // 0x1606dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1606dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1606e0:
    // 0x1606e0: 0x8c423630  lw          $v0, 0x3630($v0)
    ctx->pc = 0x1606e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
label_1606e4:
    // 0x1606e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1606e8:
    if (ctx->pc == 0x1606E8u) {
        ctx->pc = 0x1606E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606E4u;
        // 0x1606e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606ECu;
        goto label_1606ec;
    }
    ctx->pc = 0x1606E4u;
    {
        const bool branch_taken_0x1606e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1606E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606E4u;
        // 0x1606e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1606e4) {
            ctx->pc = 0x1606FCu;
            goto label_1606fc;
        }
    }
    ctx->pc = 0x1606ECu;
label_1606ec:
    // 0x1606ec: 0x8c4201b0  lw          $v0, 0x1B0($v0)
    ctx->pc = 0x1606ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
label_1606f0:
    // 0x1606f0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1606f4:
    if (ctx->pc == 0x1606F4u) {
        ctx->pc = 0x1606F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606F0u;
        // 0x1606f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606F8u;
        goto label_1606f8;
    }
    ctx->pc = 0x1606F0u;
    {
        const bool branch_taken_0x1606f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1606F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606F0u;
        // 0x1606f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1606f0) {
            ctx->pc = 0x1606FCu;
            goto label_1606fc;
        }
    }
    ctx->pc = 0x1606F8u;
label_1606f8:
    // 0x1606f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1606f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1606fc:
    // 0x1606fc: 0xc06a26e  jal         func_1A89B8
label_160700:
    if (ctx->pc == 0x160700u) {
        ctx->pc = 0x160700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606FCu;
        // 0x160700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160704u;
        goto label_160704;
    }
    ctx->pc = 0x1606FCu;
    SET_GPR_U32(ctx, 31, 0x160704u);
    ctx->pc = 0x160700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1606FCu;
    // 0x160700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1606FCu, 0x160704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160704u;
label_160704:
    // 0x160704: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_160708:
    // 0x160708: 0xc06a26e  jal         func_1A89B8
label_16070c:
    if (ctx->pc == 0x16070Cu) {
        ctx->pc = 0x16070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160708u;
        // 0x16070c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160710u;
        goto label_160710;
    }
    ctx->pc = 0x160708u;
    SET_GPR_U32(ctx, 31, 0x160710u);
    ctx->pc = 0x16070Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160708u;
    // 0x16070c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x160708u, 0x160710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160710u;
label_160710:
    // 0x160710: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x160710u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160714:
    // 0x160714: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x160714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_160718:
    // 0x160718: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x160718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_16071c:
    // 0x16071c: 0x2404bfff  addiu       $a0, $zero, -0x4001
    ctx->pc = 0x16071cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_160720:
    // 0x160720: 0x24500da0  addiu       $s0, $v0, 0xDA0
    ctx->pc = 0x160720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3488));
label_160724:
    // 0x160724: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x160724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_160728:
    // 0x160728: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x160728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16072c:
    // 0x16072c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x16072cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_160730:
    // 0x160730: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x160730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_160734:
    // 0x160734: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_160738:
    if (ctx->pc == 0x160738u) {
        ctx->pc = 0x160738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160734u;
        // 0x160738: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16073Cu;
        goto label_16073c;
    }
    ctx->pc = 0x160734u;
    {
        const bool branch_taken_0x160734 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x160738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160734u;
        // 0x160738: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160734) {
            ctx->pc = 0x160758u;
            goto label_160758;
        }
    }
    ctx->pc = 0x16073Cu;
label_16073c:
    // 0x16073c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16073cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_160740:
    // 0x160740: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x160740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160744:
    // 0x160744: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x160744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_160748:
    // 0x160748: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x160748u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16074c:
    // 0x16074c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16074cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_160750:
    // 0x160750: 0x60f809  jalr        $v1
label_160754:
    if (ctx->pc == 0x160754u) {
        ctx->pc = 0x160754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160750u;
        // 0x160754: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160758u;
        goto label_160758;
    }
    ctx->pc = 0x160750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160758u);
        ctx->pc = 0x160754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160750u;
        // 0x160754: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160750u, 0x160758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160758u;
label_160758:
    // 0x160758: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x160758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_16075c:
    // 0x16075c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_160760:
    if (ctx->pc == 0x160760u) {
        ctx->pc = 0x160760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16075Cu;
        // 0x160760: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160764u;
        goto label_160764;
    }
    ctx->pc = 0x16075Cu;
    {
        const bool branch_taken_0x16075c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x160760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16075Cu;
        // 0x160760: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16075c) {
            ctx->pc = 0x16077Cu;
            goto label_16077c;
        }
    }
    ctx->pc = 0x160764u;
label_160764:
    // 0x160764: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x160764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_160768:
    // 0x160768: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x160768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_16076c:
    // 0x16076c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16076cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_160770:
    // 0x160770: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x160770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_160774:
    // 0x160774: 0x60f809  jalr        $v1
label_160778:
    if (ctx->pc == 0x160778u) {
        ctx->pc = 0x160778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160774u;
        // 0x160778: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16077Cu;
        goto label_16077c;
    }
    ctx->pc = 0x160774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16077Cu);
        ctx->pc = 0x160778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160774u;
        // 0x160778: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160774u, 0x16077Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16077Cu;
label_16077c:
    // 0x16077c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x16077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_160780:
    // 0x160780: 0x5040003a  beql        $v0, $zero, . + 4 + (0x3A << 2)
label_160784:
    if (ctx->pc == 0x160784u) {
        ctx->pc = 0x160784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160780u;
        // 0x160784: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160788u;
        goto label_160788;
    }
    ctx->pc = 0x160780u;
    {
        const bool branch_taken_0x160780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160780) {
            ctx->pc = 0x160784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160780u;
            // 0x160784: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16086Cu;
            goto label_16086c;
        }
    }
    ctx->pc = 0x160788u;
label_160788:
    // 0x160788: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x160788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_16078c:
    // 0x16078c: 0x50c00037  beql        $a2, $zero, . + 4 + (0x37 << 2)
label_160790:
    if (ctx->pc == 0x160790u) {
        ctx->pc = 0x160790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16078Cu;
        // 0x160790: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160794u;
        goto label_160794;
    }
    ctx->pc = 0x16078Cu;
    {
        const bool branch_taken_0x16078c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x16078c) {
            ctx->pc = 0x160790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16078Cu;
            // 0x160790: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16086Cu;
            goto label_16086c;
        }
    }
    ctx->pc = 0x160794u;
label_160794:
    // 0x160794: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x160794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_160798:
    // 0x160798: 0x313c3  sra         $v0, $v1, 15
    ctx->pc = 0x160798u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
label_16079c:
    // 0x16079c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16079cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1607a0:
    // 0x1607a0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1607a4:
    if (ctx->pc == 0x1607A4u) {
        ctx->pc = 0x1607A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607A0u;
        // 0x1607a4: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1607A8u;
        goto label_1607a8;
    }
    ctx->pc = 0x1607A0u;
    {
        const bool branch_taken_0x1607a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1607A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607A0u;
        // 0x1607a4: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1607a0) {
            ctx->pc = 0x160808u;
            goto label_160808;
        }
    }
    ctx->pc = 0x1607A8u;
label_1607a8:
    // 0x1607a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1607a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1607ac:
    // 0x1607ac: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_1607b0:
    if (ctx->pc == 0x1607B0u) {
        ctx->pc = 0x1607B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607ACu;
        // 0x1607b0: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1607B4u;
        goto label_1607b4;
    }
    ctx->pc = 0x1607ACu;
    {
        const bool branch_taken_0x1607ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1607ac) {
            ctx->pc = 0x1607B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1607ACu;
            // 0x1607b0: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1607F8u;
            goto label_1607f8;
        }
    }
    ctx->pc = 0x1607B4u;
label_1607b4:
    // 0x1607b4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1607b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1607b8:
    // 0x1607b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1607b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1607bc:
    // 0x1607bc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1607bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1607c0:
    // 0x1607c0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1607c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1607c4:
    // 0x1607c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1607c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1607c8:
    // 0x1607c8: 0x60f809  jalr        $v1
label_1607cc:
    if (ctx->pc == 0x1607CCu) {
        ctx->pc = 0x1607CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607C8u;
        // 0x1607cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1607D0u;
        goto label_1607d0;
    }
    ctx->pc = 0x1607C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1607D0u);
        ctx->pc = 0x1607CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607C8u;
        // 0x1607cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1607C8u, 0x1607D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1607D0u;
label_1607d0:
    // 0x1607d0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1607d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1607d4:
    // 0x1607d4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1607d8:
    if (ctx->pc == 0x1607D8u) {
        ctx->pc = 0x1607D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607D4u;
        // 0x1607d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1607DCu;
        goto label_1607dc;
    }
    ctx->pc = 0x1607D4u;
    {
        const bool branch_taken_0x1607d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1607D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607D4u;
        // 0x1607d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1607d4) {
            ctx->pc = 0x1607F4u;
            goto label_1607f4;
        }
    }
    ctx->pc = 0x1607DCu;
label_1607dc:
    // 0x1607dc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1607dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1607e0:
    // 0x1607e0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1607e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1607e4:
    // 0x1607e4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1607e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1607e8:
    // 0x1607e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1607e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1607ec:
    // 0x1607ec: 0x60f809  jalr        $v1
label_1607f0:
    if (ctx->pc == 0x1607F0u) {
        ctx->pc = 0x1607F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607ECu;
        // 0x1607f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1607F4u;
        goto label_1607f4;
    }
    ctx->pc = 0x1607ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1607F4u);
        ctx->pc = 0x1607F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607ECu;
        // 0x1607f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1607ECu, 0x1607F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1607F4u;
label_1607f4:
    // 0x1607f4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1607f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1607f8:
    // 0x1607f8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1607f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1607fc:
    // 0x1607fc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_160800:
    if (ctx->pc == 0x160800u) {
        ctx->pc = 0x160800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607FCu;
        // 0x160800: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160804u;
        goto label_160804;
    }
    ctx->pc = 0x1607FCu;
    {
        const bool branch_taken_0x1607fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607FCu;
        // 0x160800: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1607fc) {
            ctx->pc = 0x160868u;
            goto label_160868;
        }
    }
    ctx->pc = 0x160804u;
label_160804:
    // 0x160804: 0x0  nop
    ctx->pc = 0x160804u;
    // NOP
label_160808:
    // 0x160808: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x160808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_16080c:
    // 0x16080c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_160810:
    if (ctx->pc == 0x160810u) {
        ctx->pc = 0x160810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16080Cu;
        // 0x160810: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160814u;
        goto label_160814;
    }
    ctx->pc = 0x16080Cu;
    {
        const bool branch_taken_0x16080c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16080c) {
            ctx->pc = 0x160810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16080Cu;
            // 0x160810: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160858u;
            goto label_160858;
        }
    }
    ctx->pc = 0x160814u;
label_160814:
    // 0x160814: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x160814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_160818:
    // 0x160818: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16081c:
    // 0x16081c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x16081cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_160820:
    // 0x160820: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x160820u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_160824:
    // 0x160824: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x160824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_160828:
    // 0x160828: 0x60f809  jalr        $v1
label_16082c:
    if (ctx->pc == 0x16082Cu) {
        ctx->pc = 0x16082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160828u;
        // 0x16082c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160830u;
        goto label_160830;
    }
    ctx->pc = 0x160828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160830u);
        ctx->pc = 0x16082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160828u;
        // 0x16082c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160828u, 0x160830u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160830u;
label_160830:
    // 0x160830: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x160830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_160834:
    // 0x160834: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_160838:
    if (ctx->pc == 0x160838u) {
        ctx->pc = 0x160838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160834u;
        // 0x160838: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16083Cu;
        goto label_16083c;
    }
    ctx->pc = 0x160834u;
    {
        const bool branch_taken_0x160834 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x160838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160834u;
        // 0x160838: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160834) {
            ctx->pc = 0x160854u;
            goto label_160854;
        }
    }
    ctx->pc = 0x16083Cu;
label_16083c:
    // 0x16083c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16083cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_160840:
    // 0x160840: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x160840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_160844:
    // 0x160844: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x160844u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_160848:
    // 0x160848: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x160848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16084c:
    // 0x16084c: 0x60f809  jalr        $v1
label_160850:
    if (ctx->pc == 0x160850u) {
        ctx->pc = 0x160850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16084Cu;
        // 0x160850: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160854u;
        goto label_160854;
    }
    ctx->pc = 0x16084Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160854u);
        ctx->pc = 0x160850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16084Cu;
        // 0x160850: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16084Cu, 0x160854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160854u;
label_160854:
    // 0x160854: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x160854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_160858:
    // 0x160858: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x160858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_16085c:
    // 0x16085c: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x16085cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_160860:
    // 0x160860: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x160860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_160864:
    // 0x160864: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x160864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_160868:
    // 0x160868: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x160868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16086c:
    // 0x16086c: 0x2723823  subu        $a3, $s3, $s2
    ctx->pc = 0x16086cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_160870:
    // 0x160870: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x160870u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_160874:
    // 0x160874: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x160874u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_160878:
    // 0x160878: 0x94490204  lhu         $t1, 0x204($v0)
    ctx->pc = 0x160878u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 516)));
label_16087c:
    // 0x16087c: 0x24460150  addiu       $a2, $v0, 0x150
    ctx->pc = 0x16087cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
label_160880:
    // 0x160880: 0x94440206  lhu         $a0, 0x206($v0)
    ctx->pc = 0x160880u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 518)));
label_160884:
    // 0x160884: 0x35082000  ori         $t0, $t0, 0x2000
    ctx->pc = 0x160884u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8192);
label_160888:
    // 0x160888: 0x92c00  sll         $a1, $t1, 16
    ctx->pc = 0x160888u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_16088c:
    // 0x16088c: 0x844c01a6  lh          $t4, 0x1A6($v0)
    ctx->pc = 0x16088cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 422)));
label_160890:
    // 0x160890: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x160890u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
label_160894:
    // 0x160894: 0x844a01a4  lh          $t2, 0x1A4($v0)
    ctx->pc = 0x160894u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 420)));
label_160898:
    // 0x160898: 0x94cb0008  lhu         $t3, 0x8($a2)
    ctx->pc = 0x160898u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
label_16089c:
    // 0x16089c: 0x51bc0  sll         $v1, $a1, 15
    ctx->pc = 0x16089cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
label_1608a0:
    // 0x1608a0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1608a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1608a4:
    // 0x1608a4: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x1608a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
label_1608a8:
    // 0x1608a8: 0xae080010  sw          $t0, 0x10($s0)
    ctx->pc = 0x1608a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 8));
label_1608ac:
    // 0x1608ac: 0x1631807  srav        $v1, $v1, $t3
    ctx->pc = 0x1608acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 11) & 0x1F));
label_1608b0:
    // 0x1608b0: 0xa4c90050  sh          $t1, 0x50($a2)
    ctx->pc = 0x1608b0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 80), (uint16_t)GPR_U32(ctx, 9));
label_1608b4:
    // 0x1608b4: 0xa4c40052  sh          $a0, 0x52($a2)
    ctx->pc = 0x1608b4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 82), (uint16_t)GPR_U32(ctx, 4));
label_1608b8:
    // 0x1608b8: 0xa4ca0054  sh          $t2, 0x54($a2)
    ctx->pc = 0x1608b8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 84), (uint16_t)GPR_U32(ctx, 10));
label_1608bc:
    // 0x1608bc: 0xa4cc0056  sh          $t4, 0x56($a2)
    ctx->pc = 0x1608bcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 86), (uint16_t)GPR_U32(ctx, 12));
label_1608c0:
    // 0x1608c0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1608c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1608c4:
    // 0x1608c4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1608c4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1608c8:
    // 0x1608c8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1608c8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_1608cc:
    // 0x1608cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1608ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1608d0:
    // 0x1608d0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1608d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_1608d4:
    // 0x1608d4: 0x94c7000a  lhu         $a3, 0xA($a2)
    ctx->pc = 0x1608d4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
label_1608d8:
    // 0x1608d8: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1608d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_1608dc:
    // 0x1608dc: 0xe4c00060  swc1        $f0, 0x60($a2)
    ctx->pc = 0x1608dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 96), bits); }
label_1608e0:
    // 0x1608e0: 0x41bc0  sll         $v1, $a0, 15
    ctx->pc = 0x1608e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
label_1608e4:
    // 0x1608e4: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x1608e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
label_1608e8:
    // 0x1608e8: 0xe31807  srav        $v1, $v1, $a3
    ctx->pc = 0x1608e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
label_1608ec:
    // 0x1608ec: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1608ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1608f0:
    // 0x1608f0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1608f0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1608f4:
    // 0x1608f4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1608f4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_1608f8:
    // 0x1608f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1608f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1608fc:
    // 0x1608fc: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x1608fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_160900:
    // 0x160900: 0xe4c00064  swc1        $f0, 0x64($a2)
    ctx->pc = 0x160900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 100), bits); }
label_160904:
    // 0x160904: 0x52bc0  sll         $a1, $a1, 15
    ctx->pc = 0x160904u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
label_160908:
    // 0x160908: 0x24a5c000  addiu       $a1, $a1, -0x4000
    ctx->pc = 0x160908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950912));
label_16090c:
    // 0x16090c: 0x1652807  srav        $a1, $a1, $t3
    ctx->pc = 0x16090cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 11) & 0x1F));
label_160910:
    // 0x160910: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x160910u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_160914:
    // 0x160914: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x160914u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_160918:
    // 0x160918: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x160918u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_16091c:
    // 0x16091c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16091cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_160920:
    // 0x160920: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x160920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_160924:
    // 0x160924: 0xe4c00068  swc1        $f0, 0x68($a2)
    ctx->pc = 0x160924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 104), bits); }
label_160928:
    // 0x160928: 0x423c0  sll         $a0, $a0, 15
    ctx->pc = 0x160928u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
label_16092c:
    // 0x16092c: 0x2484c000  addiu       $a0, $a0, -0x4000
    ctx->pc = 0x16092cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950912));
label_160930:
    // 0x160930: 0xe42007  srav        $a0, $a0, $a3
    ctx->pc = 0x160930u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
label_160934:
    // 0x160934: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x160934u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_160938:
    // 0x160938: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x160938u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_16093c:
    // 0x16093c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16093cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_160940:
    // 0x160940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_160944:
    // 0x160944: 0x1000003c  b           . + 4 + (0x3C << 2)
label_160948:
    if (ctx->pc == 0x160948u) {
        ctx->pc = 0x160948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160944u;
        // 0x160948: 0xe4c0006c  swc1        $f0, 0x6C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 108), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16094Cu;
        goto label_16094c;
    }
    ctx->pc = 0x160944u;
    {
        const bool branch_taken_0x160944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160944u;
        // 0x160948: 0xe4c0006c  swc1        $f0, 0x6C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x160944) {
            ctx->pc = 0x160A38u;
            goto label_160a38;
        }
    }
    ctx->pc = 0x16094Cu;
label_16094c:
    // 0x16094c: 0x0  nop
    ctx->pc = 0x16094cu;
    // NOP
label_160950:
    // 0x160950: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x160950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_160954:
    // 0x160954: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x160954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_160958:
    // 0x160958: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16095c:
    // 0x16095c: 0x8c423630  lw          $v0, 0x3630($v0)
    ctx->pc = 0x16095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
label_160960:
    // 0x160960: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_160964:
    if (ctx->pc == 0x160964u) {
        ctx->pc = 0x160964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160960u;
        // 0x160964: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160968u;
        goto label_160968;
    }
    ctx->pc = 0x160960u;
    {
        const bool branch_taken_0x160960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160960u;
        // 0x160964: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160960) {
            ctx->pc = 0x160978u;
            goto label_160978;
        }
    }
    ctx->pc = 0x160968u;
label_160968:
    // 0x160968: 0x8c4201b0  lw          $v0, 0x1B0($v0)
    ctx->pc = 0x160968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
label_16096c:
    // 0x16096c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_160970:
    if (ctx->pc == 0x160970u) {
        ctx->pc = 0x160970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16096Cu;
        // 0x160970: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160974u;
        goto label_160974;
    }
    ctx->pc = 0x16096Cu;
    {
        const bool branch_taken_0x16096c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16096Cu;
        // 0x160970: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16096c) {
            ctx->pc = 0x160978u;
            goto label_160978;
        }
    }
    ctx->pc = 0x160974u;
label_160974:
    // 0x160974: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x160974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160978:
    // 0x160978: 0xc06a26e  jal         func_1A89B8
label_16097c:
    if (ctx->pc == 0x16097Cu) {
        ctx->pc = 0x16097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160978u;
        // 0x16097c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160980u;
        goto label_160980;
    }
    ctx->pc = 0x160978u;
    SET_GPR_U32(ctx, 31, 0x160980u);
    ctx->pc = 0x16097Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160978u;
    // 0x16097c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x160978u, 0x160980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160980u;
label_160980:
    // 0x160980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_160984:
    // 0x160984: 0xc06a298  jal         func_1A8A60
label_160988:
    if (ctx->pc == 0x160988u) {
        ctx->pc = 0x160988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160984u;
        // 0x160988: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16098Cu;
        goto label_16098c;
    }
    ctx->pc = 0x160984u;
    SET_GPR_U32(ctx, 31, 0x16098Cu);
    ctx->pc = 0x160988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160984u;
    // 0x160988: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A60u, 0x160984u, 0x16098Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16098Cu;
label_16098c:
    // 0x16098c: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x16098cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_160990:
    // 0x160990: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x160990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_160994:
    // 0x160994: 0x10000028  b           . + 4 + (0x28 << 2)
label_160998:
    if (ctx->pc == 0x160998u) {
        ctx->pc = 0x160998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160994u;
        // 0x160998: 0xae020dd0  sw          $v0, 0xDD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16099Cu;
        goto label_16099c;
    }
    ctx->pc = 0x160994u;
    {
        const bool branch_taken_0x160994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160994u;
        // 0x160998: 0xae020dd0  sw          $v0, 0xDD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160994) {
            ctx->pc = 0x160A38u;
            goto label_160a38;
        }
    }
    ctx->pc = 0x16099Cu;
label_16099c:
    // 0x16099c: 0x0  nop
    ctx->pc = 0x16099cu;
    // NOP
label_1609a0:
    // 0x1609a0: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x1609a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_1609a4:
    // 0x1609a4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1609a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1609a8:
    // 0x1609a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1609a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1609ac:
    // 0x1609ac: 0x8c423630  lw          $v0, 0x3630($v0)
    ctx->pc = 0x1609acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
label_1609b0:
    // 0x1609b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1609b4:
    if (ctx->pc == 0x1609B4u) {
        ctx->pc = 0x1609B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609B0u;
        // 0x1609b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1609B8u;
        goto label_1609b8;
    }
    ctx->pc = 0x1609B0u;
    {
        const bool branch_taken_0x1609b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1609B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609B0u;
        // 0x1609b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1609b0) {
            ctx->pc = 0x1609C8u;
            goto label_1609c8;
        }
    }
    ctx->pc = 0x1609B8u;
label_1609b8:
    // 0x1609b8: 0x8c4201b0  lw          $v0, 0x1B0($v0)
    ctx->pc = 0x1609b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
label_1609bc:
    // 0x1609bc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1609c0:
    if (ctx->pc == 0x1609C0u) {
        ctx->pc = 0x1609C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609BCu;
        // 0x1609c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1609C4u;
        goto label_1609c4;
    }
    ctx->pc = 0x1609BCu;
    {
        const bool branch_taken_0x1609bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1609C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609BCu;
        // 0x1609c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1609bc) {
            ctx->pc = 0x1609C8u;
            goto label_1609c8;
        }
    }
    ctx->pc = 0x1609C4u;
label_1609c4:
    // 0x1609c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1609c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1609c8:
    // 0x1609c8: 0xc06a282  jal         func_1A8A08
label_1609cc:
    if (ctx->pc == 0x1609CCu) {
        ctx->pc = 0x1609CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609C8u;
        // 0x1609cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1609D0u;
        goto label_1609d0;
    }
    ctx->pc = 0x1609C8u;
    SET_GPR_U32(ctx, 31, 0x1609D0u);
    ctx->pc = 0x1609CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1609C8u;
    // 0x1609cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1609C8u, 0x1609D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1609D0u;
label_1609d0:
    // 0x1609d0: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x1609d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
label_1609d4:
    // 0x1609d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1609d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1609d8:
    // 0x1609d8: 0x0  nop
    ctx->pc = 0x1609d8u;
    // NOP
label_1609dc:
    // 0x1609dc: 0x0  nop
    ctx->pc = 0x1609dcu;
    // NOP
label_1609e0:
    // 0x1609e0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1609e0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1609e4:
    // 0x1609e4: 0x10000014  b           . + 4 + (0x14 << 2)
label_1609e8:
    if (ctx->pc == 0x1609E8u) {
        ctx->pc = 0x1609E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609E4u;
        // 0x1609e8: 0xe6010fc4  swc1        $f1, 0xFC4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4036), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1609ECu;
        goto label_1609ec;
    }
    ctx->pc = 0x1609E4u;
    {
        const bool branch_taken_0x1609e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1609E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609E4u;
        // 0x1609e8: 0xe6010fc4  swc1        $f1, 0xFC4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4036), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1609e4) {
            ctx->pc = 0x160A38u;
            goto label_160a38;
        }
    }
    ctx->pc = 0x1609ECu;
label_1609ec:
    // 0x1609ec: 0x0  nop
    ctx->pc = 0x1609ecu;
    // NOP
label_1609f0:
    // 0x1609f0: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1609f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_1609f4:
    // 0x1609f4: 0x2463a290  addiu       $v1, $v1, -0x5D70
    ctx->pc = 0x1609f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943376));
label_1609f8:
    // 0x1609f8: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x1609f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1609fc:
    // 0x1609fc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1609fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_160a00:
    // 0x160a00: 0x1000000d  b           . + 4 + (0xD << 2)
label_160a04:
    if (ctx->pc == 0x160A04u) {
        ctx->pc = 0x160A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A00u;
        // 0x160a04: 0xa4620004  sh          $v0, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160A08u;
        goto label_160a08;
    }
    ctx->pc = 0x160A00u;
    {
        const bool branch_taken_0x160a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A00u;
        // 0x160a04: 0xa4620004  sh          $v0, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a00) {
            ctx->pc = 0x160A38u;
            goto label_160a38;
        }
    }
    ctx->pc = 0x160A08u;
label_160a08:
    // 0x160a08: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x160a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_160a0c:
    // 0x160a0c: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x160a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_160a10:
    // 0x160a10: 0x2463a290  addiu       $v1, $v1, -0x5D70
    ctx->pc = 0x160a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943376));
label_160a14:
    // 0x160a14: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x160a14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_160a18:
    // 0x160a18: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x160a18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_160a1c:
    // 0x160a1c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x160a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_160a20:
    // 0x160a20: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x160a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_160a24:
    // 0x160a24: 0x10860004  beq         $a0, $a2, . + 4 + (0x4 << 2)
label_160a28:
    if (ctx->pc == 0x160A28u) {
        ctx->pc = 0x160A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A24u;
        // 0x160a28: 0xa4620004  sh          $v0, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160A2Cu;
        goto label_160a2c;
    }
    ctx->pc = 0x160A24u;
    {
        const bool branch_taken_0x160a24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x160A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A24u;
        // 0x160a28: 0xa4620004  sh          $v0, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a24) {
            ctx->pc = 0x160A38u;
            goto label_160a38;
        }
    }
    ctx->pc = 0x160A2Cu;
label_160a2c:
    // 0x160a2c: 0xc06a26e  jal         func_1A89B8
label_160a30:
    if (ctx->pc == 0x160A30u) {
        ctx->pc = 0x160A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A2Cu;
        // 0x160a30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160A34u;
        goto label_160a34;
    }
    ctx->pc = 0x160A2Cu;
    SET_GPR_U32(ctx, 31, 0x160A34u);
    ctx->pc = 0x160A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160A2Cu;
    // 0x160a30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x160A2Cu, 0x160A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160A34u;
label_160a34:
    // 0x160a34: 0xaf828b3c  sw          $v0, -0x74C4($gp)
    ctx->pc = 0x160a34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937404), GPR_U32(ctx, 2));
label_160a38:
    // 0x160a38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x160a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_160a3c:
    // 0x160a3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x160a3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_160a40:
    // 0x160a40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x160a40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_160a44:
    // 0x160a44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x160a44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_160a48:
    // 0x160a48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x160a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_160a4c:
    // 0x160a4c: 0x3e00008  jr          $ra
label_160a50:
    if (ctx->pc == 0x160A50u) {
        ctx->pc = 0x160A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A4Cu;
        // 0x160a50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160A54u;
        goto label_fallthrough_0x160a4c;
    }
    ctx->pc = 0x160A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A4Cu;
        // 0x160a50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x160a4c:
    ctx->pc = 0x160A54u;
}
