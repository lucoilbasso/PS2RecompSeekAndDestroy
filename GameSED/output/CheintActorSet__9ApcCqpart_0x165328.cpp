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

// Function: CheintActorSet__9ApcCqpart
// Address: 0x165328 - 0x16540c
void CheintActorSet__9ApcCqpart_0x165328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheintActorSet__9ApcCqpart_0x165328");
#endif

    switch (ctx->pc) {
        case 0x165328u: goto label_165328;
        case 0x16532cu: goto label_16532c;
        case 0x165330u: goto label_165330;
        case 0x165334u: goto label_165334;
        case 0x165338u: goto label_165338;
        case 0x16533cu: goto label_16533c;
        case 0x165340u: goto label_165340;
        case 0x165344u: goto label_165344;
        case 0x165348u: goto label_165348;
        case 0x16534cu: goto label_16534c;
        case 0x165350u: goto label_165350;
        case 0x165354u: goto label_165354;
        case 0x165358u: goto label_165358;
        case 0x16535cu: goto label_16535c;
        case 0x165360u: goto label_165360;
        case 0x165364u: goto label_165364;
        case 0x165368u: goto label_165368;
        case 0x16536cu: goto label_16536c;
        case 0x165370u: goto label_165370;
        case 0x165374u: goto label_165374;
        case 0x165378u: goto label_165378;
        case 0x16537cu: goto label_16537c;
        case 0x165380u: goto label_165380;
        case 0x165384u: goto label_165384;
        case 0x165388u: goto label_165388;
        case 0x16538cu: goto label_16538c;
        case 0x165390u: goto label_165390;
        case 0x165394u: goto label_165394;
        case 0x165398u: goto label_165398;
        case 0x16539cu: goto label_16539c;
        case 0x1653a0u: goto label_1653a0;
        case 0x1653a4u: goto label_1653a4;
        case 0x1653a8u: goto label_1653a8;
        case 0x1653acu: goto label_1653ac;
        case 0x1653b0u: goto label_1653b0;
        case 0x1653b4u: goto label_1653b4;
        case 0x1653b8u: goto label_1653b8;
        case 0x1653bcu: goto label_1653bc;
        case 0x1653c0u: goto label_1653c0;
        case 0x1653c4u: goto label_1653c4;
        case 0x1653c8u: goto label_1653c8;
        case 0x1653ccu: goto label_1653cc;
        case 0x1653d0u: goto label_1653d0;
        case 0x1653d4u: goto label_1653d4;
        case 0x1653d8u: goto label_1653d8;
        case 0x1653dcu: goto label_1653dc;
        case 0x1653e0u: goto label_1653e0;
        case 0x1653e4u: goto label_1653e4;
        case 0x1653e8u: goto label_1653e8;
        case 0x1653ecu: goto label_1653ec;
        case 0x1653f0u: goto label_1653f0;
        case 0x1653f4u: goto label_1653f4;
        case 0x1653f8u: goto label_1653f8;
        case 0x1653fcu: goto label_1653fc;
        case 0x165400u: goto label_165400;
        case 0x165404u: goto label_165404;
        case 0x165408u: goto label_165408;
        default: break;
    }

    ctx->pc = 0x165328u;

label_165328:
    // 0x165328: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x165328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16532c:
    // 0x16532c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x16532cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_165330:
    // 0x165330: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x165330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_165334:
    // 0x165334: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x165334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_165338:
    // 0x165338: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x165338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_16533c:
    // 0x16533c: 0x8e031264  lw          $v1, 0x1264($s0)
    ctx->pc = 0x16533cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4708)));
label_165340:
    // 0x165340: 0x5060002e  beql        $v1, $zero, . + 4 + (0x2E << 2)
label_165344:
    if (ctx->pc == 0x165344u) {
        ctx->pc = 0x165344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165340u;
        // 0x165344: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165348u;
        goto label_165348;
    }
    ctx->pc = 0x165340u;
    {
        const bool branch_taken_0x165340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x165340) {
            ctx->pc = 0x165344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165340u;
            // 0x165344: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1653FCu;
            goto label_1653fc;
        }
    }
    ctx->pc = 0x165348u;
label_165348:
    // 0x165348: 0x8e021240  lw          $v0, 0x1240($s0)
    ctx->pc = 0x165348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4672)));
label_16534c:
    // 0x16534c: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
label_165350:
    if (ctx->pc == 0x165350u) {
        ctx->pc = 0x165350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16534Cu;
        // 0x165350: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165354u;
        goto label_165354;
    }
    ctx->pc = 0x16534Cu;
    {
        const bool branch_taken_0x16534c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16534c) {
            ctx->pc = 0x165350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16534Cu;
            // 0x165350: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1653FCu;
            goto label_1653fc;
        }
    }
    ctx->pc = 0x165354u;
label_165354:
    // 0x165354: 0x8c630690  lw          $v1, 0x690($v1)
    ctx->pc = 0x165354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1680)));
label_165358:
    // 0x165358: 0x8c6219f0  lw          $v0, 0x19F0($v1)
    ctx->pc = 0x165358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6640)));
label_16535c:
    // 0x16535c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_165360:
    if (ctx->pc == 0x165360u) {
        ctx->pc = 0x165360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16535Cu;
        // 0x165360: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165364u;
        goto label_165364;
    }
    ctx->pc = 0x16535Cu;
    {
        const bool branch_taken_0x16535c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16535Cu;
        // 0x165360: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16535c) {
            ctx->pc = 0x1653B8u;
            goto label_1653b8;
        }
    }
    ctx->pc = 0x165364u;
label_165364:
    // 0x165364: 0x8c6419f4  lw          $a0, 0x19F4($v1)
    ctx->pc = 0x165364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6644)));
label_165368:
    // 0x165368: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x165368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_16536c:
    // 0x16536c: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x16536cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_165370:
    // 0x165370: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x165370u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_165374:
    // 0x165374: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x165374u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_165378:
    // 0x165378: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x165378u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_16537c:
    // 0x16537c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x16537cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_165380:
    // 0x165380: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x165380u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_165384:
    // 0x165384: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x165384u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_165388:
    // 0x165388: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x165388u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_16538c:
    // 0x16538c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x16538cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_165390:
    // 0x165390: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x165390u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_165394:
    // 0x165394: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x165394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
label_165398:
    // 0x165398: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x165398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_16539c:
    // 0x16539c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x16539cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1653a0:
    // 0x1653a0: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x1653a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
label_1653a4:
    // 0x1653a4: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1653a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_1653a8:
    // 0x1653a8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1653a8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_1653ac:
    // 0x1653ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1653acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1653b0:
    // 0x1653b0: 0xc0674a2  jal         func_19D288
label_1653b4:
    if (ctx->pc == 0x1653B4u) {
        ctx->pc = 0x1653B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653B0u;
        // 0x1653b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1653B8u;
        goto label_1653b8;
    }
    ctx->pc = 0x1653B0u;
    SET_GPR_U32(ctx, 31, 0x1653B8u);
    ctx->pc = 0x1653B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1653B0u;
    // 0x1653b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x1653B0u, 0x1653B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1653B8u;
label_1653b8:
    // 0x1653b8: 0x8e021240  lw          $v0, 0x1240($s0)
    ctx->pc = 0x1653b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4672)));
label_1653bc:
    // 0x1653bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1653bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1653c0:
    // 0x1653c0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1653c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1653c4:
    // 0x1653c4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1653c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1653c8:
    // 0x1653c8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1653c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1653cc:
    // 0x1653cc: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x1653ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_1653d0:
    // 0x1653d0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1653d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1653d4:
    // 0x1653d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1653d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1653d8:
    // 0x1653d8: 0x60f809  jalr        $v1
label_1653dc:
    if (ctx->pc == 0x1653DCu) {
        ctx->pc = 0x1653DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653D8u;
        // 0x1653dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1653E0u;
        goto label_1653e0;
    }
    ctx->pc = 0x1653D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1653E0u);
        ctx->pc = 0x1653DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653D8u;
        // 0x1653dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1653D8u, 0x1653E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1653E0u;
label_1653e0:
    // 0x1653e0: 0x8e041240  lw          $a0, 0x1240($s0)
    ctx->pc = 0x1653e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4672)));
label_1653e4:
    // 0x1653e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1653e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1653e8:
    // 0x1653e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1653e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1653ec:
    // 0x1653ec: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1653ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1653f0:
    // 0x1653f0: 0xc0618da  jal         func_186368
label_1653f4:
    if (ctx->pc == 0x1653F4u) {
        ctx->pc = 0x1653F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653F0u;
        // 0x1653f4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1653F8u;
        goto label_1653f8;
    }
    ctx->pc = 0x1653F0u;
    SET_GPR_U32(ctx, 31, 0x1653F8u);
    ctx->pc = 0x1653F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1653F0u;
    // 0x1653f4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x1653F0u, 0x1653F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1653F8u;
label_1653f8:
    // 0x1653f8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1653f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1653fc:
    // 0x1653fc: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1653fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_165400:
    // 0x165400: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x165400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_165404:
    // 0x165404: 0x3e00008  jr          $ra
label_165408:
    if (ctx->pc == 0x165408u) {
        ctx->pc = 0x165408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165404u;
        // 0x165408: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16540Cu;
        goto label_fallthrough_0x165404;
    }
    ctx->pc = 0x165404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165404u;
        // 0x165408: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x165404:
    ctx->pc = 0x16540Cu;
}
