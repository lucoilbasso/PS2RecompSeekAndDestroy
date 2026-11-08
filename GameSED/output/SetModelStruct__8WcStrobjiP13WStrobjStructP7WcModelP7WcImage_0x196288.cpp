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

// Function: SetModelStruct__8WcStrobjiP13WStrobjStructP7WcModelP7WcImage
// Address: 0x196288 - 0x196684
void SetModelStruct__8WcStrobjiP13WStrobjStructP7WcModelP7WcImage_0x196288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetModelStruct__8WcStrobjiP13WStrobjStructP7WcModelP7WcImage_0x196288");
#endif

    switch (ctx->pc) {
        case 0x196288u: goto label_196288;
        case 0x19628cu: goto label_19628c;
        case 0x196290u: goto label_196290;
        case 0x196294u: goto label_196294;
        case 0x196298u: goto label_196298;
        case 0x19629cu: goto label_19629c;
        case 0x1962a0u: goto label_1962a0;
        case 0x1962a4u: goto label_1962a4;
        case 0x1962a8u: goto label_1962a8;
        case 0x1962acu: goto label_1962ac;
        case 0x1962b0u: goto label_1962b0;
        case 0x1962b4u: goto label_1962b4;
        case 0x1962b8u: goto label_1962b8;
        case 0x1962bcu: goto label_1962bc;
        case 0x1962c0u: goto label_1962c0;
        case 0x1962c4u: goto label_1962c4;
        case 0x1962c8u: goto label_1962c8;
        case 0x1962ccu: goto label_1962cc;
        case 0x1962d0u: goto label_1962d0;
        case 0x1962d4u: goto label_1962d4;
        case 0x1962d8u: goto label_1962d8;
        case 0x1962dcu: goto label_1962dc;
        case 0x1962e0u: goto label_1962e0;
        case 0x1962e4u: goto label_1962e4;
        case 0x1962e8u: goto label_1962e8;
        case 0x1962ecu: goto label_1962ec;
        case 0x1962f0u: goto label_1962f0;
        case 0x1962f4u: goto label_1962f4;
        case 0x1962f8u: goto label_1962f8;
        case 0x1962fcu: goto label_1962fc;
        case 0x196300u: goto label_196300;
        case 0x196304u: goto label_196304;
        case 0x196308u: goto label_196308;
        case 0x19630cu: goto label_19630c;
        case 0x196310u: goto label_196310;
        case 0x196314u: goto label_196314;
        case 0x196318u: goto label_196318;
        case 0x19631cu: goto label_19631c;
        case 0x196320u: goto label_196320;
        case 0x196324u: goto label_196324;
        case 0x196328u: goto label_196328;
        case 0x19632cu: goto label_19632c;
        case 0x196330u: goto label_196330;
        case 0x196334u: goto label_196334;
        case 0x196338u: goto label_196338;
        case 0x19633cu: goto label_19633c;
        case 0x196340u: goto label_196340;
        case 0x196344u: goto label_196344;
        case 0x196348u: goto label_196348;
        case 0x19634cu: goto label_19634c;
        case 0x196350u: goto label_196350;
        case 0x196354u: goto label_196354;
        case 0x196358u: goto label_196358;
        case 0x19635cu: goto label_19635c;
        case 0x196360u: goto label_196360;
        case 0x196364u: goto label_196364;
        case 0x196368u: goto label_196368;
        case 0x19636cu: goto label_19636c;
        case 0x196370u: goto label_196370;
        case 0x196374u: goto label_196374;
        case 0x196378u: goto label_196378;
        case 0x19637cu: goto label_19637c;
        case 0x196380u: goto label_196380;
        case 0x196384u: goto label_196384;
        case 0x196388u: goto label_196388;
        case 0x19638cu: goto label_19638c;
        case 0x196390u: goto label_196390;
        case 0x196394u: goto label_196394;
        case 0x196398u: goto label_196398;
        case 0x19639cu: goto label_19639c;
        case 0x1963a0u: goto label_1963a0;
        case 0x1963a4u: goto label_1963a4;
        case 0x1963a8u: goto label_1963a8;
        case 0x1963acu: goto label_1963ac;
        case 0x1963b0u: goto label_1963b0;
        case 0x1963b4u: goto label_1963b4;
        case 0x1963b8u: goto label_1963b8;
        case 0x1963bcu: goto label_1963bc;
        case 0x1963c0u: goto label_1963c0;
        case 0x1963c4u: goto label_1963c4;
        case 0x1963c8u: goto label_1963c8;
        case 0x1963ccu: goto label_1963cc;
        case 0x1963d0u: goto label_1963d0;
        case 0x1963d4u: goto label_1963d4;
        case 0x1963d8u: goto label_1963d8;
        case 0x1963dcu: goto label_1963dc;
        case 0x1963e0u: goto label_1963e0;
        case 0x1963e4u: goto label_1963e4;
        case 0x1963e8u: goto label_1963e8;
        case 0x1963ecu: goto label_1963ec;
        case 0x1963f0u: goto label_1963f0;
        case 0x1963f4u: goto label_1963f4;
        case 0x1963f8u: goto label_1963f8;
        case 0x1963fcu: goto label_1963fc;
        case 0x196400u: goto label_196400;
        case 0x196404u: goto label_196404;
        case 0x196408u: goto label_196408;
        case 0x19640cu: goto label_19640c;
        case 0x196410u: goto label_196410;
        case 0x196414u: goto label_196414;
        case 0x196418u: goto label_196418;
        case 0x19641cu: goto label_19641c;
        case 0x196420u: goto label_196420;
        case 0x196424u: goto label_196424;
        case 0x196428u: goto label_196428;
        case 0x19642cu: goto label_19642c;
        case 0x196430u: goto label_196430;
        case 0x196434u: goto label_196434;
        case 0x196438u: goto label_196438;
        case 0x19643cu: goto label_19643c;
        case 0x196440u: goto label_196440;
        case 0x196444u: goto label_196444;
        case 0x196448u: goto label_196448;
        case 0x19644cu: goto label_19644c;
        case 0x196450u: goto label_196450;
        case 0x196454u: goto label_196454;
        case 0x196458u: goto label_196458;
        case 0x19645cu: goto label_19645c;
        case 0x196460u: goto label_196460;
        case 0x196464u: goto label_196464;
        case 0x196468u: goto label_196468;
        case 0x19646cu: goto label_19646c;
        case 0x196470u: goto label_196470;
        case 0x196474u: goto label_196474;
        case 0x196478u: goto label_196478;
        case 0x19647cu: goto label_19647c;
        case 0x196480u: goto label_196480;
        case 0x196484u: goto label_196484;
        case 0x196488u: goto label_196488;
        case 0x19648cu: goto label_19648c;
        case 0x196490u: goto label_196490;
        case 0x196494u: goto label_196494;
        case 0x196498u: goto label_196498;
        case 0x19649cu: goto label_19649c;
        case 0x1964a0u: goto label_1964a0;
        case 0x1964a4u: goto label_1964a4;
        case 0x1964a8u: goto label_1964a8;
        case 0x1964acu: goto label_1964ac;
        case 0x1964b0u: goto label_1964b0;
        case 0x1964b4u: goto label_1964b4;
        case 0x1964b8u: goto label_1964b8;
        case 0x1964bcu: goto label_1964bc;
        case 0x1964c0u: goto label_1964c0;
        case 0x1964c4u: goto label_1964c4;
        case 0x1964c8u: goto label_1964c8;
        case 0x1964ccu: goto label_1964cc;
        case 0x1964d0u: goto label_1964d0;
        case 0x1964d4u: goto label_1964d4;
        case 0x1964d8u: goto label_1964d8;
        case 0x1964dcu: goto label_1964dc;
        case 0x1964e0u: goto label_1964e0;
        case 0x1964e4u: goto label_1964e4;
        case 0x1964e8u: goto label_1964e8;
        case 0x1964ecu: goto label_1964ec;
        case 0x1964f0u: goto label_1964f0;
        case 0x1964f4u: goto label_1964f4;
        case 0x1964f8u: goto label_1964f8;
        case 0x1964fcu: goto label_1964fc;
        case 0x196500u: goto label_196500;
        case 0x196504u: goto label_196504;
        case 0x196508u: goto label_196508;
        case 0x19650cu: goto label_19650c;
        case 0x196510u: goto label_196510;
        case 0x196514u: goto label_196514;
        case 0x196518u: goto label_196518;
        case 0x19651cu: goto label_19651c;
        case 0x196520u: goto label_196520;
        case 0x196524u: goto label_196524;
        case 0x196528u: goto label_196528;
        case 0x19652cu: goto label_19652c;
        case 0x196530u: goto label_196530;
        case 0x196534u: goto label_196534;
        case 0x196538u: goto label_196538;
        case 0x19653cu: goto label_19653c;
        case 0x196540u: goto label_196540;
        case 0x196544u: goto label_196544;
        case 0x196548u: goto label_196548;
        case 0x19654cu: goto label_19654c;
        case 0x196550u: goto label_196550;
        case 0x196554u: goto label_196554;
        case 0x196558u: goto label_196558;
        case 0x19655cu: goto label_19655c;
        case 0x196560u: goto label_196560;
        case 0x196564u: goto label_196564;
        case 0x196568u: goto label_196568;
        case 0x19656cu: goto label_19656c;
        case 0x196570u: goto label_196570;
        case 0x196574u: goto label_196574;
        case 0x196578u: goto label_196578;
        case 0x19657cu: goto label_19657c;
        case 0x196580u: goto label_196580;
        case 0x196584u: goto label_196584;
        case 0x196588u: goto label_196588;
        case 0x19658cu: goto label_19658c;
        case 0x196590u: goto label_196590;
        case 0x196594u: goto label_196594;
        case 0x196598u: goto label_196598;
        case 0x19659cu: goto label_19659c;
        case 0x1965a0u: goto label_1965a0;
        case 0x1965a4u: goto label_1965a4;
        case 0x1965a8u: goto label_1965a8;
        case 0x1965acu: goto label_1965ac;
        case 0x1965b0u: goto label_1965b0;
        case 0x1965b4u: goto label_1965b4;
        case 0x1965b8u: goto label_1965b8;
        case 0x1965bcu: goto label_1965bc;
        case 0x1965c0u: goto label_1965c0;
        case 0x1965c4u: goto label_1965c4;
        case 0x1965c8u: goto label_1965c8;
        case 0x1965ccu: goto label_1965cc;
        case 0x1965d0u: goto label_1965d0;
        case 0x1965d4u: goto label_1965d4;
        case 0x1965d8u: goto label_1965d8;
        case 0x1965dcu: goto label_1965dc;
        case 0x1965e0u: goto label_1965e0;
        case 0x1965e4u: goto label_1965e4;
        case 0x1965e8u: goto label_1965e8;
        case 0x1965ecu: goto label_1965ec;
        case 0x1965f0u: goto label_1965f0;
        case 0x1965f4u: goto label_1965f4;
        case 0x1965f8u: goto label_1965f8;
        case 0x1965fcu: goto label_1965fc;
        case 0x196600u: goto label_196600;
        case 0x196604u: goto label_196604;
        case 0x196608u: goto label_196608;
        case 0x19660cu: goto label_19660c;
        case 0x196610u: goto label_196610;
        case 0x196614u: goto label_196614;
        case 0x196618u: goto label_196618;
        case 0x19661cu: goto label_19661c;
        case 0x196620u: goto label_196620;
        case 0x196624u: goto label_196624;
        case 0x196628u: goto label_196628;
        case 0x19662cu: goto label_19662c;
        case 0x196630u: goto label_196630;
        case 0x196634u: goto label_196634;
        case 0x196638u: goto label_196638;
        case 0x19663cu: goto label_19663c;
        case 0x196640u: goto label_196640;
        case 0x196644u: goto label_196644;
        case 0x196648u: goto label_196648;
        case 0x19664cu: goto label_19664c;
        case 0x196650u: goto label_196650;
        case 0x196654u: goto label_196654;
        case 0x196658u: goto label_196658;
        case 0x19665cu: goto label_19665c;
        case 0x196660u: goto label_196660;
        case 0x196664u: goto label_196664;
        case 0x196668u: goto label_196668;
        case 0x19666cu: goto label_19666c;
        case 0x196670u: goto label_196670;
        case 0x196674u: goto label_196674;
        case 0x196678u: goto label_196678;
        case 0x19667cu: goto label_19667c;
        case 0x196680u: goto label_196680;
        default: break;
    }

    ctx->pc = 0x196288u;

label_196288:
    // 0x196288: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x196288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19628c:
    // 0x19628c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x19628cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_196290:
    // 0x196290: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x196290u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_196294:
    // 0x196294: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x196294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_196298:
    // 0x196298: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x196298u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19629c:
    // 0x19629c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x19629cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1962a0:
    // 0x1962a0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1962a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1962a4:
    // 0x1962a4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1962a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_1962a8:
    // 0x1962a8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1962a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1962ac:
    // 0x1962ac: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1962acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_1962b0:
    // 0x1962b0: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1962b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1962b4:
    // 0x1962b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1962b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1962b8:
    // 0x1962b8: 0x162980  sll         $a1, $s6, 6
    ctx->pc = 0x1962b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
label_1962bc:
    // 0x1962bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1962bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1962c0:
    // 0x1962c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1962c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1962c4:
    // 0x1962c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1962c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1962c8:
    // 0x1962c8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1962c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_1962cc:
    // 0x1962cc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1962ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_1962d0:
    // 0x1962d0: 0xae6801bc  sw          $t0, 0x1BC($s3)
    ctx->pc = 0x1962d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 444), GPR_U32(ctx, 8));
label_1962d4:
    // 0x1962d4: 0xae7601b0  sw          $s6, 0x1B0($s3)
    ctx->pc = 0x1962d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 432), GPR_U32(ctx, 22));
label_1962d8:
    // 0x1962d8: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_1962dc:
    if (ctx->pc == 0x1962DCu) {
        ctx->pc = 0x1962DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962D8u;
        // 0x1962dc: 0xae7501b8  sw          $s5, 0x1B8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 440), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1962E0u;
        goto label_1962e0;
    }
    ctx->pc = 0x1962D8u;
    {
        const bool branch_taken_0x1962d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1962DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962D8u;
        // 0x1962dc: 0xae7501b8  sw          $s5, 0x1B8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 440), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1962d8) {
            ctx->pc = 0x1962E4u;
            goto label_1962e4;
        }
    }
    ctx->pc = 0x1962E0u;
label_1962e0:
    // 0x1962e0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1962e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1962e4:
    // 0x1962e4: 0xc068086  jal         func_1A0218
label_1962e8:
    if (ctx->pc == 0x1962E8u) {
        ctx->pc = 0x1962ECu;
        goto label_1962ec;
    }
    ctx->pc = 0x1962E4u;
    SET_GPR_U32(ctx, 31, 0x1962ECu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1962E4u, 0x1962ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1962ECu;
label_1962ec:
    // 0x1962ec: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1962f0:
    if (ctx->pc == 0x1962F0u) {
        ctx->pc = 0x1962F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962ECu;
        // 0x1962f0: 0xae6201b4  sw          $v0, 0x1B4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1962F4u;
        goto label_1962f4;
    }
    ctx->pc = 0x1962ECu;
    {
        const bool branch_taken_0x1962ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1962F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962ECu;
        // 0x1962f0: 0xae6201b4  sw          $v0, 0x1B4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1962ec) {
            ctx->pc = 0x196358u;
            goto label_196358;
        }
    }
    ctx->pc = 0x1962F4u;
label_1962f4:
    // 0x1962f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1962f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1962f8:
    // 0x1962f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1962f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1962fc:
    // 0x1962fc: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1962fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_196300:
    // 0x196300: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x196300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196304:
    // 0x196304: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x196304u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_196308:
    // 0x196308: 0x24a58338  addiu       $a1, $a1, -0x7CC8
    ctx->pc = 0x196308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935352));
label_19630c:
    // 0x19630c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19630cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_196310:
    // 0x196310: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x196310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_196314:
    // 0x196314: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x196314u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_196318:
    // 0x196318: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x196318u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_19631c:
    // 0x19631c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x19631cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_196320:
    // 0x196320: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x196320u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_196324:
    // 0x196324: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x196324u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_196328:
    // 0x196328: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x196328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_19632c:
    // 0x19632c: 0x8068186  j           func_1A0618
label_196330:
    if (ctx->pc == 0x196330u) {
        ctx->pc = 0x196330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19632Cu;
        // 0x196330: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196334u;
        goto label_196334;
    }
    ctx->pc = 0x19632Cu;
    ctx->pc = 0x196330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19632Cu;
    // 0x196330: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x196334u;
label_196334:
    // 0x196334: 0x0  nop
    ctx->pc = 0x196334u;
    // NOP
label_196338:
    // 0x196338: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x196338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_19633c:
    // 0x19633c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19633cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_196340:
    // 0x196340: 0x24a58338  addiu       $a1, $a1, -0x7CC8
    ctx->pc = 0x196340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935352));
label_196344:
    // 0x196344: 0xc068186  jal         func_1A0618
label_196348:
    if (ctx->pc == 0x196348u) {
        ctx->pc = 0x196348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196344u;
        // 0x196348: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19634Cu;
        goto label_19634c;
    }
    ctx->pc = 0x196344u;
    SET_GPR_U32(ctx, 31, 0x19634Cu);
    ctx->pc = 0x196348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196344u;
    // 0x196348: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x196344u, 0x19634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19634Cu;
label_19634c:
    // 0x19634c: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_196350:
    if (ctx->pc == 0x196350u) {
        ctx->pc = 0x196350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19634Cu;
        // 0x196350: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196354u;
        goto label_196354;
    }
    ctx->pc = 0x19634Cu;
    {
        const bool branch_taken_0x19634c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19634Cu;
        // 0x196350: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19634c) {
            ctx->pc = 0x196658u;
            goto label_196658;
        }
    }
    ctx->pc = 0x196354u;
label_196354:
    // 0x196354: 0x0  nop
    ctx->pc = 0x196354u;
    // NOP
label_196358:
    // 0x196358: 0x1ac00098  blez        $s6, . + 4 + (0x98 << 2)
label_19635c:
    if (ctx->pc == 0x19635Cu) {
        ctx->pc = 0x19635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196358u;
        // 0x19635c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196360u;
        goto label_196360;
    }
    ctx->pc = 0x196358u;
    {
        const bool branch_taken_0x196358 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x19635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196358u;
        // 0x19635c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196358) {
            ctx->pc = 0x1965BCu;
            goto label_1965bc;
        }
    }
    ctx->pc = 0x196360u;
label_196360:
    // 0x196360: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x196360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
label_196364:
    // 0x196364: 0x0  nop
    ctx->pc = 0x196364u;
    // NOP
label_196368:
    // 0x196368: 0x171180  sll         $v0, $s7, 6
    ctx->pc = 0x196368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
label_19636c:
    // 0x19636c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19636cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196370:
    // 0x196370: 0x3c29021  addu        $s2, $fp, $v0
    ctx->pc = 0x196370u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_196374:
    // 0x196374: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x196374u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_196378:
    // 0x196378: 0xc05bedc  jal         func_16FB70
label_19637c:
    if (ctx->pc == 0x19637Cu) {
        ctx->pc = 0x19637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196378u;
        // 0x19637c: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196380u;
        goto label_196380;
    }
    ctx->pc = 0x196378u;
    SET_GPR_U32(ctx, 31, 0x196380u);
    ctx->pc = 0x19637Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196378u;
    // 0x19637c: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x196378u, 0x196380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196380u;
label_196380:
    // 0x196380: 0xc0682b2  jal         func_1A0AC8
label_196384:
    if (ctx->pc == 0x196384u) {
        ctx->pc = 0x196384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196380u;
        // 0x196384: 0x24040346  addiu       $a0, $zero, 0x346 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196388u;
        goto label_196388;
    }
    ctx->pc = 0x196380u;
    SET_GPR_U32(ctx, 31, 0x196388u);
    ctx->pc = 0x196384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196380u;
    // 0x196384: 0x24040346  addiu       $a0, $zero, 0x346 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x196380u, 0x196388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196388u;
label_196388:
    // 0x196388: 0xc0682b6  jal         func_1A0AD8
label_19638c:
    if (ctx->pc == 0x19638Cu) {
        ctx->pc = 0x19638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196388u;
        // 0x19638c: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196390u;
        goto label_196390;
    }
    ctx->pc = 0x196388u;
    SET_GPR_U32(ctx, 31, 0x196390u);
    ctx->pc = 0x19638Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196388u;
    // 0x19638c: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x196388u, 0x196390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196390u;
label_196390:
    // 0x196390: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x196390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196394:
    // 0x196394: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x196394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_196398:
    // 0x196398: 0x24420950  addiu       $v0, $v0, 0x950
    ctx->pc = 0x196398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2384));
label_19639c:
    // 0x19639c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19639cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1963a0:
    // 0x1963a0: 0xc061258  jal         func_184960
label_1963a4:
    if (ctx->pc == 0x1963A4u) {
        ctx->pc = 0x1963A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963A0u;
        // 0x1963a4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1963A8u;
        goto label_1963a8;
    }
    ctx->pc = 0x1963A0u;
    SET_GPR_U32(ctx, 31, 0x1963A8u);
    ctx->pc = 0x1963A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1963A0u;
    // 0x1963a4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x1963A0u, 0x1963A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1963A8u;
label_1963a8:
    // 0x1963a8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1963a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1963ac:
    // 0x1963ac: 0x26040154  addiu       $a0, $s0, 0x154
    ctx->pc = 0x1963acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 340));
label_1963b0:
    // 0x1963b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1963b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1963b4:
    // 0x1963b4: 0xae110150  sw          $s1, 0x150($s0)
    ctx->pc = 0x1963b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 17));
label_1963b8:
    // 0x1963b8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1963b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1963bc:
    // 0x1963bc: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x1963bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
label_1963c0:
    // 0x1963c0: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x1963c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
label_1963c4:
    // 0x1963c4: 0x90a3ef38  lbu         $v1, -0x10C8($a1)
    ctx->pc = 0x1963c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294963000)));
label_1963c8:
    // 0x1963c8: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1963c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_1963cc:
    // 0x1963cc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1963ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1963d0:
    // 0x1963d0: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1963d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
label_1963d4:
    // 0x1963d4: 0x8c62d630  lw          $v0, -0x29D0($v1)
    ctx->pc = 0x1963d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956592)));
label_1963d8:
    // 0x1963d8: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x1963d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
label_1963dc:
    // 0x1963dc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1963dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1963e0:
    // 0x1963e0: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x1963e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
label_1963e4:
    // 0x1963e4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1963e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1963e8:
    // 0x1963e8: 0xae110134  sw          $s1, 0x134($s0)
    ctx->pc = 0x1963e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 17));
label_1963ec:
    // 0x1963ec: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1963ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_1963f0:
    // 0x1963f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1963f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1963f4:
    // 0x1963f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1963f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1963f8:
    // 0x1963f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1963f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1963fc:
    // 0x1963fc: 0xc06825c  jal         func_1A0970
label_196400:
    if (ctx->pc == 0x196400u) {
        ctx->pc = 0x196400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963FCu;
        // 0x196400: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196404u;
        goto label_196404;
    }
    ctx->pc = 0x1963FCu;
    SET_GPR_U32(ctx, 31, 0x196404u);
    ctx->pc = 0x196400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1963FCu;
    // 0x196400: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1963FCu, 0x196404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196404u;
label_196404:
    // 0x196404: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x196404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_196408:
    // 0x196408: 0xc05bedc  jal         func_16FB70
label_19640c:
    if (ctx->pc == 0x19640Cu) {
        ctx->pc = 0x19640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196408u;
        // 0x19640c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196410u;
        goto label_196410;
    }
    ctx->pc = 0x196408u;
    SET_GPR_U32(ctx, 31, 0x196410u);
    ctx->pc = 0x19640Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196408u;
    // 0x19640c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x196408u, 0x196410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196410u;
label_196410:
    // 0x196410: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x196410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_196414:
    // 0x196414: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x196414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
label_196418:
    // 0x196418: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x196418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_19641c:
    // 0x19641c: 0xdc62d610  ld          $v0, -0x29F0($v1)
    ctx->pc = 0x19641cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294956560)));
label_196420:
    // 0x196420: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x196420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_196424:
    // 0x196424: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x196424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_196428:
    // 0x196428: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x196428u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
label_19642c:
    // 0x19642c: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x19642cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_196430:
    // 0x196430: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x196430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
label_196434:
    // 0x196434: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x196434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_196438:
    // 0x196438: 0x26220038  addiu       $v0, $s1, 0x38
    ctx->pc = 0x196438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_19643c:
    // 0x19643c: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x19643cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
label_196440:
    // 0x196440: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x196440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_196444:
    // 0x196444: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x196444u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
label_196448:
    // 0x196448: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x196448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_19644c:
    // 0x19644c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x19644cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_196450:
    // 0x196450: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x196450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_196454:
    // 0x196454: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x196454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_196458:
    // 0x196458: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_19645c:
    if (ctx->pc == 0x19645Cu) {
        ctx->pc = 0x19645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196458u;
        // 0x19645c: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196460u;
        goto label_196460;
    }
    ctx->pc = 0x196458u;
    {
        const bool branch_taken_0x196458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196458u;
        // 0x19645c: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196458) {
            ctx->pc = 0x196478u;
            goto label_196478;
        }
    }
    ctx->pc = 0x196460u;
label_196460:
    // 0x196460: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x196460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_196464:
    // 0x196464: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x196464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
label_196468:
    // 0x196468: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x196468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_19646c:
    // 0x19646c: 0x10000003  b           . + 4 + (0x3 << 2)
label_196470:
    if (ctx->pc == 0x196470u) {
        ctx->pc = 0x196470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19646Cu;
        // 0x196470: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196474u;
        goto label_196474;
    }
    ctx->pc = 0x19646Cu;
    {
        const bool branch_taken_0x19646c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19646Cu;
        // 0x196470: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19646c) {
            ctx->pc = 0x19647Cu;
            goto label_19647c;
        }
    }
    ctx->pc = 0x196474u;
label_196474:
    // 0x196474: 0x0  nop
    ctx->pc = 0x196474u;
    // NOP
label_196478:
    // 0x196478: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x196478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19647c:
    // 0x19647c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_196480:
    if (ctx->pc == 0x196480u) {
        ctx->pc = 0x196480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19647Cu;
        // 0x196480: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196484u;
        goto label_196484;
    }
    ctx->pc = 0x19647Cu;
    {
        const bool branch_taken_0x19647c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19647Cu;
        // 0x196480: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19647c) {
            ctx->pc = 0x196488u;
            goto label_196488;
        }
    }
    ctx->pc = 0x196484u;
label_196484:
    // 0x196484: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x196484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_196488:
    // 0x196488: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x196488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_19648c:
    // 0x19648c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x19648cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_196490:
    // 0x196490: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_196494:
    if (ctx->pc == 0x196494u) {
        ctx->pc = 0x196494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196490u;
        // 0x196494: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196498u;
        goto label_196498;
    }
    ctx->pc = 0x196490u;
    {
        const bool branch_taken_0x196490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x196490) {
            ctx->pc = 0x196494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196490u;
            // 0x196494: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1964A8u;
            goto label_1964a8;
        }
    }
    ctx->pc = 0x196498u;
label_196498:
    // 0x196498: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x196498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_19649c:
    // 0x19649c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1964a0:
    if (ctx->pc == 0x1964A0u) {
        ctx->pc = 0x1964A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19649Cu;
        // 0x1964a0: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1964A4u;
        goto label_1964a4;
    }
    ctx->pc = 0x19649Cu;
    {
        const bool branch_taken_0x19649c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1964A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19649Cu;
        // 0x1964a0: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19649c) {
            ctx->pc = 0x1964C0u;
            goto label_1964c0;
        }
    }
    ctx->pc = 0x1964A4u;
label_1964a4:
    // 0x1964a4: 0x0  nop
    ctx->pc = 0x1964a4u;
    // NOP
label_1964a8:
    // 0x1964a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1964a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1964ac:
    // 0x1964ac: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x1964acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_1964b0:
    // 0x1964b0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1964b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1964b4:
    // 0x1964b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1964b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1964b8:
    // 0x1964b8: 0x60f809  jalr        $v1
label_1964bc:
    if (ctx->pc == 0x1964BCu) {
        ctx->pc = 0x1964BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964B8u;
        // 0x1964bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1964C0u;
        goto label_1964c0;
    }
    ctx->pc = 0x1964B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1964C0u);
        ctx->pc = 0x1964BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964B8u;
        // 0x1964bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1964B8u, 0x1964C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1964C0u;
label_1964c0:
    // 0x1964c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1964c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1964c4:
    // 0x1964c4: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x1964c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_1964c8:
    // 0x1964c8: 0xc0618da  jal         func_186368
label_1964cc:
    if (ctx->pc == 0x1964CCu) {
        ctx->pc = 0x1964CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964C8u;
        // 0x1964cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1964D0u;
        goto label_1964d0;
    }
    ctx->pc = 0x1964C8u;
    SET_GPR_U32(ctx, 31, 0x1964D0u);
    ctx->pc = 0x1964CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1964C8u;
    // 0x1964cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x1964C8u, 0x1964D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1964D0u;
label_1964d0:
    // 0x1964d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1964d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1964d4:
    // 0x1964d4: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x1964d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_1964d8:
    // 0x1964d8: 0xc0618f2  jal         func_1863C8
label_1964dc:
    if (ctx->pc == 0x1964DCu) {
        ctx->pc = 0x1964DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964D8u;
        // 0x1964dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1964E0u;
        goto label_1964e0;
    }
    ctx->pc = 0x1964D8u;
    SET_GPR_U32(ctx, 31, 0x1964E0u);
    ctx->pc = 0x1964DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1964D8u;
    // 0x1964dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x1964D8u, 0x1964E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1964E0u;
label_1964e0:
    // 0x1964e0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1964e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1964e4:
    // 0x1964e4: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x1964e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1964e8:
    // 0x1964e8: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x1964e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_1964ec:
    // 0x1964ec: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1964ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1964f0:
    // 0x1964f0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1964f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1964f4:
    // 0x1964f4: 0x60f809  jalr        $v1
label_1964f8:
    if (ctx->pc == 0x1964F8u) {
        ctx->pc = 0x1964F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964F4u;
        // 0x1964f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1964FCu;
        goto label_1964fc;
    }
    ctx->pc = 0x1964F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1964FCu);
        ctx->pc = 0x1964F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964F4u;
        // 0x1964f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1964F4u, 0x1964FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1964FCu;
label_1964fc:
    // 0x1964fc: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x1964fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_196500:
    // 0x196500: 0x602002b  bltzl       $s0, . + 4 + (0x2B << 2)
label_196504:
    if (ctx->pc == 0x196504u) {
        ctx->pc = 0x196504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196500u;
        // 0x196504: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196508u;
        goto label_196508;
    }
    ctx->pc = 0x196500u;
    {
        const bool branch_taken_0x196500 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x196500) {
            ctx->pc = 0x196504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196500u;
            // 0x196504: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1965B0u;
            goto label_1965b0;
        }
    }
    ctx->pc = 0x196508u;
label_196508:
    // 0x196508: 0xc06bd28  jal         func_1AF4A0
label_19650c:
    if (ctx->pc == 0x19650Cu) {
        ctx->pc = 0x19650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196508u;
        // 0x19650c: 0x8ea4001c  lw          $a0, 0x1C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196510u;
        goto label_196510;
    }
    ctx->pc = 0x196508u;
    SET_GPR_U32(ctx, 31, 0x196510u);
    ctx->pc = 0x19650Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196508u;
    // 0x19650c: 0x8ea4001c  lw          $a0, 0x1C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x196508u, 0x196510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196510u;
label_196510:
    // 0x196510: 0xc06bd20  jal         func_1AF480
label_196514:
    if (ctx->pc == 0x196514u) {
        ctx->pc = 0x196514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196510u;
        // 0x196514: 0x8ea4001c  lw          $a0, 0x1C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196518u;
        goto label_196518;
    }
    ctx->pc = 0x196510u;
    SET_GPR_U32(ctx, 31, 0x196518u);
    ctx->pc = 0x196514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196510u;
    // 0x196514: 0x8ea4001c  lw          $a0, 0x1C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x196510u, 0x196518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196518u;
label_196518:
    // 0x196518: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x196518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_19651c:
    // 0x19651c: 0x8eb00024  lw          $s0, 0x24($s5)
    ctx->pc = 0x19651cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_196520:
    // 0x196520: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x196520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_196524:
    // 0x196524: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x196524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
label_196528:
    // 0x196528: 0xc05fec2  jal         func_17FB08
label_19652c:
    if (ctx->pc == 0x19652Cu) {
        ctx->pc = 0x19652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196528u;
        // 0x19652c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196530u;
        goto label_196530;
    }
    ctx->pc = 0x196528u;
    SET_GPR_U32(ctx, 31, 0x196530u);
    ctx->pc = 0x19652Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196528u;
    // 0x19652c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB08u, 0x196528u, 0x196530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196530u;
label_196530:
    // 0x196530: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x196530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_196534:
    // 0x196534: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x196534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_196538:
    // 0x196538: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x196538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_19653c:
    // 0x19653c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x19653cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_196540:
    // 0x196540: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196544:
    // 0x196544: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x196544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_196548:
    // 0x196548: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x196548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
label_19654c:
    // 0x19654c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19654cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_196550:
    // 0x196550: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x196550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_196554:
    // 0x196554: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x196554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_196558:
    // 0x196558: 0x448024  and         $s0, $v0, $a0
    ctx->pc = 0x196558u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_19655c:
    // 0x19655c: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_196560:
    if (ctx->pc == 0x196560u) {
        ctx->pc = 0x196560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19655Cu;
        // 0x196560: 0x102900  sll         $a1, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196564u;
        goto label_196564;
    }
    ctx->pc = 0x19655Cu;
    {
        const bool branch_taken_0x19655c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x196560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19655Cu;
        // 0x196560: 0x102900  sll         $a1, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19655c) {
            ctx->pc = 0x196568u;
            goto label_196568;
        }
    }
    ctx->pc = 0x196564u;
label_196564:
    // 0x196564: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x196564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_196568:
    // 0x196568: 0xc068086  jal         func_1A0218
label_19656c:
    if (ctx->pc == 0x19656Cu) {
        ctx->pc = 0x19656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196568u;
        // 0x19656c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196570u;
        goto label_196570;
    }
    ctx->pc = 0x196568u;
    SET_GPR_U32(ctx, 31, 0x196570u);
    ctx->pc = 0x19656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196568u;
    // 0x19656c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x196568u, 0x196570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196570u;
label_196570:
    // 0x196570: 0x1040ff71  beqz        $v0, . + 4 + (-0x8F << 2)
label_196574:
    if (ctx->pc == 0x196574u) {
        ctx->pc = 0x196574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196570u;
        // 0x196574: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196578u;
        goto label_196578;
    }
    ctx->pc = 0x196570u;
    {
        const bool branch_taken_0x196570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196570u;
        // 0x196574: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196570) {
            ctx->pc = 0x196338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196338;
        }
    }
    ctx->pc = 0x196578u;
label_196578:
    // 0x196578: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19657c:
    // 0x19657c: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x19657cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
label_196580:
    // 0x196580: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x196580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_196584:
    // 0x196584: 0xc065dcc  jal         func_197730
label_196588:
    if (ctx->pc == 0x196588u) {
        ctx->pc = 0x196588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196584u;
        // 0x196588: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19658Cu;
        goto label_19658c;
    }
    ctx->pc = 0x196584u;
    SET_GPR_U32(ctx, 31, 0x19658Cu);
    ctx->pc = 0x196588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196584u;
    // 0x196588: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197730u, 0x196584u, 0x19658Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19658Cu;
label_19658c:
    // 0x19658c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x19658cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_196590:
    // 0x196590: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_196594:
    if (ctx->pc == 0x196594u) {
        ctx->pc = 0x196594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196590u;
        // 0x196594: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196598u;
        goto label_196598;
    }
    ctx->pc = 0x196590u;
    {
        const bool branch_taken_0x196590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196590) {
            ctx->pc = 0x196594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196590u;
            // 0x196594: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1965B0u;
            goto label_1965b0;
        }
    }
    ctx->pc = 0x196598u;
label_196598:
    // 0x196598: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x196598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_19659c:
    // 0x19659c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19659cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1965a0:
    // 0x1965a0: 0x24a58338  addiu       $a1, $a1, -0x7CC8
    ctx->pc = 0x1965a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935352));
label_1965a4:
    // 0x1965a4: 0xc068186  jal         func_1A0618
label_1965a8:
    if (ctx->pc == 0x1965A8u) {
        ctx->pc = 0x1965A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1965A4u;
        // 0x1965a8: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1965ACu;
        goto label_1965ac;
    }
    ctx->pc = 0x1965A4u;
    SET_GPR_U32(ctx, 31, 0x1965ACu);
    ctx->pc = 0x1965A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1965A4u;
    // 0x1965a8: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1965A4u, 0x1965ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1965ACu;
label_1965ac:
    // 0x1965ac: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1965acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1965b0:
    // 0x1965b0: 0x2f6102a  slt         $v0, $s7, $s6
    ctx->pc = 0x1965b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_1965b4:
    // 0x1965b4: 0x5440ff6c  bnel        $v0, $zero, . + 4 + (-0x94 << 2)
label_1965b8:
    if (ctx->pc == 0x1965B8u) {
        ctx->pc = 0x1965B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1965B4u;
        // 0x1965b8: 0x8e8301b4  lw          $v1, 0x1B4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1965BCu;
        goto label_1965bc;
    }
    ctx->pc = 0x1965B4u;
    {
        const bool branch_taken_0x1965b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1965b4) {
            ctx->pc = 0x1965B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1965B4u;
            // 0x1965b8: 0x8e8301b4  lw          $v1, 0x1B4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196368;
        }
    }
    ctx->pc = 0x1965BCu;
label_1965bc:
    // 0x1965bc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1965bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1965c0:
    // 0x1965c0: 0x1ac00023  blez        $s6, . + 4 + (0x23 << 2)
label_1965c4:
    if (ctx->pc == 0x1965C4u) {
        ctx->pc = 0x1965C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1965C0u;
        // 0x1965c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1965C8u;
        goto label_1965c8;
    }
    ctx->pc = 0x1965C0u;
    {
        const bool branch_taken_0x1965c0 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x1965C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1965C0u;
        // 0x1965c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1965c0) {
            ctx->pc = 0x196650u;
            goto label_196650;
        }
    }
    ctx->pc = 0x1965C8u;
label_1965c8:
    // 0x1965c8: 0x8e8501b4  lw          $a1, 0x1B4($s4)
    ctx->pc = 0x1965c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
label_1965cc:
    // 0x1965cc: 0x268600d0  addiu       $a2, $s4, 0xD0
    ctx->pc = 0x1965ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
label_1965d0:
    // 0x1965d0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1965d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1965d4:
    // 0x1965d4: 0x1000000c  b           . + 4 + (0xC << 2)
label_1965d8:
    if (ctx->pc == 0x1965D8u) {
        ctx->pc = 0x1965D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1965D4u;
        // 0x1965d8: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1965DCu;
        goto label_1965dc;
    }
    ctx->pc = 0x1965D4u;
    {
        const bool branch_taken_0x1965d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1965D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1965D4u;
        // 0x1965d8: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1965d4) {
            ctx->pc = 0x196608u;
            goto label_196608;
        }
    }
    ctx->pc = 0x1965DCu;
label_1965dc:
    // 0x1965dc: 0x0  nop
    ctx->pc = 0x1965dcu;
    // NOP
label_1965e0:
    // 0x1965e0: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1965e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1965e4:
    // 0x1965e4: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x1965e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_1965e8:
    // 0x1965e8: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x1965e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_1965ec:
    // 0x1965ec: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x1965ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_1965f0:
    // 0x1965f0: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1965f0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_1965f4:
    // 0x1965f4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1965f4u;
    // VWAITQ (Q already resolved in this runtime)
label_1965f8:
    // 0x1965f8: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x1965f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_1965fc:
    // 0x1965fc: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x1965fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
label_196600:
    // 0x196600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x196600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_196604:
    // 0x196604: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x196604u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_196608:
    // 0x196608: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x196608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_19660c:
    // 0x19660c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_196610:
    if (ctx->pc == 0x196610u) {
        ctx->pc = 0x196610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19660Cu;
        // 0x196610: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196614u;
        goto label_196614;
    }
    ctx->pc = 0x19660Cu;
    {
        const bool branch_taken_0x19660c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19660Cu;
        // 0x196610: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19660c) {
            ctx->pc = 0x196628u;
            goto label_196628;
        }
    }
    ctx->pc = 0x196614u;
label_196614:
    // 0x196614: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x196614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
label_196618:
    // 0x196618: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x196618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_19661c:
    // 0x19661c: 0x10000003  b           . + 4 + (0x3 << 2)
label_196620:
    if (ctx->pc == 0x196620u) {
        ctx->pc = 0x196620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19661Cu;
        // 0x196620: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196624u;
        goto label_196624;
    }
    ctx->pc = 0x19661Cu;
    {
        const bool branch_taken_0x19661c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19661Cu;
        // 0x196620: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19661c) {
            ctx->pc = 0x19662Cu;
            goto label_19662c;
        }
    }
    ctx->pc = 0x196624u;
label_196624:
    // 0x196624: 0x0  nop
    ctx->pc = 0x196624u;
    // NOP
label_196628:
    // 0x196628: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x196628u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19662c:
    // 0x19662c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_196630:
    if (ctx->pc == 0x196630u) {
        ctx->pc = 0x196634u;
        goto label_196634;
    }
    ctx->pc = 0x19662Cu;
    {
        const bool branch_taken_0x19662c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19662c) {
            ctx->pc = 0x1965E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1965e0;
        }
    }
    ctx->pc = 0x196634u;
label_196634:
    // 0x196634: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x196634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_196638:
    // 0x196638: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x196638u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_19663c:
    // 0x19663c: 0x460010a8  max.s       $f2, $f2, $f0
    ctx->pc = 0x19663cu;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[0]);
label_196640:
    // 0x196640: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x196640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_196644:
    // 0x196644: 0xf6102a  slt         $v0, $a3, $s6
    ctx->pc = 0x196644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_196648:
    // 0x196648: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_19664c:
    if (ctx->pc == 0x19664Cu) {
        ctx->pc = 0x19664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196648u;
        // 0x19664c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196650u;
        goto label_196650;
    }
    ctx->pc = 0x196648u;
    {
        const bool branch_taken_0x196648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196648u;
        // 0x19664c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196648) {
            ctx->pc = 0x1965D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1965d0;
        }
    }
    ctx->pc = 0x196650u;
label_196650:
    // 0x196650: 0xe6620190  swc1        $f2, 0x190($s3)
    ctx->pc = 0x196650u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 400), bits); }
label_196654:
    // 0x196654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x196654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196658:
    // 0x196658: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x196658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19665c:
    // 0x19665c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19665cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_196660:
    // 0x196660: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x196660u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_196664:
    // 0x196664: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x196664u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_196668:
    // 0x196668: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x196668u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_19666c:
    // 0x19666c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x19666cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_196670:
    // 0x196670: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x196670u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_196674:
    // 0x196674: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x196674u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_196678:
    // 0x196678: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x196678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_19667c:
    // 0x19667c: 0x3e00008  jr          $ra
label_196680:
    if (ctx->pc == 0x196680u) {
        ctx->pc = 0x196680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19667Cu;
        // 0x196680: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196684u;
        goto label_fallthrough_0x19667c;
    }
    ctx->pc = 0x19667Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19667Cu;
        // 0x196680: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19667Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19667c:
    ctx->pc = 0x196684u;
}
