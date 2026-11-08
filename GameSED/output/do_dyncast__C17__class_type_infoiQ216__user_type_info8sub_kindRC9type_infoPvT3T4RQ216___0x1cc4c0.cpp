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

// Function: do_dyncast__C17__class_type_infoiQ216__user_type_info8sub_kindRC9type_infoPvT3T4RQ216__user_type_info14dyncast_result
// Address: 0x1cc4c0 - 0x1cc900
void do_dyncast__C17__class_type_infoiQ216__user_type_info8sub_kindRC9type_infoPvT3T4RQ216__user_type_info14dyncast_result_0x1cc4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("do_dyncast__C17__class_type_infoiQ216__user_type_info8sub_kindRC9type_infoPvT3T4RQ216__user_type_info14dyncast_result_0x1cc4c0");
#endif

    switch (ctx->pc) {
        case 0x1cc4c0u: goto label_1cc4c0;
        case 0x1cc4c4u: goto label_1cc4c4;
        case 0x1cc4c8u: goto label_1cc4c8;
        case 0x1cc4ccu: goto label_1cc4cc;
        case 0x1cc4d0u: goto label_1cc4d0;
        case 0x1cc4d4u: goto label_1cc4d4;
        case 0x1cc4d8u: goto label_1cc4d8;
        case 0x1cc4dcu: goto label_1cc4dc;
        case 0x1cc4e0u: goto label_1cc4e0;
        case 0x1cc4e4u: goto label_1cc4e4;
        case 0x1cc4e8u: goto label_1cc4e8;
        case 0x1cc4ecu: goto label_1cc4ec;
        case 0x1cc4f0u: goto label_1cc4f0;
        case 0x1cc4f4u: goto label_1cc4f4;
        case 0x1cc4f8u: goto label_1cc4f8;
        case 0x1cc4fcu: goto label_1cc4fc;
        case 0x1cc500u: goto label_1cc500;
        case 0x1cc504u: goto label_1cc504;
        case 0x1cc508u: goto label_1cc508;
        case 0x1cc50cu: goto label_1cc50c;
        case 0x1cc510u: goto label_1cc510;
        case 0x1cc514u: goto label_1cc514;
        case 0x1cc518u: goto label_1cc518;
        case 0x1cc51cu: goto label_1cc51c;
        case 0x1cc520u: goto label_1cc520;
        case 0x1cc524u: goto label_1cc524;
        case 0x1cc528u: goto label_1cc528;
        case 0x1cc52cu: goto label_1cc52c;
        case 0x1cc530u: goto label_1cc530;
        case 0x1cc534u: goto label_1cc534;
        case 0x1cc538u: goto label_1cc538;
        case 0x1cc53cu: goto label_1cc53c;
        case 0x1cc540u: goto label_1cc540;
        case 0x1cc544u: goto label_1cc544;
        case 0x1cc548u: goto label_1cc548;
        case 0x1cc54cu: goto label_1cc54c;
        case 0x1cc550u: goto label_1cc550;
        case 0x1cc554u: goto label_1cc554;
        case 0x1cc558u: goto label_1cc558;
        case 0x1cc55cu: goto label_1cc55c;
        case 0x1cc560u: goto label_1cc560;
        case 0x1cc564u: goto label_1cc564;
        case 0x1cc568u: goto label_1cc568;
        case 0x1cc56cu: goto label_1cc56c;
        case 0x1cc570u: goto label_1cc570;
        case 0x1cc574u: goto label_1cc574;
        case 0x1cc578u: goto label_1cc578;
        case 0x1cc57cu: goto label_1cc57c;
        case 0x1cc580u: goto label_1cc580;
        case 0x1cc584u: goto label_1cc584;
        case 0x1cc588u: goto label_1cc588;
        case 0x1cc58cu: goto label_1cc58c;
        case 0x1cc590u: goto label_1cc590;
        case 0x1cc594u: goto label_1cc594;
        case 0x1cc598u: goto label_1cc598;
        case 0x1cc59cu: goto label_1cc59c;
        case 0x1cc5a0u: goto label_1cc5a0;
        case 0x1cc5a4u: goto label_1cc5a4;
        case 0x1cc5a8u: goto label_1cc5a8;
        case 0x1cc5acu: goto label_1cc5ac;
        case 0x1cc5b0u: goto label_1cc5b0;
        case 0x1cc5b4u: goto label_1cc5b4;
        case 0x1cc5b8u: goto label_1cc5b8;
        case 0x1cc5bcu: goto label_1cc5bc;
        case 0x1cc5c0u: goto label_1cc5c0;
        case 0x1cc5c4u: goto label_1cc5c4;
        case 0x1cc5c8u: goto label_1cc5c8;
        case 0x1cc5ccu: goto label_1cc5cc;
        case 0x1cc5d0u: goto label_1cc5d0;
        case 0x1cc5d4u: goto label_1cc5d4;
        case 0x1cc5d8u: goto label_1cc5d8;
        case 0x1cc5dcu: goto label_1cc5dc;
        case 0x1cc5e0u: goto label_1cc5e0;
        case 0x1cc5e4u: goto label_1cc5e4;
        case 0x1cc5e8u: goto label_1cc5e8;
        case 0x1cc5ecu: goto label_1cc5ec;
        case 0x1cc5f0u: goto label_1cc5f0;
        case 0x1cc5f4u: goto label_1cc5f4;
        case 0x1cc5f8u: goto label_1cc5f8;
        case 0x1cc5fcu: goto label_1cc5fc;
        case 0x1cc600u: goto label_1cc600;
        case 0x1cc604u: goto label_1cc604;
        case 0x1cc608u: goto label_1cc608;
        case 0x1cc60cu: goto label_1cc60c;
        case 0x1cc610u: goto label_1cc610;
        case 0x1cc614u: goto label_1cc614;
        case 0x1cc618u: goto label_1cc618;
        case 0x1cc61cu: goto label_1cc61c;
        case 0x1cc620u: goto label_1cc620;
        case 0x1cc624u: goto label_1cc624;
        case 0x1cc628u: goto label_1cc628;
        case 0x1cc62cu: goto label_1cc62c;
        case 0x1cc630u: goto label_1cc630;
        case 0x1cc634u: goto label_1cc634;
        case 0x1cc638u: goto label_1cc638;
        case 0x1cc63cu: goto label_1cc63c;
        case 0x1cc640u: goto label_1cc640;
        case 0x1cc644u: goto label_1cc644;
        case 0x1cc648u: goto label_1cc648;
        case 0x1cc64cu: goto label_1cc64c;
        case 0x1cc650u: goto label_1cc650;
        case 0x1cc654u: goto label_1cc654;
        case 0x1cc658u: goto label_1cc658;
        case 0x1cc65cu: goto label_1cc65c;
        case 0x1cc660u: goto label_1cc660;
        case 0x1cc664u: goto label_1cc664;
        case 0x1cc668u: goto label_1cc668;
        case 0x1cc66cu: goto label_1cc66c;
        case 0x1cc670u: goto label_1cc670;
        case 0x1cc674u: goto label_1cc674;
        case 0x1cc678u: goto label_1cc678;
        case 0x1cc67cu: goto label_1cc67c;
        case 0x1cc680u: goto label_1cc680;
        case 0x1cc684u: goto label_1cc684;
        case 0x1cc688u: goto label_1cc688;
        case 0x1cc68cu: goto label_1cc68c;
        case 0x1cc690u: goto label_1cc690;
        case 0x1cc694u: goto label_1cc694;
        case 0x1cc698u: goto label_1cc698;
        case 0x1cc69cu: goto label_1cc69c;
        case 0x1cc6a0u: goto label_1cc6a0;
        case 0x1cc6a4u: goto label_1cc6a4;
        case 0x1cc6a8u: goto label_1cc6a8;
        case 0x1cc6acu: goto label_1cc6ac;
        case 0x1cc6b0u: goto label_1cc6b0;
        case 0x1cc6b4u: goto label_1cc6b4;
        case 0x1cc6b8u: goto label_1cc6b8;
        case 0x1cc6bcu: goto label_1cc6bc;
        case 0x1cc6c0u: goto label_1cc6c0;
        case 0x1cc6c4u: goto label_1cc6c4;
        case 0x1cc6c8u: goto label_1cc6c8;
        case 0x1cc6ccu: goto label_1cc6cc;
        case 0x1cc6d0u: goto label_1cc6d0;
        case 0x1cc6d4u: goto label_1cc6d4;
        case 0x1cc6d8u: goto label_1cc6d8;
        case 0x1cc6dcu: goto label_1cc6dc;
        case 0x1cc6e0u: goto label_1cc6e0;
        case 0x1cc6e4u: goto label_1cc6e4;
        case 0x1cc6e8u: goto label_1cc6e8;
        case 0x1cc6ecu: goto label_1cc6ec;
        case 0x1cc6f0u: goto label_1cc6f0;
        case 0x1cc6f4u: goto label_1cc6f4;
        case 0x1cc6f8u: goto label_1cc6f8;
        case 0x1cc6fcu: goto label_1cc6fc;
        case 0x1cc700u: goto label_1cc700;
        case 0x1cc704u: goto label_1cc704;
        case 0x1cc708u: goto label_1cc708;
        case 0x1cc70cu: goto label_1cc70c;
        case 0x1cc710u: goto label_1cc710;
        case 0x1cc714u: goto label_1cc714;
        case 0x1cc718u: goto label_1cc718;
        case 0x1cc71cu: goto label_1cc71c;
        case 0x1cc720u: goto label_1cc720;
        case 0x1cc724u: goto label_1cc724;
        case 0x1cc728u: goto label_1cc728;
        case 0x1cc72cu: goto label_1cc72c;
        case 0x1cc730u: goto label_1cc730;
        case 0x1cc734u: goto label_1cc734;
        case 0x1cc738u: goto label_1cc738;
        case 0x1cc73cu: goto label_1cc73c;
        case 0x1cc740u: goto label_1cc740;
        case 0x1cc744u: goto label_1cc744;
        case 0x1cc748u: goto label_1cc748;
        case 0x1cc74cu: goto label_1cc74c;
        case 0x1cc750u: goto label_1cc750;
        case 0x1cc754u: goto label_1cc754;
        case 0x1cc758u: goto label_1cc758;
        case 0x1cc75cu: goto label_1cc75c;
        case 0x1cc760u: goto label_1cc760;
        case 0x1cc764u: goto label_1cc764;
        case 0x1cc768u: goto label_1cc768;
        case 0x1cc76cu: goto label_1cc76c;
        case 0x1cc770u: goto label_1cc770;
        case 0x1cc774u: goto label_1cc774;
        case 0x1cc778u: goto label_1cc778;
        case 0x1cc77cu: goto label_1cc77c;
        case 0x1cc780u: goto label_1cc780;
        case 0x1cc784u: goto label_1cc784;
        case 0x1cc788u: goto label_1cc788;
        case 0x1cc78cu: goto label_1cc78c;
        case 0x1cc790u: goto label_1cc790;
        case 0x1cc794u: goto label_1cc794;
        case 0x1cc798u: goto label_1cc798;
        case 0x1cc79cu: goto label_1cc79c;
        case 0x1cc7a0u: goto label_1cc7a0;
        case 0x1cc7a4u: goto label_1cc7a4;
        case 0x1cc7a8u: goto label_1cc7a8;
        case 0x1cc7acu: goto label_1cc7ac;
        case 0x1cc7b0u: goto label_1cc7b0;
        case 0x1cc7b4u: goto label_1cc7b4;
        case 0x1cc7b8u: goto label_1cc7b8;
        case 0x1cc7bcu: goto label_1cc7bc;
        case 0x1cc7c0u: goto label_1cc7c0;
        case 0x1cc7c4u: goto label_1cc7c4;
        case 0x1cc7c8u: goto label_1cc7c8;
        case 0x1cc7ccu: goto label_1cc7cc;
        case 0x1cc7d0u: goto label_1cc7d0;
        case 0x1cc7d4u: goto label_1cc7d4;
        case 0x1cc7d8u: goto label_1cc7d8;
        case 0x1cc7dcu: goto label_1cc7dc;
        case 0x1cc7e0u: goto label_1cc7e0;
        case 0x1cc7e4u: goto label_1cc7e4;
        case 0x1cc7e8u: goto label_1cc7e8;
        case 0x1cc7ecu: goto label_1cc7ec;
        case 0x1cc7f0u: goto label_1cc7f0;
        case 0x1cc7f4u: goto label_1cc7f4;
        case 0x1cc7f8u: goto label_1cc7f8;
        case 0x1cc7fcu: goto label_1cc7fc;
        case 0x1cc800u: goto label_1cc800;
        case 0x1cc804u: goto label_1cc804;
        case 0x1cc808u: goto label_1cc808;
        case 0x1cc80cu: goto label_1cc80c;
        case 0x1cc810u: goto label_1cc810;
        case 0x1cc814u: goto label_1cc814;
        case 0x1cc818u: goto label_1cc818;
        case 0x1cc81cu: goto label_1cc81c;
        case 0x1cc820u: goto label_1cc820;
        case 0x1cc824u: goto label_1cc824;
        case 0x1cc828u: goto label_1cc828;
        case 0x1cc82cu: goto label_1cc82c;
        case 0x1cc830u: goto label_1cc830;
        case 0x1cc834u: goto label_1cc834;
        case 0x1cc838u: goto label_1cc838;
        case 0x1cc83cu: goto label_1cc83c;
        case 0x1cc840u: goto label_1cc840;
        case 0x1cc844u: goto label_1cc844;
        case 0x1cc848u: goto label_1cc848;
        case 0x1cc84cu: goto label_1cc84c;
        case 0x1cc850u: goto label_1cc850;
        case 0x1cc854u: goto label_1cc854;
        case 0x1cc858u: goto label_1cc858;
        case 0x1cc85cu: goto label_1cc85c;
        case 0x1cc860u: goto label_1cc860;
        case 0x1cc864u: goto label_1cc864;
        case 0x1cc868u: goto label_1cc868;
        case 0x1cc86cu: goto label_1cc86c;
        case 0x1cc870u: goto label_1cc870;
        case 0x1cc874u: goto label_1cc874;
        case 0x1cc878u: goto label_1cc878;
        case 0x1cc87cu: goto label_1cc87c;
        case 0x1cc880u: goto label_1cc880;
        case 0x1cc884u: goto label_1cc884;
        case 0x1cc888u: goto label_1cc888;
        case 0x1cc88cu: goto label_1cc88c;
        case 0x1cc890u: goto label_1cc890;
        case 0x1cc894u: goto label_1cc894;
        case 0x1cc898u: goto label_1cc898;
        case 0x1cc89cu: goto label_1cc89c;
        case 0x1cc8a0u: goto label_1cc8a0;
        case 0x1cc8a4u: goto label_1cc8a4;
        case 0x1cc8a8u: goto label_1cc8a8;
        case 0x1cc8acu: goto label_1cc8ac;
        case 0x1cc8b0u: goto label_1cc8b0;
        case 0x1cc8b4u: goto label_1cc8b4;
        case 0x1cc8b8u: goto label_1cc8b8;
        case 0x1cc8bcu: goto label_1cc8bc;
        case 0x1cc8c0u: goto label_1cc8c0;
        case 0x1cc8c4u: goto label_1cc8c4;
        case 0x1cc8c8u: goto label_1cc8c8;
        case 0x1cc8ccu: goto label_1cc8cc;
        case 0x1cc8d0u: goto label_1cc8d0;
        case 0x1cc8d4u: goto label_1cc8d4;
        case 0x1cc8d8u: goto label_1cc8d8;
        case 0x1cc8dcu: goto label_1cc8dc;
        case 0x1cc8e0u: goto label_1cc8e0;
        case 0x1cc8e4u: goto label_1cc8e4;
        case 0x1cc8e8u: goto label_1cc8e8;
        case 0x1cc8ecu: goto label_1cc8ec;
        case 0x1cc8f0u: goto label_1cc8f0;
        case 0x1cc8f4u: goto label_1cc8f4;
        case 0x1cc8f8u: goto label_1cc8f8;
        case 0x1cc8fcu: goto label_1cc8fc;
        default: break;
    }

    ctx->pc = 0x1cc4c0u;

label_1cc4c0:
    // 0x1cc4c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1cc4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1cc4c4:
    // 0x1cc4c4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1cc4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_1cc4c8:
    // 0x1cc4c8: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x1cc4c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1cc4cc:
    // 0x1cc4cc: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x1cc4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
label_1cc4d0:
    // 0x1cc4d0: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1cc4d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1cc4d4:
    // 0x1cc4d4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1cc4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1cc4d8:
    // 0x1cc4d8: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x1cc4d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1cc4dc:
    // 0x1cc4dc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1cc4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1cc4e0:
    // 0x1cc4e0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1cc4e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cc4e4:
    // 0x1cc4e4: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x1cc4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_1cc4e8:
    // 0x1cc4e8: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1cc4e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1cc4ec:
    // 0x1cc4ec: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1cc4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_1cc4f0:
    // 0x1cc4f0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1cc4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_1cc4f4:
    // 0x1cc4f4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1cc4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_1cc4f8:
    // 0x1cc4f8: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1cc4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_1cc4fc:
    // 0x1cc4fc: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1cc4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_1cc500:
    // 0x1cc500: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x1cc500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
label_1cc504:
    // 0x1cc504: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x1cc504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
label_1cc508:
    // 0x1cc508: 0x17d60009  bne         $fp, $s6, . + 4 + (0x9 << 2)
label_1cc50c:
    if (ctx->pc == 0x1CC50Cu) {
        ctx->pc = 0x1CC50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC508u;
        // 0x1cc50c: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC510u;
        goto label_1cc510;
    }
    ctx->pc = 0x1CC508u;
    {
        const bool branch_taken_0x1cc508 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 22));
        ctx->pc = 0x1CC50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC508u;
        // 0x1cc50c: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc508) {
            ctx->pc = 0x1CC530u;
            goto label_1cc530;
        }
    }
    ctx->pc = 0x1CC510u;
label_1cc510:
    // 0x1cc510: 0xc072f28  jal         func_1CBCA0
label_1cc514:
    if (ctx->pc == 0x1CC514u) {
        ctx->pc = 0x1CC514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC510u;
        // 0x1cc514: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC518u;
        goto label_1cc518;
    }
    ctx->pc = 0x1CC510u;
    SET_GPR_U32(ctx, 31, 0x1CC518u);
    ctx->pc = 0x1CC514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC510u;
    // 0x1cc514: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CC510u, 0x1CC518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC518u;
label_1cc518:
    // 0x1cc518: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1cc51c:
    if (ctx->pc == 0x1CC51Cu) {
        ctx->pc = 0x1CC51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC518u;
        // 0x1cc51c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC520u;
        goto label_1cc520;
    }
    ctx->pc = 0x1CC518u;
    {
        const bool branch_taken_0x1cc518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC518u;
        // 0x1cc51c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc518) {
            ctx->pc = 0x1CC530u;
            goto label_1cc530;
        }
    }
    ctx->pc = 0x1CC520u;
label_1cc520:
    // 0x1cc520: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1cc520u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1cc524:
    // 0x1cc524: 0x100000ea  b           . + 4 + (0xEA << 2)
label_1cc528:
    if (ctx->pc == 0x1CC528u) {
        ctx->pc = 0x1CC528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC524u;
        // 0x1cc528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC52Cu;
        goto label_1cc52c;
    }
    ctx->pc = 0x1CC524u;
    {
        const bool branch_taken_0x1cc524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC524u;
        // 0x1cc528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc524) {
            ctx->pc = 0x1CC8D0u;
            goto label_1cc8d0;
        }
    }
    ctx->pc = 0x1CC52Cu;
label_1cc52c:
    // 0x1cc52c: 0x0  nop
    ctx->pc = 0x1cc52cu;
    // NOP
label_1cc530:
    // 0x1cc530: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1cc530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1cc534:
    // 0x1cc534: 0xc072f28  jal         func_1CBCA0
label_1cc538:
    if (ctx->pc == 0x1CC538u) {
        ctx->pc = 0x1CC538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC534u;
        // 0x1cc538: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC53Cu;
        goto label_1cc53c;
    }
    ctx->pc = 0x1CC534u;
    SET_GPR_U32(ctx, 31, 0x1CC53Cu);
    ctx->pc = 0x1CC538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC534u;
    // 0x1cc538: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CC534u, 0x1CC53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC53Cu;
label_1cc53c:
    // 0x1cc53c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1cc540:
    if (ctx->pc == 0x1CC540u) {
        ctx->pc = 0x1CC540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC53Cu;
        // 0x1cc540: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC544u;
        goto label_1cc544;
    }
    ctx->pc = 0x1CC53Cu;
    {
        const bool branch_taken_0x1cc53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC53Cu;
        // 0x1cc540: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc53c) {
            ctx->pc = 0x1CC598u;
            goto label_1cc598;
        }
    }
    ctx->pc = 0x1CC544u;
label_1cc544:
    // 0x1cc544: 0xae5e0000  sw          $fp, 0x0($s2)
    ctx->pc = 0x1cc544u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 30));
label_1cc548:
    // 0x1cc548: 0x6800009  bltz        $s4, . + 4 + (0x9 << 2)
label_1cc54c:
    if (ctx->pc == 0x1CC54Cu) {
        ctx->pc = 0x1CC54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC548u;
        // 0x1cc54c: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC550u;
        goto label_1cc550;
    }
    ctx->pc = 0x1CC548u;
    {
        const bool branch_taken_0x1cc548 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x1CC54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC548u;
        // 0x1cc54c: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc548) {
            ctx->pc = 0x1CC570u;
            goto label_1cc570;
        }
    }
    ctx->pc = 0x1CC550u;
label_1cc550:
    // 0x1cc550: 0x2de1023  subu        $v0, $s6, $fp
    ctx->pc = 0x1cc550u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
label_1cc554:
    // 0x1cc554: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cc554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc558:
    // 0x1cc558: 0x541026  xor         $v0, $v0, $s4
    ctx->pc = 0x1cc558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 20));
label_1cc55c:
    // 0x1cc55c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1cc55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cc560:
    // 0x1cc560: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1cc560u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_1cc564:
    // 0x1cc564: 0x1000ffef  b           . + 4 + (-0x11 << 2)
label_1cc568:
    if (ctx->pc == 0x1CC568u) {
        ctx->pc = 0x1CC568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC564u;
        // 0x1cc568: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC56Cu;
        goto label_1cc56c;
    }
    ctx->pc = 0x1CC564u;
    {
        const bool branch_taken_0x1cc564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC564u;
        // 0x1cc568: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc564) {
            ctx->pc = 0x1CC524u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc524;
        }
    }
    ctx->pc = 0x1CC56Cu;
label_1cc56c:
    // 0x1cc56c: 0x0  nop
    ctx->pc = 0x1cc56cu;
    // NOP
label_1cc570:
    // 0x1cc570: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1cc570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1cc574:
    // 0x1cc574: 0x568200d6  bnel        $s4, $v0, . + 4 + (0xD6 << 2)
label_1cc578:
    if (ctx->pc == 0x1CC578u) {
        ctx->pc = 0x1CC578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC574u;
        // 0x1cc578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC57Cu;
        goto label_1cc57c;
    }
    ctx->pc = 0x1CC574u;
    {
        const bool branch_taken_0x1cc574 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cc574) {
            ctx->pc = 0x1CC578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC574u;
            // 0x1cc578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC8D0u;
            goto label_1cc8d0;
        }
    }
    ctx->pc = 0x1CC57Cu;
label_1cc57c:
    // 0x1cc57c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cc57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc580:
    // 0x1cc580: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_1cc584:
    if (ctx->pc == 0x1CC584u) {
        ctx->pc = 0x1CC584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC580u;
        // 0x1cc584: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC588u;
        goto label_1cc588;
    }
    ctx->pc = 0x1CC580u;
    {
        const bool branch_taken_0x1cc580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC580u;
        // 0x1cc584: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc580) {
            ctx->pc = 0x1CC524u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc524;
        }
    }
    ctx->pc = 0x1CC588u;
label_1cc588:
    // 0x1cc588: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1cc588u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1cc58c:
    // 0x1cc58c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1cc58cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_1cc590:
    // 0x1cc590: 0x100000cf  b           . + 4 + (0xCF << 2)
label_1cc594:
    if (ctx->pc == 0x1CC594u) {
        ctx->pc = 0x1CC594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC590u;
        // 0x1cc594: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC598u;
        goto label_1cc598;
    }
    ctx->pc = 0x1CC590u;
    {
        const bool branch_taken_0x1cc590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC590u;
        // 0x1cc594: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc590) {
            ctx->pc = 0x1CC8D0u;
            goto label_1cc8d0;
        }
    }
    ctx->pc = 0x1CC598u;
label_1cc598:
    // 0x1cc598: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1cc598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1cc59c:
    // 0x1cc59c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cc59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cc5a0:
    // 0x1cc5a0: 0x8c95000c  lw          $s5, 0xC($a0)
    ctx->pc = 0x1cc5a0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1cc5a4:
    // 0x1cc5a4: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1cc5a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_1cc5a8:
    // 0x1cc5a8: 0x12a200c8  beq         $s5, $v0, . + 4 + (0xC8 << 2)
label_1cc5ac:
    if (ctx->pc == 0x1CC5ACu) {
        ctx->pc = 0x1CC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC5A8u;
        // 0x1cc5ac: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC5B0u;
        goto label_1cc5b0;
    }
    ctx->pc = 0x1CC5A8u;
    {
        const bool branch_taken_0x1cc5a8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC5A8u;
        // 0x1cc5ac: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc5a8) {
            ctx->pc = 0x1CC8CCu;
            goto label_1cc8cc;
        }
    }
    ctx->pc = 0x1CC5B0u;
label_1cc5b0:
    // 0x1cc5b0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1cc5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1cc5b4:
    // 0x1cc5b4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1cc5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1cc5b8:
    // 0x1cc5b8: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1cc5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_1cc5bc:
    // 0x1cc5bc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1cc5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1cc5c0:
    // 0x1cc5c0: 0x1560c0  sll         $t4, $s5, 3
    ctx->pc = 0x1cc5c0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_1cc5c4:
    // 0x1cc5c4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1cc5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1cc5c8:
    // 0x1cc5c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc5c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc5cc:
    // 0x1cc5cc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1cc5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1cc5d0:
    // 0x1cc5d0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1cc5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1cc5d4:
    // 0x1cc5d4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1cc5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1cc5d8:
    // 0x1cc5d8: 0x1841821  addu        $v1, $t4, $a0
    ctx->pc = 0x1cc5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_1cc5dc:
    // 0x1cc5dc: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1cc5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_1cc5e0:
    // 0x1cc5e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cc5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cc5e4:
    // 0x1cc5e4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cc5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cc5e8:
    // 0x1cc5e8: 0x21742  srl         $v0, $v0, 29
    ctx->pc = 0x1cc5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 29));
label_1cc5ec:
    // 0x1cc5ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cc5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1cc5f0:
    // 0x1cc5f0: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
label_1cc5f4:
    if (ctx->pc == 0x1CC5F4u) {
        ctx->pc = 0x1CC5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC5F0u;
        // 0x1cc5f4: 0x318c3  sra         $v1, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC5F8u;
        goto label_1cc5f8;
    }
    ctx->pc = 0x1CC5F0u;
    {
        const bool branch_taken_0x1cc5f0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC5F0u;
        // 0x1cc5f4: 0x318c3  sra         $v1, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc5f0) {
            ctx->pc = 0x1CC608u;
            goto label_1cc608;
        }
    }
    ctx->pc = 0x1CC5F8u;
label_1cc5f8:
    // 0x1cc5f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1cc5fc:
    if (ctx->pc == 0x1CC5FCu) {
        ctx->pc = 0x1CC5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC5F8u;
        // 0x1cc5fc: 0x3c34021  addu        $t0, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC600u;
        goto label_1cc600;
    }
    ctx->pc = 0x1CC5F8u;
    {
        const bool branch_taken_0x1cc5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC5F8u;
        // 0x1cc5fc: 0x3c34021  addu        $t0, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc5f8) {
            ctx->pc = 0x1CC608u;
            goto label_1cc608;
        }
    }
    ctx->pc = 0x1CC600u;
label_1cc600:
    // 0x1cc600: 0x3c31021  addu        $v0, $fp, $v1
    ctx->pc = 0x1cc600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_1cc604:
    // 0x1cc604: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1cc604u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cc608:
    // 0x1cc608: 0x1846021  addu        $t4, $t4, $a0
    ctx->pc = 0x1cc608u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_1cc60c:
    // 0x1cc60c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1cc60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_1cc610:
    // 0x1cc610: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x1cc610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
label_1cc614:
    // 0x1cc614: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x1cc614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1cc618:
    // 0x1cc618: 0x31742  srl         $v0, $v1, 29
    ctx->pc = 0x1cc618u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 29));
label_1cc61c:
    // 0x1cc61c: 0x31f82  srl         $v1, $v1, 30
    ctx->pc = 0x1cc61cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 30));
label_1cc620:
    // 0x1cc620: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cc620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1cc624:
    // 0x1cc624: 0x82300b  movn        $a2, $a0, $v0
    ctx->pc = 0x1cc624u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
label_1cc628:
    // 0x1cc628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cc628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc62c:
    // 0x1cc62c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_1cc630:
    if (ctx->pc == 0x1CC630u) {
        ctx->pc = 0x1CC630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC62Cu;
        // 0x1cc630: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC634u;
        goto label_1cc634;
    }
    ctx->pc = 0x1CC62Cu;
    {
        const bool branch_taken_0x1cc62c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC62Cu;
        // 0x1cc630: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc62c) {
            ctx->pc = 0x1CC638u;
            goto label_1cc638;
        }
    }
    ctx->pc = 0x1CC634u;
label_1cc634:
    // 0x1cc634: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1cc634u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_1cc638:
    // 0x1cc638: 0x8d8c0000  lw          $t4, 0x0($t4)
    ctx->pc = 0x1cc638u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1cc63c:
    // 0x1cc63c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1cc63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cc640:
    // 0x1cc640: 0x7fad0020  sq          $t5, 0x20($sp)
    ctx->pc = 0x1cc640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 13));
label_1cc644:
    // 0x1cc644: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1cc644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1cc648:
    // 0x1cc648: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x1cc648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
label_1cc64c:
    // 0x1cc64c: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x1cc64cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cc650:
    // 0x1cc650: 0x8fa90018  lw          $t1, 0x18($sp)
    ctx->pc = 0x1cc650u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1cc654:
    // 0x1cc654: 0x3a0582d  daddu       $t3, $sp, $zero
    ctx->pc = 0x1cc654u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cc658:
    // 0x1cc658: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x1cc658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_1cc65c:
    // 0x1cc65c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1cc65cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cc660:
    // 0x1cc660: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cc660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cc664:
    // 0x1cc664: 0x40f809  jalr        $v0
label_1cc668:
    if (ctx->pc == 0x1CC668u) {
        ctx->pc = 0x1CC668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC664u;
        // 0x1cc668: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC66Cu;
        goto label_1cc66c;
    }
    ctx->pc = 0x1CC664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC66Cu);
        ctx->pc = 0x1CC668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC664u;
        // 0x1cc668: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC664u, 0x1CC66Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC66Cu;
label_1cc66c:
    // 0x1cc66c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1cc66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1cc670:
    // 0x1cc670: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1cc670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1cc674:
    // 0x1cc674: 0x8fb3000c  lw          $s3, 0xC($sp)
    ctx->pc = 0x1cc674u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1cc678:
    // 0x1cc678: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1cc678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1cc67c:
    // 0x1cc67c: 0x7bad0020  lq          $t5, 0x20($sp)
    ctx->pc = 0x1cc67cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc680:
    // 0x1cc680: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1cc680u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_1cc684:
    // 0x1cc684: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1cc684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cc688:
    // 0x1cc688: 0x12630004  beq         $s3, $v1, . + 4 + (0x4 << 2)
label_1cc68c:
    if (ctx->pc == 0x1CC68Cu) {
        ctx->pc = 0x1CC68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC688u;
        // 0x1cc68c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC690u;
        goto label_1cc690;
    }
    ctx->pc = 0x1CC688u;
    {
        const bool branch_taken_0x1cc688 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CC68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC688u;
        // 0x1cc68c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc688) {
            ctx->pc = 0x1CC69Cu;
            goto label_1cc69c;
        }
    }
    ctx->pc = 0x1CC690u;
label_1cc690:
    // 0x1cc690: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cc690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cc694:
    // 0x1cc694: 0x16630008  bne         $s3, $v1, . + 4 + (0x8 << 2)
label_1cc698:
    if (ctx->pc == 0x1CC698u) {
        ctx->pc = 0x1CC69Cu;
        goto label_1cc69c;
    }
    ctx->pc = 0x1CC694u;
    {
        const bool branch_taken_0x1cc694 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cc694) {
            ctx->pc = 0x1CC6B8u;
            goto label_1cc6b8;
        }
    }
    ctx->pc = 0x1CC69Cu;
label_1cc69c:
    // 0x1cc69c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1cc69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1cc6a0:
    // 0x1cc6a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1cc6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc6a4:
    // 0x1cc6a4: 0xae53000c  sw          $s3, 0xC($s2)
    ctx->pc = 0x1cc6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
label_1cc6a8:
    // 0x1cc6a8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1cc6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1cc6ac:
    // 0x1cc6ac: 0x10000088  b           . + 4 + (0x88 << 2)
label_1cc6b0:
    if (ctx->pc == 0x1CC6B0u) {
        ctx->pc = 0x1CC6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6ACu;
        // 0x1cc6b0: 0xae440004  sw          $a0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC6B4u;
        goto label_1cc6b4;
    }
    ctx->pc = 0x1CC6ACu;
    {
        const bool branch_taken_0x1cc6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6ACu;
        // 0x1cc6b0: 0xae440004  sw          $a0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6ac) {
            ctx->pc = 0x1CC8D0u;
            goto label_1cc8d0;
        }
    }
    ctx->pc = 0x1CC6B4u;
label_1cc6b4:
    // 0x1cc6b4: 0x0  nop
    ctx->pc = 0x1cc6b4u;
    // NOP
label_1cc6b8:
    // 0x1cc6b8: 0x15a00009  bnez        $t5, . + 4 + (0x9 << 2)
label_1cc6bc:
    if (ctx->pc == 0x1CC6BCu) {
        ctx->pc = 0x1CC6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6B8u;
        // 0x1cc6bc: 0x8e470000  lw          $a3, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC6C0u;
        goto label_1cc6c0;
    }
    ctx->pc = 0x1CC6B8u;
    {
        const bool branch_taken_0x1cc6b8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6B8u;
        // 0x1cc6bc: 0x8e470000  lw          $a3, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6b8) {
            ctx->pc = 0x1CC6E0u;
            goto label_1cc6e0;
        }
    }
    ctx->pc = 0x1CC6C0u;
label_1cc6c0:
    // 0x1cc6c0: 0x14e0000a  bnez        $a3, . + 4 + (0xA << 2)
label_1cc6c4:
    if (ctx->pc == 0x1CC6C4u) {
        ctx->pc = 0x1CC6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6C0u;
        // 0x1cc6c4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC6C8u;
        goto label_1cc6c8;
    }
    ctx->pc = 0x1CC6C0u;
    {
        const bool branch_taken_0x1cc6c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6C0u;
        // 0x1cc6c4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6c0) {
            ctx->pc = 0x1CC6ECu;
            goto label_1cc6ec;
        }
    }
    ctx->pc = 0x1CC6C8u;
label_1cc6c8:
    // 0x1cc6c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1cc6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc6cc:
    // 0x1cc6cc: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1cc6ccu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cc6d0:
    // 0x1cc6d0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1cc6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1cc6d4:
    // 0x1cc6d4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1cc6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1cc6d8:
    // 0x1cc6d8: 0x10000075  b           . + 4 + (0x75 << 2)
label_1cc6dc:
    if (ctx->pc == 0x1CC6DCu) {
        ctx->pc = 0x1CC6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6D8u;
        // 0x1cc6dc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC6E0u;
        goto label_1cc6e0;
    }
    ctx->pc = 0x1CC6D8u;
    {
        const bool branch_taken_0x1cc6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6D8u;
        // 0x1cc6dc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6d8) {
            ctx->pc = 0x1CC8B0u;
            goto label_1cc8b0;
        }
    }
    ctx->pc = 0x1CC6E0u;
label_1cc6e0:
    // 0x1cc6e0: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
label_1cc6e4:
    if (ctx->pc == 0x1CC6E4u) {
        ctx->pc = 0x1CC6E8u;
        goto label_1cc6e8;
    }
    ctx->pc = 0x1CC6E0u;
    {
        const bool branch_taken_0x1cc6e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc6e0) {
            ctx->pc = 0x1CC710u;
            goto label_1cc710;
        }
    }
    ctx->pc = 0x1CC6E8u;
label_1cc6e8:
    // 0x1cc6e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cc6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc6ec:
    // 0x1cc6ec: 0x14e20006  bne         $a3, $v0, . + 4 + (0x6 << 2)
label_1cc6f0:
    if (ctx->pc == 0x1CC6F0u) {
        ctx->pc = 0x1CC6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6ECu;
        // 0x1cc6f0: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC6F4u;
        goto label_1cc6f4;
    }
    ctx->pc = 0x1CC6ECu;
    {
        const bool branch_taken_0x1cc6ec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CC6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6ECu;
        // 0x1cc6f0: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6ec) {
            ctx->pc = 0x1CC708u;
            goto label_1cc708;
        }
    }
    ctx->pc = 0x1CC6F4u;
label_1cc6f4:
    // 0x1cc6f4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1cc6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1cc6f8:
    // 0x1cc6f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cc6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1cc6fc:
    // 0x1cc6fc: 0x1000006c  b           . + 4 + (0x6C << 2)
label_1cc700:
    if (ctx->pc == 0x1CC700u) {
        ctx->pc = 0x1CC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6FCu;
        // 0x1cc700: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC704u;
        goto label_1cc704;
    }
    ctx->pc = 0x1CC6FCu;
    {
        const bool branch_taken_0x1cc6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6FCu;
        // 0x1cc700: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6fc) {
            ctx->pc = 0x1CC8B0u;
            goto label_1cc8b0;
        }
    }
    ctx->pc = 0x1CC704u;
label_1cc704:
    // 0x1cc704: 0x0  nop
    ctx->pc = 0x1cc704u;
    // NOP
label_1cc708:
    // 0x1cc708: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_1cc70c:
    if (ctx->pc == 0x1CC70Cu) {
        ctx->pc = 0x1CC710u;
        goto label_1cc710;
    }
    ctx->pc = 0x1CC708u;
    {
        const bool branch_taken_0x1cc708 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc708) {
            ctx->pc = 0x1CC718u;
            goto label_1cc718;
        }
    }
    ctx->pc = 0x1CC710u;
label_1cc710:
    // 0x1cc710: 0x11a00003  beqz        $t5, . + 4 + (0x3 << 2)
label_1cc714:
    if (ctx->pc == 0x1CC714u) {
        ctx->pc = 0x1CC714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC710u;
        // 0x1cc714: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC718u;
        goto label_1cc718;
    }
    ctx->pc = 0x1CC710u;
    {
        const bool branch_taken_0x1cc710 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC710u;
        // 0x1cc714: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc710) {
            ctx->pc = 0x1CC720u;
            goto label_1cc720;
        }
    }
    ctx->pc = 0x1CC718u;
label_1cc718:
    // 0x1cc718: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1cc71c:
    if (ctx->pc == 0x1CC71Cu) {
        ctx->pc = 0x1CC71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC718u;
        // 0x1cc71c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC720u;
        goto label_1cc720;
    }
    ctx->pc = 0x1CC718u;
    {
        const bool branch_taken_0x1cc718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc718) {
            ctx->pc = 0x1CC71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC718u;
            // 0x1cc71c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC734u;
            goto label_1cc734;
        }
    }
    ctx->pc = 0x1CC720u;
label_1cc720:
    // 0x1cc720: 0x50a00064  beql        $a1, $zero, . + 4 + (0x64 << 2)
label_1cc724:
    if (ctx->pc == 0x1CC724u) {
        ctx->pc = 0x1CC724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC720u;
        // 0x1cc724: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC728u;
        goto label_1cc728;
    }
    ctx->pc = 0x1CC720u;
    {
        const bool branch_taken_0x1cc720 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc720) {
            ctx->pc = 0x1CC724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC720u;
            // 0x1cc724: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC8B4u;
            goto label_1cc8b4;
        }
    }
    ctx->pc = 0x1CC728u;
label_1cc728:
    // 0x1cc728: 0x50e00062  beql        $a3, $zero, . + 4 + (0x62 << 2)
label_1cc72c:
    if (ctx->pc == 0x1CC72Cu) {
        ctx->pc = 0x1CC72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC728u;
        // 0x1cc72c: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC730u;
        goto label_1cc730;
    }
    ctx->pc = 0x1CC728u;
    {
        const bool branch_taken_0x1cc728 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc728) {
            ctx->pc = 0x1CC72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC728u;
            // 0x1cc72c: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC8B4u;
            goto label_1cc8b4;
        }
    }
    ctx->pc = 0x1CC730u;
label_1cc730:
    // 0x1cc730: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1cc730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1cc734:
    // 0x1cc734: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x1cc734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cc738:
    // 0x1cc738: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x1cc738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
label_1cc73c:
    // 0x1cc73c: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1cc73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_1cc740:
    // 0x1cc740: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1cc744:
    if (ctx->pc == 0x1CC744u) {
        ctx->pc = 0x1CC744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC740u;
        // 0x1cc744: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC748u;
        goto label_1cc748;
    }
    ctx->pc = 0x1CC740u;
    {
        const bool branch_taken_0x1cc740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC740u;
        // 0x1cc744: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc740) {
            ctx->pc = 0x1CC760u;
            goto label_1cc760;
        }
    }
    ctx->pc = 0x1CC748u;
label_1cc748:
    // 0x1cc748: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cc748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc74c:
    // 0x1cc74c: 0x1620003e  bnez        $s1, . + 4 + (0x3E << 2)
label_1cc750:
    if (ctx->pc == 0x1CC750u) {
        ctx->pc = 0x1CC750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC74Cu;
        // 0x1cc750: 0x90800a  movz        $s0, $a0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC754u;
        goto label_1cc754;
    }
    ctx->pc = 0x1CC74Cu;
    {
        const bool branch_taken_0x1cc74c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC74Cu;
        // 0x1cc750: 0x90800a  movz        $s0, $a0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc74c) {
            ctx->pc = 0x1CC848u;
            goto label_1cc848;
        }
    }
    ctx->pc = 0x1CC754u;
label_1cc754:
    // 0x1cc754: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1cc758:
    if (ctx->pc == 0x1CC758u) {
        ctx->pc = 0x1CC758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC754u;
        // 0x1cc758: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC75Cu;
        goto label_1cc75c;
    }
    ctx->pc = 0x1CC754u;
    {
        const bool branch_taken_0x1cc754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC754u;
        // 0x1cc758: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc754) {
            ctx->pc = 0x1CC848u;
            goto label_1cc848;
        }
    }
    ctx->pc = 0x1CC75Cu;
label_1cc75c:
    // 0x1cc75c: 0x0  nop
    ctx->pc = 0x1cc75cu;
    // NOP
label_1cc760:
    // 0x1cc760: 0x1e00001b  bgtz        $s0, . + 4 + (0x1B << 2)
label_1cc764:
    if (ctx->pc == 0x1CC764u) {
        ctx->pc = 0x1CC764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC760u;
        // 0x1cc764: 0x32220005  andi        $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC768u;
        goto label_1cc768;
    }
    ctx->pc = 0x1CC760u;
    {
        const bool branch_taken_0x1cc760 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1CC764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC760u;
        // 0x1cc764: 0x32220005  andi        $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc760) {
            ctx->pc = 0x1CC7D0u;
            goto label_1cc7d0;
        }
    }
    ctx->pc = 0x1CC768u;
label_1cc768:
    // 0x1cc768: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1cc768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_1cc76c:
    // 0x1cc76c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1cc770:
    if (ctx->pc == 0x1CC770u) {
        ctx->pc = 0x1CC770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC76Cu;
        // 0x1cc770: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC774u;
        goto label_1cc774;
    }
    ctx->pc = 0x1CC76Cu;
    {
        const bool branch_taken_0x1cc76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC76Cu;
        // 0x1cc770: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc76c) {
            ctx->pc = 0x1CC7D0u;
            goto label_1cc7d0;
        }
    }
    ctx->pc = 0x1CC774u;
label_1cc774:
    // 0x1cc774: 0x6800006  bltz        $s4, . + 4 + (0x6 << 2)
label_1cc778:
    if (ctx->pc == 0x1CC778u) {
        ctx->pc = 0x1CC778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC774u;
        // 0x1cc778: 0x2c71023  subu        $v0, $s6, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC77Cu;
        goto label_1cc77c;
    }
    ctx->pc = 0x1CC774u;
    {
        const bool branch_taken_0x1cc774 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x1CC778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC774u;
        // 0x1cc778: 0x2c71023  subu        $v0, $s6, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc774) {
            ctx->pc = 0x1CC790u;
            goto label_1cc790;
        }
    }
    ctx->pc = 0x1CC77Cu;
label_1cc77c:
    // 0x1cc77c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1cc77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cc780:
    // 0x1cc780: 0x541026  xor         $v0, $v0, $s4
    ctx->pc = 0x1cc780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 20));
label_1cc784:
    // 0x1cc784: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cc784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc788:
    // 0x1cc788: 0x10000010  b           . + 4 + (0x10 << 2)
label_1cc78c:
    if (ctx->pc == 0x1CC78Cu) {
        ctx->pc = 0x1CC78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC788u;
        // 0x1cc78c: 0x82180b  movn        $v1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC790u;
        goto label_1cc790;
    }
    ctx->pc = 0x1CC788u;
    {
        const bool branch_taken_0x1cc788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC788u;
        // 0x1cc78c: 0x82180b  movn        $v1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc788) {
            ctx->pc = 0x1CC7CCu;
            goto label_1cc7cc;
        }
    }
    ctx->pc = 0x1CC790u;
label_1cc790:
    // 0x1cc790: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1cc790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1cc794:
    // 0x1cc794: 0x1282000d  beq         $s4, $v0, . + 4 + (0xD << 2)
label_1cc798:
    if (ctx->pc == 0x1CC798u) {
        ctx->pc = 0x1CC798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC794u;
        // 0x1cc798: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC79Cu;
        goto label_1cc79c;
    }
    ctx->pc = 0x1CC794u;
    {
        const bool branch_taken_0x1cc794 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC794u;
        // 0x1cc798: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc794) {
            ctx->pc = 0x1CC7CCu;
            goto label_1cc7cc;
        }
    }
    ctx->pc = 0x1CC79Cu;
label_1cc79c:
    // 0x1cc79c: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x1cc79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_1cc7a0:
    // 0x1cc7a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1cc7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cc7a4:
    // 0x1cc7a4: 0x7fad0020  sq          $t5, 0x20($sp)
    ctx->pc = 0x1cc7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 13));
label_1cc7a8:
    // 0x1cc7a8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1cc7a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cc7ac:
    // 0x1cc7ac: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1cc7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1cc7b0:
    // 0x1cc7b0: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x1cc7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1cc7b4:
    // 0x1cc7b4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1cc7b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cc7b8:
    // 0x1cc7b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cc7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cc7bc:
    // 0x1cc7bc: 0x40f809  jalr        $v0
label_1cc7c0:
    if (ctx->pc == 0x1CC7C0u) {
        ctx->pc = 0x1CC7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7BCu;
        // 0x1cc7c0: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC7C4u;
        goto label_1cc7c4;
    }
    ctx->pc = 0x1CC7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC7C4u);
        ctx->pc = 0x1CC7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7BCu;
        // 0x1cc7c0: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC7BCu, 0x1CC7C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC7C4u;
label_1cc7c4:
    // 0x1cc7c4: 0x7bad0020  lq          $t5, 0x20($sp)
    ctx->pc = 0x1cc7c4u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc7c8:
    // 0x1cc7c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cc7c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc7cc:
    // 0x1cc7cc: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1cc7ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1cc7d0:
    // 0x1cc7d0: 0x1e60001e  bgtz        $s3, . + 4 + (0x1E << 2)
label_1cc7d4:
    if (ctx->pc == 0x1CC7D4u) {
        ctx->pc = 0x1CC7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7D0u;
        // 0x1cc7d4: 0x2301026  xor         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC7D8u;
        goto label_1cc7d8;
    }
    ctx->pc = 0x1CC7D0u;
    {
        const bool branch_taken_0x1cc7d0 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x1CC7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7D0u;
        // 0x1cc7d4: 0x2301026  xor         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc7d0) {
            ctx->pc = 0x1CC84Cu;
            goto label_1cc84c;
        }
    }
    ctx->pc = 0x1CC7D8u;
label_1cc7d8:
    // 0x1cc7d8: 0x32020005  andi        $v0, $s0, 0x5
    ctx->pc = 0x1cc7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)5);
label_1cc7dc:
    // 0x1cc7dc: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1cc7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_1cc7e0:
    // 0x1cc7e0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1cc7e4:
    if (ctx->pc == 0x1CC7E4u) {
        ctx->pc = 0x1CC7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7E0u;
        // 0x1cc7e4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC7E8u;
        goto label_1cc7e8;
    }
    ctx->pc = 0x1CC7E0u;
    {
        const bool branch_taken_0x1cc7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7E0u;
        // 0x1cc7e4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc7e0) {
            ctx->pc = 0x1CC848u;
            goto label_1cc848;
        }
    }
    ctx->pc = 0x1CC7E8u;
label_1cc7e8:
    // 0x1cc7e8: 0x6800007  bltz        $s4, . + 4 + (0x7 << 2)
label_1cc7ec:
    if (ctx->pc == 0x1CC7ECu) {
        ctx->pc = 0x1CC7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7E8u;
        // 0x1cc7ec: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC7F0u;
        goto label_1cc7f0;
    }
    ctx->pc = 0x1CC7E8u;
    {
        const bool branch_taken_0x1cc7e8 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x1CC7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7E8u;
        // 0x1cc7ec: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc7e8) {
            ctx->pc = 0x1CC808u;
            goto label_1cc808;
        }
    }
    ctx->pc = 0x1CC7F0u;
label_1cc7f0:
    // 0x1cc7f0: 0x2c71023  subu        $v0, $s6, $a3
    ctx->pc = 0x1cc7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
label_1cc7f4:
    // 0x1cc7f4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1cc7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cc7f8:
    // 0x1cc7f8: 0x541026  xor         $v0, $v0, $s4
    ctx->pc = 0x1cc7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 20));
label_1cc7fc:
    // 0x1cc7fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cc7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc800:
    // 0x1cc800: 0x10000010  b           . + 4 + (0x10 << 2)
label_1cc804:
    if (ctx->pc == 0x1CC804u) {
        ctx->pc = 0x1CC804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC800u;
        // 0x1cc804: 0x82180b  movn        $v1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC808u;
        goto label_1cc808;
    }
    ctx->pc = 0x1CC800u;
    {
        const bool branch_taken_0x1cc800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC800u;
        // 0x1cc804: 0x82180b  movn        $v1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc800) {
            ctx->pc = 0x1CC844u;
            goto label_1cc844;
        }
    }
    ctx->pc = 0x1CC808u;
label_1cc808:
    // 0x1cc808: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1cc808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1cc80c:
    // 0x1cc80c: 0x1282000d  beq         $s4, $v0, . + 4 + (0xD << 2)
label_1cc810:
    if (ctx->pc == 0x1CC810u) {
        ctx->pc = 0x1CC810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC80Cu;
        // 0x1cc810: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC814u;
        goto label_1cc814;
    }
    ctx->pc = 0x1CC80Cu;
    {
        const bool branch_taken_0x1cc80c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC80Cu;
        // 0x1cc810: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc80c) {
            ctx->pc = 0x1CC844u;
            goto label_1cc844;
        }
    }
    ctx->pc = 0x1CC814u;
label_1cc814:
    // 0x1cc814: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x1cc814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_1cc818:
    // 0x1cc818: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1cc818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cc81c:
    // 0x1cc81c: 0x7fad0020  sq          $t5, 0x20($sp)
    ctx->pc = 0x1cc81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 13));
label_1cc820:
    // 0x1cc820: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1cc820u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cc824:
    // 0x1cc824: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1cc824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1cc828:
    // 0x1cc828: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x1cc828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1cc82c:
    // 0x1cc82c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1cc82cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cc830:
    // 0x1cc830: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cc830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cc834:
    // 0x1cc834: 0x40f809  jalr        $v0
label_1cc838:
    if (ctx->pc == 0x1CC838u) {
        ctx->pc = 0x1CC838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC834u;
        // 0x1cc838: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC83Cu;
        goto label_1cc83c;
    }
    ctx->pc = 0x1CC834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC83Cu);
        ctx->pc = 0x1CC838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC834u;
        // 0x1cc838: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC834u, 0x1CC83Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC83Cu;
label_1cc83c:
    // 0x1cc83c: 0x7bad0020  lq          $t5, 0x20($sp)
    ctx->pc = 0x1cc83cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc840:
    // 0x1cc840: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cc840u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc844:
    // 0x1cc844: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1cc844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1cc848:
    // 0x1cc848: 0x2301026  xor         $v0, $s1, $s0
    ctx->pc = 0x1cc848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 16));
label_1cc84c:
    // 0x1cc84c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1cc84cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_1cc850:
    // 0x1cc850: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cc850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1cc854:
    // 0x1cc854: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1cc858:
    if (ctx->pc == 0x1CC858u) {
        ctx->pc = 0x1CC858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC854u;
        // 0x1cc858: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC85Cu;
        goto label_1cc85c;
    }
    ctx->pc = 0x1CC854u;
    {
        const bool branch_taken_0x1cc854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC854u;
        // 0x1cc858: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc854) {
            ctx->pc = 0x1CC890u;
            goto label_1cc890;
        }
    }
    ctx->pc = 0x1CC85Cu;
label_1cc85c:
    // 0x1cc85c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cc85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1cc860:
    // 0x1cc860: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1cc864:
    if (ctx->pc == 0x1CC864u) {
        ctx->pc = 0x1CC864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC860u;
        // 0x1cc864: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC868u;
        goto label_1cc868;
    }
    ctx->pc = 0x1CC860u;
    {
        const bool branch_taken_0x1cc860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC860u;
        // 0x1cc864: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc860) {
            ctx->pc = 0x1CC87Cu;
            goto label_1cc87c;
        }
    }
    ctx->pc = 0x1CC868u;
label_1cc868:
    // 0x1cc868: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1cc868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cc86c:
    // 0x1cc86c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1cc86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1cc870:
    // 0x1cc870: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1cc870u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc874:
    // 0x1cc874: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1cc874u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1cc878:
    // 0x1cc878: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1cc878u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1cc87c:
    // 0x1cc87c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1cc87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cc880:
    // 0x1cc880: 0x1603000b  bne         $s0, $v1, . + 4 + (0xB << 2)
label_1cc884:
    if (ctx->pc == 0x1CC884u) {
        ctx->pc = 0x1CC884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC880u;
        // 0x1cc884: 0xae50000c  sw          $s0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC888u;
        goto label_1cc888;
    }
    ctx->pc = 0x1CC880u;
    {
        const bool branch_taken_0x1cc880 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CC884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC880u;
        // 0x1cc884: 0xae50000c  sw          $s0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc880) {
            ctx->pc = 0x1CC8B0u;
            goto label_1cc8b0;
        }
    }
    ctx->pc = 0x1CC888u;
label_1cc888:
    // 0x1cc888: 0x10000011  b           . + 4 + (0x11 << 2)
label_1cc88c:
    if (ctx->pc == 0x1CC88Cu) {
        ctx->pc = 0x1CC88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC888u;
        // 0x1cc88c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC890u;
        goto label_1cc890;
    }
    ctx->pc = 0x1CC888u;
    {
        const bool branch_taken_0x1cc888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC888u;
        // 0x1cc88c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc888) {
            ctx->pc = 0x1CC8D0u;
            goto label_1cc8d0;
        }
    }
    ctx->pc = 0x1CC890u;
label_1cc890:
    // 0x1cc890: 0x2301024  and         $v0, $s1, $s0
    ctx->pc = 0x1cc890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
label_1cc894:
    // 0x1cc894: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1cc894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_1cc898:
    // 0x1cc898: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cc898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1cc89c:
    // 0x1cc89c: 0x1440ff3a  bnez        $v0, . + 4 + (-0xC6 << 2)
label_1cc8a0:
    if (ctx->pc == 0x1CC8A0u) {
        ctx->pc = 0x1CC8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC89Cu;
        // 0x1cc8a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC8A4u;
        goto label_1cc8a4;
    }
    ctx->pc = 0x1CC89Cu;
    {
        const bool branch_taken_0x1cc89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC89Cu;
        // 0x1cc8a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc89c) {
            ctx->pc = 0x1CC588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc588;
        }
    }
    ctx->pc = 0x1CC8A4u;
label_1cc8a4:
    // 0x1cc8a4: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1cc8a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc8a8:
    // 0x1cc8a8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1cc8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1cc8ac:
    // 0x1cc8ac: 0xae4d000c  sw          $t5, 0xC($s2)
    ctx->pc = 0x1cc8acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 13));
label_1cc8b0:
    // 0x1cc8b0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1cc8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1cc8b4:
    // 0x1cc8b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1cc8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cc8b8:
    // 0x1cc8b8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1cc8bc:
    if (ctx->pc == 0x1CC8BCu) {
        ctx->pc = 0x1CC8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8B8u;
        // 0x1cc8bc: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC8C0u;
        goto label_1cc8c0;
    }
    ctx->pc = 0x1CC8B8u;
    {
        const bool branch_taken_0x1cc8b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8B8u;
        // 0x1cc8bc: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc8b8) {
            ctx->pc = 0x1CC8CCu;
            goto label_1cc8cc;
        }
    }
    ctx->pc = 0x1CC8C0u;
label_1cc8c0:
    // 0x1cc8c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cc8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cc8c4:
    // 0x1cc8c4: 0x16a2ff3e  bne         $s5, $v0, . + 4 + (-0xC2 << 2)
label_1cc8c8:
    if (ctx->pc == 0x1CC8C8u) {
        ctx->pc = 0x1CC8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8C4u;
        // 0x1cc8c8: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC8CCu;
        goto label_1cc8cc;
    }
    ctx->pc = 0x1CC8C4u;
    {
        const bool branch_taken_0x1cc8c4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CC8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8C4u;
        // 0x1cc8c8: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc8c4) {
            ctx->pc = 0x1CC5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc5c0;
        }
    }
    ctx->pc = 0x1CC8CCu;
label_1cc8cc:
    // 0x1cc8cc: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x1cc8ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_1cc8d0:
    // 0x1cc8d0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1cc8d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1cc8d4:
    // 0x1cc8d4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1cc8d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1cc8d8:
    // 0x1cc8d8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1cc8d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1cc8dc:
    // 0x1cc8dc: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1cc8dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1cc8e0:
    // 0x1cc8e0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1cc8e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1cc8e4:
    // 0x1cc8e4: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1cc8e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1cc8e8:
    // 0x1cc8e8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1cc8e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1cc8ec:
    // 0x1cc8ec: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x1cc8ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1cc8f0:
    // 0x1cc8f0: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x1cc8f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1cc8f4:
    // 0x1cc8f4: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1cc8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_1cc8f8:
    // 0x1cc8f8: 0x3e00008  jr          $ra
label_1cc8fc:
    if (ctx->pc == 0x1CC8FCu) {
        ctx->pc = 0x1CC8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8F8u;
        // 0x1cc8fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC900u;
        goto label_fallthrough_0x1cc8f8;
    }
    ctx->pc = 0x1CC8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8F8u;
        // 0x1cc8fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cc8f8:
    ctx->pc = 0x1CC900u;
}
