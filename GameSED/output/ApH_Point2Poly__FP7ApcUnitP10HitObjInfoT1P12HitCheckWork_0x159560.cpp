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

// Function: ApH_Point2Poly__FP7ApcUnitP10HitObjInfoT1P12HitCheckWork
// Address: 0x159560 - 0x159b18
void ApH_Point2Poly__FP7ApcUnitP10HitObjInfoT1P12HitCheckWork_0x159560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApH_Point2Poly__FP7ApcUnitP10HitObjInfoT1P12HitCheckWork_0x159560");
#endif

    switch (ctx->pc) {
        case 0x159560u: goto label_159560;
        case 0x159564u: goto label_159564;
        case 0x159568u: goto label_159568;
        case 0x15956cu: goto label_15956c;
        case 0x159570u: goto label_159570;
        case 0x159574u: goto label_159574;
        case 0x159578u: goto label_159578;
        case 0x15957cu: goto label_15957c;
        case 0x159580u: goto label_159580;
        case 0x159584u: goto label_159584;
        case 0x159588u: goto label_159588;
        case 0x15958cu: goto label_15958c;
        case 0x159590u: goto label_159590;
        case 0x159594u: goto label_159594;
        case 0x159598u: goto label_159598;
        case 0x15959cu: goto label_15959c;
        case 0x1595a0u: goto label_1595a0;
        case 0x1595a4u: goto label_1595a4;
        case 0x1595a8u: goto label_1595a8;
        case 0x1595acu: goto label_1595ac;
        case 0x1595b0u: goto label_1595b0;
        case 0x1595b4u: goto label_1595b4;
        case 0x1595b8u: goto label_1595b8;
        case 0x1595bcu: goto label_1595bc;
        case 0x1595c0u: goto label_1595c0;
        case 0x1595c4u: goto label_1595c4;
        case 0x1595c8u: goto label_1595c8;
        case 0x1595ccu: goto label_1595cc;
        case 0x1595d0u: goto label_1595d0;
        case 0x1595d4u: goto label_1595d4;
        case 0x1595d8u: goto label_1595d8;
        case 0x1595dcu: goto label_1595dc;
        case 0x1595e0u: goto label_1595e0;
        case 0x1595e4u: goto label_1595e4;
        case 0x1595e8u: goto label_1595e8;
        case 0x1595ecu: goto label_1595ec;
        case 0x1595f0u: goto label_1595f0;
        case 0x1595f4u: goto label_1595f4;
        case 0x1595f8u: goto label_1595f8;
        case 0x1595fcu: goto label_1595fc;
        case 0x159600u: goto label_159600;
        case 0x159604u: goto label_159604;
        case 0x159608u: goto label_159608;
        case 0x15960cu: goto label_15960c;
        case 0x159610u: goto label_159610;
        case 0x159614u: goto label_159614;
        case 0x159618u: goto label_159618;
        case 0x15961cu: goto label_15961c;
        case 0x159620u: goto label_159620;
        case 0x159624u: goto label_159624;
        case 0x159628u: goto label_159628;
        case 0x15962cu: goto label_15962c;
        case 0x159630u: goto label_159630;
        case 0x159634u: goto label_159634;
        case 0x159638u: goto label_159638;
        case 0x15963cu: goto label_15963c;
        case 0x159640u: goto label_159640;
        case 0x159644u: goto label_159644;
        case 0x159648u: goto label_159648;
        case 0x15964cu: goto label_15964c;
        case 0x159650u: goto label_159650;
        case 0x159654u: goto label_159654;
        case 0x159658u: goto label_159658;
        case 0x15965cu: goto label_15965c;
        case 0x159660u: goto label_159660;
        case 0x159664u: goto label_159664;
        case 0x159668u: goto label_159668;
        case 0x15966cu: goto label_15966c;
        case 0x159670u: goto label_159670;
        case 0x159674u: goto label_159674;
        case 0x159678u: goto label_159678;
        case 0x15967cu: goto label_15967c;
        case 0x159680u: goto label_159680;
        case 0x159684u: goto label_159684;
        case 0x159688u: goto label_159688;
        case 0x15968cu: goto label_15968c;
        case 0x159690u: goto label_159690;
        case 0x159694u: goto label_159694;
        case 0x159698u: goto label_159698;
        case 0x15969cu: goto label_15969c;
        case 0x1596a0u: goto label_1596a0;
        case 0x1596a4u: goto label_1596a4;
        case 0x1596a8u: goto label_1596a8;
        case 0x1596acu: goto label_1596ac;
        case 0x1596b0u: goto label_1596b0;
        case 0x1596b4u: goto label_1596b4;
        case 0x1596b8u: goto label_1596b8;
        case 0x1596bcu: goto label_1596bc;
        case 0x1596c0u: goto label_1596c0;
        case 0x1596c4u: goto label_1596c4;
        case 0x1596c8u: goto label_1596c8;
        case 0x1596ccu: goto label_1596cc;
        case 0x1596d0u: goto label_1596d0;
        case 0x1596d4u: goto label_1596d4;
        case 0x1596d8u: goto label_1596d8;
        case 0x1596dcu: goto label_1596dc;
        case 0x1596e0u: goto label_1596e0;
        case 0x1596e4u: goto label_1596e4;
        case 0x1596e8u: goto label_1596e8;
        case 0x1596ecu: goto label_1596ec;
        case 0x1596f0u: goto label_1596f0;
        case 0x1596f4u: goto label_1596f4;
        case 0x1596f8u: goto label_1596f8;
        case 0x1596fcu: goto label_1596fc;
        case 0x159700u: goto label_159700;
        case 0x159704u: goto label_159704;
        case 0x159708u: goto label_159708;
        case 0x15970cu: goto label_15970c;
        case 0x159710u: goto label_159710;
        case 0x159714u: goto label_159714;
        case 0x159718u: goto label_159718;
        case 0x15971cu: goto label_15971c;
        case 0x159720u: goto label_159720;
        case 0x159724u: goto label_159724;
        case 0x159728u: goto label_159728;
        case 0x15972cu: goto label_15972c;
        case 0x159730u: goto label_159730;
        case 0x159734u: goto label_159734;
        case 0x159738u: goto label_159738;
        case 0x15973cu: goto label_15973c;
        case 0x159740u: goto label_159740;
        case 0x159744u: goto label_159744;
        case 0x159748u: goto label_159748;
        case 0x15974cu: goto label_15974c;
        case 0x159750u: goto label_159750;
        case 0x159754u: goto label_159754;
        case 0x159758u: goto label_159758;
        case 0x15975cu: goto label_15975c;
        case 0x159760u: goto label_159760;
        case 0x159764u: goto label_159764;
        case 0x159768u: goto label_159768;
        case 0x15976cu: goto label_15976c;
        case 0x159770u: goto label_159770;
        case 0x159774u: goto label_159774;
        case 0x159778u: goto label_159778;
        case 0x15977cu: goto label_15977c;
        case 0x159780u: goto label_159780;
        case 0x159784u: goto label_159784;
        case 0x159788u: goto label_159788;
        case 0x15978cu: goto label_15978c;
        case 0x159790u: goto label_159790;
        case 0x159794u: goto label_159794;
        case 0x159798u: goto label_159798;
        case 0x15979cu: goto label_15979c;
        case 0x1597a0u: goto label_1597a0;
        case 0x1597a4u: goto label_1597a4;
        case 0x1597a8u: goto label_1597a8;
        case 0x1597acu: goto label_1597ac;
        case 0x1597b0u: goto label_1597b0;
        case 0x1597b4u: goto label_1597b4;
        case 0x1597b8u: goto label_1597b8;
        case 0x1597bcu: goto label_1597bc;
        case 0x1597c0u: goto label_1597c0;
        case 0x1597c4u: goto label_1597c4;
        case 0x1597c8u: goto label_1597c8;
        case 0x1597ccu: goto label_1597cc;
        case 0x1597d0u: goto label_1597d0;
        case 0x1597d4u: goto label_1597d4;
        case 0x1597d8u: goto label_1597d8;
        case 0x1597dcu: goto label_1597dc;
        case 0x1597e0u: goto label_1597e0;
        case 0x1597e4u: goto label_1597e4;
        case 0x1597e8u: goto label_1597e8;
        case 0x1597ecu: goto label_1597ec;
        case 0x1597f0u: goto label_1597f0;
        case 0x1597f4u: goto label_1597f4;
        case 0x1597f8u: goto label_1597f8;
        case 0x1597fcu: goto label_1597fc;
        case 0x159800u: goto label_159800;
        case 0x159804u: goto label_159804;
        case 0x159808u: goto label_159808;
        case 0x15980cu: goto label_15980c;
        case 0x159810u: goto label_159810;
        case 0x159814u: goto label_159814;
        case 0x159818u: goto label_159818;
        case 0x15981cu: goto label_15981c;
        case 0x159820u: goto label_159820;
        case 0x159824u: goto label_159824;
        case 0x159828u: goto label_159828;
        case 0x15982cu: goto label_15982c;
        case 0x159830u: goto label_159830;
        case 0x159834u: goto label_159834;
        case 0x159838u: goto label_159838;
        case 0x15983cu: goto label_15983c;
        case 0x159840u: goto label_159840;
        case 0x159844u: goto label_159844;
        case 0x159848u: goto label_159848;
        case 0x15984cu: goto label_15984c;
        case 0x159850u: goto label_159850;
        case 0x159854u: goto label_159854;
        case 0x159858u: goto label_159858;
        case 0x15985cu: goto label_15985c;
        case 0x159860u: goto label_159860;
        case 0x159864u: goto label_159864;
        case 0x159868u: goto label_159868;
        case 0x15986cu: goto label_15986c;
        case 0x159870u: goto label_159870;
        case 0x159874u: goto label_159874;
        case 0x159878u: goto label_159878;
        case 0x15987cu: goto label_15987c;
        case 0x159880u: goto label_159880;
        case 0x159884u: goto label_159884;
        case 0x159888u: goto label_159888;
        case 0x15988cu: goto label_15988c;
        case 0x159890u: goto label_159890;
        case 0x159894u: goto label_159894;
        case 0x159898u: goto label_159898;
        case 0x15989cu: goto label_15989c;
        case 0x1598a0u: goto label_1598a0;
        case 0x1598a4u: goto label_1598a4;
        case 0x1598a8u: goto label_1598a8;
        case 0x1598acu: goto label_1598ac;
        case 0x1598b0u: goto label_1598b0;
        case 0x1598b4u: goto label_1598b4;
        case 0x1598b8u: goto label_1598b8;
        case 0x1598bcu: goto label_1598bc;
        case 0x1598c0u: goto label_1598c0;
        case 0x1598c4u: goto label_1598c4;
        case 0x1598c8u: goto label_1598c8;
        case 0x1598ccu: goto label_1598cc;
        case 0x1598d0u: goto label_1598d0;
        case 0x1598d4u: goto label_1598d4;
        case 0x1598d8u: goto label_1598d8;
        case 0x1598dcu: goto label_1598dc;
        case 0x1598e0u: goto label_1598e0;
        case 0x1598e4u: goto label_1598e4;
        case 0x1598e8u: goto label_1598e8;
        case 0x1598ecu: goto label_1598ec;
        case 0x1598f0u: goto label_1598f0;
        case 0x1598f4u: goto label_1598f4;
        case 0x1598f8u: goto label_1598f8;
        case 0x1598fcu: goto label_1598fc;
        case 0x159900u: goto label_159900;
        case 0x159904u: goto label_159904;
        case 0x159908u: goto label_159908;
        case 0x15990cu: goto label_15990c;
        case 0x159910u: goto label_159910;
        case 0x159914u: goto label_159914;
        case 0x159918u: goto label_159918;
        case 0x15991cu: goto label_15991c;
        case 0x159920u: goto label_159920;
        case 0x159924u: goto label_159924;
        case 0x159928u: goto label_159928;
        case 0x15992cu: goto label_15992c;
        case 0x159930u: goto label_159930;
        case 0x159934u: goto label_159934;
        case 0x159938u: goto label_159938;
        case 0x15993cu: goto label_15993c;
        case 0x159940u: goto label_159940;
        case 0x159944u: goto label_159944;
        case 0x159948u: goto label_159948;
        case 0x15994cu: goto label_15994c;
        case 0x159950u: goto label_159950;
        case 0x159954u: goto label_159954;
        case 0x159958u: goto label_159958;
        case 0x15995cu: goto label_15995c;
        case 0x159960u: goto label_159960;
        case 0x159964u: goto label_159964;
        case 0x159968u: goto label_159968;
        case 0x15996cu: goto label_15996c;
        case 0x159970u: goto label_159970;
        case 0x159974u: goto label_159974;
        case 0x159978u: goto label_159978;
        case 0x15997cu: goto label_15997c;
        case 0x159980u: goto label_159980;
        case 0x159984u: goto label_159984;
        case 0x159988u: goto label_159988;
        case 0x15998cu: goto label_15998c;
        case 0x159990u: goto label_159990;
        case 0x159994u: goto label_159994;
        case 0x159998u: goto label_159998;
        case 0x15999cu: goto label_15999c;
        case 0x1599a0u: goto label_1599a0;
        case 0x1599a4u: goto label_1599a4;
        case 0x1599a8u: goto label_1599a8;
        case 0x1599acu: goto label_1599ac;
        case 0x1599b0u: goto label_1599b0;
        case 0x1599b4u: goto label_1599b4;
        case 0x1599b8u: goto label_1599b8;
        case 0x1599bcu: goto label_1599bc;
        case 0x1599c0u: goto label_1599c0;
        case 0x1599c4u: goto label_1599c4;
        case 0x1599c8u: goto label_1599c8;
        case 0x1599ccu: goto label_1599cc;
        case 0x1599d0u: goto label_1599d0;
        case 0x1599d4u: goto label_1599d4;
        case 0x1599d8u: goto label_1599d8;
        case 0x1599dcu: goto label_1599dc;
        case 0x1599e0u: goto label_1599e0;
        case 0x1599e4u: goto label_1599e4;
        case 0x1599e8u: goto label_1599e8;
        case 0x1599ecu: goto label_1599ec;
        case 0x1599f0u: goto label_1599f0;
        case 0x1599f4u: goto label_1599f4;
        case 0x1599f8u: goto label_1599f8;
        case 0x1599fcu: goto label_1599fc;
        case 0x159a00u: goto label_159a00;
        case 0x159a04u: goto label_159a04;
        case 0x159a08u: goto label_159a08;
        case 0x159a0cu: goto label_159a0c;
        case 0x159a10u: goto label_159a10;
        case 0x159a14u: goto label_159a14;
        case 0x159a18u: goto label_159a18;
        case 0x159a1cu: goto label_159a1c;
        case 0x159a20u: goto label_159a20;
        case 0x159a24u: goto label_159a24;
        case 0x159a28u: goto label_159a28;
        case 0x159a2cu: goto label_159a2c;
        case 0x159a30u: goto label_159a30;
        case 0x159a34u: goto label_159a34;
        case 0x159a38u: goto label_159a38;
        case 0x159a3cu: goto label_159a3c;
        case 0x159a40u: goto label_159a40;
        case 0x159a44u: goto label_159a44;
        case 0x159a48u: goto label_159a48;
        case 0x159a4cu: goto label_159a4c;
        case 0x159a50u: goto label_159a50;
        case 0x159a54u: goto label_159a54;
        case 0x159a58u: goto label_159a58;
        case 0x159a5cu: goto label_159a5c;
        case 0x159a60u: goto label_159a60;
        case 0x159a64u: goto label_159a64;
        case 0x159a68u: goto label_159a68;
        case 0x159a6cu: goto label_159a6c;
        case 0x159a70u: goto label_159a70;
        case 0x159a74u: goto label_159a74;
        case 0x159a78u: goto label_159a78;
        case 0x159a7cu: goto label_159a7c;
        case 0x159a80u: goto label_159a80;
        case 0x159a84u: goto label_159a84;
        case 0x159a88u: goto label_159a88;
        case 0x159a8cu: goto label_159a8c;
        case 0x159a90u: goto label_159a90;
        case 0x159a94u: goto label_159a94;
        case 0x159a98u: goto label_159a98;
        case 0x159a9cu: goto label_159a9c;
        case 0x159aa0u: goto label_159aa0;
        case 0x159aa4u: goto label_159aa4;
        case 0x159aa8u: goto label_159aa8;
        case 0x159aacu: goto label_159aac;
        case 0x159ab0u: goto label_159ab0;
        case 0x159ab4u: goto label_159ab4;
        case 0x159ab8u: goto label_159ab8;
        case 0x159abcu: goto label_159abc;
        case 0x159ac0u: goto label_159ac0;
        case 0x159ac4u: goto label_159ac4;
        case 0x159ac8u: goto label_159ac8;
        case 0x159accu: goto label_159acc;
        case 0x159ad0u: goto label_159ad0;
        case 0x159ad4u: goto label_159ad4;
        case 0x159ad8u: goto label_159ad8;
        case 0x159adcu: goto label_159adc;
        case 0x159ae0u: goto label_159ae0;
        case 0x159ae4u: goto label_159ae4;
        case 0x159ae8u: goto label_159ae8;
        case 0x159aecu: goto label_159aec;
        case 0x159af0u: goto label_159af0;
        case 0x159af4u: goto label_159af4;
        case 0x159af8u: goto label_159af8;
        case 0x159afcu: goto label_159afc;
        case 0x159b00u: goto label_159b00;
        case 0x159b04u: goto label_159b04;
        case 0x159b08u: goto label_159b08;
        case 0x159b0cu: goto label_159b0c;
        case 0x159b10u: goto label_159b10;
        case 0x159b14u: goto label_159b14;
        default: break;
    }

    ctx->pc = 0x159560u;

label_159560:
    // 0x159560: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x159560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_159564:
    // 0x159564: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x159564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_159568:
    // 0x159568: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x159568u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15956c:
    // 0x15956c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15956cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_159570:
    // 0x159570: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x159570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_159574:
    // 0x159574: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x159574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_159578:
    // 0x159578: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x159578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15957c:
    // 0x15957c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x15957cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_159580:
    // 0x159580: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x159580u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_159584:
    // 0x159584: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x159584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_159588:
    // 0x159588: 0x26a303d0  addiu       $v1, $s5, 0x3D0
    ctx->pc = 0x159588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 976));
label_15958c:
    // 0x15958c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15958cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_159590:
    // 0x159590: 0x26a403e0  addiu       $a0, $s5, 0x3E0
    ctx->pc = 0x159590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 992));
label_159594:
    // 0x159594: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x159594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_159598:
    // 0x159598: 0x26a203b0  addiu       $v0, $s5, 0x3B0
    ctx->pc = 0x159598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 944));
label_15959c:
    // 0x15959c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x15959cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_1595a0:
    // 0x1595a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1595a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1595a4:
    // 0x1595a4: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x1595a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1595a8:
    // 0x1595a8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1595a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1595ac:
    // 0x1595ac: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x1595acu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1595b0:
    // 0x1595b0: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1595b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1595b4:
    // 0x1595b4: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1595b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1595b8:
    // 0x1595b8: 0x26a503f0  addiu       $a1, $s5, 0x3F0
    ctx->pc = 0x1595b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1008));
label_1595bc:
    // 0x1595bc: 0x26a203c0  addiu       $v0, $s5, 0x3C0
    ctx->pc = 0x1595bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 960));
label_1595c0:
    // 0x1595c0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1595c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1595c4:
    // 0x1595c4: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x1595c4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1595c8:
    // 0x1595c8: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1595c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1595cc:
    // 0x1595cc: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1595ccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1595d0:
    // 0x1595d0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1595d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1595d4:
    // 0x1595d4: 0x94a20022  lhu         $v0, 0x22($a1)
    ctx->pc = 0x1595d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
label_1595d8:
    // 0x1595d8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1595d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_1595dc:
    // 0x1595dc: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_1595e0:
    if (ctx->pc == 0x1595E0u) {
        ctx->pc = 0x1595E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1595DCu;
        // 0x1595e0: 0x26230070  addiu       $v1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1595E4u;
        goto label_1595e4;
    }
    ctx->pc = 0x1595DCu;
    {
        const bool branch_taken_0x1595dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1595dc) {
            ctx->pc = 0x1595E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1595DCu;
            // 0x1595e0: 0x26230070  addiu       $v1, $s1, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159620u;
            goto label_159620;
        }
    }
    ctx->pc = 0x1595E4u;
label_1595e4:
    // 0x1595e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1595e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1595e8:
    // 0x1595e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1595e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1595ec:
    // 0x1595ec: 0xc061468  jal         func_1851A0
label_1595f0:
    if (ctx->pc == 0x1595F0u) {
        ctx->pc = 0x1595F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1595ECu;
        // 0x1595f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1595F4u;
        goto label_1595f4;
    }
    ctx->pc = 0x1595ECu;
    SET_GPR_U32(ctx, 31, 0x1595F4u);
    ctx->pc = 0x1595F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1595ECu;
    // 0x1595f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1851A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1851A0u, 0x1595ECu, 0x1595F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1595F4u;
label_1595f4:
    // 0x1595f4: 0x26230070  addiu       $v1, $s1, 0x70
    ctx->pc = 0x1595f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_1595f8:
    // 0x1595f8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1595f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1595fc:
    // 0x1595fc: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1595fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_159600:
    // 0x159600: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x159600u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_159604:
    // 0x159604: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x159604u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_159608:
    // 0x159608: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x159608u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_15960c:
    // 0x15960c: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x15960cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_159610:
    // 0x159610: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x159610u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
label_159614:
    // 0x159614: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x159614u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
label_159618:
    // 0x159618: 0x10000013  b           . + 4 + (0x13 << 2)
label_15961c:
    if (ctx->pc == 0x15961Cu) {
        ctx->pc = 0x15961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159618u;
        // 0x15961c: 0x26a503e0  addiu       $a1, $s5, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159620u;
        goto label_159620;
    }
    ctx->pc = 0x159618u;
    {
        const bool branch_taken_0x159618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159618u;
        // 0x15961c: 0x26a503e0  addiu       $a1, $s5, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159618) {
            ctx->pc = 0x159668u;
            goto label_159668;
        }
    }
    ctx->pc = 0x159620u;
label_159620:
    // 0x159620: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x159620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_159624:
    // 0x159624: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x159624u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_159628:
    // 0x159628: 0x78490010  lq          $t1, 0x10($v0)
    ctx->pc = 0x159628u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_15962c:
    // 0x15962c: 0x784a0020  lq          $t2, 0x20($v0)
    ctx->pc = 0x15962cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_159630:
    // 0x159630: 0x482b0000  qmfc2.ni    $t3, $vf0
    ctx->pc = 0x159630u;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[0]));
label_159634:
    // 0x159634: 0x71286488  pextlw      $t4, $t1, $t0
    ctx->pc = 0x159634u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_159638:
    // 0x159638: 0x71286ca8  pextuw      $t5, $t1, $t0
    ctx->pc = 0x159638u;
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_15963c:
    // 0x15963c: 0x716a7488  pextlw      $t6, $t3, $t2
    ctx->pc = 0x15963cu;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
label_159640:
    // 0x159640: 0x716a7ca8  pextuw      $t7, $t3, $t2
    ctx->pc = 0x159640u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
label_159644:
    // 0x159644: 0x71cc4389  pcpyld      $t0, $t6, $t4
    ctx->pc = 0x159644u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
label_159648:
    // 0x159648: 0x718e4ba9  pcpyud      $t1, $t4, $t6
    ctx->pc = 0x159648u;
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
label_15964c:
    // 0x15964c: 0x71ed5389  pcpyld      $t2, $t7, $t5
    ctx->pc = 0x15964cu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
label_159650:
    // 0x159650: 0x71af5ba9  pcpyud      $t3, $t5, $t7
    ctx->pc = 0x159650u;
    SET_GPR_VEC(ctx, 11, _mm_unpackhi_epi64(GPR_VEC(ctx, 13), GPR_VEC(ctx, 15)));
label_159654:
    // 0x159654: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x159654u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
label_159658:
    // 0x159658: 0x7c690010  sq          $t1, 0x10($v1)
    ctx->pc = 0x159658u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 9));
label_15965c:
    // 0x15965c: 0x7c6a0020  sq          $t2, 0x20($v1)
    ctx->pc = 0x15965cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 10));
label_159660:
    // 0x159660: 0x7c6b0030  sq          $t3, 0x30($v1)
    ctx->pc = 0x159660u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 11));
label_159664:
    // 0x159664: 0x26a503e0  addiu       $a1, $s5, 0x3E0
    ctx->pc = 0x159664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 992));
label_159668:
    // 0x159668: 0x26220070  addiu       $v0, $s1, 0x70
    ctx->pc = 0x159668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_15966c:
    // 0x15966c: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x15966cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_159670:
    // 0x159670: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x159670u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_159674:
    // 0x159674: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x159674u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_159678:
    // 0x159678: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x159678u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_15967c:
    // 0x15967c: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x15967cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_159680:
    // 0x159680: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x159680u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_159684:
    // 0x159684: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x159684u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_159688:
    // 0x159688: 0xf8a80000  sqc2        $vf8, 0x0($a1)
    ctx->pc = 0x159688u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[8]));
label_15968c:
    // 0x15968c: 0x26a603f0  addiu       $a2, $s5, 0x3F0
    ctx->pc = 0x15968cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 1008));
label_159690:
    // 0x159690: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x159690u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_159694:
    // 0x159694: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x159694u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_159698:
    // 0x159698: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x159698u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_15969c:
    // 0x15969c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x15969cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_1596a0:
    // 0x1596a0: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x1596a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_1596a4:
    // 0x1596a4: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x1596a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_1596a8:
    // 0x1596a8: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x1596a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_1596ac:
    // 0x1596ac: 0xf8c80000  sqc2        $vf8, 0x0($a2)
    ctx->pc = 0x1596acu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[8]));
label_1596b0:
    // 0x1596b0: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1596b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1596b4:
    // 0x1596b4: 0x1060008e  beqz        $v1, . + 4 + (0x8E << 2)
label_1596b8:
    if (ctx->pc == 0x1596B8u) {
        ctx->pc = 0x1596B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1596B4u;
        // 0x1596b8: 0xc6140014  lwc1        $f20, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1596BCu;
        goto label_1596bc;
    }
    ctx->pc = 0x1596B4u;
    {
        const bool branch_taken_0x1596b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1596B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1596B4u;
        // 0x1596b8: 0xc6140014  lwc1        $f20, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1596b4) {
            ctx->pc = 0x1598F0u;
            goto label_1598f0;
        }
    }
    ctx->pc = 0x1596BCu;
label_1596bc:
    // 0x1596bc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1596bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1596c0:
    // 0x1596c0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1596c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1596c4:
    // 0x1596c4: 0x8ea70014  lw          $a3, 0x14($s5)
    ctx->pc = 0x1596c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_1596c8:
    // 0x1596c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1596c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1596cc:
    // 0x1596cc: 0xc060bca  jal         func_182F28
label_1596d0:
    if (ctx->pc == 0x1596D0u) {
        ctx->pc = 0x1596D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1596CCu;
        // 0x1596d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1596D4u;
        goto label_1596d4;
    }
    ctx->pc = 0x1596CCu;
    SET_GPR_U32(ctx, 31, 0x1596D4u);
    ctx->pc = 0x1596D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1596CCu;
    // 0x1596d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182F28u, 0x1596CCu, 0x1596D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1596D4u;
label_1596d4:
    // 0x1596d4: 0x50400105  beql        $v0, $zero, . + 4 + (0x105 << 2)
label_1596d8:
    if (ctx->pc == 0x1596D8u) {
        ctx->pc = 0x1596D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1596D4u;
        // 0x1596d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1596DCu;
        goto label_1596dc;
    }
    ctx->pc = 0x1596D4u;
    {
        const bool branch_taken_0x1596d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1596d4) {
            ctx->pc = 0x1596D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1596D4u;
            // 0x1596d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159AECu;
            goto label_159aec;
        }
    }
    ctx->pc = 0x1596DCu;
label_1596dc:
    // 0x1596dc: 0xc0609fe  jal         func_1827F8
label_1596e0:
    if (ctx->pc == 0x1596E0u) {
        ctx->pc = 0x1596E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1596DCu;
        // 0x1596e0: 0x8ef00160  lw          $s0, 0x160($s7) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1596E4u;
        goto label_1596e4;
    }
    ctx->pc = 0x1596DCu;
    SET_GPR_U32(ctx, 31, 0x1596E4u);
    ctx->pc = 0x1596E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1596DCu;
    // 0x1596e0: 0x8ef00160  lw          $s0, 0x160($s7) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1827F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1827F8u, 0x1596DCu, 0x1596E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1596E4u;
label_1596e4:
    // 0x1596e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1596e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1596e8:
    // 0x1596e8: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1596e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1596ec:
    // 0x1596ec: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1596ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1596f0:
    // 0x1596f0: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1596f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1596f4:
    // 0x1596f4: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1596f4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_1596f8:
    // 0x1596f8: 0x8e290000  lw          $t1, 0x0($s1)
    ctx->pc = 0x1596f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1596fc:
    // 0x1596fc: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_159700:
    if (ctx->pc == 0x159700u) {
        ctx->pc = 0x159700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1596FCu;
        // 0x159700: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159704u;
        goto label_159704;
    }
    ctx->pc = 0x1596FCu;
    {
        const bool branch_taken_0x1596fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x159700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1596FCu;
        // 0x159700: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1596fc) {
            ctx->pc = 0x159734u;
            goto label_159734;
        }
    }
    ctx->pc = 0x159704u;
label_159704:
    // 0x159704: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x159704u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_159708:
    // 0x159708: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x159708u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_15970c:
    // 0x15970c: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x15970cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_159710:
    // 0x159710: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x159710u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
label_159714:
    // 0x159714: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x159714u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_159718:
    // 0x159718: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x159718u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
label_15971c:
    // 0x15971c: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x15971cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
label_159720:
    // 0x159720: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x159720u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
label_159724:
    // 0x159724: 0xdc820020  ld          $v0, 0x20($a0)
    ctx->pc = 0x159724u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 32)));
label_159728:
    // 0x159728: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x159728u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
label_15972c:
    // 0x15972c: 0xdc830028  ld          $v1, 0x28($a0)
    ctx->pc = 0x15972cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 40)));
label_159730:
    // 0x159730: 0xfe030028  sd          $v1, 0x28($s0)
    ctx->pc = 0x159730u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
label_159734:
    // 0x159734: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_159738:
    if (ctx->pc == 0x159738u) {
        ctx->pc = 0x159738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159734u;
        // 0x159738: 0x26020030  addiu       $v0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15973Cu;
        goto label_15973c;
    }
    ctx->pc = 0x159734u;
    {
        const bool branch_taken_0x159734 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x159738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159734u;
        // 0x159738: 0x26020030  addiu       $v0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159734) {
            ctx->pc = 0x159768u;
            goto label_159768;
        }
    }
    ctx->pc = 0x15973Cu;
label_15973c:
    // 0x15973c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x15973cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_159740:
    // 0x159740: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x159740u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_159744:
    // 0x159744: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x159744u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_159748:
    // 0x159748: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x159748u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_15974c:
    // 0x15974c: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x15974cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_159750:
    // 0x159750: 0xf8450010  sqc2        $vf5, 0x10($v0)
    ctx->pc = 0x159750u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_159754:
    // 0x159754: 0xf8460020  sqc2        $vf6, 0x20($v0)
    ctx->pc = 0x159754u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[6]));
label_159758:
    // 0x159758: 0xf8470030  sqc2        $vf7, 0x30($v0)
    ctx->pc = 0x159758u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[7]));
label_15975c:
    // 0x15975c: 0x10000006  b           . + 4 + (0x6 << 2)
label_159760:
    if (ctx->pc == 0x159760u) {
        ctx->pc = 0x159760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15975Cu;
        // 0x159760: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159764u;
        goto label_159764;
    }
    ctx->pc = 0x15975Cu;
    {
        const bool branch_taken_0x15975c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15975Cu;
        // 0x159760: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15975c) {
            ctx->pc = 0x159778u;
            goto label_159778;
        }
    }
    ctx->pc = 0x159764u;
label_159764:
    // 0x159764: 0x0  nop
    ctx->pc = 0x159764u;
    // NOP
label_159768:
    // 0x159768: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x159768u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
label_15976c:
    // 0x15976c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x15976cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_159770:
    // 0x159770: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x159770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
label_159774:
    // 0x159774: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x159774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_159778:
    // 0x159778: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x159778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
label_15977c:
    // 0x15977c: 0xae060090  sw          $a2, 0x90($s0)
    ctx->pc = 0x15977cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 6));
label_159780:
    // 0x159780: 0xae090094  sw          $t1, 0x94($s0)
    ctx->pc = 0x159780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 9));
label_159784:
    // 0x159784: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_159788:
    if (ctx->pc == 0x159788u) {
        ctx->pc = 0x159788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159784u;
        // 0x159788: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15978Cu;
        goto label_15978c;
    }
    ctx->pc = 0x159784u;
    {
        const bool branch_taken_0x159784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159784u;
        // 0x159788: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159784) {
            ctx->pc = 0x159798u;
            goto label_159798;
        }
    }
    ctx->pc = 0x15978Cu;
label_15978c:
    // 0x15978c: 0x8d030160  lw          $v1, 0x160($t0)
    ctx->pc = 0x15978cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 352)));
label_159790:
    // 0x159790: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x159790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_159794:
    // 0x159794: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x159794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_159798:
    // 0x159798: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x159798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_15979c:
    // 0x15979c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x15979cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1597a0:
    // 0x1597a0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1597a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1597a4:
    // 0x1597a4: 0x8ce50120  lw          $a1, 0x120($a3)
    ctx->pc = 0x1597a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 288)));
label_1597a8:
    // 0x1597a8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1597a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1597ac:
    // 0x1597ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1597acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1597b0:
    // 0x1597b0: 0x60f809  jalr        $v1
label_1597b4:
    if (ctx->pc == 0x1597B4u) {
        ctx->pc = 0x1597B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597B0u;
        // 0x1597b4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1597B8u;
        goto label_1597b8;
    }
    ctx->pc = 0x1597B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1597B8u);
        ctx->pc = 0x1597B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597B0u;
        // 0x1597b4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1597B0u, 0x1597B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1597B8u;
label_1597b8:
    // 0x1597b8: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1597b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_1597bc:
    // 0x1597bc: 0x544000cb  bnel        $v0, $zero, . + 4 + (0xCB << 2)
label_1597c0:
    if (ctx->pc == 0x1597C0u) {
        ctx->pc = 0x1597C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597BCu;
        // 0x1597c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1597C4u;
        goto label_1597c4;
    }
    ctx->pc = 0x1597BCu;
    {
        const bool branch_taken_0x1597bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1597bc) {
            ctx->pc = 0x1597C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1597BCu;
            // 0x1597c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159AECu;
            goto label_159aec;
        }
    }
    ctx->pc = 0x1597C4u;
label_1597c4:
    // 0x1597c4: 0x26b303f0  addiu       $s3, $s5, 0x3F0
    ctx->pc = 0x1597c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 1008));
label_1597c8:
    // 0x1597c8: 0x8ee20160  lw          $v0, 0x160($s7)
    ctx->pc = 0x1597c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 352)));
label_1597cc:
    // 0x1597cc: 0x0  nop
    ctx->pc = 0x1597ccu;
    // NOP
label_1597d0:
    // 0x1597d0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1597d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_1597d4:
    // 0x1597d4: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x1597d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1597d8:
    // 0x1597d8: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1597d8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1597dc:
    // 0x1597dc: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1597dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1597e0:
    // 0x1597e0: 0xfa620000  sqc2        $vf2, 0x0($s3)
    ctx->pc = 0x1597e0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1597e4:
    // 0x1597e4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1597e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1597e8:
    // 0x1597e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1597e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1597ec:
    // 0x1597ec: 0x8ea70014  lw          $a3, 0x14($s5)
    ctx->pc = 0x1597ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_1597f0:
    // 0x1597f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1597f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1597f4:
    // 0x1597f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1597f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1597f8:
    // 0x1597f8: 0xc060bd2  jal         func_182F48
label_1597fc:
    if (ctx->pc == 0x1597FCu) {
        ctx->pc = 0x1597FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597F8u;
        // 0x1597fc: 0x2e0a02d  daddu       $s4, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159800u;
        goto label_159800;
    }
    ctx->pc = 0x1597F8u;
    SET_GPR_U32(ctx, 31, 0x159800u);
    ctx->pc = 0x1597FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1597F8u;
    // 0x1597fc: 0x2e0a02d  daddu       $s4, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182F48u, 0x1597F8u, 0x159800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159800u;
label_159800:
    // 0x159800: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x159800u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159804:
    // 0x159804: 0x12c000b8  beqz        $s6, . + 4 + (0xB8 << 2)
label_159808:
    if (ctx->pc == 0x159808u) {
        ctx->pc = 0x159808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159804u;
        // 0x159808: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15980Cu;
        goto label_15980c;
    }
    ctx->pc = 0x159804u;
    {
        const bool branch_taken_0x159804 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x159808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159804u;
        // 0x159808: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159804) {
            ctx->pc = 0x159AE8u;
            goto label_159ae8;
        }
    }
    ctx->pc = 0x15980Cu;
label_15980c:
    // 0x15980c: 0xc0609fe  jal         func_1827F8
label_159810:
    if (ctx->pc == 0x159810u) {
        ctx->pc = 0x159810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15980Cu;
        // 0x159810: 0x8ef00160  lw          $s0, 0x160($s7) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159814u;
        goto label_159814;
    }
    ctx->pc = 0x15980Cu;
    SET_GPR_U32(ctx, 31, 0x159814u);
    ctx->pc = 0x159810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15980Cu;
    // 0x159810: 0x8ef00160  lw          $s0, 0x160($s7) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1827F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1827F8u, 0x15980Cu, 0x159814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159814u;
label_159814:
    // 0x159814: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x159814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159818:
    // 0x159818: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x159818u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15981c:
    // 0x15981c: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x15981cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_159820:
    // 0x159820: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x159820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_159824:
    // 0x159824: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x159824u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_159828:
    // 0x159828: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_15982c:
    if (ctx->pc == 0x15982Cu) {
        ctx->pc = 0x15982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159828u;
        // 0x15982c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x159830u;
        goto label_159830;
    }
    ctx->pc = 0x159828u;
    {
        const bool branch_taken_0x159828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159828u;
        // 0x15982c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159828) {
            ctx->pc = 0x159860u;
            goto label_159860;
        }
    }
    ctx->pc = 0x159830u;
label_159830:
    // 0x159830: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x159830u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_159834:
    // 0x159834: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x159834u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_159838:
    // 0x159838: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x159838u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_15983c:
    // 0x15983c: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x15983cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
label_159840:
    // 0x159840: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x159840u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_159844:
    // 0x159844: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x159844u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
label_159848:
    // 0x159848: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x159848u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
label_15984c:
    // 0x15984c: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x15984cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
label_159850:
    // 0x159850: 0xdc820020  ld          $v0, 0x20($a0)
    ctx->pc = 0x159850u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 32)));
label_159854:
    // 0x159854: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x159854u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
label_159858:
    // 0x159858: 0xdc830028  ld          $v1, 0x28($a0)
    ctx->pc = 0x159858u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 40)));
label_15985c:
    // 0x15985c: 0xfe030028  sd          $v1, 0x28($s0)
    ctx->pc = 0x15985cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
label_159860:
    // 0x159860: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
label_159864:
    if (ctx->pc == 0x159864u) {
        ctx->pc = 0x159864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159860u;
        // 0x159864: 0x92020020  lbu         $v0, 0x20($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159868u;
        goto label_159868;
    }
    ctx->pc = 0x159860u;
    {
        const bool branch_taken_0x159860 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x159860) {
            ctx->pc = 0x159864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159860u;
            // 0x159864: 0x92020020  lbu         $v0, 0x20($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159890u;
            goto label_159890;
        }
    }
    ctx->pc = 0x159868u;
label_159868:
    // 0x159868: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x159868u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_15986c:
    // 0x15986c: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x15986cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_159870:
    // 0x159870: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x159870u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_159874:
    // 0x159874: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x159874u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_159878:
    // 0x159878: 0xf8c40000  sqc2        $vf4, 0x0($a2)
    ctx->pc = 0x159878u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_15987c:
    // 0x15987c: 0xf8c50010  sqc2        $vf5, 0x10($a2)
    ctx->pc = 0x15987cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_159880:
    // 0x159880: 0xf8c60020  sqc2        $vf6, 0x20($a2)
    ctx->pc = 0x159880u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[6]));
label_159884:
    // 0x159884: 0xf8c70030  sqc2        $vf7, 0x30($a2)
    ctx->pc = 0x159884u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[7]));
label_159888:
    // 0x159888: 0x10000004  b           . + 4 + (0x4 << 2)
label_15988c:
    if (ctx->pc == 0x15988Cu) {
        ctx->pc = 0x15988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159888u;
        // 0x15988c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159890u;
        goto label_159890;
    }
    ctx->pc = 0x159888u;
    {
        const bool branch_taken_0x159888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159888u;
        // 0x15988c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159888) {
            ctx->pc = 0x15989Cu;
            goto label_15989c;
        }
    }
    ctx->pc = 0x159890u;
label_159890:
    // 0x159890: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x159890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_159894:
    // 0x159894: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x159894u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
label_159898:
    // 0x159898: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x159898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_15989c:
    // 0x15989c: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x15989cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_1598a0:
    // 0x1598a0: 0xae070094  sw          $a3, 0x94($s0)
    ctx->pc = 0x1598a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 7));
label_1598a4:
    // 0x1598a4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x1598a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
label_1598a8:
    // 0x1598a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1598ac:
    if (ctx->pc == 0x1598ACu) {
        ctx->pc = 0x1598ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598A8u;
        // 0x1598ac: 0xae080090  sw          $t0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1598B0u;
        goto label_1598b0;
    }
    ctx->pc = 0x1598A8u;
    {
        const bool branch_taken_0x1598a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1598ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598A8u;
        // 0x1598ac: 0xae080090  sw          $t0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598a8) {
            ctx->pc = 0x1598BCu;
            goto label_1598bc;
        }
    }
    ctx->pc = 0x1598B0u;
label_1598b0:
    // 0x1598b0: 0x8e830160  lw          $v1, 0x160($s4)
    ctx->pc = 0x1598b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 352)));
label_1598b4:
    // 0x1598b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1598b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1598b8:
    // 0x1598b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1598b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1598bc:
    // 0x1598bc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1598bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1598c0:
    // 0x1598c0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1598c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1598c4:
    // 0x1598c4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1598c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1598c8:
    // 0x1598c8: 0x8e450120  lw          $a1, 0x120($s2)
    ctx->pc = 0x1598c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
label_1598cc:
    // 0x1598cc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1598ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1598d0:
    // 0x1598d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1598d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1598d4:
    // 0x1598d4: 0x60f809  jalr        $v1
label_1598d8:
    if (ctx->pc == 0x1598D8u) {
        ctx->pc = 0x1598D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598D4u;
        // 0x1598d8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1598DCu;
        goto label_1598dc;
    }
    ctx->pc = 0x1598D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1598DCu);
        ctx->pc = 0x1598D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598D4u;
        // 0x1598d8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1598D4u, 0x1598DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1598DCu;
label_1598dc:
    // 0x1598dc: 0x56c0ffbc  bnel        $s6, $zero, . + 4 + (-0x44 << 2)
label_1598e0:
    if (ctx->pc == 0x1598E0u) {
        ctx->pc = 0x1598E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598DCu;
        // 0x1598e0: 0x8ee20160  lw          $v0, 0x160($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1598E4u;
        goto label_1598e4;
    }
    ctx->pc = 0x1598DCu;
    {
        const bool branch_taken_0x1598dc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1598dc) {
            ctx->pc = 0x1598E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1598DCu;
            // 0x1598e0: 0x8ee20160  lw          $v0, 0x160($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1597D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1597d0;
        }
    }
    ctx->pc = 0x1598E4u;
label_1598e4:
    // 0x1598e4: 0x10000081  b           . + 4 + (0x81 << 2)
label_1598e8:
    if (ctx->pc == 0x1598E8u) {
        ctx->pc = 0x1598E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598E4u;
        // 0x1598e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1598ECu;
        goto label_1598ec;
    }
    ctx->pc = 0x1598E4u;
    {
        const bool branch_taken_0x1598e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1598E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598E4u;
        // 0x1598e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598e4) {
            ctx->pc = 0x159AECu;
            goto label_159aec;
        }
    }
    ctx->pc = 0x1598ECu;
label_1598ec:
    // 0x1598ec: 0x0  nop
    ctx->pc = 0x1598ecu;
    // NOP
label_1598f0:
    // 0x1598f0: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1598f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1598f4:
    // 0x1598f4: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_1598f8:
    if (ctx->pc == 0x1598F8u) {
        ctx->pc = 0x1598F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598F4u;
        // 0x1598f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1598FCu;
        goto label_1598fc;
    }
    ctx->pc = 0x1598F4u;
    {
        const bool branch_taken_0x1598f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1598F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598F4u;
        // 0x1598f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598f4) {
            ctx->pc = 0x1599F8u;
            goto label_1599f8;
        }
    }
    ctx->pc = 0x1598FCu;
label_1598fc:
    // 0x1598fc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1598fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_159900:
    // 0x159900: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x159900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159904:
    // 0x159904: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x159904u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159908:
    // 0x159908: 0xc060300  jal         func_180C00
label_15990c:
    if (ctx->pc == 0x15990Cu) {
        ctx->pc = 0x15990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159908u;
        // 0x15990c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159910u;
        goto label_159910;
    }
    ctx->pc = 0x159908u;
    SET_GPR_U32(ctx, 31, 0x159910u);
    ctx->pc = 0x15990Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159908u;
    // 0x15990c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C00u, 0x159908u, 0x159910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159910u;
label_159910:
    // 0x159910: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
label_159914:
    if (ctx->pc == 0x159914u) {
        ctx->pc = 0x159914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159910u;
        // 0x159914: 0x2e0902d  daddu       $s2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159918u;
        goto label_159918;
    }
    ctx->pc = 0x159910u;
    {
        const bool branch_taken_0x159910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159910u;
        // 0x159914: 0x2e0902d  daddu       $s2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159910) {
            ctx->pc = 0x159AE8u;
            goto label_159ae8;
        }
    }
    ctx->pc = 0x159918u;
label_159918:
    // 0x159918: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x159918u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15991c:
    // 0x15991c: 0xc0609fe  jal         func_1827F8
label_159920:
    if (ctx->pc == 0x159920u) {
        ctx->pc = 0x159920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15991Cu;
        // 0x159920: 0x8e500160  lw          $s0, 0x160($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159924u;
        goto label_159924;
    }
    ctx->pc = 0x15991Cu;
    SET_GPR_U32(ctx, 31, 0x159924u);
    ctx->pc = 0x159920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15991Cu;
    // 0x159920: 0x8e500160  lw          $s0, 0x160($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1827F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1827F8u, 0x15991Cu, 0x159924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159924u;
label_159924:
    // 0x159924: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x159924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159928:
    // 0x159928: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x159928u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_15992c:
    // 0x15992c: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x15992cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_159930:
    // 0x159930: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x159930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_159934:
    // 0x159934: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_159938:
    if (ctx->pc == 0x159938u) {
        ctx->pc = 0x159938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159934u;
        // 0x159938: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15993Cu;
        goto label_15993c;
    }
    ctx->pc = 0x159934u;
    {
        const bool branch_taken_0x159934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x159938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159934u;
        // 0x159938: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159934) {
            ctx->pc = 0x15996Cu;
            goto label_15996c;
        }
    }
    ctx->pc = 0x15993Cu;
label_15993c:
    // 0x15993c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x15993cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_159940:
    // 0x159940: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x159940u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_159944:
    // 0x159944: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x159944u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_159948:
    // 0x159948: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x159948u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
label_15994c:
    // 0x15994c: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x15994cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_159950:
    // 0x159950: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x159950u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
label_159954:
    // 0x159954: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x159954u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
label_159958:
    // 0x159958: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x159958u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
label_15995c:
    // 0x15995c: 0xdc820020  ld          $v0, 0x20($a0)
    ctx->pc = 0x15995cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 32)));
label_159960:
    // 0x159960: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x159960u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
label_159964:
    // 0x159964: 0xdc830028  ld          $v1, 0x28($a0)
    ctx->pc = 0x159964u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 40)));
label_159968:
    // 0x159968: 0xfe030028  sd          $v1, 0x28($s0)
    ctx->pc = 0x159968u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
label_15996c:
    // 0x15996c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_159970:
    if (ctx->pc == 0x159970u) {
        ctx->pc = 0x159970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15996Cu;
        // 0x159970: 0x26020030  addiu       $v0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159974u;
        goto label_159974;
    }
    ctx->pc = 0x15996Cu;
    {
        const bool branch_taken_0x15996c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x159970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15996Cu;
        // 0x159970: 0x26020030  addiu       $v0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15996c) {
            ctx->pc = 0x1599A0u;
            goto label_1599a0;
        }
    }
    ctx->pc = 0x159974u;
label_159974:
    // 0x159974: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x159974u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_159978:
    // 0x159978: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x159978u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_15997c:
    // 0x15997c: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x15997cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_159980:
    // 0x159980: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x159980u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_159984:
    // 0x159984: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x159984u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_159988:
    // 0x159988: 0xf8450010  sqc2        $vf5, 0x10($v0)
    ctx->pc = 0x159988u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_15998c:
    // 0x15998c: 0xf8460020  sqc2        $vf6, 0x20($v0)
    ctx->pc = 0x15998cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[6]));
label_159990:
    // 0x159990: 0xf8470030  sqc2        $vf7, 0x30($v0)
    ctx->pc = 0x159990u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[7]));
label_159994:
    // 0x159994: 0x10000006  b           . + 4 + (0x6 << 2)
label_159998:
    if (ctx->pc == 0x159998u) {
        ctx->pc = 0x159998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159994u;
        // 0x159998: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15999Cu;
        goto label_15999c;
    }
    ctx->pc = 0x159994u;
    {
        const bool branch_taken_0x159994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159994u;
        // 0x159998: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159994) {
            ctx->pc = 0x1599B0u;
            goto label_1599b0;
        }
    }
    ctx->pc = 0x15999Cu;
label_15999c:
    // 0x15999c: 0x0  nop
    ctx->pc = 0x15999cu;
    // NOP
label_1599a0:
    // 0x1599a0: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x1599a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
label_1599a4:
    // 0x1599a4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1599a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_1599a8:
    // 0x1599a8: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x1599a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
label_1599ac:
    // 0x1599ac: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1599acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1599b0:
    // 0x1599b0: 0xe60c0098  swc1        $f12, 0x98($s0)
    ctx->pc = 0x1599b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
label_1599b4:
    // 0x1599b4: 0xae070090  sw          $a3, 0x90($s0)
    ctx->pc = 0x1599b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 7));
label_1599b8:
    // 0x1599b8: 0xae060094  sw          $a2, 0x94($s0)
    ctx->pc = 0x1599b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 6));
label_1599bc:
    // 0x1599bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1599c0:
    if (ctx->pc == 0x1599C0u) {
        ctx->pc = 0x1599C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599BCu;
        // 0x1599c0: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1599C4u;
        goto label_1599c4;
    }
    ctx->pc = 0x1599BCu;
    {
        const bool branch_taken_0x1599bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1599C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599BCu;
        // 0x1599c0: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1599bc) {
            ctx->pc = 0x1599D0u;
            goto label_1599d0;
        }
    }
    ctx->pc = 0x1599C4u;
label_1599c4:
    // 0x1599c4: 0x8e430160  lw          $v1, 0x160($s2)
    ctx->pc = 0x1599c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
label_1599c8:
    // 0x1599c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1599c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1599cc:
    // 0x1599cc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1599ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1599d0:
    // 0x1599d0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1599d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1599d4:
    // 0x1599d4: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x1599d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1599d8:
    // 0x1599d8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1599d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1599dc:
    // 0x1599dc: 0x8e650120  lw          $a1, 0x120($s3)
    ctx->pc = 0x1599dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
label_1599e0:
    // 0x1599e0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1599e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1599e4:
    // 0x1599e4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1599e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1599e8:
    // 0x1599e8: 0x60f809  jalr        $v1
label_1599ec:
    if (ctx->pc == 0x1599ECu) {
        ctx->pc = 0x1599ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599E8u;
        // 0x1599ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1599F0u;
        goto label_1599f0;
    }
    ctx->pc = 0x1599E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1599F0u);
        ctx->pc = 0x1599ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599E8u;
        // 0x1599ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1599E8u, 0x1599F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1599F0u;
label_1599f0:
    // 0x1599f0: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1599f4:
    if (ctx->pc == 0x1599F4u) {
        ctx->pc = 0x1599F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599F0u;
        // 0x1599f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1599F8u;
        goto label_1599f8;
    }
    ctx->pc = 0x1599F0u;
    {
        const bool branch_taken_0x1599f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1599F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599F0u;
        // 0x1599f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1599f0) {
            ctx->pc = 0x159AECu;
            goto label_159aec;
        }
    }
    ctx->pc = 0x1599F8u;
label_1599f8:
    // 0x1599f8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1599f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1599fc:
    // 0x1599fc: 0x8ea70014  lw          $a3, 0x14($s5)
    ctx->pc = 0x1599fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_159a00:
    // 0x159a00: 0xc060bca  jal         func_182F28
label_159a04:
    if (ctx->pc == 0x159A04u) {
        ctx->pc = 0x159A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A00u;
        // 0x159a04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159A08u;
        goto label_159a08;
    }
    ctx->pc = 0x159A00u;
    SET_GPR_U32(ctx, 31, 0x159A08u);
    ctx->pc = 0x159A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159A00u;
    // 0x159a04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182F28u, 0x159A00u, 0x159A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159A08u;
label_159a08:
    // 0x159a08: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_159a0c:
    if (ctx->pc == 0x159A0Cu) {
        ctx->pc = 0x159A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A08u;
        // 0x159a0c: 0x2e0902d  daddu       $s2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159A10u;
        goto label_159a10;
    }
    ctx->pc = 0x159A08u;
    {
        const bool branch_taken_0x159a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A08u;
        // 0x159a0c: 0x2e0902d  daddu       $s2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a08) {
            ctx->pc = 0x159AE8u;
            goto label_159ae8;
        }
    }
    ctx->pc = 0x159A10u;
label_159a10:
    // 0x159a10: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x159a10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_159a14:
    // 0x159a14: 0xc0609fe  jal         func_1827F8
label_159a18:
    if (ctx->pc == 0x159A18u) {
        ctx->pc = 0x159A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A14u;
        // 0x159a18: 0x8e500160  lw          $s0, 0x160($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159A1Cu;
        goto label_159a1c;
    }
    ctx->pc = 0x159A14u;
    SET_GPR_U32(ctx, 31, 0x159A1Cu);
    ctx->pc = 0x159A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159A14u;
    // 0x159a18: 0x8e500160  lw          $s0, 0x160($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1827F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1827F8u, 0x159A14u, 0x159A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159A1Cu;
label_159a1c:
    // 0x159a1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x159a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159a20:
    // 0x159a20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x159a20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_159a24:
    // 0x159a24: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x159a24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_159a28:
    // 0x159a28: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x159a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_159a2c:
    // 0x159a2c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_159a30:
    if (ctx->pc == 0x159A30u) {
        ctx->pc = 0x159A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A2Cu;
        // 0x159a30: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159A34u;
        goto label_159a34;
    }
    ctx->pc = 0x159A2Cu;
    {
        const bool branch_taken_0x159a2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x159A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A2Cu;
        // 0x159a30: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a2c) {
            ctx->pc = 0x159A64u;
            goto label_159a64;
        }
    }
    ctx->pc = 0x159A34u;
label_159a34:
    // 0x159a34: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x159a34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_159a38:
    // 0x159a38: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x159a38u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_159a3c:
    // 0x159a3c: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x159a3cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_159a40:
    // 0x159a40: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x159a40u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
label_159a44:
    // 0x159a44: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x159a44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_159a48:
    // 0x159a48: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x159a48u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
label_159a4c:
    // 0x159a4c: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x159a4cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
label_159a50:
    // 0x159a50: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x159a50u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
label_159a54:
    // 0x159a54: 0xdc820020  ld          $v0, 0x20($a0)
    ctx->pc = 0x159a54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 32)));
label_159a58:
    // 0x159a58: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x159a58u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
label_159a5c:
    // 0x159a5c: 0xdc830028  ld          $v1, 0x28($a0)
    ctx->pc = 0x159a5cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 40)));
label_159a60:
    // 0x159a60: 0xfe030028  sd          $v1, 0x28($s0)
    ctx->pc = 0x159a60u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
label_159a64:
    // 0x159a64: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_159a68:
    if (ctx->pc == 0x159A68u) {
        ctx->pc = 0x159A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A64u;
        // 0x159a68: 0x26020030  addiu       $v0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159A6Cu;
        goto label_159a6c;
    }
    ctx->pc = 0x159A64u;
    {
        const bool branch_taken_0x159a64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x159A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A64u;
        // 0x159a68: 0x26020030  addiu       $v0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a64) {
            ctx->pc = 0x159A98u;
            goto label_159a98;
        }
    }
    ctx->pc = 0x159A6Cu;
label_159a6c:
    // 0x159a6c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x159a6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_159a70:
    // 0x159a70: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x159a70u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_159a74:
    // 0x159a74: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x159a74u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_159a78:
    // 0x159a78: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x159a78u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_159a7c:
    // 0x159a7c: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x159a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_159a80:
    // 0x159a80: 0xf8450010  sqc2        $vf5, 0x10($v0)
    ctx->pc = 0x159a80u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_159a84:
    // 0x159a84: 0xf8460020  sqc2        $vf6, 0x20($v0)
    ctx->pc = 0x159a84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[6]));
label_159a88:
    // 0x159a88: 0xf8470030  sqc2        $vf7, 0x30($v0)
    ctx->pc = 0x159a88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[7]));
label_159a8c:
    // 0x159a8c: 0x10000006  b           . + 4 + (0x6 << 2)
label_159a90:
    if (ctx->pc == 0x159A90u) {
        ctx->pc = 0x159A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A8Cu;
        // 0x159a90: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159A94u;
        goto label_159a94;
    }
    ctx->pc = 0x159A8Cu;
    {
        const bool branch_taken_0x159a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A8Cu;
        // 0x159a90: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a8c) {
            ctx->pc = 0x159AA8u;
            goto label_159aa8;
        }
    }
    ctx->pc = 0x159A94u;
label_159a94:
    // 0x159a94: 0x0  nop
    ctx->pc = 0x159a94u;
    // NOP
label_159a98:
    // 0x159a98: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x159a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
label_159a9c:
    // 0x159a9c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x159a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_159aa0:
    // 0x159aa0: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x159aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
label_159aa4:
    // 0x159aa4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x159aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_159aa8:
    // 0x159aa8: 0xe60c0098  swc1        $f12, 0x98($s0)
    ctx->pc = 0x159aa8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
label_159aac:
    // 0x159aac: 0xae070090  sw          $a3, 0x90($s0)
    ctx->pc = 0x159aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 7));
label_159ab0:
    // 0x159ab0: 0xae060094  sw          $a2, 0x94($s0)
    ctx->pc = 0x159ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 6));
label_159ab4:
    // 0x159ab4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_159ab8:
    if (ctx->pc == 0x159AB8u) {
        ctx->pc = 0x159AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AB4u;
        // 0x159ab8: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159ABCu;
        goto label_159abc;
    }
    ctx->pc = 0x159AB4u;
    {
        const bool branch_taken_0x159ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AB4u;
        // 0x159ab8: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ab4) {
            ctx->pc = 0x159AC8u;
            goto label_159ac8;
        }
    }
    ctx->pc = 0x159ABCu;
label_159abc:
    // 0x159abc: 0x8e430160  lw          $v1, 0x160($s2)
    ctx->pc = 0x159abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
label_159ac0:
    // 0x159ac0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x159ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_159ac4:
    // 0x159ac4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x159ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_159ac8:
    // 0x159ac8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x159ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_159acc:
    // 0x159acc: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x159accu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_159ad0:
    // 0x159ad0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x159ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_159ad4:
    // 0x159ad4: 0x8e650120  lw          $a1, 0x120($s3)
    ctx->pc = 0x159ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
label_159ad8:
    // 0x159ad8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x159ad8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_159adc:
    // 0x159adc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x159adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_159ae0:
    // 0x159ae0: 0x60f809  jalr        $v1
label_159ae4:
    if (ctx->pc == 0x159AE4u) {
        ctx->pc = 0x159AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AE0u;
        // 0x159ae4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159AE8u;
        goto label_159ae8;
    }
    ctx->pc = 0x159AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x159AE8u);
        ctx->pc = 0x159AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AE0u;
        // 0x159ae4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159AE0u, 0x159AE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159AE8u;
label_159ae8:
    // 0x159ae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x159ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159aec:
    // 0x159aec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x159aecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_159af0:
    // 0x159af0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x159af0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_159af4:
    // 0x159af4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x159af4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_159af8:
    // 0x159af8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x159af8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_159afc:
    // 0x159afc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x159afcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_159b00:
    // 0x159b00: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x159b00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_159b04:
    // 0x159b04: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x159b04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_159b08:
    // 0x159b08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x159b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_159b0c:
    // 0x159b0c: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x159b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_159b10:
    // 0x159b10: 0x3e00008  jr          $ra
label_159b14:
    if (ctx->pc == 0x159B14u) {
        ctx->pc = 0x159B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B10u;
        // 0x159b14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159B18u;
        goto label_fallthrough_0x159b10;
    }
    ctx->pc = 0x159B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B10u;
        // 0x159b14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x159b10:
    ctx->pc = 0x159B18u;
}
