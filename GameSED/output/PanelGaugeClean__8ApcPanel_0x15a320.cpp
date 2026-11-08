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

// Function: PanelGaugeClean__8ApcPanel
// Address: 0x15a320 - 0x15a82c
void PanelGaugeClean__8ApcPanel_0x15a320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PanelGaugeClean__8ApcPanel_0x15a320");
#endif

    switch (ctx->pc) {
        case 0x15a320u: goto label_15a320;
        case 0x15a324u: goto label_15a324;
        case 0x15a328u: goto label_15a328;
        case 0x15a32cu: goto label_15a32c;
        case 0x15a330u: goto label_15a330;
        case 0x15a334u: goto label_15a334;
        case 0x15a338u: goto label_15a338;
        case 0x15a33cu: goto label_15a33c;
        case 0x15a340u: goto label_15a340;
        case 0x15a344u: goto label_15a344;
        case 0x15a348u: goto label_15a348;
        case 0x15a34cu: goto label_15a34c;
        case 0x15a350u: goto label_15a350;
        case 0x15a354u: goto label_15a354;
        case 0x15a358u: goto label_15a358;
        case 0x15a35cu: goto label_15a35c;
        case 0x15a360u: goto label_15a360;
        case 0x15a364u: goto label_15a364;
        case 0x15a368u: goto label_15a368;
        case 0x15a36cu: goto label_15a36c;
        case 0x15a370u: goto label_15a370;
        case 0x15a374u: goto label_15a374;
        case 0x15a378u: goto label_15a378;
        case 0x15a37cu: goto label_15a37c;
        case 0x15a380u: goto label_15a380;
        case 0x15a384u: goto label_15a384;
        case 0x15a388u: goto label_15a388;
        case 0x15a38cu: goto label_15a38c;
        case 0x15a390u: goto label_15a390;
        case 0x15a394u: goto label_15a394;
        case 0x15a398u: goto label_15a398;
        case 0x15a39cu: goto label_15a39c;
        case 0x15a3a0u: goto label_15a3a0;
        case 0x15a3a4u: goto label_15a3a4;
        case 0x15a3a8u: goto label_15a3a8;
        case 0x15a3acu: goto label_15a3ac;
        case 0x15a3b0u: goto label_15a3b0;
        case 0x15a3b4u: goto label_15a3b4;
        case 0x15a3b8u: goto label_15a3b8;
        case 0x15a3bcu: goto label_15a3bc;
        case 0x15a3c0u: goto label_15a3c0;
        case 0x15a3c4u: goto label_15a3c4;
        case 0x15a3c8u: goto label_15a3c8;
        case 0x15a3ccu: goto label_15a3cc;
        case 0x15a3d0u: goto label_15a3d0;
        case 0x15a3d4u: goto label_15a3d4;
        case 0x15a3d8u: goto label_15a3d8;
        case 0x15a3dcu: goto label_15a3dc;
        case 0x15a3e0u: goto label_15a3e0;
        case 0x15a3e4u: goto label_15a3e4;
        case 0x15a3e8u: goto label_15a3e8;
        case 0x15a3ecu: goto label_15a3ec;
        case 0x15a3f0u: goto label_15a3f0;
        case 0x15a3f4u: goto label_15a3f4;
        case 0x15a3f8u: goto label_15a3f8;
        case 0x15a3fcu: goto label_15a3fc;
        case 0x15a400u: goto label_15a400;
        case 0x15a404u: goto label_15a404;
        case 0x15a408u: goto label_15a408;
        case 0x15a40cu: goto label_15a40c;
        case 0x15a410u: goto label_15a410;
        case 0x15a414u: goto label_15a414;
        case 0x15a418u: goto label_15a418;
        case 0x15a41cu: goto label_15a41c;
        case 0x15a420u: goto label_15a420;
        case 0x15a424u: goto label_15a424;
        case 0x15a428u: goto label_15a428;
        case 0x15a42cu: goto label_15a42c;
        case 0x15a430u: goto label_15a430;
        case 0x15a434u: goto label_15a434;
        case 0x15a438u: goto label_15a438;
        case 0x15a43cu: goto label_15a43c;
        case 0x15a440u: goto label_15a440;
        case 0x15a444u: goto label_15a444;
        case 0x15a448u: goto label_15a448;
        case 0x15a44cu: goto label_15a44c;
        case 0x15a450u: goto label_15a450;
        case 0x15a454u: goto label_15a454;
        case 0x15a458u: goto label_15a458;
        case 0x15a45cu: goto label_15a45c;
        case 0x15a460u: goto label_15a460;
        case 0x15a464u: goto label_15a464;
        case 0x15a468u: goto label_15a468;
        case 0x15a46cu: goto label_15a46c;
        case 0x15a470u: goto label_15a470;
        case 0x15a474u: goto label_15a474;
        case 0x15a478u: goto label_15a478;
        case 0x15a47cu: goto label_15a47c;
        case 0x15a480u: goto label_15a480;
        case 0x15a484u: goto label_15a484;
        case 0x15a488u: goto label_15a488;
        case 0x15a48cu: goto label_15a48c;
        case 0x15a490u: goto label_15a490;
        case 0x15a494u: goto label_15a494;
        case 0x15a498u: goto label_15a498;
        case 0x15a49cu: goto label_15a49c;
        case 0x15a4a0u: goto label_15a4a0;
        case 0x15a4a4u: goto label_15a4a4;
        case 0x15a4a8u: goto label_15a4a8;
        case 0x15a4acu: goto label_15a4ac;
        case 0x15a4b0u: goto label_15a4b0;
        case 0x15a4b4u: goto label_15a4b4;
        case 0x15a4b8u: goto label_15a4b8;
        case 0x15a4bcu: goto label_15a4bc;
        case 0x15a4c0u: goto label_15a4c0;
        case 0x15a4c4u: goto label_15a4c4;
        case 0x15a4c8u: goto label_15a4c8;
        case 0x15a4ccu: goto label_15a4cc;
        case 0x15a4d0u: goto label_15a4d0;
        case 0x15a4d4u: goto label_15a4d4;
        case 0x15a4d8u: goto label_15a4d8;
        case 0x15a4dcu: goto label_15a4dc;
        case 0x15a4e0u: goto label_15a4e0;
        case 0x15a4e4u: goto label_15a4e4;
        case 0x15a4e8u: goto label_15a4e8;
        case 0x15a4ecu: goto label_15a4ec;
        case 0x15a4f0u: goto label_15a4f0;
        case 0x15a4f4u: goto label_15a4f4;
        case 0x15a4f8u: goto label_15a4f8;
        case 0x15a4fcu: goto label_15a4fc;
        case 0x15a500u: goto label_15a500;
        case 0x15a504u: goto label_15a504;
        case 0x15a508u: goto label_15a508;
        case 0x15a50cu: goto label_15a50c;
        case 0x15a510u: goto label_15a510;
        case 0x15a514u: goto label_15a514;
        case 0x15a518u: goto label_15a518;
        case 0x15a51cu: goto label_15a51c;
        case 0x15a520u: goto label_15a520;
        case 0x15a524u: goto label_15a524;
        case 0x15a528u: goto label_15a528;
        case 0x15a52cu: goto label_15a52c;
        case 0x15a530u: goto label_15a530;
        case 0x15a534u: goto label_15a534;
        case 0x15a538u: goto label_15a538;
        case 0x15a53cu: goto label_15a53c;
        case 0x15a540u: goto label_15a540;
        case 0x15a544u: goto label_15a544;
        case 0x15a548u: goto label_15a548;
        case 0x15a54cu: goto label_15a54c;
        case 0x15a550u: goto label_15a550;
        case 0x15a554u: goto label_15a554;
        case 0x15a558u: goto label_15a558;
        case 0x15a55cu: goto label_15a55c;
        case 0x15a560u: goto label_15a560;
        case 0x15a564u: goto label_15a564;
        case 0x15a568u: goto label_15a568;
        case 0x15a56cu: goto label_15a56c;
        case 0x15a570u: goto label_15a570;
        case 0x15a574u: goto label_15a574;
        case 0x15a578u: goto label_15a578;
        case 0x15a57cu: goto label_15a57c;
        case 0x15a580u: goto label_15a580;
        case 0x15a584u: goto label_15a584;
        case 0x15a588u: goto label_15a588;
        case 0x15a58cu: goto label_15a58c;
        case 0x15a590u: goto label_15a590;
        case 0x15a594u: goto label_15a594;
        case 0x15a598u: goto label_15a598;
        case 0x15a59cu: goto label_15a59c;
        case 0x15a5a0u: goto label_15a5a0;
        case 0x15a5a4u: goto label_15a5a4;
        case 0x15a5a8u: goto label_15a5a8;
        case 0x15a5acu: goto label_15a5ac;
        case 0x15a5b0u: goto label_15a5b0;
        case 0x15a5b4u: goto label_15a5b4;
        case 0x15a5b8u: goto label_15a5b8;
        case 0x15a5bcu: goto label_15a5bc;
        case 0x15a5c0u: goto label_15a5c0;
        case 0x15a5c4u: goto label_15a5c4;
        case 0x15a5c8u: goto label_15a5c8;
        case 0x15a5ccu: goto label_15a5cc;
        case 0x15a5d0u: goto label_15a5d0;
        case 0x15a5d4u: goto label_15a5d4;
        case 0x15a5d8u: goto label_15a5d8;
        case 0x15a5dcu: goto label_15a5dc;
        case 0x15a5e0u: goto label_15a5e0;
        case 0x15a5e4u: goto label_15a5e4;
        case 0x15a5e8u: goto label_15a5e8;
        case 0x15a5ecu: goto label_15a5ec;
        case 0x15a5f0u: goto label_15a5f0;
        case 0x15a5f4u: goto label_15a5f4;
        case 0x15a5f8u: goto label_15a5f8;
        case 0x15a5fcu: goto label_15a5fc;
        case 0x15a600u: goto label_15a600;
        case 0x15a604u: goto label_15a604;
        case 0x15a608u: goto label_15a608;
        case 0x15a60cu: goto label_15a60c;
        case 0x15a610u: goto label_15a610;
        case 0x15a614u: goto label_15a614;
        case 0x15a618u: goto label_15a618;
        case 0x15a61cu: goto label_15a61c;
        case 0x15a620u: goto label_15a620;
        case 0x15a624u: goto label_15a624;
        case 0x15a628u: goto label_15a628;
        case 0x15a62cu: goto label_15a62c;
        case 0x15a630u: goto label_15a630;
        case 0x15a634u: goto label_15a634;
        case 0x15a638u: goto label_15a638;
        case 0x15a63cu: goto label_15a63c;
        case 0x15a640u: goto label_15a640;
        case 0x15a644u: goto label_15a644;
        case 0x15a648u: goto label_15a648;
        case 0x15a64cu: goto label_15a64c;
        case 0x15a650u: goto label_15a650;
        case 0x15a654u: goto label_15a654;
        case 0x15a658u: goto label_15a658;
        case 0x15a65cu: goto label_15a65c;
        case 0x15a660u: goto label_15a660;
        case 0x15a664u: goto label_15a664;
        case 0x15a668u: goto label_15a668;
        case 0x15a66cu: goto label_15a66c;
        case 0x15a670u: goto label_15a670;
        case 0x15a674u: goto label_15a674;
        case 0x15a678u: goto label_15a678;
        case 0x15a67cu: goto label_15a67c;
        case 0x15a680u: goto label_15a680;
        case 0x15a684u: goto label_15a684;
        case 0x15a688u: goto label_15a688;
        case 0x15a68cu: goto label_15a68c;
        case 0x15a690u: goto label_15a690;
        case 0x15a694u: goto label_15a694;
        case 0x15a698u: goto label_15a698;
        case 0x15a69cu: goto label_15a69c;
        case 0x15a6a0u: goto label_15a6a0;
        case 0x15a6a4u: goto label_15a6a4;
        case 0x15a6a8u: goto label_15a6a8;
        case 0x15a6acu: goto label_15a6ac;
        case 0x15a6b0u: goto label_15a6b0;
        case 0x15a6b4u: goto label_15a6b4;
        case 0x15a6b8u: goto label_15a6b8;
        case 0x15a6bcu: goto label_15a6bc;
        case 0x15a6c0u: goto label_15a6c0;
        case 0x15a6c4u: goto label_15a6c4;
        case 0x15a6c8u: goto label_15a6c8;
        case 0x15a6ccu: goto label_15a6cc;
        case 0x15a6d0u: goto label_15a6d0;
        case 0x15a6d4u: goto label_15a6d4;
        case 0x15a6d8u: goto label_15a6d8;
        case 0x15a6dcu: goto label_15a6dc;
        case 0x15a6e0u: goto label_15a6e0;
        case 0x15a6e4u: goto label_15a6e4;
        case 0x15a6e8u: goto label_15a6e8;
        case 0x15a6ecu: goto label_15a6ec;
        case 0x15a6f0u: goto label_15a6f0;
        case 0x15a6f4u: goto label_15a6f4;
        case 0x15a6f8u: goto label_15a6f8;
        case 0x15a6fcu: goto label_15a6fc;
        case 0x15a700u: goto label_15a700;
        case 0x15a704u: goto label_15a704;
        case 0x15a708u: goto label_15a708;
        case 0x15a70cu: goto label_15a70c;
        case 0x15a710u: goto label_15a710;
        case 0x15a714u: goto label_15a714;
        case 0x15a718u: goto label_15a718;
        case 0x15a71cu: goto label_15a71c;
        case 0x15a720u: goto label_15a720;
        case 0x15a724u: goto label_15a724;
        case 0x15a728u: goto label_15a728;
        case 0x15a72cu: goto label_15a72c;
        case 0x15a730u: goto label_15a730;
        case 0x15a734u: goto label_15a734;
        case 0x15a738u: goto label_15a738;
        case 0x15a73cu: goto label_15a73c;
        case 0x15a740u: goto label_15a740;
        case 0x15a744u: goto label_15a744;
        case 0x15a748u: goto label_15a748;
        case 0x15a74cu: goto label_15a74c;
        case 0x15a750u: goto label_15a750;
        case 0x15a754u: goto label_15a754;
        case 0x15a758u: goto label_15a758;
        case 0x15a75cu: goto label_15a75c;
        case 0x15a760u: goto label_15a760;
        case 0x15a764u: goto label_15a764;
        case 0x15a768u: goto label_15a768;
        case 0x15a76cu: goto label_15a76c;
        case 0x15a770u: goto label_15a770;
        case 0x15a774u: goto label_15a774;
        case 0x15a778u: goto label_15a778;
        case 0x15a77cu: goto label_15a77c;
        case 0x15a780u: goto label_15a780;
        case 0x15a784u: goto label_15a784;
        case 0x15a788u: goto label_15a788;
        case 0x15a78cu: goto label_15a78c;
        case 0x15a790u: goto label_15a790;
        case 0x15a794u: goto label_15a794;
        case 0x15a798u: goto label_15a798;
        case 0x15a79cu: goto label_15a79c;
        case 0x15a7a0u: goto label_15a7a0;
        case 0x15a7a4u: goto label_15a7a4;
        case 0x15a7a8u: goto label_15a7a8;
        case 0x15a7acu: goto label_15a7ac;
        case 0x15a7b0u: goto label_15a7b0;
        case 0x15a7b4u: goto label_15a7b4;
        case 0x15a7b8u: goto label_15a7b8;
        case 0x15a7bcu: goto label_15a7bc;
        case 0x15a7c0u: goto label_15a7c0;
        case 0x15a7c4u: goto label_15a7c4;
        case 0x15a7c8u: goto label_15a7c8;
        case 0x15a7ccu: goto label_15a7cc;
        case 0x15a7d0u: goto label_15a7d0;
        case 0x15a7d4u: goto label_15a7d4;
        case 0x15a7d8u: goto label_15a7d8;
        case 0x15a7dcu: goto label_15a7dc;
        case 0x15a7e0u: goto label_15a7e0;
        case 0x15a7e4u: goto label_15a7e4;
        case 0x15a7e8u: goto label_15a7e8;
        case 0x15a7ecu: goto label_15a7ec;
        case 0x15a7f0u: goto label_15a7f0;
        case 0x15a7f4u: goto label_15a7f4;
        case 0x15a7f8u: goto label_15a7f8;
        case 0x15a7fcu: goto label_15a7fc;
        case 0x15a800u: goto label_15a800;
        case 0x15a804u: goto label_15a804;
        case 0x15a808u: goto label_15a808;
        case 0x15a80cu: goto label_15a80c;
        case 0x15a810u: goto label_15a810;
        case 0x15a814u: goto label_15a814;
        case 0x15a818u: goto label_15a818;
        case 0x15a81cu: goto label_15a81c;
        case 0x15a820u: goto label_15a820;
        case 0x15a824u: goto label_15a824;
        case 0x15a828u: goto label_15a828;
        default: break;
    }

    ctx->pc = 0x15a320u;

label_15a320:
    // 0x15a320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15a320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_15a324:
    // 0x15a324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15a324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15a328:
    // 0x15a328: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15a328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_15a32c:
    // 0x15a32c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15a32cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15a330:
    // 0x15a330: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15a330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_15a334:
    // 0x15a334: 0x26700020  addiu       $s0, $s3, 0x20
    ctx->pc = 0x15a334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_15a338:
    // 0x15a338: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15a338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_15a33c:
    // 0x15a33c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15a33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_15a340:
    // 0x15a340: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15a340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15a344:
    // 0x15a344: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a348:
    if (ctx->pc == 0x15A348u) {
        ctx->pc = 0x15A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A344u;
        // 0x15a348: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A34Cu;
        goto label_15a34c;
    }
    ctx->pc = 0x15A344u;
    {
        const bool branch_taken_0x15a344 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A344u;
        // 0x15a348: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a344) {
            ctx->pc = 0x15A364u;
            goto label_15a364;
        }
    }
    ctx->pc = 0x15A34Cu;
label_15a34c:
    // 0x15a34c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a350:
    // 0x15a350: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a354:
    // 0x15a354: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a354u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a358:
    // 0x15a358: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a35c:
    // 0x15a35c: 0x60f809  jalr        $v1
label_15a360:
    if (ctx->pc == 0x15A360u) {
        ctx->pc = 0x15A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A35Cu;
        // 0x15a360: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A364u;
        goto label_15a364;
    }
    ctx->pc = 0x15A35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A364u);
        ctx->pc = 0x15A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A35Cu;
        // 0x15a360: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A35Cu, 0x15A364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A364u;
label_15a364:
    // 0x15a364: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15a364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15a368:
    // 0x15a368: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a36c:
    if (ctx->pc == 0x15A36Cu) {
        ctx->pc = 0x15A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A368u;
        // 0x15a36c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A370u;
        goto label_15a370;
    }
    ctx->pc = 0x15A368u;
    {
        const bool branch_taken_0x15a368 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A368u;
        // 0x15a36c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a368) {
            ctx->pc = 0x15A388u;
            goto label_15a388;
        }
    }
    ctx->pc = 0x15A370u;
label_15a370:
    // 0x15a370: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a374:
    // 0x15a374: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a378:
    // 0x15a378: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a378u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a37c:
    // 0x15a37c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a380:
    // 0x15a380: 0x60f809  jalr        $v1
label_15a384:
    if (ctx->pc == 0x15A384u) {
        ctx->pc = 0x15A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A380u;
        // 0x15a384: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A388u;
        goto label_15a388;
    }
    ctx->pc = 0x15A380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A388u);
        ctx->pc = 0x15A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A380u;
        // 0x15a384: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A380u, 0x15A388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A388u;
label_15a388:
    // 0x15a388: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15a388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15a38c:
    // 0x15a38c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a390:
    if (ctx->pc == 0x15A390u) {
        ctx->pc = 0x15A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A38Cu;
        // 0x15a390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A394u;
        goto label_15a394;
    }
    ctx->pc = 0x15A38Cu;
    {
        const bool branch_taken_0x15a38c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A38Cu;
        // 0x15a390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a38c) {
            ctx->pc = 0x15A3ACu;
            goto label_15a3ac;
        }
    }
    ctx->pc = 0x15A394u;
label_15a394:
    // 0x15a394: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a398:
    // 0x15a398: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a39c:
    // 0x15a39c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a39cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a3a0:
    // 0x15a3a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a3a4:
    // 0x15a3a4: 0x60f809  jalr        $v1
label_15a3a8:
    if (ctx->pc == 0x15A3A8u) {
        ctx->pc = 0x15A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A3A4u;
        // 0x15a3a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A3ACu;
        goto label_15a3ac;
    }
    ctx->pc = 0x15A3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A3ACu);
        ctx->pc = 0x15A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A3A4u;
        // 0x15a3a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A3A4u, 0x15A3ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A3ACu;
label_15a3ac:
    // 0x15a3ac: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15a3acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15a3b0:
    // 0x15a3b0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a3b4:
    if (ctx->pc == 0x15A3B4u) {
        ctx->pc = 0x15A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A3B0u;
        // 0x15a3b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A3B8u;
        goto label_15a3b8;
    }
    ctx->pc = 0x15A3B0u;
    {
        const bool branch_taken_0x15a3b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A3B0u;
        // 0x15a3b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a3b0) {
            ctx->pc = 0x15A3D0u;
            goto label_15a3d0;
        }
    }
    ctx->pc = 0x15A3B8u;
label_15a3b8:
    // 0x15a3b8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a3bc:
    // 0x15a3bc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a3c0:
    // 0x15a3c0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a3c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a3c4:
    // 0x15a3c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a3c8:
    // 0x15a3c8: 0x60f809  jalr        $v1
label_15a3cc:
    if (ctx->pc == 0x15A3CCu) {
        ctx->pc = 0x15A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A3C8u;
        // 0x15a3cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A3D0u;
        goto label_15a3d0;
    }
    ctx->pc = 0x15A3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A3D0u);
        ctx->pc = 0x15A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A3C8u;
        // 0x15a3cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A3C8u, 0x15A3D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A3D0u;
label_15a3d0:
    // 0x15a3d0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x15a3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_15a3d4:
    // 0x15a3d4: 0x26710060  addiu       $s1, $s3, 0x60
    ctx->pc = 0x15a3d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_15a3d8:
    // 0x15a3d8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15a3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_15a3dc:
    // 0x15a3dc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x15a3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_15a3e0:
    // 0x15a3e0: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x15a3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_15a3e4:
    // 0x15a3e4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x15a3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15a3e8:
    // 0x15a3e8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x15a3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_15a3ec:
    // 0x15a3ec: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x15a3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_15a3f0:
    // 0x15a3f0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x15a3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_15a3f4:
    // 0x15a3f4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x15a3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_15a3f8:
    // 0x15a3f8: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15a3fc:
    if (ctx->pc == 0x15A3FCu) {
        ctx->pc = 0x15A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A3F8u;
        // 0x15a3fc: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A400u;
        goto label_15a400;
    }
    ctx->pc = 0x15A3F8u;
    {
        const bool branch_taken_0x15a3f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A3F8u;
        // 0x15a3fc: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a3f8) {
            ctx->pc = 0x15A41Cu;
            goto label_15a41c;
        }
    }
    ctx->pc = 0x15A400u;
label_15a400:
    // 0x15a400: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a404:
    // 0x15a404: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a408:
    // 0x15a408: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a40c:
    // 0x15a40c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a40cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a410:
    // 0x15a410: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a414:
    // 0x15a414: 0x60f809  jalr        $v1
label_15a418:
    if (ctx->pc == 0x15A418u) {
        ctx->pc = 0x15A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A414u;
        // 0x15a418: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A41Cu;
        goto label_15a41c;
    }
    ctx->pc = 0x15A414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A41Cu);
        ctx->pc = 0x15A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A414u;
        // 0x15a418: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A414u, 0x15A41Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A41Cu;
label_15a41c:
    // 0x15a41c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x15a41cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_15a420:
    // 0x15a420: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a424:
    if (ctx->pc == 0x15A424u) {
        ctx->pc = 0x15A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A420u;
        // 0x15a424: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A428u;
        goto label_15a428;
    }
    ctx->pc = 0x15A420u;
    {
        const bool branch_taken_0x15a420 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A420u;
        // 0x15a424: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a420) {
            ctx->pc = 0x15A440u;
            goto label_15a440;
        }
    }
    ctx->pc = 0x15A428u;
label_15a428:
    // 0x15a428: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a42c:
    // 0x15a42c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a430:
    // 0x15a430: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a434:
    // 0x15a434: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a438:
    // 0x15a438: 0x60f809  jalr        $v1
label_15a43c:
    if (ctx->pc == 0x15A43Cu) {
        ctx->pc = 0x15A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A438u;
        // 0x15a43c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A440u;
        goto label_15a440;
    }
    ctx->pc = 0x15A438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A440u);
        ctx->pc = 0x15A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A438u;
        // 0x15a43c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A438u, 0x15A440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A440u;
label_15a440:
    // 0x15a440: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x15a440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_15a444:
    // 0x15a444: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a448:
    if (ctx->pc == 0x15A448u) {
        ctx->pc = 0x15A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A444u;
        // 0x15a448: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A44Cu;
        goto label_15a44c;
    }
    ctx->pc = 0x15A444u;
    {
        const bool branch_taken_0x15a444 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A444u;
        // 0x15a448: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a444) {
            ctx->pc = 0x15A464u;
            goto label_15a464;
        }
    }
    ctx->pc = 0x15A44Cu;
label_15a44c:
    // 0x15a44c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a450:
    // 0x15a450: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a454:
    // 0x15a454: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a454u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a458:
    // 0x15a458: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a45c:
    // 0x15a45c: 0x60f809  jalr        $v1
label_15a460:
    if (ctx->pc == 0x15A460u) {
        ctx->pc = 0x15A460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A45Cu;
        // 0x15a460: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A464u;
        goto label_15a464;
    }
    ctx->pc = 0x15A45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A464u);
        ctx->pc = 0x15A460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A45Cu;
        // 0x15a460: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A45Cu, 0x15A464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A464u;
label_15a464:
    // 0x15a464: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x15a464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15a468:
    // 0x15a468: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a46c:
    if (ctx->pc == 0x15A46Cu) {
        ctx->pc = 0x15A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A468u;
        // 0x15a46c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A470u;
        goto label_15a470;
    }
    ctx->pc = 0x15A468u;
    {
        const bool branch_taken_0x15a468 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A468u;
        // 0x15a46c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a468) {
            ctx->pc = 0x15A488u;
            goto label_15a488;
        }
    }
    ctx->pc = 0x15A470u;
label_15a470:
    // 0x15a470: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a474:
    // 0x15a474: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a478:
    // 0x15a478: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a478u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a47c:
    // 0x15a47c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a480:
    // 0x15a480: 0x60f809  jalr        $v1
label_15a484:
    if (ctx->pc == 0x15A484u) {
        ctx->pc = 0x15A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A480u;
        // 0x15a484: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A488u;
        goto label_15a488;
    }
    ctx->pc = 0x15A480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A488u);
        ctx->pc = 0x15A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A480u;
        // 0x15a484: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A480u, 0x15A488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A488u;
label_15a488:
    // 0x15a488: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x15a488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_15a48c:
    // 0x15a48c: 0x26700da0  addiu       $s0, $s3, 0xDA0
    ctx->pc = 0x15a48cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 3488));
label_15a490:
    // 0x15a490: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x15a490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_15a494:
    // 0x15a494: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x15a494u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_15a498:
    // 0x15a498: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x15a498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_15a49c:
    // 0x15a49c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x15a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_15a4a0:
    // 0x15a4a0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x15a4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_15a4a4:
    // 0x15a4a4: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x15a4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_15a4a8:
    // 0x15a4a8: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x15a4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_15a4ac:
    // 0x15a4ac: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x15a4acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_15a4b0:
    // 0x15a4b0: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x15a4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_15a4b4:
    // 0x15a4b4: 0x0  nop
    ctx->pc = 0x15a4b4u;
    // NOP
label_15a4b8:
    // 0x15a4b8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15a4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15a4bc:
    // 0x15a4bc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a4c0:
    if (ctx->pc == 0x15A4C0u) {
        ctx->pc = 0x15A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4BCu;
        // 0x15a4c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A4C4u;
        goto label_15a4c4;
    }
    ctx->pc = 0x15A4BCu;
    {
        const bool branch_taken_0x15a4bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4BCu;
        // 0x15a4c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a4bc) {
            ctx->pc = 0x15A4DCu;
            goto label_15a4dc;
        }
    }
    ctx->pc = 0x15A4C4u;
label_15a4c4:
    // 0x15a4c4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a4c8:
    // 0x15a4c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a4cc:
    // 0x15a4cc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a4ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a4d0:
    // 0x15a4d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a4d4:
    // 0x15a4d4: 0x60f809  jalr        $v1
label_15a4d8:
    if (ctx->pc == 0x15A4D8u) {
        ctx->pc = 0x15A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4D4u;
        // 0x15a4d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A4DCu;
        goto label_15a4dc;
    }
    ctx->pc = 0x15A4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A4DCu);
        ctx->pc = 0x15A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4D4u;
        // 0x15a4d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A4D4u, 0x15A4DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A4DCu;
label_15a4dc:
    // 0x15a4dc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15a4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15a4e0:
    // 0x15a4e0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a4e4:
    if (ctx->pc == 0x15A4E4u) {
        ctx->pc = 0x15A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4E0u;
        // 0x15a4e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A4E8u;
        goto label_15a4e8;
    }
    ctx->pc = 0x15A4E0u;
    {
        const bool branch_taken_0x15a4e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4E0u;
        // 0x15a4e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a4e0) {
            ctx->pc = 0x15A500u;
            goto label_15a500;
        }
    }
    ctx->pc = 0x15A4E8u;
label_15a4e8:
    // 0x15a4e8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a4ec:
    // 0x15a4ec: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a4f0:
    // 0x15a4f0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a4f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a4f4:
    // 0x15a4f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a4f8:
    // 0x15a4f8: 0x60f809  jalr        $v1
label_15a4fc:
    if (ctx->pc == 0x15A4FCu) {
        ctx->pc = 0x15A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4F8u;
        // 0x15a4fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A500u;
        goto label_15a500;
    }
    ctx->pc = 0x15A4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A500u);
        ctx->pc = 0x15A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4F8u;
        // 0x15a4fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A4F8u, 0x15A500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A500u;
label_15a500:
    // 0x15a500: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15a500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15a504:
    // 0x15a504: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a508:
    if (ctx->pc == 0x15A508u) {
        ctx->pc = 0x15A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A504u;
        // 0x15a508: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A50Cu;
        goto label_15a50c;
    }
    ctx->pc = 0x15A504u;
    {
        const bool branch_taken_0x15a504 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A504u;
        // 0x15a508: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a504) {
            ctx->pc = 0x15A524u;
            goto label_15a524;
        }
    }
    ctx->pc = 0x15A50Cu;
label_15a50c:
    // 0x15a50c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a510:
    // 0x15a510: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a514:
    // 0x15a514: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a518:
    // 0x15a518: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a51c:
    // 0x15a51c: 0x60f809  jalr        $v1
label_15a520:
    if (ctx->pc == 0x15A520u) {
        ctx->pc = 0x15A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A51Cu;
        // 0x15a520: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A524u;
        goto label_15a524;
    }
    ctx->pc = 0x15A51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A524u);
        ctx->pc = 0x15A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A51Cu;
        // 0x15a520: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A51Cu, 0x15A524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A524u;
label_15a524:
    // 0x15a524: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15a524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15a528:
    // 0x15a528: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a52c:
    if (ctx->pc == 0x15A52Cu) {
        ctx->pc = 0x15A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A528u;
        // 0x15a52c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A530u;
        goto label_15a530;
    }
    ctx->pc = 0x15A528u;
    {
        const bool branch_taken_0x15a528 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A528u;
        // 0x15a52c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a528) {
            ctx->pc = 0x15A548u;
            goto label_15a548;
        }
    }
    ctx->pc = 0x15A530u;
label_15a530:
    // 0x15a530: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a534:
    // 0x15a534: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a538:
    // 0x15a538: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a538u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a53c:
    // 0x15a53c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a540:
    // 0x15a540: 0x60f809  jalr        $v1
label_15a544:
    if (ctx->pc == 0x15A544u) {
        ctx->pc = 0x15A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A540u;
        // 0x15a544: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A548u;
        goto label_15a548;
    }
    ctx->pc = 0x15A540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A548u);
        ctx->pc = 0x15A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A540u;
        // 0x15a544: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A540u, 0x15A548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A548u;
label_15a548:
    // 0x15a548: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x15a548u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_15a54c:
    // 0x15a54c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x15a54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_15a550:
    // 0x15a550: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15a550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_15a554:
    // 0x15a554: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x15a554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_15a558:
    // 0x15a558: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x15a558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_15a55c:
    // 0x15a55c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x15a55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_15a560:
    // 0x15a560: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x15a560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_15a564:
    // 0x15a564: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x15a564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_15a568:
    // 0x15a568: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x15a568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_15a56c:
    // 0x15a56c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x15a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_15a570:
    // 0x15a570: 0x641ffd1  bgez        $s2, . + 4 + (-0x2F << 2)
label_15a574:
    if (ctx->pc == 0x15A574u) {
        ctx->pc = 0x15A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A570u;
        // 0x15a574: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A578u;
        goto label_15a578;
    }
    ctx->pc = 0x15A570u;
    {
        const bool branch_taken_0x15a570 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x15A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A570u;
        // 0x15a574: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a570) {
            ctx->pc = 0x15A4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a4b8;
        }
    }
    ctx->pc = 0x15A578u;
label_15a578:
    // 0x15a578: 0x96620014  lhu         $v0, 0x14($s3)
    ctx->pc = 0x15a578u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
label_15a57c:
    // 0x15a57c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x15a57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_15a580:
    // 0x15a580: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_15a584:
    if (ctx->pc == 0x15A584u) {
        ctx->pc = 0x15A584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A580u;
        // 0x15a584: 0x96620014  lhu         $v0, 0x14($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A588u;
        goto label_15a588;
    }
    ctx->pc = 0x15A580u;
    {
        const bool branch_taken_0x15a580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a580) {
            ctx->pc = 0x15A584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A580u;
            // 0x15a584: 0x96620014  lhu         $v0, 0x14($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A594u;
            goto label_15a594;
        }
    }
    ctx->pc = 0x15A588u;
label_15a588:
    // 0x15a588: 0xc057e64  jal         func_15F990
label_15a58c:
    if (ctx->pc == 0x15A58Cu) {
        ctx->pc = 0x15A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A588u;
        // 0x15a58c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A590u;
        goto label_15a590;
    }
    ctx->pc = 0x15A588u;
    SET_GPR_U32(ctx, 31, 0x15A590u);
    ctx->pc = 0x15A58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A588u;
    // 0x15a58c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F990u, 0x15A588u, 0x15A590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A590u;
label_15a590:
    // 0x15a590: 0x96620014  lhu         $v0, 0x14($s3)
    ctx->pc = 0x15a590u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
label_15a594:
    // 0x15a594: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x15a594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_15a598:
    // 0x15a598: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
label_15a59c:
    if (ctx->pc == 0x15A59Cu) {
        ctx->pc = 0x15A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A598u;
        // 0x15a59c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A5A0u;
        goto label_15a5a0;
    }
    ctx->pc = 0x15A598u;
    {
        const bool branch_taken_0x15a598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A598u;
        // 0x15a59c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a598) {
            ctx->pc = 0x15A814u;
            goto label_15a814;
        }
    }
    ctx->pc = 0x15A5A0u;
label_15a5a0:
    // 0x15a5a0: 0x267000a0  addiu       $s0, $s3, 0xA0
    ctx->pc = 0x15a5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_15a5a4:
    // 0x15a5a4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15a5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15a5a8:
    // 0x15a5a8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a5ac:
    if (ctx->pc == 0x15A5ACu) {
        ctx->pc = 0x15A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5A8u;
        // 0x15a5ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A5B0u;
        goto label_15a5b0;
    }
    ctx->pc = 0x15A5A8u;
    {
        const bool branch_taken_0x15a5a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5A8u;
        // 0x15a5ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a5a8) {
            ctx->pc = 0x15A5C8u;
            goto label_15a5c8;
        }
    }
    ctx->pc = 0x15A5B0u;
label_15a5b0:
    // 0x15a5b0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a5b4:
    // 0x15a5b4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a5b8:
    // 0x15a5b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a5b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a5bc:
    // 0x15a5bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a5c0:
    // 0x15a5c0: 0x60f809  jalr        $v1
label_15a5c4:
    if (ctx->pc == 0x15A5C4u) {
        ctx->pc = 0x15A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5C0u;
        // 0x15a5c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A5C8u;
        goto label_15a5c8;
    }
    ctx->pc = 0x15A5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A5C8u);
        ctx->pc = 0x15A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5C0u;
        // 0x15a5c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A5C0u, 0x15A5C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A5C8u;
label_15a5c8:
    // 0x15a5c8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15a5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15a5cc:
    // 0x15a5cc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a5d0:
    if (ctx->pc == 0x15A5D0u) {
        ctx->pc = 0x15A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5CCu;
        // 0x15a5d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A5D4u;
        goto label_15a5d4;
    }
    ctx->pc = 0x15A5CCu;
    {
        const bool branch_taken_0x15a5cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5CCu;
        // 0x15a5d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a5cc) {
            ctx->pc = 0x15A5ECu;
            goto label_15a5ec;
        }
    }
    ctx->pc = 0x15A5D4u;
label_15a5d4:
    // 0x15a5d4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a5d8:
    // 0x15a5d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a5dc:
    // 0x15a5dc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a5dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a5e0:
    // 0x15a5e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a5e4:
    // 0x15a5e4: 0x60f809  jalr        $v1
label_15a5e8:
    if (ctx->pc == 0x15A5E8u) {
        ctx->pc = 0x15A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5E4u;
        // 0x15a5e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A5ECu;
        goto label_15a5ec;
    }
    ctx->pc = 0x15A5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A5ECu);
        ctx->pc = 0x15A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5E4u;
        // 0x15a5e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A5E4u, 0x15A5ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A5ECu;
label_15a5ec:
    // 0x15a5ec: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15a5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15a5f0:
    // 0x15a5f0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a5f4:
    if (ctx->pc == 0x15A5F4u) {
        ctx->pc = 0x15A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5F0u;
        // 0x15a5f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A5F8u;
        goto label_15a5f8;
    }
    ctx->pc = 0x15A5F0u;
    {
        const bool branch_taken_0x15a5f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5F0u;
        // 0x15a5f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a5f0) {
            ctx->pc = 0x15A610u;
            goto label_15a610;
        }
    }
    ctx->pc = 0x15A5F8u;
label_15a5f8:
    // 0x15a5f8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a5fc:
    // 0x15a5fc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a600:
    // 0x15a600: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a600u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a604:
    // 0x15a604: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a608:
    // 0x15a608: 0x60f809  jalr        $v1
label_15a60c:
    if (ctx->pc == 0x15A60Cu) {
        ctx->pc = 0x15A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A608u;
        // 0x15a60c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A610u;
        goto label_15a610;
    }
    ctx->pc = 0x15A608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A610u);
        ctx->pc = 0x15A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A608u;
        // 0x15a60c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A608u, 0x15A610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A610u;
label_15a610:
    // 0x15a610: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15a610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15a614:
    // 0x15a614: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a618:
    if (ctx->pc == 0x15A618u) {
        ctx->pc = 0x15A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A614u;
        // 0x15a618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A61Cu;
        goto label_15a61c;
    }
    ctx->pc = 0x15A614u;
    {
        const bool branch_taken_0x15a614 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A614u;
        // 0x15a618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a614) {
            ctx->pc = 0x15A634u;
            goto label_15a634;
        }
    }
    ctx->pc = 0x15A61Cu;
label_15a61c:
    // 0x15a61c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a620:
    // 0x15a620: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a624:
    // 0x15a624: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a624u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a628:
    // 0x15a628: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a62c:
    // 0x15a62c: 0x60f809  jalr        $v1
label_15a630:
    if (ctx->pc == 0x15A630u) {
        ctx->pc = 0x15A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A62Cu;
        // 0x15a630: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A634u;
        goto label_15a634;
    }
    ctx->pc = 0x15A62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A634u);
        ctx->pc = 0x15A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A62Cu;
        // 0x15a630: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A62Cu, 0x15A634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A634u;
label_15a634:
    // 0x15a634: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x15a634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_15a638:
    // 0x15a638: 0x267100e0  addiu       $s1, $s3, 0xE0
    ctx->pc = 0x15a638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
label_15a63c:
    // 0x15a63c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15a63cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_15a640:
    // 0x15a640: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x15a640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_15a644:
    // 0x15a644: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x15a644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_15a648:
    // 0x15a648: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x15a648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15a64c:
    // 0x15a64c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x15a64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_15a650:
    // 0x15a650: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x15a650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_15a654:
    // 0x15a654: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x15a654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_15a658:
    // 0x15a658: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x15a658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_15a65c:
    // 0x15a65c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15a660:
    if (ctx->pc == 0x15A660u) {
        ctx->pc = 0x15A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A65Cu;
        // 0x15a660: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A664u;
        goto label_15a664;
    }
    ctx->pc = 0x15A65Cu;
    {
        const bool branch_taken_0x15a65c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A65Cu;
        // 0x15a660: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a65c) {
            ctx->pc = 0x15A680u;
            goto label_15a680;
        }
    }
    ctx->pc = 0x15A664u;
label_15a664:
    // 0x15a664: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a668:
    // 0x15a668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a66c:
    // 0x15a66c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a670:
    // 0x15a670: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a670u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a674:
    // 0x15a674: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a678:
    // 0x15a678: 0x60f809  jalr        $v1
label_15a67c:
    if (ctx->pc == 0x15A67Cu) {
        ctx->pc = 0x15A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A678u;
        // 0x15a67c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A680u;
        goto label_15a680;
    }
    ctx->pc = 0x15A678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A680u);
        ctx->pc = 0x15A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A678u;
        // 0x15a67c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A678u, 0x15A680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A680u;
label_15a680:
    // 0x15a680: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x15a680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_15a684:
    // 0x15a684: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a688:
    if (ctx->pc == 0x15A688u) {
        ctx->pc = 0x15A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A684u;
        // 0x15a688: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A68Cu;
        goto label_15a68c;
    }
    ctx->pc = 0x15A684u;
    {
        const bool branch_taken_0x15a684 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A684u;
        // 0x15a688: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a684) {
            ctx->pc = 0x15A6A4u;
            goto label_15a6a4;
        }
    }
    ctx->pc = 0x15A68Cu;
label_15a68c:
    // 0x15a68c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a690:
    // 0x15a690: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a694:
    // 0x15a694: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a694u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a698:
    // 0x15a698: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a69c:
    // 0x15a69c: 0x60f809  jalr        $v1
label_15a6a0:
    if (ctx->pc == 0x15A6A0u) {
        ctx->pc = 0x15A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A69Cu;
        // 0x15a6a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A6A4u;
        goto label_15a6a4;
    }
    ctx->pc = 0x15A69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A6A4u);
        ctx->pc = 0x15A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A69Cu;
        // 0x15a6a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A69Cu, 0x15A6A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A6A4u;
label_15a6a4:
    // 0x15a6a4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x15a6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_15a6a8:
    // 0x15a6a8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a6ac:
    if (ctx->pc == 0x15A6ACu) {
        ctx->pc = 0x15A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6A8u;
        // 0x15a6ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A6B0u;
        goto label_15a6b0;
    }
    ctx->pc = 0x15A6A8u;
    {
        const bool branch_taken_0x15a6a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6A8u;
        // 0x15a6ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a6a8) {
            ctx->pc = 0x15A6C8u;
            goto label_15a6c8;
        }
    }
    ctx->pc = 0x15A6B0u;
label_15a6b0:
    // 0x15a6b0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a6b4:
    // 0x15a6b4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a6b8:
    // 0x15a6b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a6b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a6bc:
    // 0x15a6bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a6c0:
    // 0x15a6c0: 0x60f809  jalr        $v1
label_15a6c4:
    if (ctx->pc == 0x15A6C4u) {
        ctx->pc = 0x15A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6C0u;
        // 0x15a6c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A6C8u;
        goto label_15a6c8;
    }
    ctx->pc = 0x15A6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A6C8u);
        ctx->pc = 0x15A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6C0u;
        // 0x15a6c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A6C0u, 0x15A6C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A6C8u;
label_15a6c8:
    // 0x15a6c8: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x15a6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15a6cc:
    // 0x15a6cc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a6d0:
    if (ctx->pc == 0x15A6D0u) {
        ctx->pc = 0x15A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6CCu;
        // 0x15a6d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A6D4u;
        goto label_15a6d4;
    }
    ctx->pc = 0x15A6CCu;
    {
        const bool branch_taken_0x15a6cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6CCu;
        // 0x15a6d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a6cc) {
            ctx->pc = 0x15A6ECu;
            goto label_15a6ec;
        }
    }
    ctx->pc = 0x15A6D4u;
label_15a6d4:
    // 0x15a6d4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a6d8:
    // 0x15a6d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a6dc:
    // 0x15a6dc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a6dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a6e0:
    // 0x15a6e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a6e4:
    // 0x15a6e4: 0x60f809  jalr        $v1
label_15a6e8:
    if (ctx->pc == 0x15A6E8u) {
        ctx->pc = 0x15A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6E4u;
        // 0x15a6e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A6ECu;
        goto label_15a6ec;
    }
    ctx->pc = 0x15A6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A6ECu);
        ctx->pc = 0x15A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6E4u;
        // 0x15a6e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A6E4u, 0x15A6ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A6ECu;
label_15a6ec:
    // 0x15a6ec: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x15a6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_15a6f0:
    // 0x15a6f0: 0x26700120  addiu       $s0, $s3, 0x120
    ctx->pc = 0x15a6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
label_15a6f4:
    // 0x15a6f4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x15a6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_15a6f8:
    // 0x15a6f8: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x15a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_15a6fc:
    // 0x15a6fc: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x15a6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_15a700:
    // 0x15a700: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15a700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15a704:
    // 0x15a704: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x15a704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_15a708:
    // 0x15a708: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x15a708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_15a70c:
    // 0x15a70c: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x15a70cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_15a710:
    // 0x15a710: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x15a710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_15a714:
    // 0x15a714: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15a718:
    if (ctx->pc == 0x15A718u) {
        ctx->pc = 0x15A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A714u;
        // 0x15a718: 0xae200034  sw          $zero, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A71Cu;
        goto label_15a71c;
    }
    ctx->pc = 0x15A714u;
    {
        const bool branch_taken_0x15a714 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A714u;
        // 0x15a718: 0xae200034  sw          $zero, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a714) {
            ctx->pc = 0x15A738u;
            goto label_15a738;
        }
    }
    ctx->pc = 0x15A71Cu;
label_15a71c:
    // 0x15a71c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a720:
    // 0x15a720: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a724:
    // 0x15a724: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a728:
    // 0x15a728: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a728u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a72c:
    // 0x15a72c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a730:
    // 0x15a730: 0x60f809  jalr        $v1
label_15a734:
    if (ctx->pc == 0x15A734u) {
        ctx->pc = 0x15A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A730u;
        // 0x15a734: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A738u;
        goto label_15a738;
    }
    ctx->pc = 0x15A730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A738u);
        ctx->pc = 0x15A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A730u;
        // 0x15a734: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A730u, 0x15A738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A738u;
label_15a738:
    // 0x15a738: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15a738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15a73c:
    // 0x15a73c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a740:
    if (ctx->pc == 0x15A740u) {
        ctx->pc = 0x15A740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A73Cu;
        // 0x15a740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A744u;
        goto label_15a744;
    }
    ctx->pc = 0x15A73Cu;
    {
        const bool branch_taken_0x15a73c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A73Cu;
        // 0x15a740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a73c) {
            ctx->pc = 0x15A75Cu;
            goto label_15a75c;
        }
    }
    ctx->pc = 0x15A744u;
label_15a744:
    // 0x15a744: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a748:
    // 0x15a748: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a74c:
    // 0x15a74c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a74cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a750:
    // 0x15a750: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a754:
    // 0x15a754: 0x60f809  jalr        $v1
label_15a758:
    if (ctx->pc == 0x15A758u) {
        ctx->pc = 0x15A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A754u;
        // 0x15a758: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A75Cu;
        goto label_15a75c;
    }
    ctx->pc = 0x15A754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A75Cu);
        ctx->pc = 0x15A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A754u;
        // 0x15a758: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A754u, 0x15A75Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A75Cu;
label_15a75c:
    // 0x15a75c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15a75cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15a760:
    // 0x15a760: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a764:
    if (ctx->pc == 0x15A764u) {
        ctx->pc = 0x15A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A760u;
        // 0x15a764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A768u;
        goto label_15a768;
    }
    ctx->pc = 0x15A760u;
    {
        const bool branch_taken_0x15a760 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A760u;
        // 0x15a764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a760) {
            ctx->pc = 0x15A780u;
            goto label_15a780;
        }
    }
    ctx->pc = 0x15A768u;
label_15a768:
    // 0x15a768: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a76c:
    // 0x15a76c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a770:
    // 0x15a770: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a770u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a774:
    // 0x15a774: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a778:
    // 0x15a778: 0x60f809  jalr        $v1
label_15a77c:
    if (ctx->pc == 0x15A77Cu) {
        ctx->pc = 0x15A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A778u;
        // 0x15a77c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A780u;
        goto label_15a780;
    }
    ctx->pc = 0x15A778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A780u);
        ctx->pc = 0x15A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A778u;
        // 0x15a77c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A778u, 0x15A780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A780u;
label_15a780:
    // 0x15a780: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15a780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15a784:
    // 0x15a784: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a788:
    if (ctx->pc == 0x15A788u) {
        ctx->pc = 0x15A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A784u;
        // 0x15a788: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A78Cu;
        goto label_15a78c;
    }
    ctx->pc = 0x15A784u;
    {
        const bool branch_taken_0x15a784 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A784u;
        // 0x15a788: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a784) {
            ctx->pc = 0x15A7A4u;
            goto label_15a7a4;
        }
    }
    ctx->pc = 0x15A78Cu;
label_15a78c:
    // 0x15a78c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a790:
    // 0x15a790: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a794:
    // 0x15a794: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a794u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a798:
    // 0x15a798: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a79c:
    // 0x15a79c: 0x60f809  jalr        $v1
label_15a7a0:
    if (ctx->pc == 0x15A7A0u) {
        ctx->pc = 0x15A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A79Cu;
        // 0x15a7a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A7A4u;
        goto label_15a7a4;
    }
    ctx->pc = 0x15A79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A7A4u);
        ctx->pc = 0x15A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A79Cu;
        // 0x15a7a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A79Cu, 0x15A7A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A7A4u;
label_15a7a4:
    // 0x15a7a4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x15a7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_15a7a8:
    // 0x15a7a8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15a7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_15a7ac:
    // 0x15a7ac: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x15a7acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_15a7b0:
    // 0x15a7b0: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x15a7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_15a7b4:
    // 0x15a7b4: 0x8e660164  lw          $a2, 0x164($s3)
    ctx->pc = 0x15a7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
label_15a7b8:
    // 0x15a7b8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x15a7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_15a7bc:
    // 0x15a7bc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x15a7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_15a7c0:
    // 0x15a7c0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x15a7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_15a7c4:
    // 0x15a7c4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x15a7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_15a7c8:
    // 0x15a7c8: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15a7cc:
    if (ctx->pc == 0x15A7CCu) {
        ctx->pc = 0x15A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A7C8u;
        // 0x15a7cc: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A7D0u;
        goto label_15a7d0;
    }
    ctx->pc = 0x15A7C8u;
    {
        const bool branch_taken_0x15a7c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A7C8u;
        // 0x15a7cc: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a7c8) {
            ctx->pc = 0x15A7ECu;
            goto label_15a7ec;
        }
    }
    ctx->pc = 0x15A7D0u;
label_15a7d0:
    // 0x15a7d0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a7d4:
    // 0x15a7d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a7d8:
    // 0x15a7d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a7dc:
    // 0x15a7dc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a7dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a7e0:
    // 0x15a7e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a7e4:
    // 0x15a7e4: 0x60f809  jalr        $v1
label_15a7e8:
    if (ctx->pc == 0x15A7E8u) {
        ctx->pc = 0x15A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A7E4u;
        // 0x15a7e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A7ECu;
        goto label_15a7ec;
    }
    ctx->pc = 0x15A7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A7ECu);
        ctx->pc = 0x15A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A7E4u;
        // 0x15a7e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A7E4u, 0x15A7ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A7ECu;
label_15a7ec:
    // 0x15a7ec: 0x8e660168  lw          $a2, 0x168($s3)
    ctx->pc = 0x15a7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 360)));
label_15a7f0:
    // 0x15a7f0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a7f4:
    if (ctx->pc == 0x15A7F4u) {
        ctx->pc = 0x15A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A7F0u;
        // 0x15a7f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A7F8u;
        goto label_15a7f8;
    }
    ctx->pc = 0x15A7F0u;
    {
        const bool branch_taken_0x15a7f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A7F0u;
        // 0x15a7f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a7f0) {
            ctx->pc = 0x15A810u;
            goto label_15a810;
        }
    }
    ctx->pc = 0x15A7F8u;
label_15a7f8:
    // 0x15a7f8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a7fc:
    // 0x15a7fc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a800:
    // 0x15a800: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a804:
    // 0x15a804: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a808:
    // 0x15a808: 0x60f809  jalr        $v1
label_15a80c:
    if (ctx->pc == 0x15A80Cu) {
        ctx->pc = 0x15A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A808u;
        // 0x15a80c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A810u;
        goto label_15a810;
    }
    ctx->pc = 0x15A808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A810u);
        ctx->pc = 0x15A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A808u;
        // 0x15a80c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A808u, 0x15A810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A810u;
label_15a810:
    // 0x15a810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15a810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15a814:
    // 0x15a814: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15a814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15a818:
    // 0x15a818: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15a818u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15a81c:
    // 0x15a81c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x15a81cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15a820:
    // 0x15a820: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15a820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15a824:
    // 0x15a824: 0x3e00008  jr          $ra
label_15a828:
    if (ctx->pc == 0x15A828u) {
        ctx->pc = 0x15A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A824u;
        // 0x15a828: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A82Cu;
        goto label_fallthrough_0x15a824;
    }
    ctx->pc = 0x15A824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A824u;
        // 0x15a828: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15a824:
    ctx->pc = 0x15A82Cu;
}
