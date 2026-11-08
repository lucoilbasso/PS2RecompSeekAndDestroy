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

// Function: FuelGaugeSetup__8ApcPanelPvi
// Address: 0x15b430 - 0x15b8e8
void FuelGaugeSetup__8ApcPanelPvi_0x15b430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FuelGaugeSetup__8ApcPanelPvi_0x15b430");
#endif

    switch (ctx->pc) {
        case 0x15b430u: goto label_15b430;
        case 0x15b434u: goto label_15b434;
        case 0x15b438u: goto label_15b438;
        case 0x15b43cu: goto label_15b43c;
        case 0x15b440u: goto label_15b440;
        case 0x15b444u: goto label_15b444;
        case 0x15b448u: goto label_15b448;
        case 0x15b44cu: goto label_15b44c;
        case 0x15b450u: goto label_15b450;
        case 0x15b454u: goto label_15b454;
        case 0x15b458u: goto label_15b458;
        case 0x15b45cu: goto label_15b45c;
        case 0x15b460u: goto label_15b460;
        case 0x15b464u: goto label_15b464;
        case 0x15b468u: goto label_15b468;
        case 0x15b46cu: goto label_15b46c;
        case 0x15b470u: goto label_15b470;
        case 0x15b474u: goto label_15b474;
        case 0x15b478u: goto label_15b478;
        case 0x15b47cu: goto label_15b47c;
        case 0x15b480u: goto label_15b480;
        case 0x15b484u: goto label_15b484;
        case 0x15b488u: goto label_15b488;
        case 0x15b48cu: goto label_15b48c;
        case 0x15b490u: goto label_15b490;
        case 0x15b494u: goto label_15b494;
        case 0x15b498u: goto label_15b498;
        case 0x15b49cu: goto label_15b49c;
        case 0x15b4a0u: goto label_15b4a0;
        case 0x15b4a4u: goto label_15b4a4;
        case 0x15b4a8u: goto label_15b4a8;
        case 0x15b4acu: goto label_15b4ac;
        case 0x15b4b0u: goto label_15b4b0;
        case 0x15b4b4u: goto label_15b4b4;
        case 0x15b4b8u: goto label_15b4b8;
        case 0x15b4bcu: goto label_15b4bc;
        case 0x15b4c0u: goto label_15b4c0;
        case 0x15b4c4u: goto label_15b4c4;
        case 0x15b4c8u: goto label_15b4c8;
        case 0x15b4ccu: goto label_15b4cc;
        case 0x15b4d0u: goto label_15b4d0;
        case 0x15b4d4u: goto label_15b4d4;
        case 0x15b4d8u: goto label_15b4d8;
        case 0x15b4dcu: goto label_15b4dc;
        case 0x15b4e0u: goto label_15b4e0;
        case 0x15b4e4u: goto label_15b4e4;
        case 0x15b4e8u: goto label_15b4e8;
        case 0x15b4ecu: goto label_15b4ec;
        case 0x15b4f0u: goto label_15b4f0;
        case 0x15b4f4u: goto label_15b4f4;
        case 0x15b4f8u: goto label_15b4f8;
        case 0x15b4fcu: goto label_15b4fc;
        case 0x15b500u: goto label_15b500;
        case 0x15b504u: goto label_15b504;
        case 0x15b508u: goto label_15b508;
        case 0x15b50cu: goto label_15b50c;
        case 0x15b510u: goto label_15b510;
        case 0x15b514u: goto label_15b514;
        case 0x15b518u: goto label_15b518;
        case 0x15b51cu: goto label_15b51c;
        case 0x15b520u: goto label_15b520;
        case 0x15b524u: goto label_15b524;
        case 0x15b528u: goto label_15b528;
        case 0x15b52cu: goto label_15b52c;
        case 0x15b530u: goto label_15b530;
        case 0x15b534u: goto label_15b534;
        case 0x15b538u: goto label_15b538;
        case 0x15b53cu: goto label_15b53c;
        case 0x15b540u: goto label_15b540;
        case 0x15b544u: goto label_15b544;
        case 0x15b548u: goto label_15b548;
        case 0x15b54cu: goto label_15b54c;
        case 0x15b550u: goto label_15b550;
        case 0x15b554u: goto label_15b554;
        case 0x15b558u: goto label_15b558;
        case 0x15b55cu: goto label_15b55c;
        case 0x15b560u: goto label_15b560;
        case 0x15b564u: goto label_15b564;
        case 0x15b568u: goto label_15b568;
        case 0x15b56cu: goto label_15b56c;
        case 0x15b570u: goto label_15b570;
        case 0x15b574u: goto label_15b574;
        case 0x15b578u: goto label_15b578;
        case 0x15b57cu: goto label_15b57c;
        case 0x15b580u: goto label_15b580;
        case 0x15b584u: goto label_15b584;
        case 0x15b588u: goto label_15b588;
        case 0x15b58cu: goto label_15b58c;
        case 0x15b590u: goto label_15b590;
        case 0x15b594u: goto label_15b594;
        case 0x15b598u: goto label_15b598;
        case 0x15b59cu: goto label_15b59c;
        case 0x15b5a0u: goto label_15b5a0;
        case 0x15b5a4u: goto label_15b5a4;
        case 0x15b5a8u: goto label_15b5a8;
        case 0x15b5acu: goto label_15b5ac;
        case 0x15b5b0u: goto label_15b5b0;
        case 0x15b5b4u: goto label_15b5b4;
        case 0x15b5b8u: goto label_15b5b8;
        case 0x15b5bcu: goto label_15b5bc;
        case 0x15b5c0u: goto label_15b5c0;
        case 0x15b5c4u: goto label_15b5c4;
        case 0x15b5c8u: goto label_15b5c8;
        case 0x15b5ccu: goto label_15b5cc;
        case 0x15b5d0u: goto label_15b5d0;
        case 0x15b5d4u: goto label_15b5d4;
        case 0x15b5d8u: goto label_15b5d8;
        case 0x15b5dcu: goto label_15b5dc;
        case 0x15b5e0u: goto label_15b5e0;
        case 0x15b5e4u: goto label_15b5e4;
        case 0x15b5e8u: goto label_15b5e8;
        case 0x15b5ecu: goto label_15b5ec;
        case 0x15b5f0u: goto label_15b5f0;
        case 0x15b5f4u: goto label_15b5f4;
        case 0x15b5f8u: goto label_15b5f8;
        case 0x15b5fcu: goto label_15b5fc;
        case 0x15b600u: goto label_15b600;
        case 0x15b604u: goto label_15b604;
        case 0x15b608u: goto label_15b608;
        case 0x15b60cu: goto label_15b60c;
        case 0x15b610u: goto label_15b610;
        case 0x15b614u: goto label_15b614;
        case 0x15b618u: goto label_15b618;
        case 0x15b61cu: goto label_15b61c;
        case 0x15b620u: goto label_15b620;
        case 0x15b624u: goto label_15b624;
        case 0x15b628u: goto label_15b628;
        case 0x15b62cu: goto label_15b62c;
        case 0x15b630u: goto label_15b630;
        case 0x15b634u: goto label_15b634;
        case 0x15b638u: goto label_15b638;
        case 0x15b63cu: goto label_15b63c;
        case 0x15b640u: goto label_15b640;
        case 0x15b644u: goto label_15b644;
        case 0x15b648u: goto label_15b648;
        case 0x15b64cu: goto label_15b64c;
        case 0x15b650u: goto label_15b650;
        case 0x15b654u: goto label_15b654;
        case 0x15b658u: goto label_15b658;
        case 0x15b65cu: goto label_15b65c;
        case 0x15b660u: goto label_15b660;
        case 0x15b664u: goto label_15b664;
        case 0x15b668u: goto label_15b668;
        case 0x15b66cu: goto label_15b66c;
        case 0x15b670u: goto label_15b670;
        case 0x15b674u: goto label_15b674;
        case 0x15b678u: goto label_15b678;
        case 0x15b67cu: goto label_15b67c;
        case 0x15b680u: goto label_15b680;
        case 0x15b684u: goto label_15b684;
        case 0x15b688u: goto label_15b688;
        case 0x15b68cu: goto label_15b68c;
        case 0x15b690u: goto label_15b690;
        case 0x15b694u: goto label_15b694;
        case 0x15b698u: goto label_15b698;
        case 0x15b69cu: goto label_15b69c;
        case 0x15b6a0u: goto label_15b6a0;
        case 0x15b6a4u: goto label_15b6a4;
        case 0x15b6a8u: goto label_15b6a8;
        case 0x15b6acu: goto label_15b6ac;
        case 0x15b6b0u: goto label_15b6b0;
        case 0x15b6b4u: goto label_15b6b4;
        case 0x15b6b8u: goto label_15b6b8;
        case 0x15b6bcu: goto label_15b6bc;
        case 0x15b6c0u: goto label_15b6c0;
        case 0x15b6c4u: goto label_15b6c4;
        case 0x15b6c8u: goto label_15b6c8;
        case 0x15b6ccu: goto label_15b6cc;
        case 0x15b6d0u: goto label_15b6d0;
        case 0x15b6d4u: goto label_15b6d4;
        case 0x15b6d8u: goto label_15b6d8;
        case 0x15b6dcu: goto label_15b6dc;
        case 0x15b6e0u: goto label_15b6e0;
        case 0x15b6e4u: goto label_15b6e4;
        case 0x15b6e8u: goto label_15b6e8;
        case 0x15b6ecu: goto label_15b6ec;
        case 0x15b6f0u: goto label_15b6f0;
        case 0x15b6f4u: goto label_15b6f4;
        case 0x15b6f8u: goto label_15b6f8;
        case 0x15b6fcu: goto label_15b6fc;
        case 0x15b700u: goto label_15b700;
        case 0x15b704u: goto label_15b704;
        case 0x15b708u: goto label_15b708;
        case 0x15b70cu: goto label_15b70c;
        case 0x15b710u: goto label_15b710;
        case 0x15b714u: goto label_15b714;
        case 0x15b718u: goto label_15b718;
        case 0x15b71cu: goto label_15b71c;
        case 0x15b720u: goto label_15b720;
        case 0x15b724u: goto label_15b724;
        case 0x15b728u: goto label_15b728;
        case 0x15b72cu: goto label_15b72c;
        case 0x15b730u: goto label_15b730;
        case 0x15b734u: goto label_15b734;
        case 0x15b738u: goto label_15b738;
        case 0x15b73cu: goto label_15b73c;
        case 0x15b740u: goto label_15b740;
        case 0x15b744u: goto label_15b744;
        case 0x15b748u: goto label_15b748;
        case 0x15b74cu: goto label_15b74c;
        case 0x15b750u: goto label_15b750;
        case 0x15b754u: goto label_15b754;
        case 0x15b758u: goto label_15b758;
        case 0x15b75cu: goto label_15b75c;
        case 0x15b760u: goto label_15b760;
        case 0x15b764u: goto label_15b764;
        case 0x15b768u: goto label_15b768;
        case 0x15b76cu: goto label_15b76c;
        case 0x15b770u: goto label_15b770;
        case 0x15b774u: goto label_15b774;
        case 0x15b778u: goto label_15b778;
        case 0x15b77cu: goto label_15b77c;
        case 0x15b780u: goto label_15b780;
        case 0x15b784u: goto label_15b784;
        case 0x15b788u: goto label_15b788;
        case 0x15b78cu: goto label_15b78c;
        case 0x15b790u: goto label_15b790;
        case 0x15b794u: goto label_15b794;
        case 0x15b798u: goto label_15b798;
        case 0x15b79cu: goto label_15b79c;
        case 0x15b7a0u: goto label_15b7a0;
        case 0x15b7a4u: goto label_15b7a4;
        case 0x15b7a8u: goto label_15b7a8;
        case 0x15b7acu: goto label_15b7ac;
        case 0x15b7b0u: goto label_15b7b0;
        case 0x15b7b4u: goto label_15b7b4;
        case 0x15b7b8u: goto label_15b7b8;
        case 0x15b7bcu: goto label_15b7bc;
        case 0x15b7c0u: goto label_15b7c0;
        case 0x15b7c4u: goto label_15b7c4;
        case 0x15b7c8u: goto label_15b7c8;
        case 0x15b7ccu: goto label_15b7cc;
        case 0x15b7d0u: goto label_15b7d0;
        case 0x15b7d4u: goto label_15b7d4;
        case 0x15b7d8u: goto label_15b7d8;
        case 0x15b7dcu: goto label_15b7dc;
        case 0x15b7e0u: goto label_15b7e0;
        case 0x15b7e4u: goto label_15b7e4;
        case 0x15b7e8u: goto label_15b7e8;
        case 0x15b7ecu: goto label_15b7ec;
        case 0x15b7f0u: goto label_15b7f0;
        case 0x15b7f4u: goto label_15b7f4;
        case 0x15b7f8u: goto label_15b7f8;
        case 0x15b7fcu: goto label_15b7fc;
        case 0x15b800u: goto label_15b800;
        case 0x15b804u: goto label_15b804;
        case 0x15b808u: goto label_15b808;
        case 0x15b80cu: goto label_15b80c;
        case 0x15b810u: goto label_15b810;
        case 0x15b814u: goto label_15b814;
        case 0x15b818u: goto label_15b818;
        case 0x15b81cu: goto label_15b81c;
        case 0x15b820u: goto label_15b820;
        case 0x15b824u: goto label_15b824;
        case 0x15b828u: goto label_15b828;
        case 0x15b82cu: goto label_15b82c;
        case 0x15b830u: goto label_15b830;
        case 0x15b834u: goto label_15b834;
        case 0x15b838u: goto label_15b838;
        case 0x15b83cu: goto label_15b83c;
        case 0x15b840u: goto label_15b840;
        case 0x15b844u: goto label_15b844;
        case 0x15b848u: goto label_15b848;
        case 0x15b84cu: goto label_15b84c;
        case 0x15b850u: goto label_15b850;
        case 0x15b854u: goto label_15b854;
        case 0x15b858u: goto label_15b858;
        case 0x15b85cu: goto label_15b85c;
        case 0x15b860u: goto label_15b860;
        case 0x15b864u: goto label_15b864;
        case 0x15b868u: goto label_15b868;
        case 0x15b86cu: goto label_15b86c;
        case 0x15b870u: goto label_15b870;
        case 0x15b874u: goto label_15b874;
        case 0x15b878u: goto label_15b878;
        case 0x15b87cu: goto label_15b87c;
        case 0x15b880u: goto label_15b880;
        case 0x15b884u: goto label_15b884;
        case 0x15b888u: goto label_15b888;
        case 0x15b88cu: goto label_15b88c;
        case 0x15b890u: goto label_15b890;
        case 0x15b894u: goto label_15b894;
        case 0x15b898u: goto label_15b898;
        case 0x15b89cu: goto label_15b89c;
        case 0x15b8a0u: goto label_15b8a0;
        case 0x15b8a4u: goto label_15b8a4;
        case 0x15b8a8u: goto label_15b8a8;
        case 0x15b8acu: goto label_15b8ac;
        case 0x15b8b0u: goto label_15b8b0;
        case 0x15b8b4u: goto label_15b8b4;
        case 0x15b8b8u: goto label_15b8b8;
        case 0x15b8bcu: goto label_15b8bc;
        case 0x15b8c0u: goto label_15b8c0;
        case 0x15b8c4u: goto label_15b8c4;
        case 0x15b8c8u: goto label_15b8c8;
        case 0x15b8ccu: goto label_15b8cc;
        case 0x15b8d0u: goto label_15b8d0;
        case 0x15b8d4u: goto label_15b8d4;
        case 0x15b8d8u: goto label_15b8d8;
        case 0x15b8dcu: goto label_15b8dc;
        case 0x15b8e0u: goto label_15b8e0;
        case 0x15b8e4u: goto label_15b8e4;
        default: break;
    }

    ctx->pc = 0x15b430u;

label_15b430:
    // 0x15b430: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15b430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_15b434:
    // 0x15b434: 0x8f888b3c  lw          $t0, -0x74C4($gp)
    ctx->pc = 0x15b434u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937404)));
label_15b438:
    // 0x15b438: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x15b438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_15b43c:
    // 0x15b43c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x15b43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_15b440:
    // 0x15b440: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x15b440u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15b444:
    // 0x15b444: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x15b444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_15b448:
    // 0x15b448: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x15b448u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15b44c:
    // 0x15b44c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x15b44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_15b450:
    // 0x15b450: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x15b450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
label_15b454:
    // 0x15b454: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15b454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_15b458:
    // 0x15b458: 0x2484a358  addiu       $a0, $a0, -0x5CA8
    ctx->pc = 0x15b458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943576));
label_15b45c:
    // 0x15b45c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15b45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_15b460:
    // 0x15b460: 0x26d50060  addiu       $s5, $s6, 0x60
    ctx->pc = 0x15b460u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
label_15b464:
    // 0x15b464: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x15b464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_15b468:
    // 0x15b468: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x15b468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_15b46c:
    // 0x15b46c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x15b46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_15b470:
    // 0x15b470: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x15b470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_15b474:
    // 0x15b474: 0x96c2001e  lhu         $v0, 0x1E($s6)
    ctx->pc = 0x15b474u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 30)));
label_15b478:
    // 0x15b478: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x15b478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_15b47c:
    // 0x15b47c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x15b47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_15b480:
    // 0x15b480: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x15b480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_15b484:
    // 0x15b484: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x15b484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_15b488:
    // 0x15b488: 0x96c70014  lhu         $a3, 0x14($s6)
    ctx->pc = 0x15b488u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 20)));
label_15b48c:
    // 0x15b48c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x15b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15b490:
    // 0x15b490: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x15b490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_15b494:
    // 0x15b494: 0x30e74000  andi        $a3, $a3, 0x4000
    ctx->pc = 0x15b494u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
label_15b498:
    // 0x15b498: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x15b498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_15b49c:
    // 0x15b49c: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x15b49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_15b4a0:
    // 0x15b4a0: 0x10e00105  beqz        $a3, . + 4 + (0x105 << 2)
label_15b4a4:
    if (ctx->pc == 0x15B4A4u) {
        ctx->pc = 0x15B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4A0u;
        // 0x15b4a4: 0x247e0080  addiu       $fp, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B4A8u;
        goto label_15b4a8;
    }
    ctx->pc = 0x15B4A0u;
    {
        const bool branch_taken_0x15b4a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4A0u;
        // 0x15b4a4: 0x247e0080  addiu       $fp, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b4a0) {
            ctx->pc = 0x15B8B8u;
            goto label_15b8b8;
        }
    }
    ctx->pc = 0x15B4A8u;
label_15b4a8:
    // 0x15b4a8: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x15b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_15b4ac:
    // 0x15b4ac: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x15b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_15b4b0:
    // 0x15b4b0: 0x2454a2e0  addiu       $s4, $v0, -0x5D20
    ctx->pc = 0x15b4b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943456));
label_15b4b4:
    // 0x15b4b4: 0x8c700024  lw          $s0, 0x24($v1)
    ctx->pc = 0x15b4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15b4b8:
    // 0x15b4b8: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15b4b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15b4bc:
    // 0x15b4bc: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15b4bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15b4c0:
    // 0x15b4c0: 0xc06bd28  jal         func_1AF4A0
label_15b4c4:
    if (ctx->pc == 0x15B4C4u) {
        ctx->pc = 0x15B4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4C0u;
        // 0x15b4c4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B4C8u;
        goto label_15b4c8;
    }
    ctx->pc = 0x15B4C0u;
    SET_GPR_U32(ctx, 31, 0x15B4C8u);
    ctx->pc = 0x15B4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B4C0u;
    // 0x15b4c4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15B4C0u, 0x15B4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B4C8u;
label_15b4c8:
    // 0x15b4c8: 0xc06bd20  jal         func_1AF480
label_15b4cc:
    if (ctx->pc == 0x15B4CCu) {
        ctx->pc = 0x15B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4C8u;
        // 0x15b4cc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B4D0u;
        goto label_15b4d0;
    }
    ctx->pc = 0x15B4C8u;
    SET_GPR_U32(ctx, 31, 0x15B4D0u);
    ctx->pc = 0x15B4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B4C8u;
    // 0x15b4cc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15B4C8u, 0x15B4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B4D0u;
label_15b4d0:
    // 0x15b4d0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15b4d4:
    // 0x15b4d4: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x15b4d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_15b4d8:
    // 0x15b4d8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15b4dc:
    // 0x15b4dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15b4e0:
    // 0x15b4e0: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15b4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15b4e4:
    // 0x15b4e4: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x15b4e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_15b4e8:
    // 0x15b4e8: 0xc0682b2  jal         func_1A0AC8
label_15b4ec:
    if (ctx->pc == 0x15B4ECu) {
        ctx->pc = 0x15B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4E8u;
        // 0x15b4ec: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B4F0u;
        goto label_15b4f0;
    }
    ctx->pc = 0x15B4E8u;
    SET_GPR_U32(ctx, 31, 0x15B4F0u);
    ctx->pc = 0x15B4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B4E8u;
    // 0x15b4ec: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15B4E8u, 0x15B4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B4F0u;
label_15b4f0:
    // 0x15b4f0: 0xc0682b6  jal         func_1A0AD8
label_15b4f4:
    if (ctx->pc == 0x15B4F4u) {
        ctx->pc = 0x15B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4F0u;
        // 0x15b4f4: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B4F8u;
        goto label_15b4f8;
    }
    ctx->pc = 0x15B4F0u;
    SET_GPR_U32(ctx, 31, 0x15B4F8u);
    ctx->pc = 0x15B4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B4F0u;
    // 0x15b4f4: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15B4F0u, 0x15B4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B4F8u;
label_15b4f8:
    // 0x15b4f8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15b4f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15b4fc:
    // 0x15b4fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15b4fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b500:
    // 0x15b500: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15b500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15b504:
    // 0x15b504: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x15b504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_15b508:
    // 0x15b508: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x15b508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_15b50c:
    // 0x15b50c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x15b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_15b510:
    // 0x15b510: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15b510u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b514:
    // 0x15b514: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15b514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15b518:
    // 0x15b518: 0xc062cb0  jal         func_18B2C0
label_15b51c:
    if (ctx->pc == 0x15B51Cu) {
        ctx->pc = 0x15B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B518u;
        // 0x15b51c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B520u;
        goto label_15b520;
    }
    ctx->pc = 0x15B518u;
    SET_GPR_U32(ctx, 31, 0x15B520u);
    ctx->pc = 0x15B51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B518u;
    // 0x15b51c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15B518u, 0x15B520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B520u;
label_15b520:
    // 0x15b520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15b520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15b524:
    // 0x15b524: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b528:
    // 0x15b528: 0xc06825c  jal         func_1A0970
label_15b52c:
    if (ctx->pc == 0x15B52Cu) {
        ctx->pc = 0x15B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B528u;
        // 0x15b52c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B530u;
        goto label_15b530;
    }
    ctx->pc = 0x15B528u;
    SET_GPR_U32(ctx, 31, 0x15B530u);
    ctx->pc = 0x15B52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B528u;
    // 0x15b52c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15B528u, 0x15B530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B530u;
label_15b530:
    // 0x15b530: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15b530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15b534:
    // 0x15b534: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b538:
    // 0x15b538: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15b538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15b53c:
    // 0x15b53c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b53cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b540:
    // 0x15b540: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b544:
    // 0x15b544: 0x60f809  jalr        $v1
label_15b548:
    if (ctx->pc == 0x15B548u) {
        ctx->pc = 0x15B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B544u;
        // 0x15b548: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B54Cu;
        goto label_15b54c;
    }
    ctx->pc = 0x15B544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B54Cu);
        ctx->pc = 0x15B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B544u;
        // 0x15b548: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B544u, 0x15B54Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B54Cu;
label_15b54c:
    // 0x15b54c: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15b54cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15b550:
    // 0x15b550: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15b554:
    if (ctx->pc == 0x15B554u) {
        ctx->pc = 0x15B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B550u;
        // 0x15b554: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B558u;
        goto label_15b558;
    }
    ctx->pc = 0x15B550u;
    {
        const bool branch_taken_0x15b550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B550u;
        // 0x15b554: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b550) {
            ctx->pc = 0x15B60Cu;
            goto label_15b60c;
        }
    }
    ctx->pc = 0x15B558u;
label_15b558:
    // 0x15b558: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15b558u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15b55c:
    // 0x15b55c: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15b55cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15b560:
    // 0x15b560: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15b560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15b564:
    // 0x15b564: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15b564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15b568:
    // 0x15b568: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15b568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15b56c:
    // 0x15b56c: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15b56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15b570:
    // 0x15b570: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15b570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15b574:
    // 0x15b574: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15b574u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15b578:
    // 0x15b578: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15b578u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15b57c:
    // 0x15b57c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15b580:
    // 0x15b580: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15b580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15b584:
    // 0x15b584: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15b584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15b588:
    // 0x15b588: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15b588u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15b58c:
    // 0x15b58c: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15b58cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15b590:
    // 0x15b590: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b590u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15b594:
    // 0x15b594: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15b594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15b598:
    // 0x15b598: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15b598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15b59c:
    // 0x15b59c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15b59cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15b5a0:
    // 0x15b5a0: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15b5a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15b5a4:
    // 0x15b5a4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15b5a4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15b5a8:
    // 0x15b5a8: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15b5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15b5ac:
    // 0x15b5ac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15b5acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15b5b0:
    // 0x15b5b0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15b5b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15b5b4:
    // 0x15b5b4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15b5b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15b5b8:
    // 0x15b5b8: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15b5b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15b5bc:
    // 0x15b5bc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15b5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15b5c0:
    // 0x15b5c0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15b5c0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15b5c4:
    // 0x15b5c4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15b5c4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15b5c8:
    // 0x15b5c8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15b5c8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15b5cc:
    // 0x15b5cc: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15b5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15b5d0:
    // 0x15b5d0: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15b5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15b5d4:
    // 0x15b5d4: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15b5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15b5d8:
    // 0x15b5d8: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15b5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15b5dc:
    // 0x15b5dc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15b5dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15b5e0:
    // 0x15b5e0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15b5e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15b5e4:
    // 0x15b5e4: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15b5e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15b5e8:
    // 0x15b5e8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15b5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15b5ec:
    // 0x15b5ec: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15b5ecu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15b5f0:
    // 0x15b5f0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15b5f0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15b5f4:
    // 0x15b5f4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15b5f4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15b5f8:
    // 0x15b5f8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15b5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15b5fc:
    // 0x15b5fc: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15b5fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15b600:
    // 0x15b600: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15b600u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15b604:
    // 0x15b604: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15b604u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15b608:
    // 0x15b608: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15b608u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_15b60c:
    // 0x15b60c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15b60cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15b610:
    // 0x15b610: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15b610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15b614:
    // 0x15b614: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15b614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15b618:
    // 0x15b618: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b61c:
    // 0x15b61c: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x15b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15b620:
    // 0x15b620: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x15b620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_15b624:
    // 0x15b624: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15b624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15b628:
    // 0x15b628: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15b628u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15b62c:
    // 0x15b62c: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x15b62cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
label_15b630:
    // 0x15b630: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x15b630u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
label_15b634:
    // 0x15b634: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x15b634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15b638:
    // 0x15b638: 0x40f809  jalr        $v0
label_15b63c:
    if (ctx->pc == 0x15B63Cu) {
        ctx->pc = 0x15B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B638u;
        // 0x15b63c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B640u;
        goto label_15b640;
    }
    ctx->pc = 0x15B638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15B640u);
        ctx->pc = 0x15B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B638u;
        // 0x15b63c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B638u, 0x15B640u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B640u;
label_15b640:
    // 0x15b640: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15b640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15b644:
    // 0x15b644: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15b644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15b648:
    // 0x15b648: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x15b648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15b64c:
    // 0x15b64c: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15b64cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15b650:
    // 0x15b650: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x15b650u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15b654:
    // 0x15b654: 0x3c52821  addu        $a1, $fp, $a1
    ctx->pc = 0x15b654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_15b658:
    // 0x15b658: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15b658u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15b65c:
    // 0x15b65c: 0x26940050  addiu       $s4, $s4, 0x50
    ctx->pc = 0x15b65cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
label_15b660:
    // 0x15b660: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x15b660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_15b664:
    // 0x15b664: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15b664u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15b668:
    // 0x15b668: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x15b668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_15b66c:
    // 0x15b66c: 0xe0f809  jalr        $a3
label_15b670:
    if (ctx->pc == 0x15B670u) {
        ctx->pc = 0x15B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B66Cu;
        // 0x15b670: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B674u;
        goto label_15b674;
    }
    ctx->pc = 0x15B66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x15B674u);
        ctx->pc = 0x15B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B66Cu;
        // 0x15b670: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B66Cu, 0x15B674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B674u;
label_15b674:
    // 0x15b674: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x15b674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_15b678:
    // 0x15b678: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15b678u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15b67c:
    // 0x15b67c: 0x8c510024  lw          $s1, 0x24($v0)
    ctx->pc = 0x15b67cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_15b680:
    // 0x15b680: 0xc06bd28  jal         func_1AF4A0
label_15b684:
    if (ctx->pc == 0x15B684u) {
        ctx->pc = 0x15B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B680u;
        // 0x15b684: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B688u;
        goto label_15b688;
    }
    ctx->pc = 0x15B680u;
    SET_GPR_U32(ctx, 31, 0x15B688u);
    ctx->pc = 0x15B684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B680u;
    // 0x15b684: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15B680u, 0x15B688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B688u;
label_15b688:
    // 0x15b688: 0xc06bd20  jal         func_1AF480
label_15b68c:
    if (ctx->pc == 0x15B68Cu) {
        ctx->pc = 0x15B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B688u;
        // 0x15b68c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B690u;
        goto label_15b690;
    }
    ctx->pc = 0x15B688u;
    SET_GPR_U32(ctx, 31, 0x15B690u);
    ctx->pc = 0x15B68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B688u;
    // 0x15b68c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15B688u, 0x15B690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B690u;
label_15b690:
    // 0x15b690: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15b690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15b694:
    // 0x15b694: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x15b694u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_15b698:
    // 0x15b698: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15b698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15b69c:
    // 0x15b69c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15b69cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15b6a0:
    // 0x15b6a0: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15b6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15b6a4:
    // 0x15b6a4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x15b6a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_15b6a8:
    // 0x15b6a8: 0xc0682b2  jal         func_1A0AC8
label_15b6ac:
    if (ctx->pc == 0x15B6ACu) {
        ctx->pc = 0x15B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6A8u;
        // 0x15b6ac: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B6B0u;
        goto label_15b6b0;
    }
    ctx->pc = 0x15B6A8u;
    SET_GPR_U32(ctx, 31, 0x15B6B0u);
    ctx->pc = 0x15B6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B6A8u;
    // 0x15b6ac: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15B6A8u, 0x15B6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B6B0u;
label_15b6b0:
    // 0x15b6b0: 0xc0682b6  jal         func_1A0AD8
label_15b6b4:
    if (ctx->pc == 0x15B6B4u) {
        ctx->pc = 0x15B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6B0u;
        // 0x15b6b4: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B6B8u;
        goto label_15b6b8;
    }
    ctx->pc = 0x15B6B0u;
    SET_GPR_U32(ctx, 31, 0x15B6B8u);
    ctx->pc = 0x15B6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B6B0u;
    // 0x15b6b4: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15B6B0u, 0x15B6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B6B8u;
label_15b6b8:
    // 0x15b6b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15b6b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15b6bc:
    // 0x15b6bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15b6bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b6c0:
    // 0x15b6c0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15b6c4:
    // 0x15b6c4: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x15b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_15b6c8:
    // 0x15b6c8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15b6c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15b6cc:
    // 0x15b6cc: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x15b6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_15b6d0:
    // 0x15b6d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b6d4:
    // 0x15b6d4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15b6d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15b6d8:
    // 0x15b6d8: 0xc062cb0  jal         func_18B2C0
label_15b6dc:
    if (ctx->pc == 0x15B6DCu) {
        ctx->pc = 0x15B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6D8u;
        // 0x15b6dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B6E0u;
        goto label_15b6e0;
    }
    ctx->pc = 0x15B6D8u;
    SET_GPR_U32(ctx, 31, 0x15B6E0u);
    ctx->pc = 0x15B6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B6D8u;
    // 0x15b6dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15B6D8u, 0x15B6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B6E0u;
label_15b6e0:
    // 0x15b6e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15b6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15b6e4:
    // 0x15b6e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b6e8:
    // 0x15b6e8: 0xc06825c  jal         func_1A0970
label_15b6ec:
    if (ctx->pc == 0x15B6ECu) {
        ctx->pc = 0x15B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6E8u;
        // 0x15b6ec: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B6F0u;
        goto label_15b6f0;
    }
    ctx->pc = 0x15B6E8u;
    SET_GPR_U32(ctx, 31, 0x15B6F0u);
    ctx->pc = 0x15B6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B6E8u;
    // 0x15b6ec: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15B6E8u, 0x15B6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B6F0u;
label_15b6f0:
    // 0x15b6f0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15b6f4:
    // 0x15b6f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b6f8:
    // 0x15b6f8: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15b6fc:
    // 0x15b6fc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b6fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b700:
    // 0x15b700: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b704:
    // 0x15b704: 0x60f809  jalr        $v1
label_15b708:
    if (ctx->pc == 0x15B708u) {
        ctx->pc = 0x15B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B704u;
        // 0x15b708: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B70Cu;
        goto label_15b70c;
    }
    ctx->pc = 0x15B704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B70Cu);
        ctx->pc = 0x15B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B704u;
        // 0x15b708: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B704u, 0x15B70Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B70Cu;
label_15b70c:
    // 0x15b70c: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15b70cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15b710:
    // 0x15b710: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15b714:
    if (ctx->pc == 0x15B714u) {
        ctx->pc = 0x15B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B710u;
        // 0x15b714: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B718u;
        goto label_15b718;
    }
    ctx->pc = 0x15B710u;
    {
        const bool branch_taken_0x15b710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B710u;
        // 0x15b714: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b710) {
            ctx->pc = 0x15B7CCu;
            goto label_15b7cc;
        }
    }
    ctx->pc = 0x15B718u;
label_15b718:
    // 0x15b718: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15b718u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15b71c:
    // 0x15b71c: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15b71cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15b720:
    // 0x15b720: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15b720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15b724:
    // 0x15b724: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15b724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15b728:
    // 0x15b728: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15b728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15b72c:
    // 0x15b72c: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15b72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15b730:
    // 0x15b730: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15b730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15b734:
    // 0x15b734: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15b734u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15b738:
    // 0x15b738: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15b738u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15b73c:
    // 0x15b73c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15b740:
    // 0x15b740: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15b740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15b744:
    // 0x15b744: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15b744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15b748:
    // 0x15b748: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15b748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15b74c:
    // 0x15b74c: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15b74cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15b750:
    // 0x15b750: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b750u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15b754:
    // 0x15b754: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15b754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15b758:
    // 0x15b758: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15b758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15b75c:
    // 0x15b75c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15b75cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15b760:
    // 0x15b760: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15b760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15b764:
    // 0x15b764: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15b764u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15b768:
    // 0x15b768: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15b768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15b76c:
    // 0x15b76c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15b76cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15b770:
    // 0x15b770: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15b770u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15b774:
    // 0x15b774: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15b774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15b778:
    // 0x15b778: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15b778u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15b77c:
    // 0x15b77c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15b77cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15b780:
    // 0x15b780: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15b780u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15b784:
    // 0x15b784: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15b784u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15b788:
    // 0x15b788: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15b788u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15b78c:
    // 0x15b78c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15b78cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15b790:
    // 0x15b790: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15b790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15b794:
    // 0x15b794: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15b794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15b798:
    // 0x15b798: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15b798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15b79c:
    // 0x15b79c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15b79cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15b7a0:
    // 0x15b7a0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15b7a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15b7a4:
    // 0x15b7a4: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15b7a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15b7a8:
    // 0x15b7a8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15b7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15b7ac:
    // 0x15b7ac: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15b7acu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15b7b0:
    // 0x15b7b0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15b7b0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15b7b4:
    // 0x15b7b4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15b7b4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15b7b8:
    // 0x15b7b8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15b7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15b7bc:
    // 0x15b7bc: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15b7bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15b7c0:
    // 0x15b7c0: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15b7c0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15b7c4:
    // 0x15b7c4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15b7c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15b7c8:
    // 0x15b7c8: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15b7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_15b7cc:
    // 0x15b7cc: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15b7ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15b7d0:
    // 0x15b7d0: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x15b7d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15b7d4:
    // 0x15b7d4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15b7d8:
    // 0x15b7d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b7d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b7dc:
    // 0x15b7dc: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x15b7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15b7e0:
    // 0x15b7e0: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x15b7e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_15b7e4:
    // 0x15b7e4: 0x8e870020  lw          $a3, 0x20($s4)
    ctx->pc = 0x15b7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15b7e8:
    // 0x15b7e8: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x15b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_15b7ec:
    // 0x15b7ec: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b7ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b7f0:
    // 0x15b7f0: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x15b7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_15b7f4:
    // 0x15b7f4: 0xae27012c  sw          $a3, 0x12C($s1)
    ctx->pc = 0x15b7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 7));
label_15b7f8:
    // 0x15b7f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b7fc:
    // 0x15b7fc: 0x60f809  jalr        $v1
label_15b800:
    if (ctx->pc == 0x15B800u) {
        ctx->pc = 0x15B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7FCu;
        // 0x15b800: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B804u;
        goto label_15b804;
    }
    ctx->pc = 0x15B7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B804u);
        ctx->pc = 0x15B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7FCu;
        // 0x15b800: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B7FCu, 0x15B804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B804u;
label_15b804:
    // 0x15b804: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15b804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15b808:
    // 0x15b808: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15b808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15b80c:
    // 0x15b80c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x15b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_15b810:
    // 0x15b810: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15b810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15b814:
    // 0x15b814: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b814u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b818:
    // 0x15b818: 0x3c52821  addu        $a1, $fp, $a1
    ctx->pc = 0x15b818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_15b81c:
    // 0x15b81c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b820:
    // 0x15b820: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x15b820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_15b824:
    // 0x15b824: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x15b824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_15b828:
    // 0x15b828: 0x60f809  jalr        $v1
label_15b82c:
    if (ctx->pc == 0x15B82Cu) {
        ctx->pc = 0x15B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B828u;
        // 0x15b82c: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B830u;
        goto label_15b830;
    }
    ctx->pc = 0x15B828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B830u);
        ctx->pc = 0x15B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B828u;
        // 0x15b82c: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B828u, 0x15B830u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B830u;
label_15b830:
    // 0x15b830: 0x8690000c  lh          $s0, 0xC($s4)
    ctx->pc = 0x15b830u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15b834:
    // 0x15b834: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15b834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15b838:
    // 0x15b838: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x15b838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_15b83c:
    // 0x15b83c: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x15b83cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
label_15b840:
    // 0x15b840: 0x24a5a2a8  addiu       $a1, $a1, -0x5D58
    ctx->pc = 0x15b840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943400));
label_15b844:
    // 0x15b844: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x15b844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_15b848:
    // 0x15b848: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b848u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b84c:
    // 0x15b84c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b850:
    // 0x15b850: 0x60f809  jalr        $v1
label_15b854:
    if (ctx->pc == 0x15B854u) {
        ctx->pc = 0x15B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B850u;
        // 0x15b854: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B858u;
        goto label_15b858;
    }
    ctx->pc = 0x15B850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B858u);
        ctx->pc = 0x15B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B850u;
        // 0x15b854: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B850u, 0x15B858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B858u;
label_15b858:
    // 0x15b858: 0xaea00024  sw          $zero, 0x24($s5)
    ctx->pc = 0x15b858u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
label_15b85c:
    // 0x15b85c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15b860:
    // 0x15b860: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x15b860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_15b864:
    // 0x15b864: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x15b864u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
label_15b868:
    // 0x15b868: 0xaeb00014  sw          $s0, 0x14($s5)
    ctx->pc = 0x15b868u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 16));
label_15b86c:
    // 0x15b86c: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
label_15b870:
    if (ctx->pc == 0x15B870u) {
        ctx->pc = 0x15B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B86Cu;
        // 0x15b870: 0xaea30030  sw          $v1, 0x30($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B874u;
        goto label_15b874;
    }
    ctx->pc = 0x15B86Cu;
    {
        const bool branch_taken_0x15b86c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B86Cu;
        // 0x15b870: 0xaea30030  sw          $v1, 0x30($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b86c) {
            ctx->pc = 0x15B898u;
            goto label_15b898;
        }
    }
    ctx->pc = 0x15B874u;
label_15b874:
    // 0x15b874: 0x171043  sra         $v0, $s7, 1
    ctx->pc = 0x15b874u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 23), 1));
label_15b878:
    // 0x15b878: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_15b87c:
    if (ctx->pc == 0x15B87Cu) {
        ctx->pc = 0x15B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B878u;
        // 0x15b87c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B880u;
        goto label_15b880;
    }
    ctx->pc = 0x15B878u;
    {
        const bool branch_taken_0x15b878 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b878) {
            ctx->pc = 0x15B87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15B878u;
            // 0x15b87c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15B880u;
            goto label_15b880;
        }
    }
    ctx->pc = 0x15B880u;
label_15b880:
    // 0x15b880: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15b884:
    // 0x15b884: 0x57001a  div         $zero, $v0, $s7
    ctx->pc = 0x15b884u;
    { int32_t divisor = GPR_S32(ctx, 23);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_15b888:
    // 0x15b888: 0x1012  mflo        $v0
    ctx->pc = 0x15b888u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_15b88c:
    // 0x15b88c: 0x10000003  b           . + 4 + (0x3 << 2)
label_15b890:
    if (ctx->pc == 0x15B890u) {
        ctx->pc = 0x15B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B88Cu;
        // 0x15b890: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B894u;
        goto label_15b894;
    }
    ctx->pc = 0x15B88Cu;
    {
        const bool branch_taken_0x15b88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B88Cu;
        // 0x15b890: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b88c) {
            ctx->pc = 0x15B89Cu;
            goto label_15b89c;
        }
    }
    ctx->pc = 0x15B894u;
label_15b894:
    // 0x15b894: 0x0  nop
    ctx->pc = 0x15b894u;
    // NOP
label_15b898:
    // 0x15b898: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b89c:
    // 0x15b89c: 0x96c20016  lhu         $v0, 0x16($s6)
    ctx->pc = 0x15b89cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 22)));
label_15b8a0:
    // 0x15b8a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15b8a4:
    // 0x15b8a4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15b8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_15b8a8:
    // 0x15b8a8: 0xae460028  sw          $a2, 0x28($s2)
    ctx->pc = 0x15b8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 6));
label_15b8ac:
    // 0x15b8ac: 0xaea30018  sw          $v1, 0x18($s5)
    ctx->pc = 0x15b8acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 3));
label_15b8b0:
    // 0x15b8b0: 0xa6c20016  sh          $v0, 0x16($s6)
    ctx->pc = 0x15b8b0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 22), (uint16_t)GPR_U32(ctx, 2));
label_15b8b4:
    // 0x15b8b4: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x15b8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_15b8b8:
    // 0x15b8b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15b8b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15b8bc:
    // 0x15b8bc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15b8bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15b8c0:
    // 0x15b8c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x15b8c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15b8c4:
    // 0x15b8c4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x15b8c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15b8c8:
    // 0x15b8c8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x15b8c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15b8cc:
    // 0x15b8cc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x15b8ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_15b8d0:
    // 0x15b8d0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x15b8d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15b8d4:
    // 0x15b8d4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x15b8d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_15b8d8:
    // 0x15b8d8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x15b8d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15b8dc:
    // 0x15b8dc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x15b8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_15b8e0:
    // 0x15b8e0: 0x3e00008  jr          $ra
label_15b8e4:
    if (ctx->pc == 0x15B8E4u) {
        ctx->pc = 0x15B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B8E0u;
        // 0x15b8e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B8E8u;
        goto label_fallthrough_0x15b8e0;
    }
    ctx->pc = 0x15B8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B8E0u;
        // 0x15b8e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15b8e0:
    ctx->pc = 0x15B8E8u;
}
