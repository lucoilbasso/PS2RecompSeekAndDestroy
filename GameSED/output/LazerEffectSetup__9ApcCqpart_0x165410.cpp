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

// Function: LazerEffectSetup__9ApcCqpart
// Address: 0x165410 - 0x16564c
void LazerEffectSetup__9ApcCqpart_0x165410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LazerEffectSetup__9ApcCqpart_0x165410");
#endif

    switch (ctx->pc) {
        case 0x165410u: goto label_165410;
        case 0x165414u: goto label_165414;
        case 0x165418u: goto label_165418;
        case 0x16541cu: goto label_16541c;
        case 0x165420u: goto label_165420;
        case 0x165424u: goto label_165424;
        case 0x165428u: goto label_165428;
        case 0x16542cu: goto label_16542c;
        case 0x165430u: goto label_165430;
        case 0x165434u: goto label_165434;
        case 0x165438u: goto label_165438;
        case 0x16543cu: goto label_16543c;
        case 0x165440u: goto label_165440;
        case 0x165444u: goto label_165444;
        case 0x165448u: goto label_165448;
        case 0x16544cu: goto label_16544c;
        case 0x165450u: goto label_165450;
        case 0x165454u: goto label_165454;
        case 0x165458u: goto label_165458;
        case 0x16545cu: goto label_16545c;
        case 0x165460u: goto label_165460;
        case 0x165464u: goto label_165464;
        case 0x165468u: goto label_165468;
        case 0x16546cu: goto label_16546c;
        case 0x165470u: goto label_165470;
        case 0x165474u: goto label_165474;
        case 0x165478u: goto label_165478;
        case 0x16547cu: goto label_16547c;
        case 0x165480u: goto label_165480;
        case 0x165484u: goto label_165484;
        case 0x165488u: goto label_165488;
        case 0x16548cu: goto label_16548c;
        case 0x165490u: goto label_165490;
        case 0x165494u: goto label_165494;
        case 0x165498u: goto label_165498;
        case 0x16549cu: goto label_16549c;
        case 0x1654a0u: goto label_1654a0;
        case 0x1654a4u: goto label_1654a4;
        case 0x1654a8u: goto label_1654a8;
        case 0x1654acu: goto label_1654ac;
        case 0x1654b0u: goto label_1654b0;
        case 0x1654b4u: goto label_1654b4;
        case 0x1654b8u: goto label_1654b8;
        case 0x1654bcu: goto label_1654bc;
        case 0x1654c0u: goto label_1654c0;
        case 0x1654c4u: goto label_1654c4;
        case 0x1654c8u: goto label_1654c8;
        case 0x1654ccu: goto label_1654cc;
        case 0x1654d0u: goto label_1654d0;
        case 0x1654d4u: goto label_1654d4;
        case 0x1654d8u: goto label_1654d8;
        case 0x1654dcu: goto label_1654dc;
        case 0x1654e0u: goto label_1654e0;
        case 0x1654e4u: goto label_1654e4;
        case 0x1654e8u: goto label_1654e8;
        case 0x1654ecu: goto label_1654ec;
        case 0x1654f0u: goto label_1654f0;
        case 0x1654f4u: goto label_1654f4;
        case 0x1654f8u: goto label_1654f8;
        case 0x1654fcu: goto label_1654fc;
        case 0x165500u: goto label_165500;
        case 0x165504u: goto label_165504;
        case 0x165508u: goto label_165508;
        case 0x16550cu: goto label_16550c;
        case 0x165510u: goto label_165510;
        case 0x165514u: goto label_165514;
        case 0x165518u: goto label_165518;
        case 0x16551cu: goto label_16551c;
        case 0x165520u: goto label_165520;
        case 0x165524u: goto label_165524;
        case 0x165528u: goto label_165528;
        case 0x16552cu: goto label_16552c;
        case 0x165530u: goto label_165530;
        case 0x165534u: goto label_165534;
        case 0x165538u: goto label_165538;
        case 0x16553cu: goto label_16553c;
        case 0x165540u: goto label_165540;
        case 0x165544u: goto label_165544;
        case 0x165548u: goto label_165548;
        case 0x16554cu: goto label_16554c;
        case 0x165550u: goto label_165550;
        case 0x165554u: goto label_165554;
        case 0x165558u: goto label_165558;
        case 0x16555cu: goto label_16555c;
        case 0x165560u: goto label_165560;
        case 0x165564u: goto label_165564;
        case 0x165568u: goto label_165568;
        case 0x16556cu: goto label_16556c;
        case 0x165570u: goto label_165570;
        case 0x165574u: goto label_165574;
        case 0x165578u: goto label_165578;
        case 0x16557cu: goto label_16557c;
        case 0x165580u: goto label_165580;
        case 0x165584u: goto label_165584;
        case 0x165588u: goto label_165588;
        case 0x16558cu: goto label_16558c;
        case 0x165590u: goto label_165590;
        case 0x165594u: goto label_165594;
        case 0x165598u: goto label_165598;
        case 0x16559cu: goto label_16559c;
        case 0x1655a0u: goto label_1655a0;
        case 0x1655a4u: goto label_1655a4;
        case 0x1655a8u: goto label_1655a8;
        case 0x1655acu: goto label_1655ac;
        case 0x1655b0u: goto label_1655b0;
        case 0x1655b4u: goto label_1655b4;
        case 0x1655b8u: goto label_1655b8;
        case 0x1655bcu: goto label_1655bc;
        case 0x1655c0u: goto label_1655c0;
        case 0x1655c4u: goto label_1655c4;
        case 0x1655c8u: goto label_1655c8;
        case 0x1655ccu: goto label_1655cc;
        case 0x1655d0u: goto label_1655d0;
        case 0x1655d4u: goto label_1655d4;
        case 0x1655d8u: goto label_1655d8;
        case 0x1655dcu: goto label_1655dc;
        case 0x1655e0u: goto label_1655e0;
        case 0x1655e4u: goto label_1655e4;
        case 0x1655e8u: goto label_1655e8;
        case 0x1655ecu: goto label_1655ec;
        case 0x1655f0u: goto label_1655f0;
        case 0x1655f4u: goto label_1655f4;
        case 0x1655f8u: goto label_1655f8;
        case 0x1655fcu: goto label_1655fc;
        case 0x165600u: goto label_165600;
        case 0x165604u: goto label_165604;
        case 0x165608u: goto label_165608;
        case 0x16560cu: goto label_16560c;
        case 0x165610u: goto label_165610;
        case 0x165614u: goto label_165614;
        case 0x165618u: goto label_165618;
        case 0x16561cu: goto label_16561c;
        case 0x165620u: goto label_165620;
        case 0x165624u: goto label_165624;
        case 0x165628u: goto label_165628;
        case 0x16562cu: goto label_16562c;
        case 0x165630u: goto label_165630;
        case 0x165634u: goto label_165634;
        case 0x165638u: goto label_165638;
        case 0x16563cu: goto label_16563c;
        case 0x165640u: goto label_165640;
        case 0x165644u: goto label_165644;
        case 0x165648u: goto label_165648;
        default: break;
    }

    ctx->pc = 0x165410u;

label_165410:
    // 0x165410: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x165410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_165414:
    // 0x165414: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x165414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165418:
    // 0x165418: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x165418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_16541c:
    // 0x16541c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16541cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_165420:
    // 0x165420: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x165420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_165424:
    // 0x165424: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x165424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_165428:
    // 0x165428: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x165428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_16542c:
    // 0x16542c: 0x8e021268  lw          $v0, 0x1268($s0)
    ctx->pc = 0x16542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4712)));
label_165430:
    // 0x165430: 0x54430081  bnel        $v0, $v1, . + 4 + (0x81 << 2)
label_165434:
    if (ctx->pc == 0x165434u) {
        ctx->pc = 0x165434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165430u;
        // 0x165434: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165438u;
        goto label_165438;
    }
    ctx->pc = 0x165430u;
    {
        const bool branch_taken_0x165430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x165430) {
            ctx->pc = 0x165434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165430u;
            // 0x165434: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165638u;
            goto label_165638;
        }
    }
    ctx->pc = 0x165438u;
label_165438:
    // 0x165438: 0x8e031264  lw          $v1, 0x1264($s0)
    ctx->pc = 0x165438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4708)));
label_16543c:
    // 0x16543c: 0x5060007e  beql        $v1, $zero, . + 4 + (0x7E << 2)
label_165440:
    if (ctx->pc == 0x165440u) {
        ctx->pc = 0x165440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16543Cu;
        // 0x165440: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165444u;
        goto label_165444;
    }
    ctx->pc = 0x16543Cu;
    {
        const bool branch_taken_0x16543c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16543c) {
            ctx->pc = 0x165440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16543Cu;
            // 0x165440: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165638u;
            goto label_165638;
        }
    }
    ctx->pc = 0x165444u;
label_165444:
    // 0x165444: 0x8e021234  lw          $v0, 0x1234($s0)
    ctx->pc = 0x165444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4660)));
label_165448:
    // 0x165448: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_16544c:
    if (ctx->pc == 0x16544Cu) {
        ctx->pc = 0x16544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165448u;
        // 0x16544c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165450u;
        goto label_165450;
    }
    ctx->pc = 0x165448u;
    {
        const bool branch_taken_0x165448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165448u;
        // 0x16544c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165448) {
            ctx->pc = 0x16551Cu;
            goto label_16551c;
        }
    }
    ctx->pc = 0x165450u;
label_165450:
    // 0x165450: 0x8e440690  lw          $a0, 0x690($s2)
    ctx->pc = 0x165450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
label_165454:
    // 0x165454: 0x24910020  addiu       $s1, $a0, 0x20
    ctx->pc = 0x165454u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_165458:
    // 0x165458: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x165458u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_16545c:
    // 0x16545c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x16545cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_165460:
    // 0x165460: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_165464:
    if (ctx->pc == 0x165464u) {
        ctx->pc = 0x165468u;
        goto label_165468;
    }
    ctx->pc = 0x165460u;
    {
        const bool branch_taken_0x165460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165460) {
            ctx->pc = 0x165470u;
            goto label_165470;
        }
    }
    ctx->pc = 0x165468u;
label_165468:
    // 0x165468: 0xc061920  jal         func_186480
label_16546c:
    if (ctx->pc == 0x16546Cu) {
        ctx->pc = 0x165470u;
        goto label_165470;
    }
    ctx->pc = 0x165468u;
    SET_GPR_U32(ctx, 31, 0x165470u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x165468u, 0x165470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165470u;
label_165470:
    // 0x165470: 0xc061422  jal         func_185088
label_165474:
    if (ctx->pc == 0x165474u) {
        ctx->pc = 0x165474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165470u;
        // 0x165474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165478u;
        goto label_165478;
    }
    ctx->pc = 0x165470u;
    SET_GPR_U32(ctx, 31, 0x165478u);
    ctx->pc = 0x165474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165470u;
    // 0x165474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x165470u, 0x165478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165478u;
label_165478:
    // 0x165478: 0x8e430690  lw          $v1, 0x690($s2)
    ctx->pc = 0x165478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
label_16547c:
    // 0x16547c: 0x8c6219f0  lw          $v0, 0x19F0($v1)
    ctx->pc = 0x16547cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6640)));
label_165480:
    // 0x165480: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_165484:
    if (ctx->pc == 0x165484u) {
        ctx->pc = 0x165484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165480u;
        // 0x165484: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165488u;
        goto label_165488;
    }
    ctx->pc = 0x165480u;
    {
        const bool branch_taken_0x165480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165480u;
        // 0x165484: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165480) {
            ctx->pc = 0x1654DCu;
            goto label_1654dc;
        }
    }
    ctx->pc = 0x165488u;
label_165488:
    // 0x165488: 0x8c6419f4  lw          $a0, 0x19F4($v1)
    ctx->pc = 0x165488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6644)));
label_16548c:
    // 0x16548c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x16548cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_165490:
    // 0x165490: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x165490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_165494:
    // 0x165494: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x165494u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_165498:
    // 0x165498: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x165498u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_16549c:
    // 0x16549c: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x16549cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_1654a0:
    // 0x1654a0: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1654a0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_1654a4:
    // 0x1654a4: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x1654a4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_1654a8:
    // 0x1654a8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1654a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1654ac:
    // 0x1654ac: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1654acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1654b0:
    // 0x1654b0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1654b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1654b4:
    // 0x1654b4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1654b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_1654b8:
    // 0x1654b8: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x1654b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
label_1654bc:
    // 0x1654bc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1654bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1654c0:
    // 0x1654c0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1654c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1654c4:
    // 0x1654c4: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x1654c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
label_1654c8:
    // 0x1654c8: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1654c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_1654cc:
    // 0x1654cc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1654ccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_1654d0:
    // 0x1654d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1654d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1654d4:
    // 0x1654d4: 0xc0674a2  jal         func_19D288
label_1654d8:
    if (ctx->pc == 0x1654D8u) {
        ctx->pc = 0x1654D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654D4u;
        // 0x1654d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1654DCu;
        goto label_1654dc;
    }
    ctx->pc = 0x1654D4u;
    SET_GPR_U32(ctx, 31, 0x1654DCu);
    ctx->pc = 0x1654D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1654D4u;
    // 0x1654d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x1654D4u, 0x1654DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1654DCu;
label_1654dc:
    // 0x1654dc: 0x8e021234  lw          $v0, 0x1234($s0)
    ctx->pc = 0x1654dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4660)));
label_1654e0:
    // 0x1654e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1654e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1654e4:
    // 0x1654e4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1654e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1654e8:
    // 0x1654e8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1654e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1654ec:
    // 0x1654ec: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1654ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1654f0:
    // 0x1654f0: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x1654f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_1654f4:
    // 0x1654f4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1654f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1654f8:
    // 0x1654f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1654f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1654fc:
    // 0x1654fc: 0x60f809  jalr        $v1
label_165500:
    if (ctx->pc == 0x165500u) {
        ctx->pc = 0x165500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654FCu;
        // 0x165500: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165504u;
        goto label_165504;
    }
    ctx->pc = 0x1654FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x165504u);
        ctx->pc = 0x165500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654FCu;
        // 0x165500: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1654FCu, 0x165504u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x165504u;
label_165504:
    // 0x165504: 0x8e041234  lw          $a0, 0x1234($s0)
    ctx->pc = 0x165504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4660)));
label_165508:
    // 0x165508: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x165508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16550c:
    // 0x16550c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16550cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165510:
    // 0x165510: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x165510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_165514:
    // 0x165514: 0xc0618da  jal         func_186368
label_165518:
    if (ctx->pc == 0x165518u) {
        ctx->pc = 0x165518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165514u;
        // 0x165518: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16551Cu;
        goto label_16551c;
    }
    ctx->pc = 0x165514u;
    SET_GPR_U32(ctx, 31, 0x16551Cu);
    ctx->pc = 0x165518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165514u;
    // 0x165518: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x165514u, 0x16551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16551Cu;
label_16551c:
    // 0x16551c: 0x8e041258  lw          $a0, 0x1258($s0)
    ctx->pc = 0x16551cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4696)));
label_165520:
    // 0x165520: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_165524:
    if (ctx->pc == 0x165524u) {
        ctx->pc = 0x165524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165520u;
        // 0x165524: 0x8e4301ac  lw          $v1, 0x1AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165528u;
        goto label_165528;
    }
    ctx->pc = 0x165520u;
    {
        const bool branch_taken_0x165520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x165520) {
            ctx->pc = 0x165524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165520u;
            // 0x165524: 0x8e4301ac  lw          $v1, 0x1AC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165548u;
            goto label_165548;
        }
    }
    ctx->pc = 0x165528u;
label_165528:
    // 0x165528: 0x8e420690  lw          $v0, 0x690($s2)
    ctx->pc = 0x165528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
label_16552c:
    // 0x16552c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x16552cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_165530:
    // 0x165530: 0x8c431a64  lw          $v1, 0x1A64($v0)
    ctx->pc = 0x165530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6756)));
label_165534:
    // 0x165534: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x165534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_165538:
    // 0x165538: 0xac830110  sw          $v1, 0x110($a0)
    ctx->pc = 0x165538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 3));
label_16553c:
    // 0x16553c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x16553cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_165540:
    // 0x165540: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x165540u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_165544:
    // 0x165544: 0x8e4301ac  lw          $v1, 0x1AC($s2)
    ctx->pc = 0x165544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
label_165548:
    // 0x165548: 0x5060003b  beql        $v1, $zero, . + 4 + (0x3B << 2)
label_16554c:
    if (ctx->pc == 0x16554Cu) {
        ctx->pc = 0x16554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165548u;
        // 0x16554c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165550u;
        goto label_165550;
    }
    ctx->pc = 0x165548u;
    {
        const bool branch_taken_0x165548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x165548) {
            ctx->pc = 0x16554Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165548u;
            // 0x16554c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165638u;
            goto label_165638;
        }
    }
    ctx->pc = 0x165550u;
label_165550:
    // 0x165550: 0x8e040c04  lw          $a0, 0xC04($s0)
    ctx->pc = 0x165550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_165554:
    // 0x165554: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x165554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_165558:
    // 0x165558: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_16555c:
    if (ctx->pc == 0x16555Cu) {
        ctx->pc = 0x16555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165558u;
        // 0x16555c: 0x94650030  lhu         $a1, 0x30($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165560u;
        goto label_165560;
    }
    ctx->pc = 0x165558u;
    {
        const bool branch_taken_0x165558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165558u;
        // 0x16555c: 0x94650030  lhu         $a1, 0x30($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165558) {
            ctx->pc = 0x1655E0u;
            goto label_1655e0;
        }
    }
    ctx->pc = 0x165560u;
label_165560:
    // 0x165560: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x165560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_165564:
    // 0x165564: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_165568:
    if (ctx->pc == 0x165568u) {
        ctx->pc = 0x165568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165564u;
        // 0x165568: 0x8e031234  lw          $v1, 0x1234($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16556Cu;
        goto label_16556c;
    }
    ctx->pc = 0x165564u;
    {
        const bool branch_taken_0x165564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165564) {
            ctx->pc = 0x165568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165564u;
            // 0x165568: 0x8e031234  lw          $v1, 0x1234($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16559Cu;
            goto label_16559c;
        }
    }
    ctx->pc = 0x16556Cu;
label_16556c:
    // 0x16556c: 0x8e420264  lw          $v0, 0x264($s2)
    ctx->pc = 0x16556cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
label_165570:
    // 0x165570: 0x30428800  andi        $v0, $v0, 0x8800
    ctx->pc = 0x165570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)34816);
label_165574:
    // 0x165574: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_165578:
    if (ctx->pc == 0x165578u) {
        ctx->pc = 0x165578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165574u;
        // 0x165578: 0x8e031234  lw          $v1, 0x1234($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16557Cu;
        goto label_16557c;
    }
    ctx->pc = 0x165574u;
    {
        const bool branch_taken_0x165574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165574) {
            ctx->pc = 0x165578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165574u;
            // 0x165578: 0x8e031234  lw          $v1, 0x1234($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16559Cu;
            goto label_16559c;
        }
    }
    ctx->pc = 0x16557Cu;
label_16557c:
    // 0x16557c: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x16557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_165580:
    // 0x165580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165584:
    // 0x165584: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_165588:
    if (ctx->pc == 0x165588u) {
        ctx->pc = 0x165588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165584u;
        // 0x165588: 0x8e031234  lw          $v1, 0x1234($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16558Cu;
        goto label_16558c;
    }
    ctx->pc = 0x165584u;
    {
        const bool branch_taken_0x165584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x165584) {
            ctx->pc = 0x165588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165584u;
            // 0x165588: 0x8e031234  lw          $v1, 0x1234($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16559Cu;
            goto label_16559c;
        }
    }
    ctx->pc = 0x16558Cu;
label_16558c:
    // 0x16558c: 0x8e42070c  lw          $v0, 0x70C($s2)
    ctx->pc = 0x16558cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1804)));
label_165590:
    // 0x165590: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
label_165594:
    if (ctx->pc == 0x165594u) {
        ctx->pc = 0x165594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165590u;
        // 0x165594: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165598u;
        goto label_165598;
    }
    ctx->pc = 0x165590u;
    {
        const bool branch_taken_0x165590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165590) {
            ctx->pc = 0x165594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165590u;
            // 0x165594: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165638u;
            goto label_165638;
        }
    }
    ctx->pc = 0x165598u;
label_165598:
    // 0x165598: 0x8e031234  lw          $v1, 0x1234($s0)
    ctx->pc = 0x165598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4660)));
label_16559c:
    // 0x16559c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1655a0:
    if (ctx->pc == 0x1655A0u) {
        ctx->pc = 0x1655A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16559Cu;
        // 0x1655a0: 0xae001268  sw          $zero, 0x1268($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4712), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1655A4u;
        goto label_1655a4;
    }
    ctx->pc = 0x16559Cu;
    {
        const bool branch_taken_0x16559c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1655A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16559Cu;
        // 0x1655a0: 0xae001268  sw          $zero, 0x1268($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4712), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16559c) {
            ctx->pc = 0x1655B4u;
            goto label_1655b4;
        }
    }
    ctx->pc = 0x1655A4u;
label_1655a4:
    // 0x1655a4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1655a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1655a8:
    // 0x1655a8: 0xae001234  sw          $zero, 0x1234($s0)
    ctx->pc = 0x1655a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4660), GPR_U32(ctx, 0));
label_1655ac:
    // 0x1655ac: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1655acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1655b0:
    // 0x1655b0: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x1655b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_1655b4:
    // 0x1655b4: 0x8e041258  lw          $a0, 0x1258($s0)
    ctx->pc = 0x1655b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4696)));
label_1655b8:
    // 0x1655b8: 0x5080001f  beql        $a0, $zero, . + 4 + (0x1F << 2)
label_1655bc:
    if (ctx->pc == 0x1655BCu) {
        ctx->pc = 0x1655BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655B8u;
        // 0x1655bc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1655C0u;
        goto label_1655c0;
    }
    ctx->pc = 0x1655B8u;
    {
        const bool branch_taken_0x1655b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1655b8) {
            ctx->pc = 0x1655BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1655B8u;
            // 0x1655bc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165638u;
            goto label_165638;
        }
    }
    ctx->pc = 0x1655C0u;
label_1655c0:
    // 0x1655c0: 0xc04c6c6  jal         func_131B18
label_1655c4:
    if (ctx->pc == 0x1655C4u) {
        ctx->pc = 0x1655C8u;
        goto label_1655c8;
    }
    ctx->pc = 0x1655C0u;
    SET_GPR_U32(ctx, 31, 0x1655C8u);
    ctx->pc = 0x131B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B18u, 0x1655C0u, 0x1655C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1655C8u;
label_1655c8:
    // 0x1655c8: 0x8e031258  lw          $v1, 0x1258($s0)
    ctx->pc = 0x1655c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4696)));
label_1655cc:
    // 0x1655cc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1655ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1655d0:
    // 0x1655d0: 0xae001258  sw          $zero, 0x1258($s0)
    ctx->pc = 0x1655d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4696), GPR_U32(ctx, 0));
label_1655d4:
    // 0x1655d4: 0x10000017  b           . + 4 + (0x17 << 2)
label_1655d8:
    if (ctx->pc == 0x1655D8u) {
        ctx->pc = 0x1655D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655D4u;
        // 0x1655d8: 0xac620134  sw          $v0, 0x134($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1655DCu;
        goto label_1655dc;
    }
    ctx->pc = 0x1655D4u;
    {
        const bool branch_taken_0x1655d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1655D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655D4u;
        // 0x1655d8: 0xac620134  sw          $v0, 0x134($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1655d4) {
            ctx->pc = 0x165634u;
            goto label_165634;
        }
    }
    ctx->pc = 0x1655DCu;
label_1655dc:
    // 0x1655dc: 0x0  nop
    ctx->pc = 0x1655dcu;
    // NOP
label_1655e0:
    // 0x1655e0: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x1655e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
label_1655e4:
    // 0x1655e4: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_1655e8:
    if (ctx->pc == 0x1655E8u) {
        ctx->pc = 0x1655E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655E4u;
        // 0x1655e8: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1655ECu;
        goto label_1655ec;
    }
    ctx->pc = 0x1655E4u;
    {
        const bool branch_taken_0x1655e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1655e4) {
            ctx->pc = 0x1655E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1655E4u;
            // 0x1655e8: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165638u;
            goto label_165638;
        }
    }
    ctx->pc = 0x1655ECu;
label_1655ec:
    // 0x1655ec: 0x8e031234  lw          $v1, 0x1234($s0)
    ctx->pc = 0x1655ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4660)));
label_1655f0:
    // 0x1655f0: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
label_1655f4:
    if (ctx->pc == 0x1655F4u) {
        ctx->pc = 0x1655F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655F0u;
        // 0x1655f4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1655F8u;
        goto label_1655f8;
    }
    ctx->pc = 0x1655F0u;
    {
        const bool branch_taken_0x1655f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1655f0) {
            ctx->pc = 0x1655F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1655F0u;
            // 0x1655f4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165638u;
            goto label_165638;
        }
    }
    ctx->pc = 0x1655F8u;
label_1655f8:
    // 0x1655f8: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x1655f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_1655fc:
    // 0x1655fc: 0x2c42005b  sltiu       $v0, $v0, 0x5B
    ctx->pc = 0x1655fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)91) ? 1 : 0);
label_165600:
    // 0x165600: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_165604:
    if (ctx->pc == 0x165604u) {
        ctx->pc = 0x165604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165600u;
        // 0x165604: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165608u;
        goto label_165608;
    }
    ctx->pc = 0x165600u;
    {
        const bool branch_taken_0x165600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165600) {
            ctx->pc = 0x165604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165600u;
            // 0x165604: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165620u;
            goto label_165620;
        }
    }
    ctx->pc = 0x165608u;
label_165608:
    // 0x165608: 0x8e420264  lw          $v0, 0x264($s2)
    ctx->pc = 0x165608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
label_16560c:
    // 0x16560c: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x16560cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_165610:
    // 0x165610: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x165610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_165614:
    // 0x165614: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_165618:
    if (ctx->pc == 0x165618u) {
        ctx->pc = 0x165618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165614u;
        // 0x165618: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16561Cu;
        goto label_16561c;
    }
    ctx->pc = 0x165614u;
    {
        const bool branch_taken_0x165614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165614) {
            ctx->pc = 0x165618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165614u;
            // 0x165618: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165638u;
            goto label_165638;
        }
    }
    ctx->pc = 0x16561Cu;
label_16561c:
    // 0x16561c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x16561cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_165620:
    // 0x165620: 0xae001258  sw          $zero, 0x1258($s0)
    ctx->pc = 0x165620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4696), GPR_U32(ctx, 0));
label_165624:
    // 0x165624: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x165624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_165628:
    // 0x165628: 0xae001234  sw          $zero, 0x1234($s0)
    ctx->pc = 0x165628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4660), GPR_U32(ctx, 0));
label_16562c:
    // 0x16562c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x16562cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_165630:
    // 0x165630: 0xae001268  sw          $zero, 0x1268($s0)
    ctx->pc = 0x165630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4712), GPR_U32(ctx, 0));
label_165634:
    // 0x165634: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x165634u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_165638:
    // 0x165638: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x165638u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_16563c:
    // 0x16563c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x16563cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_165640:
    // 0x165640: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x165640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_165644:
    // 0x165644: 0x3e00008  jr          $ra
label_165648:
    if (ctx->pc == 0x165648u) {
        ctx->pc = 0x165648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165644u;
        // 0x165648: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16564Cu;
        goto label_fallthrough_0x165644;
    }
    ctx->pc = 0x165644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165644u;
        // 0x165648: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x165644:
    ctx->pc = 0x16564Cu;
}
