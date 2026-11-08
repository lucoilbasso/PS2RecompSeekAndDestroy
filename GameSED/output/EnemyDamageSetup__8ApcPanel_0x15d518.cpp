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

// Function: EnemyDamageSetup__8ApcPanel
// Address: 0x15d518 - 0x15d9e4
void EnemyDamageSetup__8ApcPanel_0x15d518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnemyDamageSetup__8ApcPanel_0x15d518");
#endif

    switch (ctx->pc) {
        case 0x15d518u: goto label_15d518;
        case 0x15d51cu: goto label_15d51c;
        case 0x15d520u: goto label_15d520;
        case 0x15d524u: goto label_15d524;
        case 0x15d528u: goto label_15d528;
        case 0x15d52cu: goto label_15d52c;
        case 0x15d530u: goto label_15d530;
        case 0x15d534u: goto label_15d534;
        case 0x15d538u: goto label_15d538;
        case 0x15d53cu: goto label_15d53c;
        case 0x15d540u: goto label_15d540;
        case 0x15d544u: goto label_15d544;
        case 0x15d548u: goto label_15d548;
        case 0x15d54cu: goto label_15d54c;
        case 0x15d550u: goto label_15d550;
        case 0x15d554u: goto label_15d554;
        case 0x15d558u: goto label_15d558;
        case 0x15d55cu: goto label_15d55c;
        case 0x15d560u: goto label_15d560;
        case 0x15d564u: goto label_15d564;
        case 0x15d568u: goto label_15d568;
        case 0x15d56cu: goto label_15d56c;
        case 0x15d570u: goto label_15d570;
        case 0x15d574u: goto label_15d574;
        case 0x15d578u: goto label_15d578;
        case 0x15d57cu: goto label_15d57c;
        case 0x15d580u: goto label_15d580;
        case 0x15d584u: goto label_15d584;
        case 0x15d588u: goto label_15d588;
        case 0x15d58cu: goto label_15d58c;
        case 0x15d590u: goto label_15d590;
        case 0x15d594u: goto label_15d594;
        case 0x15d598u: goto label_15d598;
        case 0x15d59cu: goto label_15d59c;
        case 0x15d5a0u: goto label_15d5a0;
        case 0x15d5a4u: goto label_15d5a4;
        case 0x15d5a8u: goto label_15d5a8;
        case 0x15d5acu: goto label_15d5ac;
        case 0x15d5b0u: goto label_15d5b0;
        case 0x15d5b4u: goto label_15d5b4;
        case 0x15d5b8u: goto label_15d5b8;
        case 0x15d5bcu: goto label_15d5bc;
        case 0x15d5c0u: goto label_15d5c0;
        case 0x15d5c4u: goto label_15d5c4;
        case 0x15d5c8u: goto label_15d5c8;
        case 0x15d5ccu: goto label_15d5cc;
        case 0x15d5d0u: goto label_15d5d0;
        case 0x15d5d4u: goto label_15d5d4;
        case 0x15d5d8u: goto label_15d5d8;
        case 0x15d5dcu: goto label_15d5dc;
        case 0x15d5e0u: goto label_15d5e0;
        case 0x15d5e4u: goto label_15d5e4;
        case 0x15d5e8u: goto label_15d5e8;
        case 0x15d5ecu: goto label_15d5ec;
        case 0x15d5f0u: goto label_15d5f0;
        case 0x15d5f4u: goto label_15d5f4;
        case 0x15d5f8u: goto label_15d5f8;
        case 0x15d5fcu: goto label_15d5fc;
        case 0x15d600u: goto label_15d600;
        case 0x15d604u: goto label_15d604;
        case 0x15d608u: goto label_15d608;
        case 0x15d60cu: goto label_15d60c;
        case 0x15d610u: goto label_15d610;
        case 0x15d614u: goto label_15d614;
        case 0x15d618u: goto label_15d618;
        case 0x15d61cu: goto label_15d61c;
        case 0x15d620u: goto label_15d620;
        case 0x15d624u: goto label_15d624;
        case 0x15d628u: goto label_15d628;
        case 0x15d62cu: goto label_15d62c;
        case 0x15d630u: goto label_15d630;
        case 0x15d634u: goto label_15d634;
        case 0x15d638u: goto label_15d638;
        case 0x15d63cu: goto label_15d63c;
        case 0x15d640u: goto label_15d640;
        case 0x15d644u: goto label_15d644;
        case 0x15d648u: goto label_15d648;
        case 0x15d64cu: goto label_15d64c;
        case 0x15d650u: goto label_15d650;
        case 0x15d654u: goto label_15d654;
        case 0x15d658u: goto label_15d658;
        case 0x15d65cu: goto label_15d65c;
        case 0x15d660u: goto label_15d660;
        case 0x15d664u: goto label_15d664;
        case 0x15d668u: goto label_15d668;
        case 0x15d66cu: goto label_15d66c;
        case 0x15d670u: goto label_15d670;
        case 0x15d674u: goto label_15d674;
        case 0x15d678u: goto label_15d678;
        case 0x15d67cu: goto label_15d67c;
        case 0x15d680u: goto label_15d680;
        case 0x15d684u: goto label_15d684;
        case 0x15d688u: goto label_15d688;
        case 0x15d68cu: goto label_15d68c;
        case 0x15d690u: goto label_15d690;
        case 0x15d694u: goto label_15d694;
        case 0x15d698u: goto label_15d698;
        case 0x15d69cu: goto label_15d69c;
        case 0x15d6a0u: goto label_15d6a0;
        case 0x15d6a4u: goto label_15d6a4;
        case 0x15d6a8u: goto label_15d6a8;
        case 0x15d6acu: goto label_15d6ac;
        case 0x15d6b0u: goto label_15d6b0;
        case 0x15d6b4u: goto label_15d6b4;
        case 0x15d6b8u: goto label_15d6b8;
        case 0x15d6bcu: goto label_15d6bc;
        case 0x15d6c0u: goto label_15d6c0;
        case 0x15d6c4u: goto label_15d6c4;
        case 0x15d6c8u: goto label_15d6c8;
        case 0x15d6ccu: goto label_15d6cc;
        case 0x15d6d0u: goto label_15d6d0;
        case 0x15d6d4u: goto label_15d6d4;
        case 0x15d6d8u: goto label_15d6d8;
        case 0x15d6dcu: goto label_15d6dc;
        case 0x15d6e0u: goto label_15d6e0;
        case 0x15d6e4u: goto label_15d6e4;
        case 0x15d6e8u: goto label_15d6e8;
        case 0x15d6ecu: goto label_15d6ec;
        case 0x15d6f0u: goto label_15d6f0;
        case 0x15d6f4u: goto label_15d6f4;
        case 0x15d6f8u: goto label_15d6f8;
        case 0x15d6fcu: goto label_15d6fc;
        case 0x15d700u: goto label_15d700;
        case 0x15d704u: goto label_15d704;
        case 0x15d708u: goto label_15d708;
        case 0x15d70cu: goto label_15d70c;
        case 0x15d710u: goto label_15d710;
        case 0x15d714u: goto label_15d714;
        case 0x15d718u: goto label_15d718;
        case 0x15d71cu: goto label_15d71c;
        case 0x15d720u: goto label_15d720;
        case 0x15d724u: goto label_15d724;
        case 0x15d728u: goto label_15d728;
        case 0x15d72cu: goto label_15d72c;
        case 0x15d730u: goto label_15d730;
        case 0x15d734u: goto label_15d734;
        case 0x15d738u: goto label_15d738;
        case 0x15d73cu: goto label_15d73c;
        case 0x15d740u: goto label_15d740;
        case 0x15d744u: goto label_15d744;
        case 0x15d748u: goto label_15d748;
        case 0x15d74cu: goto label_15d74c;
        case 0x15d750u: goto label_15d750;
        case 0x15d754u: goto label_15d754;
        case 0x15d758u: goto label_15d758;
        case 0x15d75cu: goto label_15d75c;
        case 0x15d760u: goto label_15d760;
        case 0x15d764u: goto label_15d764;
        case 0x15d768u: goto label_15d768;
        case 0x15d76cu: goto label_15d76c;
        case 0x15d770u: goto label_15d770;
        case 0x15d774u: goto label_15d774;
        case 0x15d778u: goto label_15d778;
        case 0x15d77cu: goto label_15d77c;
        case 0x15d780u: goto label_15d780;
        case 0x15d784u: goto label_15d784;
        case 0x15d788u: goto label_15d788;
        case 0x15d78cu: goto label_15d78c;
        case 0x15d790u: goto label_15d790;
        case 0x15d794u: goto label_15d794;
        case 0x15d798u: goto label_15d798;
        case 0x15d79cu: goto label_15d79c;
        case 0x15d7a0u: goto label_15d7a0;
        case 0x15d7a4u: goto label_15d7a4;
        case 0x15d7a8u: goto label_15d7a8;
        case 0x15d7acu: goto label_15d7ac;
        case 0x15d7b0u: goto label_15d7b0;
        case 0x15d7b4u: goto label_15d7b4;
        case 0x15d7b8u: goto label_15d7b8;
        case 0x15d7bcu: goto label_15d7bc;
        case 0x15d7c0u: goto label_15d7c0;
        case 0x15d7c4u: goto label_15d7c4;
        case 0x15d7c8u: goto label_15d7c8;
        case 0x15d7ccu: goto label_15d7cc;
        case 0x15d7d0u: goto label_15d7d0;
        case 0x15d7d4u: goto label_15d7d4;
        case 0x15d7d8u: goto label_15d7d8;
        case 0x15d7dcu: goto label_15d7dc;
        case 0x15d7e0u: goto label_15d7e0;
        case 0x15d7e4u: goto label_15d7e4;
        case 0x15d7e8u: goto label_15d7e8;
        case 0x15d7ecu: goto label_15d7ec;
        case 0x15d7f0u: goto label_15d7f0;
        case 0x15d7f4u: goto label_15d7f4;
        case 0x15d7f8u: goto label_15d7f8;
        case 0x15d7fcu: goto label_15d7fc;
        case 0x15d800u: goto label_15d800;
        case 0x15d804u: goto label_15d804;
        case 0x15d808u: goto label_15d808;
        case 0x15d80cu: goto label_15d80c;
        case 0x15d810u: goto label_15d810;
        case 0x15d814u: goto label_15d814;
        case 0x15d818u: goto label_15d818;
        case 0x15d81cu: goto label_15d81c;
        case 0x15d820u: goto label_15d820;
        case 0x15d824u: goto label_15d824;
        case 0x15d828u: goto label_15d828;
        case 0x15d82cu: goto label_15d82c;
        case 0x15d830u: goto label_15d830;
        case 0x15d834u: goto label_15d834;
        case 0x15d838u: goto label_15d838;
        case 0x15d83cu: goto label_15d83c;
        case 0x15d840u: goto label_15d840;
        case 0x15d844u: goto label_15d844;
        case 0x15d848u: goto label_15d848;
        case 0x15d84cu: goto label_15d84c;
        case 0x15d850u: goto label_15d850;
        case 0x15d854u: goto label_15d854;
        case 0x15d858u: goto label_15d858;
        case 0x15d85cu: goto label_15d85c;
        case 0x15d860u: goto label_15d860;
        case 0x15d864u: goto label_15d864;
        case 0x15d868u: goto label_15d868;
        case 0x15d86cu: goto label_15d86c;
        case 0x15d870u: goto label_15d870;
        case 0x15d874u: goto label_15d874;
        case 0x15d878u: goto label_15d878;
        case 0x15d87cu: goto label_15d87c;
        case 0x15d880u: goto label_15d880;
        case 0x15d884u: goto label_15d884;
        case 0x15d888u: goto label_15d888;
        case 0x15d88cu: goto label_15d88c;
        case 0x15d890u: goto label_15d890;
        case 0x15d894u: goto label_15d894;
        case 0x15d898u: goto label_15d898;
        case 0x15d89cu: goto label_15d89c;
        case 0x15d8a0u: goto label_15d8a0;
        case 0x15d8a4u: goto label_15d8a4;
        case 0x15d8a8u: goto label_15d8a8;
        case 0x15d8acu: goto label_15d8ac;
        case 0x15d8b0u: goto label_15d8b0;
        case 0x15d8b4u: goto label_15d8b4;
        case 0x15d8b8u: goto label_15d8b8;
        case 0x15d8bcu: goto label_15d8bc;
        case 0x15d8c0u: goto label_15d8c0;
        case 0x15d8c4u: goto label_15d8c4;
        case 0x15d8c8u: goto label_15d8c8;
        case 0x15d8ccu: goto label_15d8cc;
        case 0x15d8d0u: goto label_15d8d0;
        case 0x15d8d4u: goto label_15d8d4;
        case 0x15d8d8u: goto label_15d8d8;
        case 0x15d8dcu: goto label_15d8dc;
        case 0x15d8e0u: goto label_15d8e0;
        case 0x15d8e4u: goto label_15d8e4;
        case 0x15d8e8u: goto label_15d8e8;
        case 0x15d8ecu: goto label_15d8ec;
        case 0x15d8f0u: goto label_15d8f0;
        case 0x15d8f4u: goto label_15d8f4;
        case 0x15d8f8u: goto label_15d8f8;
        case 0x15d8fcu: goto label_15d8fc;
        case 0x15d900u: goto label_15d900;
        case 0x15d904u: goto label_15d904;
        case 0x15d908u: goto label_15d908;
        case 0x15d90cu: goto label_15d90c;
        case 0x15d910u: goto label_15d910;
        case 0x15d914u: goto label_15d914;
        case 0x15d918u: goto label_15d918;
        case 0x15d91cu: goto label_15d91c;
        case 0x15d920u: goto label_15d920;
        case 0x15d924u: goto label_15d924;
        case 0x15d928u: goto label_15d928;
        case 0x15d92cu: goto label_15d92c;
        case 0x15d930u: goto label_15d930;
        case 0x15d934u: goto label_15d934;
        case 0x15d938u: goto label_15d938;
        case 0x15d93cu: goto label_15d93c;
        case 0x15d940u: goto label_15d940;
        case 0x15d944u: goto label_15d944;
        case 0x15d948u: goto label_15d948;
        case 0x15d94cu: goto label_15d94c;
        case 0x15d950u: goto label_15d950;
        case 0x15d954u: goto label_15d954;
        case 0x15d958u: goto label_15d958;
        case 0x15d95cu: goto label_15d95c;
        case 0x15d960u: goto label_15d960;
        case 0x15d964u: goto label_15d964;
        case 0x15d968u: goto label_15d968;
        case 0x15d96cu: goto label_15d96c;
        case 0x15d970u: goto label_15d970;
        case 0x15d974u: goto label_15d974;
        case 0x15d978u: goto label_15d978;
        case 0x15d97cu: goto label_15d97c;
        case 0x15d980u: goto label_15d980;
        case 0x15d984u: goto label_15d984;
        case 0x15d988u: goto label_15d988;
        case 0x15d98cu: goto label_15d98c;
        case 0x15d990u: goto label_15d990;
        case 0x15d994u: goto label_15d994;
        case 0x15d998u: goto label_15d998;
        case 0x15d99cu: goto label_15d99c;
        case 0x15d9a0u: goto label_15d9a0;
        case 0x15d9a4u: goto label_15d9a4;
        case 0x15d9a8u: goto label_15d9a8;
        case 0x15d9acu: goto label_15d9ac;
        case 0x15d9b0u: goto label_15d9b0;
        case 0x15d9b4u: goto label_15d9b4;
        case 0x15d9b8u: goto label_15d9b8;
        case 0x15d9bcu: goto label_15d9bc;
        case 0x15d9c0u: goto label_15d9c0;
        case 0x15d9c4u: goto label_15d9c4;
        case 0x15d9c8u: goto label_15d9c8;
        case 0x15d9ccu: goto label_15d9cc;
        case 0x15d9d0u: goto label_15d9d0;
        case 0x15d9d4u: goto label_15d9d4;
        case 0x15d9d8u: goto label_15d9d8;
        case 0x15d9dcu: goto label_15d9dc;
        case 0x15d9e0u: goto label_15d9e0;
        default: break;
    }

    ctx->pc = 0x15d518u;

label_15d518:
    // 0x15d518: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15d518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_15d51c:
    // 0x15d51c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x15d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_15d520:
    // 0x15d520: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15d520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15d524:
    // 0x15d524: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x15d524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_15d528:
    // 0x15d528: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x15d528u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_15d52c:
    // 0x15d52c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x15d52cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15d530:
    // 0x15d530: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15d530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_15d534:
    // 0x15d534: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15d534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_15d538:
    // 0x15d538: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x15d538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_15d53c:
    // 0x15d53c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x15d53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_15d540:
    // 0x15d540: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x15d540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_15d544:
    // 0x15d544: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x15d544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_15d548:
    // 0x15d548: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x15d548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_15d54c:
    // 0x15d54c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x15d54cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_15d550:
    // 0x15d550: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x15d550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_15d554:
    // 0x15d554: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x15d554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_15d558:
    // 0x15d558: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x15d558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_15d55c:
    // 0x15d55c: 0x26f50de0  addiu       $s5, $s7, 0xDE0
    ctx->pc = 0x15d55cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 3552));
label_15d560:
    // 0x15d560: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x15d560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_15d564:
    // 0x15d564: 0x241eff74  addiu       $fp, $zero, -0x8C
    ctx->pc = 0x15d564u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967156));
label_15d568:
    // 0x15d568: 0x8ee30010  lw          $v1, 0x10($s7)
    ctx->pc = 0x15d568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_15d56c:
    // 0x15d56c: 0x0  nop
    ctx->pc = 0x15d56cu;
    // NOP
label_15d570:
    // 0x15d570: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x15d570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_15d574:
    // 0x15d574: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x15d574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_15d578:
    // 0x15d578: 0x2456a738  addiu       $s6, $v0, -0x58C8
    ctx->pc = 0x15d578u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944568));
label_15d57c:
    // 0x15d57c: 0x8c720024  lw          $s2, 0x24($v1)
    ctx->pc = 0x15d57cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15d580:
    // 0x15d580: 0x26c2ffd8  addiu       $v0, $s6, -0x28
    ctx->pc = 0x15d580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967256));
label_15d584:
    // 0x15d584: 0x82a021  addu        $s4, $a0, $v0
    ctx->pc = 0x15d584u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_15d588:
    // 0x15d588: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x15d588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_15d58c:
    // 0x15d58c: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15d58cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15d590:
    // 0x15d590: 0xc06bd28  jal         func_1AF4A0
label_15d594:
    if (ctx->pc == 0x15D594u) {
        ctx->pc = 0x15D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D590u;
        // 0x15d594: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D598u;
        goto label_15d598;
    }
    ctx->pc = 0x15D590u;
    SET_GPR_U32(ctx, 31, 0x15D598u);
    ctx->pc = 0x15D594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D590u;
    // 0x15d594: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15D590u, 0x15D598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D598u;
label_15d598:
    // 0x15d598: 0xc06bd20  jal         func_1AF480
label_15d59c:
    if (ctx->pc == 0x15D59Cu) {
        ctx->pc = 0x15D59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D598u;
        // 0x15d59c: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D5A0u;
        goto label_15d5a0;
    }
    ctx->pc = 0x15D598u;
    SET_GPR_U32(ctx, 31, 0x15D5A0u);
    ctx->pc = 0x15D59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D598u;
    // 0x15d59c: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15D598u, 0x15D5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D5A0u;
label_15d5a0:
    // 0x15d5a0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x15d5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_15d5a4:
    // 0x15d5a4: 0x8e500028  lw          $s0, 0x28($s2)
    ctx->pc = 0x15d5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_15d5a8:
    // 0x15d5a8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x15d5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_15d5ac:
    // 0x15d5ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15d5acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15d5b0:
    // 0x15d5b0: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15d5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15d5b4:
    // 0x15d5b4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x15d5b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_15d5b8:
    // 0x15d5b8: 0xc0682b2  jal         func_1A0AC8
label_15d5bc:
    if (ctx->pc == 0x15D5BCu) {
        ctx->pc = 0x15D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5B8u;
        // 0x15d5bc: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D5C0u;
        goto label_15d5c0;
    }
    ctx->pc = 0x15D5B8u;
    SET_GPR_U32(ctx, 31, 0x15D5C0u);
    ctx->pc = 0x15D5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D5B8u;
    // 0x15d5bc: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15D5B8u, 0x15D5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D5C0u;
label_15d5c0:
    // 0x15d5c0: 0xc0682b6  jal         func_1A0AD8
label_15d5c4:
    if (ctx->pc == 0x15D5C4u) {
        ctx->pc = 0x15D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5C0u;
        // 0x15d5c4: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D5C8u;
        goto label_15d5c8;
    }
    ctx->pc = 0x15D5C0u;
    SET_GPR_U32(ctx, 31, 0x15D5C8u);
    ctx->pc = 0x15D5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D5C0u;
    // 0x15d5c4: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15D5C0u, 0x15D5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D5C8u;
label_15d5c8:
    // 0x15d5c8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15d5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15d5cc:
    // 0x15d5cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15d5ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15d5d0:
    // 0x15d5d0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15d5d4:
    // 0x15d5d4: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x15d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_15d5d8:
    // 0x15d5d8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15d5d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15d5dc:
    // 0x15d5dc: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x15d5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_15d5e0:
    // 0x15d5e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15d5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15d5e4:
    // 0x15d5e4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15d5e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15d5e8:
    // 0x15d5e8: 0xc062cb0  jal         func_18B2C0
label_15d5ec:
    if (ctx->pc == 0x15D5ECu) {
        ctx->pc = 0x15D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5E8u;
        // 0x15d5ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D5F0u;
        goto label_15d5f0;
    }
    ctx->pc = 0x15D5E8u;
    SET_GPR_U32(ctx, 31, 0x15D5F0u);
    ctx->pc = 0x15D5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D5E8u;
    // 0x15d5ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15D5E8u, 0x15D5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D5F0u;
label_15d5f0:
    // 0x15d5f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15d5f4:
    // 0x15d5f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d5f8:
    // 0x15d5f8: 0xc06825c  jal         func_1A0970
label_15d5fc:
    if (ctx->pc == 0x15D5FCu) {
        ctx->pc = 0x15D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5F8u;
        // 0x15d5fc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D600u;
        goto label_15d600;
    }
    ctx->pc = 0x15D5F8u;
    SET_GPR_U32(ctx, 31, 0x15D600u);
    ctx->pc = 0x15D5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D5F8u;
    // 0x15d5fc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15D5F8u, 0x15D600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D600u;
label_15d600:
    // 0x15d600: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15d600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15d604:
    // 0x15d604: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d608:
    // 0x15d608: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15d608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15d60c:
    // 0x15d60c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d60cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d610:
    // 0x15d610: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d614:
    // 0x15d614: 0x60f809  jalr        $v1
label_15d618:
    if (ctx->pc == 0x15D618u) {
        ctx->pc = 0x15D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D614u;
        // 0x15d618: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D61Cu;
        goto label_15d61c;
    }
    ctx->pc = 0x15D614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D61Cu);
        ctx->pc = 0x15D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D614u;
        // 0x15d618: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D614u, 0x15D61Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D61Cu;
label_15d61c:
    // 0x15d61c: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15d61cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15d620:
    // 0x15d620: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_15d624:
    if (ctx->pc == 0x15D624u) {
        ctx->pc = 0x15D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D620u;
        // 0x15d624: 0x26070150  addiu       $a3, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D628u;
        goto label_15d628;
    }
    ctx->pc = 0x15D620u;
    {
        const bool branch_taken_0x15d620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D620u;
        // 0x15d624: 0x26070150  addiu       $a3, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d620) {
            ctx->pc = 0x15D6D8u;
            goto label_15d6d8;
        }
    }
    ctx->pc = 0x15D628u;
label_15d628:
    // 0x15d628: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15d628u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15d62c:
    // 0x15d62c: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15d62cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15d630:
    // 0x15d630: 0x26080180  addiu       $t0, $s0, 0x180
    ctx->pc = 0x15d630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15d634:
    // 0x15d634: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15d634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15d638:
    // 0x15d638: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15d638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15d63c:
    // 0x15d63c: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15d63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15d640:
    // 0x15d640: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15d640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15d644:
    // 0x15d644: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15d644u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15d648:
    // 0x15d648: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15d648u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15d64c:
    // 0x15d64c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15d64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15d650:
    // 0x15d650: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x15d650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15d654:
    // 0x15d654: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15d654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15d658:
    // 0x15d658: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15d658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15d65c:
    // 0x15d65c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15d65cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15d660:
    // 0x15d660: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15d660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15d664:
    // 0x15d664: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15d664u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15d668:
    // 0x15d668: 0xa4e4000e  sh          $a0, 0xE($a3)
    ctx->pc = 0x15d668u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 4));
label_15d66c:
    // 0x15d66c: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x15d66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
label_15d670:
    // 0x15d670: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15d670u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15d674:
    // 0x15d674: 0xe4e10020  swc1        $f1, 0x20($a3)
    ctx->pc = 0x15d674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
label_15d678:
    // 0x15d678: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15d678u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15d67c:
    // 0x15d67c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15d67cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15d680:
    // 0x15d680: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15d680u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15d684:
    // 0x15d684: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x15d684u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15d688:
    // 0x15d688: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15d688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15d68c:
    // 0x15d68c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15d68cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15d690:
    // 0x15d690: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15d690u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15d694:
    // 0x15d694: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15d694u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15d698:
    // 0x15d698: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x15d698u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
label_15d69c:
    // 0x15d69c: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15d69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15d6a0:
    // 0x15d6a0: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x15d6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15d6a4:
    // 0x15d6a4: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x15d6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15d6a8:
    // 0x15d6a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15d6a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15d6ac:
    // 0x15d6ac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15d6acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15d6b0:
    // 0x15d6b0: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x15d6b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15d6b4:
    // 0x15d6b4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15d6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15d6b8:
    // 0x15d6b8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15d6b8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15d6bc:
    // 0x15d6bc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15d6bcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15d6c0:
    // 0x15d6c0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15d6c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15d6c4:
    // 0x15d6c4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15d6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15d6c8:
    // 0x15d6c8: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15d6c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15d6cc:
    // 0x15d6cc: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x15d6ccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_15d6d0:
    // 0x15d6d0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15d6d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15d6d4:
    // 0x15d6d4: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15d6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_15d6d8:
    // 0x15d6d8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15d6d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15d6dc:
    // 0x15d6dc: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15d6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15d6e0:
    // 0x15d6e0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15d6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15d6e4:
    // 0x15d6e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15d6e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d6e8:
    // 0x15d6e8: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x15d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15d6ec:
    // 0x15d6ec: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x15d6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_15d6f0:
    // 0x15d6f0: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15d6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15d6f4:
    // 0x15d6f4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15d6f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15d6f8:
    // 0x15d6f8: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x15d6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
label_15d6fc:
    // 0x15d6fc: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x15d6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
label_15d700:
    // 0x15d700: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x15d700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15d704:
    // 0x15d704: 0x40f809  jalr        $v0
label_15d708:
    if (ctx->pc == 0x15D708u) {
        ctx->pc = 0x15D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D704u;
        // 0x15d708: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D70Cu;
        goto label_15d70c;
    }
    ctx->pc = 0x15D704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15D70Cu);
        ctx->pc = 0x15D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D704u;
        // 0x15d708: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D704u, 0x15D70Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D70Cu;
label_15d70c:
    // 0x15d70c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15d710:
    // 0x15d710: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15d710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15d714:
    // 0x15d714: 0x2402fef8  addiu       $v0, $zero, -0x108
    ctx->pc = 0x15d714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967032));
label_15d718:
    // 0x15d718: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x15d718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15d71c:
    // 0x15d71c: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15d71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15d720:
    // 0x15d720: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15d720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15d724:
    // 0x15d724: 0x3c63021  addu        $a2, $fp, $a2
    ctx->pc = 0x15d724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
label_15d728:
    // 0x15d728: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x15d728u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15d72c:
    // 0x15d72c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x15d72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15d730:
    // 0x15d730: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x15d730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_15d734:
    // 0x15d734: 0xe0f809  jalr        $a3
label_15d738:
    if (ctx->pc == 0x15D738u) {
        ctx->pc = 0x15D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D734u;
        // 0x15d738: 0x26d400c8  addiu       $s4, $s6, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D73Cu;
        goto label_15d73c;
    }
    ctx->pc = 0x15D734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x15D73Cu);
        ctx->pc = 0x15D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D734u;
        // 0x15d738: 0x26d400c8  addiu       $s4, $s6, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D734u, 0x15D73Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D73Cu;
label_15d73c:
    // 0x15d73c: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x15d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_15d740:
    // 0x15d740: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15d740u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15d744:
    // 0x15d744: 0x8c510024  lw          $s1, 0x24($v0)
    ctx->pc = 0x15d744u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_15d748:
    // 0x15d748: 0xc06bd28  jal         func_1AF4A0
label_15d74c:
    if (ctx->pc == 0x15D74Cu) {
        ctx->pc = 0x15D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D748u;
        // 0x15d74c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D750u;
        goto label_15d750;
    }
    ctx->pc = 0x15D748u;
    SET_GPR_U32(ctx, 31, 0x15D750u);
    ctx->pc = 0x15D74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D748u;
    // 0x15d74c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15D748u, 0x15D750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D750u;
label_15d750:
    // 0x15d750: 0xc06bd20  jal         func_1AF480
label_15d754:
    if (ctx->pc == 0x15D754u) {
        ctx->pc = 0x15D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D750u;
        // 0x15d754: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D758u;
        goto label_15d758;
    }
    ctx->pc = 0x15D750u;
    SET_GPR_U32(ctx, 31, 0x15D758u);
    ctx->pc = 0x15D754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D750u;
    // 0x15d754: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15D750u, 0x15D758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D758u;
label_15d758:
    // 0x15d758: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15d758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15d75c:
    // 0x15d75c: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x15d75cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_15d760:
    // 0x15d760: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15d760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15d764:
    // 0x15d764: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15d764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15d768:
    // 0x15d768: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15d768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15d76c:
    // 0x15d76c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x15d76cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_15d770:
    // 0x15d770: 0xc0682b2  jal         func_1A0AC8
label_15d774:
    if (ctx->pc == 0x15D774u) {
        ctx->pc = 0x15D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D770u;
        // 0x15d774: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D778u;
        goto label_15d778;
    }
    ctx->pc = 0x15D770u;
    SET_GPR_U32(ctx, 31, 0x15D778u);
    ctx->pc = 0x15D774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D770u;
    // 0x15d774: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15D770u, 0x15D778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D778u;
label_15d778:
    // 0x15d778: 0xc0682b6  jal         func_1A0AD8
label_15d77c:
    if (ctx->pc == 0x15D77Cu) {
        ctx->pc = 0x15D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D778u;
        // 0x15d77c: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D780u;
        goto label_15d780;
    }
    ctx->pc = 0x15D778u;
    SET_GPR_U32(ctx, 31, 0x15D780u);
    ctx->pc = 0x15D77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D778u;
    // 0x15d77c: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15D778u, 0x15D780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D780u;
label_15d780:
    // 0x15d780: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x15d780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_15d784:
    // 0x15d784: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15d784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15d788:
    // 0x15d788: 0x246301c0  addiu       $v1, $v1, 0x1C0
    ctx->pc = 0x15d788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
label_15d78c:
    // 0x15d78c: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x15d78cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_15d790:
    // 0x15d790: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15d790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15d794:
    // 0x15d794: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15d794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15d798:
    // 0x15d798: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15d798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15d79c:
    // 0x15d79c: 0x26c600d0  addiu       $a2, $s6, 0xD0
    ctx->pc = 0x15d79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 208));
label_15d7a0:
    // 0x15d7a0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15d7a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15d7a4:
    // 0x15d7a4: 0xc062cb0  jal         func_18B2C0
label_15d7a8:
    if (ctx->pc == 0x15D7A8u) {
        ctx->pc = 0x15D7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7A4u;
        // 0x15d7a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D7ACu;
        goto label_15d7ac;
    }
    ctx->pc = 0x15D7A4u;
    SET_GPR_U32(ctx, 31, 0x15D7ACu);
    ctx->pc = 0x15D7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D7A4u;
    // 0x15d7a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15D7A4u, 0x15D7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D7ACu;
label_15d7ac:
    // 0x15d7ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15d7b0:
    // 0x15d7b0: 0xc06825c  jal         func_1A0970
label_15d7b4:
    if (ctx->pc == 0x15D7B4u) {
        ctx->pc = 0x15D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7B0u;
        // 0x15d7b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D7B8u;
        goto label_15d7b8;
    }
    ctx->pc = 0x15D7B0u;
    SET_GPR_U32(ctx, 31, 0x15D7B8u);
    ctx->pc = 0x15D7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D7B0u;
    // 0x15d7b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15D7B0u, 0x15D7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D7B8u;
label_15d7b8:
    // 0x15d7b8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15d7bc:
    // 0x15d7bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d7c0:
    // 0x15d7c0: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15d7c4:
    // 0x15d7c4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d7c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d7c8:
    // 0x15d7c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d7cc:
    // 0x15d7cc: 0x60f809  jalr        $v1
label_15d7d0:
    if (ctx->pc == 0x15D7D0u) {
        ctx->pc = 0x15D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7CCu;
        // 0x15d7d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D7D4u;
        goto label_15d7d4;
    }
    ctx->pc = 0x15D7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D7D4u);
        ctx->pc = 0x15D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7CCu;
        // 0x15d7d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D7CCu, 0x15D7D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D7D4u;
label_15d7d4:
    // 0x15d7d4: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15d7d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15d7d8:
    // 0x15d7d8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_15d7dc:
    if (ctx->pc == 0x15D7DCu) {
        ctx->pc = 0x15D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7D8u;
        // 0x15d7dc: 0x26070150  addiu       $a3, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D7E0u;
        goto label_15d7e0;
    }
    ctx->pc = 0x15D7D8u;
    {
        const bool branch_taken_0x15d7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7D8u;
        // 0x15d7dc: 0x26070150  addiu       $a3, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7d8) {
            ctx->pc = 0x15D890u;
            goto label_15d890;
        }
    }
    ctx->pc = 0x15D7E0u;
label_15d7e0:
    // 0x15d7e0: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15d7e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15d7e4:
    // 0x15d7e4: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15d7e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15d7e8:
    // 0x15d7e8: 0x26080180  addiu       $t0, $s0, 0x180
    ctx->pc = 0x15d7e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15d7ec:
    // 0x15d7ec: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15d7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15d7f0:
    // 0x15d7f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15d7f4:
    // 0x15d7f4: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15d7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15d7f8:
    // 0x15d7f8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15d7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15d7fc:
    // 0x15d7fc: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15d7fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15d800:
    // 0x15d800: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15d800u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15d804:
    // 0x15d804: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15d804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15d808:
    // 0x15d808: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x15d808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15d80c:
    // 0x15d80c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15d810:
    // 0x15d810: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15d810u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15d814:
    // 0x15d814: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15d814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15d818:
    // 0x15d818: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15d818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15d81c:
    // 0x15d81c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15d81cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15d820:
    // 0x15d820: 0xa4e4000e  sh          $a0, 0xE($a3)
    ctx->pc = 0x15d820u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 4));
label_15d824:
    // 0x15d824: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x15d824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
label_15d828:
    // 0x15d828: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15d828u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15d82c:
    // 0x15d82c: 0xe4e10020  swc1        $f1, 0x20($a3)
    ctx->pc = 0x15d82cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
label_15d830:
    // 0x15d830: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15d830u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15d834:
    // 0x15d834: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15d834u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15d838:
    // 0x15d838: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15d838u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15d83c:
    // 0x15d83c: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x15d83cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15d840:
    // 0x15d840: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15d840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15d844:
    // 0x15d844: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15d844u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15d848:
    // 0x15d848: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15d848u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15d84c:
    // 0x15d84c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15d84cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15d850:
    // 0x15d850: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x15d850u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
label_15d854:
    // 0x15d854: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15d854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15d858:
    // 0x15d858: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x15d858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15d85c:
    // 0x15d85c: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x15d85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15d860:
    // 0x15d860: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15d860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15d864:
    // 0x15d864: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15d864u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15d868:
    // 0x15d868: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x15d868u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15d86c:
    // 0x15d86c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15d86cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15d870:
    // 0x15d870: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15d870u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15d874:
    // 0x15d874: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15d874u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15d878:
    // 0x15d878: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15d878u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15d87c:
    // 0x15d87c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15d87cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15d880:
    // 0x15d880: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15d880u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15d884:
    // 0x15d884: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x15d884u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_15d888:
    // 0x15d888: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15d888u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15d88c:
    // 0x15d88c: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15d88cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_15d890:
    // 0x15d890: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x15d890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15d894:
    // 0x15d894: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15d894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15d898:
    // 0x15d898: 0x8e870020  lw          $a3, 0x20($s4)
    ctx->pc = 0x15d898u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15d89c:
    // 0x15d89c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15d89cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d8a0:
    // 0x15d8a0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x15d8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_15d8a4:
    // 0x15d8a4: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x15d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15d8a8:
    // 0x15d8a8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15d8ac:
    // 0x15d8ac: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x15d8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_15d8b0:
    // 0x15d8b0: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x15d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_15d8b4:
    // 0x15d8b4: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x15d8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_15d8b8:
    // 0x15d8b8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x15d8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_15d8bc:
    // 0x15d8bc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d8bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d8c0:
    // 0x15d8c0: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x15d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_15d8c4:
    // 0x15d8c4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x15d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_15d8c8:
    // 0x15d8c8: 0xae27012c  sw          $a3, 0x12C($s1)
    ctx->pc = 0x15d8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 7));
label_15d8cc:
    // 0x15d8cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d8d0:
    // 0x15d8d0: 0x60f809  jalr        $v1
label_15d8d4:
    if (ctx->pc == 0x15D8D4u) {
        ctx->pc = 0x15D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8D0u;
        // 0x15d8d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D8D8u;
        goto label_15d8d8;
    }
    ctx->pc = 0x15D8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D8D8u);
        ctx->pc = 0x15D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8D0u;
        // 0x15d8d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D8D0u, 0x15D8D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D8D8u;
label_15d8d8:
    // 0x15d8d8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15d8dc:
    // 0x15d8dc: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15d8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15d8e0:
    // 0x15d8e0: 0x2403fef8  addiu       $v1, $zero, -0x108
    ctx->pc = 0x15d8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967032));
label_15d8e4:
    // 0x15d8e4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x15d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_15d8e8:
    // 0x15d8e8: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15d8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15d8ec:
    // 0x15d8ec: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d8ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d8f0:
    // 0x15d8f0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x15d8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15d8f4:
    // 0x15d8f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d8f8:
    // 0x15d8f8: 0x3c63021  addu        $a2, $fp, $a2
    ctx->pc = 0x15d8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
label_15d8fc:
    // 0x15d8fc: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x15d8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_15d900:
    // 0x15d900: 0x60f809  jalr        $v1
label_15d904:
    if (ctx->pc == 0x15D904u) {
        ctx->pc = 0x15D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D900u;
        // 0x15d904: 0x27de001c  addiu       $fp, $fp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D908u;
        goto label_15d908;
    }
    ctx->pc = 0x15D900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D908u);
        ctx->pc = 0x15D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D900u;
        // 0x15d904: 0x27de001c  addiu       $fp, $fp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D900u, 0x15D908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D908u;
label_15d908:
    // 0x15d908: 0x8690000c  lh          $s0, 0xC($s4)
    ctx->pc = 0x15d908u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15d90c:
    // 0x15d90c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15d910:
    // 0x15d910: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x15d910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_15d914:
    // 0x15d914: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x15d914u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
label_15d918:
    // 0x15d918: 0x24a5a2a8  addiu       $a1, $a1, -0x5D58
    ctx->pc = 0x15d918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943400));
label_15d91c:
    // 0x15d91c: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x15d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_15d920:
    // 0x15d920: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d920u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d924:
    // 0x15d924: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d928:
    // 0x15d928: 0x60f809  jalr        $v1
label_15d92c:
    if (ctx->pc == 0x15D92Cu) {
        ctx->pc = 0x15D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D928u;
        // 0x15d92c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D930u;
        goto label_15d930;
    }
    ctx->pc = 0x15D928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D930u);
        ctx->pc = 0x15D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D928u;
        // 0x15d92c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D928u, 0x15D930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D930u;
label_15d930:
    // 0x15d930: 0xaea00024  sw          $zero, 0x24($s5)
    ctx->pc = 0x15d930u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
label_15d934:
    // 0x15d934: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x15d934u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_15d938:
    // 0x15d938: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x15d938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_15d93c:
    // 0x15d93c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15d93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d940:
    // 0x15d940: 0xaea40030  sw          $a0, 0x30($s5)
    ctx->pc = 0x15d940u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 4));
label_15d944:
    // 0x15d944: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x15d944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_15d948:
    // 0x15d948: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15d948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15d94c:
    // 0x15d94c: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x15d94cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
label_15d950:
    // 0x15d950: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15d950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d954:
    // 0x15d954: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x15d954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_15d958:
    // 0x15d958: 0xaea60028  sw          $a2, 0x28($s5)
    ctx->pc = 0x15d958u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 6));
label_15d95c:
    // 0x15d95c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15d95cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15d960:
    // 0x15d960: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x15d960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15d964:
    // 0x15d964: 0xaeb00014  sw          $s0, 0x14($s5)
    ctx->pc = 0x15d964u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 16));
label_15d968:
    // 0x15d968: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x15d968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_15d96c:
    // 0x15d96c: 0x40f809  jalr        $v0
label_15d970:
    if (ctx->pc == 0x15D970u) {
        ctx->pc = 0x15D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D96Cu;
        // 0x15d970: 0xaea0002c  sw          $zero, 0x2C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D974u;
        goto label_15d974;
    }
    ctx->pc = 0x15D96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15D974u);
        ctx->pc = 0x15D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D96Cu;
        // 0x15d970: 0xaea0002c  sw          $zero, 0x2C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D96Cu, 0x15D974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D974u;
label_15d974:
    // 0x15d974: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x15d974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_15d978:
    // 0x15d978: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15d978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d97c:
    // 0x15d97c: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x15d97cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
label_15d980:
    // 0x15d980: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15d980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15d984:
    // 0x15d984: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15d984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15d988:
    // 0x15d988: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d988u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d98c:
    // 0x15d98c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d990:
    // 0x15d990: 0x60f809  jalr        $v1
label_15d994:
    if (ctx->pc == 0x15D994u) {
        ctx->pc = 0x15D994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D990u;
        // 0x15d994: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D998u;
        goto label_15d998;
    }
    ctx->pc = 0x15D990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D998u);
        ctx->pc = 0x15D994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D990u;
        // 0x15d994: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D990u, 0x15D998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D998u;
label_15d998:
    // 0x15d998: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x15d998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15d99c:
    // 0x15d99c: 0x483fef4  bgezl       $a0, . + 4 + (-0x10C << 2)
label_15d9a0:
    if (ctx->pc == 0x15D9A0u) {
        ctx->pc = 0x15D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D99Cu;
        // 0x15d9a0: 0x8ee30010  lw          $v1, 0x10($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D9A4u;
        goto label_15d9a4;
    }
    ctx->pc = 0x15D99Cu;
    {
        const bool branch_taken_0x15d99c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x15d99c) {
            ctx->pc = 0x15D9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D99Cu;
            // 0x15d9a0: 0x8ee30010  lw          $v1, 0x10($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d570;
        }
    }
    ctx->pc = 0x15D9A4u;
label_15d9a4:
    // 0x15d9a4: 0x96e20016  lhu         $v0, 0x16($s7)
    ctx->pc = 0x15d9a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 22)));
label_15d9a8:
    // 0x15d9a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15d9a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15d9ac:
    // 0x15d9ac: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x15d9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_15d9b0:
    // 0x15d9b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15d9b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15d9b4:
    // 0x15d9b4: 0xa6e20016  sh          $v0, 0x16($s7)
    ctx->pc = 0x15d9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 22), (uint16_t)GPR_U32(ctx, 2));
label_15d9b8:
    // 0x15d9b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x15d9b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15d9bc:
    // 0x15d9bc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x15d9bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15d9c0:
    // 0x15d9c0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x15d9c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15d9c4:
    // 0x15d9c4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x15d9c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_15d9c8:
    // 0x15d9c8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x15d9c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15d9cc:
    // 0x15d9cc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x15d9ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_15d9d0:
    // 0x15d9d0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x15d9d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15d9d4:
    // 0x15d9d4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x15d9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_15d9d8:
    // 0x15d9d8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x15d9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15d9dc:
    // 0x15d9dc: 0x3e00008  jr          $ra
label_15d9e0:
    if (ctx->pc == 0x15D9E0u) {
        ctx->pc = 0x15D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D9DCu;
        // 0x15d9e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D9E4u;
        goto label_fallthrough_0x15d9dc;
    }
    ctx->pc = 0x15D9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D9DCu;
        // 0x15d9e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15d9dc:
    ctx->pc = 0x15D9E4u;
}
