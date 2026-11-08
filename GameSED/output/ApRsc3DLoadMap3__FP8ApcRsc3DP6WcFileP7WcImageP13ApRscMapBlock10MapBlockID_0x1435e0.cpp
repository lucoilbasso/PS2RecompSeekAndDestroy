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

// Function: ApRsc3DLoadMap3__FP8ApcRsc3DP6WcFileP7WcImageP13ApRscMapBlock10MapBlockID
// Address: 0x1435e0 - 0x143ad4
void ApRsc3DLoadMap3__FP8ApcRsc3DP6WcFileP7WcImageP13ApRscMapBlock10MapBlockID_0x1435e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRsc3DLoadMap3__FP8ApcRsc3DP6WcFileP7WcImageP13ApRscMapBlock10MapBlockID_0x1435e0");
#endif

    switch (ctx->pc) {
        case 0x1435e0u: goto label_1435e0;
        case 0x1435e4u: goto label_1435e4;
        case 0x1435e8u: goto label_1435e8;
        case 0x1435ecu: goto label_1435ec;
        case 0x1435f0u: goto label_1435f0;
        case 0x1435f4u: goto label_1435f4;
        case 0x1435f8u: goto label_1435f8;
        case 0x1435fcu: goto label_1435fc;
        case 0x143600u: goto label_143600;
        case 0x143604u: goto label_143604;
        case 0x143608u: goto label_143608;
        case 0x14360cu: goto label_14360c;
        case 0x143610u: goto label_143610;
        case 0x143614u: goto label_143614;
        case 0x143618u: goto label_143618;
        case 0x14361cu: goto label_14361c;
        case 0x143620u: goto label_143620;
        case 0x143624u: goto label_143624;
        case 0x143628u: goto label_143628;
        case 0x14362cu: goto label_14362c;
        case 0x143630u: goto label_143630;
        case 0x143634u: goto label_143634;
        case 0x143638u: goto label_143638;
        case 0x14363cu: goto label_14363c;
        case 0x143640u: goto label_143640;
        case 0x143644u: goto label_143644;
        case 0x143648u: goto label_143648;
        case 0x14364cu: goto label_14364c;
        case 0x143650u: goto label_143650;
        case 0x143654u: goto label_143654;
        case 0x143658u: goto label_143658;
        case 0x14365cu: goto label_14365c;
        case 0x143660u: goto label_143660;
        case 0x143664u: goto label_143664;
        case 0x143668u: goto label_143668;
        case 0x14366cu: goto label_14366c;
        case 0x143670u: goto label_143670;
        case 0x143674u: goto label_143674;
        case 0x143678u: goto label_143678;
        case 0x14367cu: goto label_14367c;
        case 0x143680u: goto label_143680;
        case 0x143684u: goto label_143684;
        case 0x143688u: goto label_143688;
        case 0x14368cu: goto label_14368c;
        case 0x143690u: goto label_143690;
        case 0x143694u: goto label_143694;
        case 0x143698u: goto label_143698;
        case 0x14369cu: goto label_14369c;
        case 0x1436a0u: goto label_1436a0;
        case 0x1436a4u: goto label_1436a4;
        case 0x1436a8u: goto label_1436a8;
        case 0x1436acu: goto label_1436ac;
        case 0x1436b0u: goto label_1436b0;
        case 0x1436b4u: goto label_1436b4;
        case 0x1436b8u: goto label_1436b8;
        case 0x1436bcu: goto label_1436bc;
        case 0x1436c0u: goto label_1436c0;
        case 0x1436c4u: goto label_1436c4;
        case 0x1436c8u: goto label_1436c8;
        case 0x1436ccu: goto label_1436cc;
        case 0x1436d0u: goto label_1436d0;
        case 0x1436d4u: goto label_1436d4;
        case 0x1436d8u: goto label_1436d8;
        case 0x1436dcu: goto label_1436dc;
        case 0x1436e0u: goto label_1436e0;
        case 0x1436e4u: goto label_1436e4;
        case 0x1436e8u: goto label_1436e8;
        case 0x1436ecu: goto label_1436ec;
        case 0x1436f0u: goto label_1436f0;
        case 0x1436f4u: goto label_1436f4;
        case 0x1436f8u: goto label_1436f8;
        case 0x1436fcu: goto label_1436fc;
        case 0x143700u: goto label_143700;
        case 0x143704u: goto label_143704;
        case 0x143708u: goto label_143708;
        case 0x14370cu: goto label_14370c;
        case 0x143710u: goto label_143710;
        case 0x143714u: goto label_143714;
        case 0x143718u: goto label_143718;
        case 0x14371cu: goto label_14371c;
        case 0x143720u: goto label_143720;
        case 0x143724u: goto label_143724;
        case 0x143728u: goto label_143728;
        case 0x14372cu: goto label_14372c;
        case 0x143730u: goto label_143730;
        case 0x143734u: goto label_143734;
        case 0x143738u: goto label_143738;
        case 0x14373cu: goto label_14373c;
        case 0x143740u: goto label_143740;
        case 0x143744u: goto label_143744;
        case 0x143748u: goto label_143748;
        case 0x14374cu: goto label_14374c;
        case 0x143750u: goto label_143750;
        case 0x143754u: goto label_143754;
        case 0x143758u: goto label_143758;
        case 0x14375cu: goto label_14375c;
        case 0x143760u: goto label_143760;
        case 0x143764u: goto label_143764;
        case 0x143768u: goto label_143768;
        case 0x14376cu: goto label_14376c;
        case 0x143770u: goto label_143770;
        case 0x143774u: goto label_143774;
        case 0x143778u: goto label_143778;
        case 0x14377cu: goto label_14377c;
        case 0x143780u: goto label_143780;
        case 0x143784u: goto label_143784;
        case 0x143788u: goto label_143788;
        case 0x14378cu: goto label_14378c;
        case 0x143790u: goto label_143790;
        case 0x143794u: goto label_143794;
        case 0x143798u: goto label_143798;
        case 0x14379cu: goto label_14379c;
        case 0x1437a0u: goto label_1437a0;
        case 0x1437a4u: goto label_1437a4;
        case 0x1437a8u: goto label_1437a8;
        case 0x1437acu: goto label_1437ac;
        case 0x1437b0u: goto label_1437b0;
        case 0x1437b4u: goto label_1437b4;
        case 0x1437b8u: goto label_1437b8;
        case 0x1437bcu: goto label_1437bc;
        case 0x1437c0u: goto label_1437c0;
        case 0x1437c4u: goto label_1437c4;
        case 0x1437c8u: goto label_1437c8;
        case 0x1437ccu: goto label_1437cc;
        case 0x1437d0u: goto label_1437d0;
        case 0x1437d4u: goto label_1437d4;
        case 0x1437d8u: goto label_1437d8;
        case 0x1437dcu: goto label_1437dc;
        case 0x1437e0u: goto label_1437e0;
        case 0x1437e4u: goto label_1437e4;
        case 0x1437e8u: goto label_1437e8;
        case 0x1437ecu: goto label_1437ec;
        case 0x1437f0u: goto label_1437f0;
        case 0x1437f4u: goto label_1437f4;
        case 0x1437f8u: goto label_1437f8;
        case 0x1437fcu: goto label_1437fc;
        case 0x143800u: goto label_143800;
        case 0x143804u: goto label_143804;
        case 0x143808u: goto label_143808;
        case 0x14380cu: goto label_14380c;
        case 0x143810u: goto label_143810;
        case 0x143814u: goto label_143814;
        case 0x143818u: goto label_143818;
        case 0x14381cu: goto label_14381c;
        case 0x143820u: goto label_143820;
        case 0x143824u: goto label_143824;
        case 0x143828u: goto label_143828;
        case 0x14382cu: goto label_14382c;
        case 0x143830u: goto label_143830;
        case 0x143834u: goto label_143834;
        case 0x143838u: goto label_143838;
        case 0x14383cu: goto label_14383c;
        case 0x143840u: goto label_143840;
        case 0x143844u: goto label_143844;
        case 0x143848u: goto label_143848;
        case 0x14384cu: goto label_14384c;
        case 0x143850u: goto label_143850;
        case 0x143854u: goto label_143854;
        case 0x143858u: goto label_143858;
        case 0x14385cu: goto label_14385c;
        case 0x143860u: goto label_143860;
        case 0x143864u: goto label_143864;
        case 0x143868u: goto label_143868;
        case 0x14386cu: goto label_14386c;
        case 0x143870u: goto label_143870;
        case 0x143874u: goto label_143874;
        case 0x143878u: goto label_143878;
        case 0x14387cu: goto label_14387c;
        case 0x143880u: goto label_143880;
        case 0x143884u: goto label_143884;
        case 0x143888u: goto label_143888;
        case 0x14388cu: goto label_14388c;
        case 0x143890u: goto label_143890;
        case 0x143894u: goto label_143894;
        case 0x143898u: goto label_143898;
        case 0x14389cu: goto label_14389c;
        case 0x1438a0u: goto label_1438a0;
        case 0x1438a4u: goto label_1438a4;
        case 0x1438a8u: goto label_1438a8;
        case 0x1438acu: goto label_1438ac;
        case 0x1438b0u: goto label_1438b0;
        case 0x1438b4u: goto label_1438b4;
        case 0x1438b8u: goto label_1438b8;
        case 0x1438bcu: goto label_1438bc;
        case 0x1438c0u: goto label_1438c0;
        case 0x1438c4u: goto label_1438c4;
        case 0x1438c8u: goto label_1438c8;
        case 0x1438ccu: goto label_1438cc;
        case 0x1438d0u: goto label_1438d0;
        case 0x1438d4u: goto label_1438d4;
        case 0x1438d8u: goto label_1438d8;
        case 0x1438dcu: goto label_1438dc;
        case 0x1438e0u: goto label_1438e0;
        case 0x1438e4u: goto label_1438e4;
        case 0x1438e8u: goto label_1438e8;
        case 0x1438ecu: goto label_1438ec;
        case 0x1438f0u: goto label_1438f0;
        case 0x1438f4u: goto label_1438f4;
        case 0x1438f8u: goto label_1438f8;
        case 0x1438fcu: goto label_1438fc;
        case 0x143900u: goto label_143900;
        case 0x143904u: goto label_143904;
        case 0x143908u: goto label_143908;
        case 0x14390cu: goto label_14390c;
        case 0x143910u: goto label_143910;
        case 0x143914u: goto label_143914;
        case 0x143918u: goto label_143918;
        case 0x14391cu: goto label_14391c;
        case 0x143920u: goto label_143920;
        case 0x143924u: goto label_143924;
        case 0x143928u: goto label_143928;
        case 0x14392cu: goto label_14392c;
        case 0x143930u: goto label_143930;
        case 0x143934u: goto label_143934;
        case 0x143938u: goto label_143938;
        case 0x14393cu: goto label_14393c;
        case 0x143940u: goto label_143940;
        case 0x143944u: goto label_143944;
        case 0x143948u: goto label_143948;
        case 0x14394cu: goto label_14394c;
        case 0x143950u: goto label_143950;
        case 0x143954u: goto label_143954;
        case 0x143958u: goto label_143958;
        case 0x14395cu: goto label_14395c;
        case 0x143960u: goto label_143960;
        case 0x143964u: goto label_143964;
        case 0x143968u: goto label_143968;
        case 0x14396cu: goto label_14396c;
        case 0x143970u: goto label_143970;
        case 0x143974u: goto label_143974;
        case 0x143978u: goto label_143978;
        case 0x14397cu: goto label_14397c;
        case 0x143980u: goto label_143980;
        case 0x143984u: goto label_143984;
        case 0x143988u: goto label_143988;
        case 0x14398cu: goto label_14398c;
        case 0x143990u: goto label_143990;
        case 0x143994u: goto label_143994;
        case 0x143998u: goto label_143998;
        case 0x14399cu: goto label_14399c;
        case 0x1439a0u: goto label_1439a0;
        case 0x1439a4u: goto label_1439a4;
        case 0x1439a8u: goto label_1439a8;
        case 0x1439acu: goto label_1439ac;
        case 0x1439b0u: goto label_1439b0;
        case 0x1439b4u: goto label_1439b4;
        case 0x1439b8u: goto label_1439b8;
        case 0x1439bcu: goto label_1439bc;
        case 0x1439c0u: goto label_1439c0;
        case 0x1439c4u: goto label_1439c4;
        case 0x1439c8u: goto label_1439c8;
        case 0x1439ccu: goto label_1439cc;
        case 0x1439d0u: goto label_1439d0;
        case 0x1439d4u: goto label_1439d4;
        case 0x1439d8u: goto label_1439d8;
        case 0x1439dcu: goto label_1439dc;
        case 0x1439e0u: goto label_1439e0;
        case 0x1439e4u: goto label_1439e4;
        case 0x1439e8u: goto label_1439e8;
        case 0x1439ecu: goto label_1439ec;
        case 0x1439f0u: goto label_1439f0;
        case 0x1439f4u: goto label_1439f4;
        case 0x1439f8u: goto label_1439f8;
        case 0x1439fcu: goto label_1439fc;
        case 0x143a00u: goto label_143a00;
        case 0x143a04u: goto label_143a04;
        case 0x143a08u: goto label_143a08;
        case 0x143a0cu: goto label_143a0c;
        case 0x143a10u: goto label_143a10;
        case 0x143a14u: goto label_143a14;
        case 0x143a18u: goto label_143a18;
        case 0x143a1cu: goto label_143a1c;
        case 0x143a20u: goto label_143a20;
        case 0x143a24u: goto label_143a24;
        case 0x143a28u: goto label_143a28;
        case 0x143a2cu: goto label_143a2c;
        case 0x143a30u: goto label_143a30;
        case 0x143a34u: goto label_143a34;
        case 0x143a38u: goto label_143a38;
        case 0x143a3cu: goto label_143a3c;
        case 0x143a40u: goto label_143a40;
        case 0x143a44u: goto label_143a44;
        case 0x143a48u: goto label_143a48;
        case 0x143a4cu: goto label_143a4c;
        case 0x143a50u: goto label_143a50;
        case 0x143a54u: goto label_143a54;
        case 0x143a58u: goto label_143a58;
        case 0x143a5cu: goto label_143a5c;
        case 0x143a60u: goto label_143a60;
        case 0x143a64u: goto label_143a64;
        case 0x143a68u: goto label_143a68;
        case 0x143a6cu: goto label_143a6c;
        case 0x143a70u: goto label_143a70;
        case 0x143a74u: goto label_143a74;
        case 0x143a78u: goto label_143a78;
        case 0x143a7cu: goto label_143a7c;
        case 0x143a80u: goto label_143a80;
        case 0x143a84u: goto label_143a84;
        case 0x143a88u: goto label_143a88;
        case 0x143a8cu: goto label_143a8c;
        case 0x143a90u: goto label_143a90;
        case 0x143a94u: goto label_143a94;
        case 0x143a98u: goto label_143a98;
        case 0x143a9cu: goto label_143a9c;
        case 0x143aa0u: goto label_143aa0;
        case 0x143aa4u: goto label_143aa4;
        case 0x143aa8u: goto label_143aa8;
        case 0x143aacu: goto label_143aac;
        case 0x143ab0u: goto label_143ab0;
        case 0x143ab4u: goto label_143ab4;
        case 0x143ab8u: goto label_143ab8;
        case 0x143abcu: goto label_143abc;
        case 0x143ac0u: goto label_143ac0;
        case 0x143ac4u: goto label_143ac4;
        case 0x143ac8u: goto label_143ac8;
        case 0x143accu: goto label_143acc;
        case 0x143ad0u: goto label_143ad0;
        default: break;
    }

    ctx->pc = 0x1435e0u;

label_1435e0:
    // 0x1435e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1435e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1435e4:
    // 0x1435e4: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x1435e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
label_1435e8:
    // 0x1435e8: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x1435e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_1435ec:
    // 0x1435ec: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x1435ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
label_1435f0:
    // 0x1435f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1435f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1435f4:
    // 0x1435f4: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x1435f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_1435f8:
    // 0x1435f8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1435f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1435fc:
    // 0x1435fc: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x1435fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_143600:
    // 0x143600: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x143600u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_143604:
    // 0x143604: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x143604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
label_143608:
    // 0x143608: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x143608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14360c:
    // 0x14360c: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x14360cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_143610:
    // 0x143610: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x143610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_143614:
    // 0x143614: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x143614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
label_143618:
    // 0x143618: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x143618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14361c:
    // 0x14361c: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x14361cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
label_143620:
    // 0x143620: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x143620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
label_143624:
    // 0x143624: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x143624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
label_143628:
    // 0x143628: 0x8cb70010  lw          $s7, 0x10($a1)
    ctx->pc = 0x143628u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_14362c:
    // 0x14362c: 0xafa80064  sw          $t0, 0x64($sp)
    ctx->pc = 0x14362cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 8));
label_143630:
    // 0x143630: 0x8ef00008  lw          $s0, 0x8($s7)
    ctx->pc = 0x143630u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_143634:
    // 0x143634: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x143634u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_143638:
    // 0x143638: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_14363c:
    if (ctx->pc == 0x14363Cu) {
        ctx->pc = 0x14363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143638u;
        // 0x14363c: 0x102880  sll         $a1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143640u;
        goto label_143640;
    }
    ctx->pc = 0x143638u;
    {
        const bool branch_taken_0x143638 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x14363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143638u;
        // 0x14363c: 0x102880  sll         $a1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143638) {
            ctx->pc = 0x143644u;
            goto label_143644;
        }
    }
    ctx->pc = 0x143640u;
label_143640:
    // 0x143640: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x143640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_143644:
    // 0x143644: 0xc068086  jal         func_1A0218
label_143648:
    if (ctx->pc == 0x143648u) {
        ctx->pc = 0x14364Cu;
        goto label_14364c;
    }
    ctx->pc = 0x143644u;
    SET_GPR_U32(ctx, 31, 0x14364Cu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x143644u, 0x14364Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14364Cu;
label_14364c:
    // 0x14364c: 0x102980  sll         $a1, $s0, 6
    ctx->pc = 0x14364cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_143650:
    // 0x143650: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x143650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_143654:
    // 0x143654: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_143658:
    if (ctx->pc == 0x143658u) {
        ctx->pc = 0x143658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143654u;
        // 0x143658: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14365Cu;
        goto label_14365c;
    }
    ctx->pc = 0x143654u;
    {
        const bool branch_taken_0x143654 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x143658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143654u;
        // 0x143658: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143654) {
            ctx->pc = 0x143660u;
            goto label_143660;
        }
    }
    ctx->pc = 0x14365Cu;
label_14365c:
    // 0x14365c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14365cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_143660:
    // 0x143660: 0xc068086  jal         func_1A0218
label_143664:
    if (ctx->pc == 0x143664u) {
        ctx->pc = 0x143668u;
        goto label_143668;
    }
    ctx->pc = 0x143660u;
    SET_GPR_U32(ctx, 31, 0x143668u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x143660u, 0x143668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143668u;
label_143668:
    // 0x143668: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x143668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_14366c:
    // 0x14366c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x14366cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_143670:
    // 0x143670: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x143670u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_143674:
    // 0x143674: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_143678:
    if (ctx->pc == 0x143678u) {
        ctx->pc = 0x143678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143674u;
        // 0x143678: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14367Cu;
        goto label_14367c;
    }
    ctx->pc = 0x143674u;
    {
        const bool branch_taken_0x143674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x143678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143674u;
        // 0x143678: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143674) {
            ctx->pc = 0x143698u;
            goto label_143698;
        }
    }
    ctx->pc = 0x14367Cu;
label_14367c:
    // 0x14367c: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x14367cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_143680:
    // 0x143680: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x143680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_143684:
    // 0x143684: 0xc06727a  jal         func_19C9E8
label_143688:
    if (ctx->pc == 0x143688u) {
        ctx->pc = 0x143688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143684u;
        // 0x143688: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14368Cu;
        goto label_14368c;
    }
    ctx->pc = 0x143684u;
    SET_GPR_U32(ctx, 31, 0x14368Cu);
    ctx->pc = 0x143688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143684u;
    // 0x143688: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C9E8u, 0x143684u, 0x14368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14368Cu;
label_14368c:
    // 0x14368c: 0x10000008  b           . + 4 + (0x8 << 2)
label_143690:
    if (ctx->pc == 0x143690u) {
        ctx->pc = 0x143690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14368Cu;
        // 0x143690: 0x96e3000e  lhu         $v1, 0xE($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143694u;
        goto label_143694;
    }
    ctx->pc = 0x14368Cu;
    {
        const bool branch_taken_0x14368c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14368Cu;
        // 0x143690: 0x96e3000e  lhu         $v1, 0xE($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14368c) {
            ctx->pc = 0x1436B0u;
            goto label_1436b0;
        }
    }
    ctx->pc = 0x143694u;
label_143694:
    // 0x143694: 0x0  nop
    ctx->pc = 0x143694u;
    // NOP
label_143698:
    // 0x143698: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x143698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_14369c:
    // 0x14369c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14369cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1436a0:
    // 0x1436a0: 0x24a56990  addiu       $a1, $a1, 0x6990
    ctx->pc = 0x1436a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27024));
label_1436a4:
    // 0x1436a4: 0xc068186  jal         func_1A0618
label_1436a8:
    if (ctx->pc == 0x1436A8u) {
        ctx->pc = 0x1436A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436A4u;
        // 0x1436a8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1436ACu;
        goto label_1436ac;
    }
    ctx->pc = 0x1436A4u;
    SET_GPR_U32(ctx, 31, 0x1436ACu);
    ctx->pc = 0x1436A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1436A4u;
    // 0x1436a8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1436A4u, 0x1436ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1436ACu;
label_1436ac:
    // 0x1436ac: 0x96e3000e  lhu         $v1, 0xE($s7)
    ctx->pc = 0x1436acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 14)));
label_1436b0:
    // 0x1436b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1436b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1436b4:
    // 0x1436b4: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x1436b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_1436b8:
    // 0x1436b8: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x1436b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_1436bc:
    // 0x1436bc: 0xae830010  sw          $v1, 0x10($s4)
    ctx->pc = 0x1436bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 3));
label_1436c0:
    // 0x1436c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1436c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1436c4:
    // 0x1436c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1436c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1436c8:
    // 0x1436c8: 0xe6800014  swc1        $f0, 0x14($s4)
    ctx->pc = 0x1436c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
label_1436cc:
    // 0x1436cc: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x1436ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1436d0:
    // 0x1436d0: 0x96e2000c  lhu         $v0, 0xC($s7)
    ctx->pc = 0x1436d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 12)));
label_1436d4:
    // 0x1436d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1436d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1436d8:
    // 0x1436d8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1436d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1436dc:
    // 0x1436dc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1436e0:
    if (ctx->pc == 0x1436E0u) {
        ctx->pc = 0x1436E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436DCu;
        // 0x1436e0: 0xc6800014  lwc1        $f0, 0x14($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1436E4u;
        goto label_1436e4;
    }
    ctx->pc = 0x1436DCu;
    {
        const bool branch_taken_0x1436dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1436dc) {
            ctx->pc = 0x1436E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1436DCu;
            // 0x1436e0: 0xc6800014  lwc1        $f0, 0x14($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1436F4u;
            goto label_1436f4;
        }
    }
    ctx->pc = 0x1436E4u;
label_1436e4:
    // 0x1436e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1436e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1436e8:
    // 0x1436e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1436e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1436ec:
    // 0x1436ec: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1436ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1436f0:
    // 0x1436f0: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x1436f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1436f4:
    // 0x1436f4: 0x26830040  addiu       $v1, $s4, 0x40
    ctx->pc = 0x1436f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_1436f8:
    // 0x1436f8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1436f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1436fc:
    // 0x1436fc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1436fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_143700:
    // 0x143700: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x143700u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_143704:
    // 0x143704: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x143704u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_143708:
    // 0x143708: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x143708u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_14370c:
    // 0x14370c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14370cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143710:
    // 0x143710: 0x8ee50008  lw          $a1, 0x8($s7)
    ctx->pc = 0x143710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_143714:
    // 0x143714: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x143714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_143718:
    // 0x143718: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x143718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14371c:
    // 0x14371c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x14371cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_143720:
    // 0x143720: 0x2e52821  addu        $a1, $s7, $a1
    ctx->pc = 0x143720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
label_143724:
    // 0x143724: 0xc05fcfc  jal         func_17F3F0
label_143728:
    if (ctx->pc == 0x143728u) {
        ctx->pc = 0x143728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143724u;
        // 0x143728: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14372Cu;
        goto label_14372c;
    }
    ctx->pc = 0x143724u;
    SET_GPR_U32(ctx, 31, 0x14372Cu);
    ctx->pc = 0x143728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143724u;
    // 0x143728: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F3F0u, 0x143724u, 0x14372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14372Cu;
label_14372c:
    // 0x14372c: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x14372cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_143730:
    // 0x143730: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x143730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143734:
    // 0x143734: 0x8c640154  lw          $a0, 0x154($v1)
    ctx->pc = 0x143734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
label_143738:
    // 0x143738: 0xc0683b6  jal         func_1A0ED8
label_14373c:
    if (ctx->pc == 0x14373Cu) {
        ctx->pc = 0x14373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143738u;
        // 0x14373c: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143740u;
        goto label_143740;
    }
    ctx->pc = 0x143738u;
    SET_GPR_U32(ctx, 31, 0x143740u);
    ctx->pc = 0x14373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143738u;
    // 0x14373c: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x143738u, 0x143740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143740u;
label_143740:
    // 0x143740: 0x97b10014  lhu         $s1, 0x14($sp)
    ctx->pc = 0x143740u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
label_143744:
    // 0x143744: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
label_143748:
    if (ctx->pc == 0x143748u) {
        ctx->pc = 0x143748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143744u;
        // 0x143748: 0x8fb00018  lw          $s0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14374Cu;
        goto label_14374c;
    }
    ctx->pc = 0x143744u;
    {
        const bool branch_taken_0x143744 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x143748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143744u;
        // 0x143748: 0x8fb00018  lw          $s0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143744) {
            ctx->pc = 0x1437D0u;
            goto label_1437d0;
        }
    }
    ctx->pc = 0x14374Cu;
label_14374c:
    // 0x14374c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x14374cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_143750:
    // 0x143750: 0x2455c520  addiu       $s5, $v0, -0x3AE0
    ctx->pc = 0x143750u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952224));
label_143754:
    // 0x143754: 0x0  nop
    ctx->pc = 0x143754u;
    // NOP
label_143758:
    // 0x143758: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x143758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_14375c:
    // 0x14375c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x14375cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_143760:
    // 0x143760: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x143760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143764:
    // 0x143764: 0xc05fa5c  jal         func_17E970
label_143768:
    if (ctx->pc == 0x143768u) {
        ctx->pc = 0x143768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143764u;
        // 0x143768: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14376Cu;
        goto label_14376c;
    }
    ctx->pc = 0x143764u;
    SET_GPR_U32(ctx, 31, 0x14376Cu);
    ctx->pc = 0x143768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143764u;
    // 0x143768: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E970u, 0x143764u, 0x14376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14376Cu;
label_14376c:
    // 0x14376c: 0x251302b  sltu        $a2, $s2, $s1
    ctx->pc = 0x14376cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_143770:
    // 0x143770: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x143770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_143774:
    // 0x143774: 0x9443001c  lhu         $v1, 0x1C($v0)
    ctx->pc = 0x143774u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
label_143778:
    // 0x143778: 0xdc450038  ld          $a1, 0x38($v0)
    ctx->pc = 0x143778u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 56)));
label_14377c:
    // 0x14377c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x14377cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_143780:
    // 0x143780: 0x9444001e  lhu         $a0, 0x1E($v0)
    ctx->pc = 0x143780u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 30)));
label_143784:
    // 0x143784: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x143784u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
label_143788:
    // 0x143788: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x143788u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_14378c:
    // 0x14378c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x14378cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_143790:
    // 0x143790: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x143790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_143794:
    // 0x143794: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x143794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_143798:
    // 0x143798: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x143798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14379c:
    // 0x14379c: 0xa6040004  sh          $a0, 0x4($s0)
    ctx->pc = 0x14379cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 4));
label_1437a0:
    // 0x1437a0: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x1437a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1437a4:
    // 0x1437a4: 0x94440030  lhu         $a0, 0x30($v0)
    ctx->pc = 0x1437a4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1437a8:
    // 0x1437a8: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x1437a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
label_1437ac:
    // 0x1437ac: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1437acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
label_1437b0:
    // 0x1437b0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1437b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1437b4:
    // 0x1437b4: 0xffa50040  sd          $a1, 0x40($sp)
    ctx->pc = 0x1437b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 5));
label_1437b8:
    // 0x1437b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1437b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1437bc:
    // 0x1437bc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1437bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1437c0:
    // 0x1437c0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1437c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1437c4:
    // 0x1437c4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1437c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1437c8:
    // 0x1437c8: 0x14c0ffe3  bnez        $a2, . + 4 + (-0x1D << 2)
label_1437cc:
    if (ctx->pc == 0x1437CCu) {
        ctx->pc = 0x1437CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1437C8u;
        // 0x1437cc: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1437D0u;
        goto label_1437d0;
    }
    ctx->pc = 0x1437C8u;
    {
        const bool branch_taken_0x1437c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1437CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1437C8u;
        // 0x1437cc: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1437c8) {
            ctx->pc = 0x143758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143758;
        }
    }
    ctx->pc = 0x1437D0u;
label_1437d0:
    // 0x1437d0: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x1437d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_1437d4:
    // 0x1437d4: 0x104000b2  beqz        $v0, . + 4 + (0xB2 << 2)
label_1437d8:
    if (ctx->pc == 0x1437D8u) {
        ctx->pc = 0x1437D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1437D4u;
        // 0x1437d8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1437DCu;
        goto label_1437dc;
    }
    ctx->pc = 0x1437D4u;
    {
        const bool branch_taken_0x1437d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1437D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1437D4u;
        // 0x1437d8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1437d4) {
            ctx->pc = 0x143AA0u;
            goto label_143aa0;
        }
    }
    ctx->pc = 0x1437DCu;
label_1437dc:
    // 0x1437dc: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x1437dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1437e0:
    // 0x1437e0: 0x26e40008  addiu       $a0, $s7, 0x8
    ctx->pc = 0x1437e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_1437e4:
    // 0x1437e4: 0xafa4006c  sw          $a0, 0x6C($sp)
    ctx->pc = 0x1437e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 4));
label_1437e8:
    // 0x1437e8: 0x26730300  addiu       $s3, $s3, 0x300
    ctx->pc = 0x1437e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
label_1437ec:
    // 0x1437ec: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x1437ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1437f0:
    // 0x1437f0: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x1437f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1437f4:
    // 0x1437f4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1437f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1437f8:
    // 0x1437f8: 0x26f60010  addiu       $s6, $s7, 0x10
    ctx->pc = 0x1437f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_1437fc:
    // 0x1437fc: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1437fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_143800:
    // 0x143800: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x143800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_143804:
    // 0x143804: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x143804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_143808:
    // 0x143808: 0xc065800  jal         func_196000
label_14380c:
    if (ctx->pc == 0x14380Cu) {
        ctx->pc = 0x143810u;
        goto label_143810;
    }
    ctx->pc = 0x143808u;
    SET_GPR_U32(ctx, 31, 0x143810u);
    ctx->pc = 0x196000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196000u, 0x143808u, 0x143810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143810u;
label_143810:
    // 0x143810: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x143810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_143814:
    // 0x143814: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x143814u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143818:
    // 0x143818: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x143818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_14381c:
    // 0x14381c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14381cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_143820:
    // 0x143820: 0x26500150  addiu       $s0, $s2, 0x150
    ctx->pc = 0x143820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_143824:
    // 0x143824: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x143824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_143828:
    // 0x143828: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x143828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14382c:
    // 0x14382c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x14382cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_143830:
    // 0x143830: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x143830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_143834:
    // 0x143834: 0x3063dfff  andi        $v1, $v1, 0xDFFF
    ctx->pc = 0x143834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57343);
label_143838:
    // 0x143838: 0x34622000  ori         $v0, $v1, 0x2000
    ctx->pc = 0x143838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_14383c:
    // 0x14383c: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x14383cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_143840:
    // 0x143840: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x143840u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_143844:
    // 0x143844: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x143844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_143848:
    // 0x143848: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
label_14384c:
    if (ctx->pc == 0x14384Cu) {
        ctx->pc = 0x14384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143848u;
        // 0x14384c: 0x8fa30064  lw          $v1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143850u;
        goto label_143850;
    }
    ctx->pc = 0x143848u;
    {
        const bool branch_taken_0x143848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x14384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143848u;
        // 0x14384c: 0x8fa30064  lw          $v1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143848) {
            ctx->pc = 0x14385Cu;
            goto label_14385c;
        }
    }
    ctx->pc = 0x143850u;
label_143850:
    // 0x143850: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x143850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_143854:
    // 0x143854: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
label_143858:
    if (ctx->pc == 0x143858u) {
        ctx->pc = 0x143858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143854u;
        // 0x143858: 0x8e820020  lw          $v0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14385Cu;
        goto label_14385c;
    }
    ctx->pc = 0x143854u;
    {
        const bool branch_taken_0x143854 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x143854) {
            ctx->pc = 0x143858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143854u;
            // 0x143858: 0x8e820020  lw          $v0, 0x20($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143888u;
            goto label_143888;
        }
    }
    ctx->pc = 0x14385Cu;
label_14385c:
    // 0x14385c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x14385cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_143860:
    // 0x143860: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x143860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_143864:
    // 0x143864: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x143864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_143868:
    // 0x143868: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x143868u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14386c:
    // 0x14386c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14386cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_143870:
    // 0x143870: 0x60f809  jalr        $v1
label_143874:
    if (ctx->pc == 0x143874u) {
        ctx->pc = 0x143874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143870u;
        // 0x143874: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143878u;
        goto label_143878;
    }
    ctx->pc = 0x143870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143878u);
        ctx->pc = 0x143874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143870u;
        // 0x143874: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143870u, 0x143878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143878u;
label_143878:
    // 0x143878: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x143878u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_14387c:
    // 0x14387c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x14387cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_143880:
    // 0x143880: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x143880u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_143884:
    // 0x143884: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x143884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_143888:
    // 0x143888: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
label_14388c:
    if (ctx->pc == 0x14388Cu) {
        ctx->pc = 0x14388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143888u;
        // 0x14388c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143890u;
        goto label_143890;
    }
    ctx->pc = 0x143888u;
    {
        const bool branch_taken_0x143888 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143888u;
        // 0x14388c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143888) {
            ctx->pc = 0x1438C4u;
            goto label_1438c4;
        }
    }
    ctx->pc = 0x143890u;
label_143890:
    // 0x143890: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x143890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_143894:
    // 0x143894: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x143894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_143898:
    // 0x143898: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x143898u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14389c:
    // 0x14389c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14389cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1438a0:
    // 0x1438a0: 0x60f809  jalr        $v1
label_1438a4:
    if (ctx->pc == 0x1438A4u) {
        ctx->pc = 0x1438A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438A0u;
        // 0x1438a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1438A8u;
        goto label_1438a8;
    }
    ctx->pc = 0x1438A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1438A8u);
        ctx->pc = 0x1438A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438A0u;
        // 0x1438a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1438A0u, 0x1438A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1438A8u;
label_1438a8:
    // 0x1438a8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1438a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1438ac:
    // 0x1438ac: 0x8e850020  lw          $a1, 0x20($s4)
    ctx->pc = 0x1438acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_1438b0:
    // 0x1438b0: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x1438b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_1438b4:
    // 0x1438b4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1438b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1438b8:
    // 0x1438b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1438b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1438bc:
    // 0x1438bc: 0x60f809  jalr        $v1
label_1438c0:
    if (ctx->pc == 0x1438C0u) {
        ctx->pc = 0x1438C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438BCu;
        // 0x1438c0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1438C4u;
        goto label_1438c4;
    }
    ctx->pc = 0x1438BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1438C4u);
        ctx->pc = 0x1438C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438BCu;
        // 0x1438c0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1438BCu, 0x1438C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1438C4u;
label_1438c4:
    // 0x1438c4: 0xde820020  ld          $v0, 0x20($s4)
    ctx->pc = 0x1438c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 32)));
label_1438c8:
    // 0x1438c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1438c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1438cc:
    // 0x1438cc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1438ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1438d0:
    // 0x1438d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1438d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1438d4:
    // 0x1438d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1438d8:
    if (ctx->pc == 0x1438D8u) {
        ctx->pc = 0x1438D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438D4u;
        // 0x1438d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1438DCu;
        goto label_1438dc;
    }
    ctx->pc = 0x1438D4u;
    {
        const bool branch_taken_0x1438d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1438D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438D4u;
        // 0x1438d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1438d4) {
            ctx->pc = 0x1438F0u;
            goto label_1438f0;
        }
    }
    ctx->pc = 0x1438DCu;
label_1438dc:
    // 0x1438dc: 0x96830024  lhu         $v1, 0x24($s4)
    ctx->pc = 0x1438dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 36)));
label_1438e0:
    // 0x1438e0: 0x96820026  lhu         $v0, 0x26($s4)
    ctx->pc = 0x1438e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 38)));
label_1438e4:
    // 0x1438e4: 0xa6430178  sh          $v1, 0x178($s2)
    ctx->pc = 0x1438e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 376), (uint16_t)GPR_U32(ctx, 3));
label_1438e8:
    // 0x1438e8: 0xc0654b2  jal         func_1952C8
label_1438ec:
    if (ctx->pc == 0x1438ECu) {
        ctx->pc = 0x1438ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438E8u;
        // 0x1438ec: 0xa642017a  sh          $v0, 0x17A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 378), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1438F0u;
        goto label_1438f0;
    }
    ctx->pc = 0x1438E8u;
    SET_GPR_U32(ctx, 31, 0x1438F0u);
    ctx->pc = 0x1438ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1438E8u;
    // 0x1438ec: 0xa642017a  sh          $v0, 0x17A($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 378), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1952C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1952C8u, 0x1438E8u, 0x1438F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1438F0u;
label_1438f0:
    // 0x1438f0: 0xc6810028  lwc1        $f1, 0x28($s4)
    ctx->pc = 0x1438f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1438f4:
    // 0x1438f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1438f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1438f8:
    // 0x1438f8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1438f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1438fc:
    // 0x1438fc: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_143900:
    if (ctx->pc == 0x143900u) {
        ctx->pc = 0x143900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438FCu;
        // 0x143900: 0x82c20001  lb          $v0, 0x1($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143904u;
        goto label_143904;
    }
    ctx->pc = 0x1438FCu;
    {
        const bool branch_taken_0x1438fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1438fc) {
            ctx->pc = 0x143900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1438FCu;
            // 0x143900: 0x82c20001  lb          $v0, 0x1($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14391Cu;
            goto label_14391c;
        }
    }
    ctx->pc = 0x143904u;
label_143904:
    // 0x143904: 0xc78c8168  lwc1        $f12, -0x7E98($gp)
    ctx->pc = 0x143904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_143908:
    // 0x143908: 0xc067a5e  jal         func_19E978
label_14390c:
    if (ctx->pc == 0x14390Cu) {
        ctx->pc = 0x14390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143908u;
        // 0x14390c: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x143910u;
        goto label_143910;
    }
    ctx->pc = 0x143908u;
    SET_GPR_U32(ctx, 31, 0x143910u);
    ctx->pc = 0x14390Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143908u;
    // 0x14390c: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x143908u, 0x143910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143910u;
label_143910:
    // 0x143910: 0x21023  negu        $v0, $v0
    ctx->pc = 0x143910u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_143914:
    // 0x143914: 0xae42019c  sw          $v0, 0x19C($s2)
    ctx->pc = 0x143914u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 412), GPR_U32(ctx, 2));
label_143918:
    // 0x143918: 0x82c20001  lb          $v0, 0x1($s6)
    ctx->pc = 0x143918u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
label_14391c:
    // 0x14391c: 0x265001b0  addiu       $s0, $s2, 0x1B0
    ctx->pc = 0x14391cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
label_143920:
    // 0x143920: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x143920u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_143924:
    // 0x143924: 0x82c30002  lb          $v1, 0x2($s6)
    ctx->pc = 0x143924u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
label_143928:
    // 0x143928: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x143928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_14392c:
    // 0x14392c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x14392cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_143930:
    // 0x143930: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x143930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_143934:
    // 0x143934: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x143934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_143938:
    // 0x143938: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x143938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_14393c:
    // 0x14393c: 0x704410e8  pminw       $v0, $v0, $a0
    ctx->pc = 0x14393cu;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_143940:
    // 0x143940: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x143940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_143944:
    // 0x143944: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x143944u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_143948:
    // 0x143948: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x143948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_14394c:
    // 0x14394c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x14394cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_143950:
    // 0x143950: 0x706218e8  pminw       $v1, $v1, $v0
    ctx->pc = 0x143950u;
    SET_GPR_VEC(ctx, 3, PS2_PMINW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_143954:
    // 0x143954: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x143954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_143958:
    // 0x143958: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x143958u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_14395c:
    // 0x14395c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x14395cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_143960:
    // 0x143960: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x143960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_143964:
    // 0x143964: 0x704310e8  pminw       $v0, $v0, $v1
    ctx->pc = 0x143964u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_143968:
    // 0x143968: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x143968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_14396c:
    // 0x14396c: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x14396cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_143970:
    // 0x143970: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x143970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_143974:
    // 0x143974: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x143974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_143978:
    // 0x143978: 0x706218c8  pmaxw       $v1, $v1, $v0
    ctx->pc = 0x143978u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_14397c:
    // 0x14397c: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x14397cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_143980:
    // 0x143980: 0xae630010  sw          $v1, 0x10($s3)
    ctx->pc = 0x143980u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 3));
label_143984:
    // 0x143984: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x143984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_143988:
    // 0x143988: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x143988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14398c:
    // 0x14398c: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x14398cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_143990:
    // 0x143990: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x143990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_143994:
    // 0x143994: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x143994u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_143998:
    // 0x143998: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x143998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_14399c:
    // 0x14399c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x14399cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1439a0:
    // 0x1439a0: 0x706218c8  pmaxw       $v1, $v1, $v0
    ctx->pc = 0x1439a0u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_1439a4:
    // 0x1439a4: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x1439a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_1439a8:
    // 0x1439a8: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x1439a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
label_1439ac:
    // 0x1439ac: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1439acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1439b0:
    // 0x1439b0: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x1439b0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1439b4:
    // 0x1439b4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1439b4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1439b8:
    // 0x1439b8: 0xfaa20000  sqc2        $vf2, 0x0($s5)
    ctx->pc = 0x1439b8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1439bc:
    // 0x1439bc: 0x26820030  addiu       $v0, $s4, 0x30
    ctx->pc = 0x1439bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_1439c0:
    // 0x1439c0: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x1439c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1439c4:
    // 0x1439c4: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1439c4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1439c8:
    // 0x1439c8: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1439c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1439cc:
    // 0x1439cc: 0xfaa20000  sqc2        $vf2, 0x0($s5)
    ctx->pc = 0x1439ccu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1439d0:
    // 0x1439d0: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1439d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
label_1439d4:
    // 0x1439d4: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x1439d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
label_1439d8:
    // 0x1439d8: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x1439d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1439dc:
    // 0x1439dc: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x1439dcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1439e0:
    // 0x1439e0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1439e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1439e4:
    // 0x1439e4: 0xfaa20000  sqc2        $vf2, 0x0($s5)
    ctx->pc = 0x1439e4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1439e8:
    // 0x1439e8: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x1439e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1439ec:
    // 0x1439ec: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1439ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1439f0:
    // 0x1439f0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1439f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1439f4:
    // 0x1439f4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1439f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1439f8:
    // 0x1439f8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1439f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1439fc:
    // 0x1439fc: 0xfaa10000  sqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1439fcu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_143a00:
    // 0x143a00: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x143a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_143a04:
    // 0x143a04: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x143a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_143a08:
    // 0x143a08: 0x26510150  addiu       $s1, $s2, 0x150
    ctx->pc = 0x143a08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_143a0c:
    // 0x143a0c: 0x24630068  addiu       $v1, $v1, 0x68
    ctx->pc = 0x143a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
label_143a10:
    // 0x143a10: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x143a10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_143a14:
    // 0x143a14: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x143a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_143a18:
    // 0x143a18: 0x40f809  jalr        $v0
label_143a1c:
    if (ctx->pc == 0x143A1Cu) {
        ctx->pc = 0x143A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A18u;
        // 0x143a1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143A20u;
        goto label_143a20;
    }
    ctx->pc = 0x143A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143A20u);
        ctx->pc = 0x143A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A18u;
        // 0x143a1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143A18u, 0x143A20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143A20u;
label_143a20:
    // 0x143a20: 0x264401c0  addiu       $a0, $s2, 0x1C0
    ctx->pc = 0x143a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
label_143a24:
    // 0x143a24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x143a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_143a28:
    // 0x143a28: 0xc050d58  jal         func_143560
label_143a2c:
    if (ctx->pc == 0x143A2Cu) {
        ctx->pc = 0x143A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A28u;
        // 0x143a2c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143A30u;
        goto label_143a30;
    }
    ctx->pc = 0x143A28u;
    SET_GPR_U32(ctx, 31, 0x143A30u);
    ctx->pc = 0x143A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143A28u;
    // 0x143a2c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143560u, 0x143A28u, 0x143A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A30u;
label_143a30:
    // 0x143a30: 0x1e1180  sll         $v0, $fp, 6
    ctx->pc = 0x143a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
label_143a34:
    // 0x143a34: 0x8e90000c  lw          $s0, 0xC($s4)
    ctx->pc = 0x143a34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_143a38:
    // 0x143a38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x143a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_143a3c:
    // 0x143a3c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x143a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_143a40:
    // 0x143a40: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x143a40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_143a44:
    // 0x143a44: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x143a44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_143a48:
    // 0x143a48: 0xc067260  jal         func_19C980
label_143a4c:
    if (ctx->pc == 0x143A4Cu) {
        ctx->pc = 0x143A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A48u;
        // 0x143a4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143A50u;
        goto label_143a50;
    }
    ctx->pc = 0x143A48u;
    SET_GPR_U32(ctx, 31, 0x143A50u);
    ctx->pc = 0x143A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143A48u;
    // 0x143a4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C980u, 0x143A48u, 0x143A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A50u;
label_143a50:
    // 0x143a50: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x143a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_143a54:
    // 0x143a54: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x143a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_143a58:
    // 0x143a58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x143a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_143a5c:
    // 0x143a5c: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x143a5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_143a60:
    // 0x143a60: 0x2e22821  addu        $a1, $s7, $v0
    ctx->pc = 0x143a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_143a64:
    // 0x143a64: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x143a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_143a68:
    // 0x143a68: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x143a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_143a6c:
    // 0x143a6c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x143a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_143a70:
    // 0x143a70: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x143a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_143a74:
    // 0x143a74: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x143a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_143a78:
    // 0x143a78: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x143a78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
label_143a7c:
    // 0x143a7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x143a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_143a80:
    // 0x143a80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x143a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_143a84:
    // 0x143a84: 0xc065576  jal         func_1955D8
label_143a88:
    if (ctx->pc == 0x143A88u) {
        ctx->pc = 0x143A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A84u;
        // 0x143a88: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143A8Cu;
        goto label_143a8c;
    }
    ctx->pc = 0x143A84u;
    SET_GPR_U32(ctx, 31, 0x143A8Cu);
    ctx->pc = 0x143A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143A84u;
    // 0x143a88: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1955D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1955D8u, 0x143A84u, 0x143A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A8Cu;
label_143a8c:
    // 0x143a8c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x143a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_143a90:
    // 0x143a90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x143a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_143a94:
    // 0x143a94: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x143a94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_143a98:
    // 0x143a98: 0x1440ff5b  bnez        $v0, . + 4 + (-0xA5 << 2)
label_143a9c:
    if (ctx->pc == 0x143A9Cu) {
        ctx->pc = 0x143AA0u;
        goto label_143aa0;
    }
    ctx->pc = 0x143A98u;
    {
        const bool branch_taken_0x143a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143a98) {
            ctx->pc = 0x143808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143808;
        }
    }
    ctx->pc = 0x143AA0u;
label_143aa0:
    // 0x143aa0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x143aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_143aa4:
    // 0x143aa4: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x143aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_143aa8:
    // 0x143aa8: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x143aa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_143aac:
    // 0x143aac: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x143aacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_143ab0:
    // 0x143ab0: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x143ab0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_143ab4:
    // 0x143ab4: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x143ab4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_143ab8:
    // 0x143ab8: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x143ab8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_143abc:
    // 0x143abc: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x143abcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_143ac0:
    // 0x143ac0: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x143ac0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_143ac4:
    // 0x143ac4: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x143ac4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_143ac8:
    // 0x143ac8: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x143ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_143acc:
    // 0x143acc: 0x3e00008  jr          $ra
label_143ad0:
    if (ctx->pc == 0x143AD0u) {
        ctx->pc = 0x143AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143ACCu;
        // 0x143ad0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143AD4u;
        goto label_fallthrough_0x143acc;
    }
    ctx->pc = 0x143ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143ACCu;
        // 0x143ad0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x143acc:
    ctx->pc = 0x143AD4u;
}
