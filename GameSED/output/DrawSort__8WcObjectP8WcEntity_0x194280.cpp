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

// Function: DrawSort__8WcObjectP8WcEntity
// Address: 0x194280 - 0x1944f0
void DrawSort__8WcObjectP8WcEntity_0x194280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSort__8WcObjectP8WcEntity_0x194280");
#endif

    switch (ctx->pc) {
        case 0x1942ccu: goto label_1942cc;
        case 0x1942d4u: goto label_1942d4;
        case 0x194318u: goto label_194318;
        case 0x19432cu: goto label_19432c;
        default: break;
    }

    ctx->pc = 0x194280u;

    // 0x194280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x194280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x194284: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x194284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x194288: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x194288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19428c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19428cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194290: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x194290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x194294: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x194294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x194298: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x194298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19429c: 0x8cb3015c  lw          $s3, 0x15C($a1)
    ctx->pc = 0x19429cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
    // 0x1942a0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1942a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1942a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1942a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1942a8: 0x1440008a  bnez        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x1942A8u;
    {
        const bool branch_taken_0x1942a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1942ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942A8u;
        // 0x1942ac: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1942a8) {
            ctx->pc = 0x1944D4u;
            goto label_1944d4;
        }
    }
    ctx->pc = 0x1942B0u;
    // 0x1942b0: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x1942b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1942b4: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1942b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1942b8: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1942b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x1942bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1942BCu;
    {
        const bool branch_taken_0x1942bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1942bc) {
            ctx->pc = 0x1942CCu;
            goto label_1942cc;
        }
    }
    ctx->pc = 0x1942C4u;
    // 0x1942c4: 0xc061920  jal         func_186480
    ctx->pc = 0x1942C4u;
    SET_GPR_U32(ctx, 31, 0x1942CCu);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1942C4u, 0x1942CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1942CCu;
label_1942cc:
    // 0x1942cc: 0xc061422  jal         func_185088
    ctx->pc = 0x1942CCu;
    SET_GPR_U32(ctx, 31, 0x1942D4u);
    ctx->pc = 0x1942D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1942CCu;
    // 0x1942d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1942CCu, 0x1942D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1942D4u;
label_1942d4:
    // 0x1942d4: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x1942d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x1942d8: 0x5040007f  beql        $v0, $zero, . + 4 + (0x7F << 2)
    ctx->pc = 0x1942D8u;
    {
        const bool branch_taken_0x1942d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1942d8) {
            ctx->pc = 0x1942DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1942D8u;
            // 0x1942dc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1944D8u;
            goto label_1944d8;
        }
    }
    ctx->pc = 0x1942E0u;
    // 0x1942e0: 0x96220150  lhu         $v0, 0x150($s1)
    ctx->pc = 0x1942e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1942e4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1942e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1942e8: 0x1440007a  bnez        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x1942E8u;
    {
        const bool branch_taken_0x1942e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1942ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942E8u;
        // 0x1942ec: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1942e8) {
            ctx->pc = 0x1944D4u;
            goto label_1944d4;
        }
    }
    ctx->pc = 0x1942F0u;
    // 0x1942f0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1942f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1942f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1942f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1942f8: 0x54400077  bnel        $v0, $zero, . + 4 + (0x77 << 2)
    ctx->pc = 0x1942F8u;
    {
        const bool branch_taken_0x1942f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1942f8) {
            ctx->pc = 0x1942FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1942F8u;
            // 0x1942fc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1944D8u;
            goto label_1944d8;
        }
    }
    ctx->pc = 0x194300u;
    // 0x194300: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x194300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x194304: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x194304u;
    {
        const bool branch_taken_0x194304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194304) {
            ctx->pc = 0x194308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194304u;
            // 0x194308: 0x96220150  lhu         $v0, 0x150($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194340u;
            goto label_194340;
        }
    }
    ctx->pc = 0x19430Cu;
    // 0x19430c: 0x8e240194  lw          $a0, 0x194($s1)
    ctx->pc = 0x19430cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x194310: 0xc05fec2  jal         func_17FB08
    ctx->pc = 0x194310u;
    SET_GPR_U32(ctx, 31, 0x194318u);
    ctx->pc = 0x194314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194310u;
    // 0x194314: 0x26300160  addiu       $s0, $s1, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB08u, 0x194310u, 0x194318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194318u;
label_194318:
    // 0x194318: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x194318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19431c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19431Cu;
    {
        const bool branch_taken_0x19431c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x194320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19431Cu;
        // 0x194320: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19431c) {
            ctx->pc = 0x19432Cu;
            goto label_19432c;
        }
    }
    ctx->pc = 0x194324u;
    // 0x194324: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x194324u;
    SET_GPR_U32(ctx, 31, 0x19432Cu);
    ctx->pc = 0x194328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194324u;
    // 0x194328: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x194324u, 0x19432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19432Cu;
label_19432c:
    // 0x19432c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x19432cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x194330: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x194330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x194334: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x194334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x194338: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x194338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x19433c: 0x96220150  lhu         $v0, 0x150($s1)
    ctx->pc = 0x19433cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 336)));
label_194340:
    // 0x194340: 0x26260110  addiu       $a2, $s1, 0x110
    ctx->pc = 0x194340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x194344: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x194344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x194348: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x194348u;
    {
        const bool branch_taken_0x194348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194348u;
        // 0x19434c: 0xc6210190  lwc1        $f1, 0x190($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194348) {
            ctx->pc = 0x194354u;
            goto label_194354;
        }
    }
    ctx->pc = 0x194350u;
    // 0x194350: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x194350u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_194354:
    // 0x194354: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x194354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x194358: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x194358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x19435c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19435cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x194360: 0x24a5eb70  addiu       $a1, $a1, -0x1490
    ctx->pc = 0x194360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962032));
    // 0x194364: 0x2484ebf0  addiu       $a0, $a0, -0x1410
    ctx->pc = 0x194364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962160));
    // 0x194368: 0x2463ec30  addiu       $v1, $v1, -0x13D0
    ctx->pc = 0x194368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962224));
    // 0x19436c: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x19436cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x194370: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x194370u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EB70u));
    // 0x194374: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x194374u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EB80u));
    // 0x194378: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x194378u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EB90u));
    // 0x19437c: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x19437cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBA0u));
    // 0x194380: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x194380u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194384: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x194384u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194388: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x194388u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19438c: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x19438cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x194390: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x194390u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x194394: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x194394u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x194398: 0x4a414240  vaddx.z     $vf9, $vf8, $vf1x
    ctx->pc = 0x194398u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x19439c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x19439cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1943a0: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x1943a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1943a4: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x1943a4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1943a8: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x1943a8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1943ac: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1943acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1943b0: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1943b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1943b4: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x1943b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1943b8: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1943b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1943bc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1943bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1943c0: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1943c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1943c4: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1943c4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1943c8: 0x4bec03bc  vdiv        $Q, $vf0w, $vf12w
    ctx->pc = 0x1943c8u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1943cc: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1943ccu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1943d0: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x1943d0u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
    // 0x1943d4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1943d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1943d8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1943d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1943dc: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1943dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1943e0: 0x4be83b4b  vmaddw.xyzw $vf13, $vf7, $vf8w
    ctx->pc = 0x1943e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1943e4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1943e4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1943e8: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x1943e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1943ec: 0x4bcd69ff  .word       0x4BCD69FF                   # vclipw.xyz  $vf13, $vf13w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1943ecu;
    { __m128 fs = ctx->vu0_vf[13]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x1943f0: 0x4a0002ff  vnop
    ctx->pc = 0x1943f0u;
    // NOP operation, no action needed for VU0
    // 0x1943f4: 0x4a0002ff  vnop
    ctx->pc = 0x1943f4u;
    // NOP operation, no action needed for VU0
    // 0x1943f8: 0x4a0002ff  vnop
    ctx->pc = 0x1943f8u;
    // NOP operation, no action needed for VU0
    // 0x1943fc: 0x4a0002ff  vnop
    ctx->pc = 0x1943fcu;
    // NOP operation, no action needed for VU0
    // 0x194400: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x194400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x194404: 0x48439000  cfc2.ni     $v1, $vi18
    ctx->pc = 0x194404u;
    SET_GPR_U32(ctx, 3, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x194408: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x194408u;
    {
        const bool branch_taken_0x194408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194408u;
        // 0x19440c: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194408) {
            ctx->pc = 0x19444Cu;
            goto label_19444c;
        }
    }
    ctx->pc = 0x194410u;
    // 0x194410: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x194410u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x194414: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x194414u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x194418: 0xc6210190  lwc1        $f1, 0x190($s1)
    ctx->pc = 0x194418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19441c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x19441cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x194420: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x194420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x194424: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x194424u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x194428: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x194428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19442c: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x19442Cu;
    {
        const bool branch_taken_0x19442c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x194430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19442Cu;
        // 0x194430: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19442c) {
            ctx->pc = 0x1944D8u;
            goto label_1944d8;
        }
    }
    ctx->pc = 0x194434u;
    // 0x194434: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x194434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x194438: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x194438u;
    {
        const bool branch_taken_0x194438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194438u;
        // 0x19443c: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194438) {
            ctx->pc = 0x194450u;
            goto label_194450;
        }
    }
    ctx->pc = 0x194440u;
    // 0x194440: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x194440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x194444: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x194444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194448: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x194448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_19444c:
    // 0x19444c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x19444cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_194450:
    // 0x194450: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x194450u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x194454: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x194454u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x194458: 0x58c0000f  blezl       $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x194458u;
    {
        const bool branch_taken_0x194458 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x194458) {
            ctx->pc = 0x19445Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194458u;
            // 0x19445c: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194498u;
            goto label_194498;
        }
    }
    ctx->pc = 0x194460u;
    // 0x194460: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x194460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x194464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194468: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x194468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19446c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x19446cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x194470: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x194470u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194474: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x194474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x194478: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x194478u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x19447c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x19447cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x194480: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x194480u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x194484: 0x704510c8  pmaxw       $v0, $v0, $a1
    ctx->pc = 0x194484u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x194488: 0x21800  sll         $v1, $v0, 0
    ctx->pc = 0x194488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19448c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19448Cu;
    {
        const bool branch_taken_0x19448c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19448Cu;
        // 0x194490: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19448c) {
            ctx->pc = 0x19449Cu;
            goto label_19449c;
        }
    }
    ctx->pc = 0x194494u;
    // 0x194494: 0x0  nop
    ctx->pc = 0x194494u;
    // NOP
label_194498:
    // 0x194498: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x194498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_19449c:
    // 0x19449c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19449cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1944a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1944A0u;
    {
        const bool branch_taken_0x1944a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1944A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944A0u;
        // 0x1944a4: 0x310c0  sll         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1944a0) {
            ctx->pc = 0x1944C0u;
            goto label_1944c0;
        }
    }
    ctx->pc = 0x1944A8u;
    // 0x1944a8: 0x8e42012c  lw          $v0, 0x12C($s2)
    ctx->pc = 0x1944a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
    // 0x1944ac: 0x2182a  slt         $v1, $zero, $v0
    ctx->pc = 0x1944acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1944b0: 0x22023  negu        $a0, $v0
    ctx->pc = 0x1944b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1944b4: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1944b4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1944b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1944b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1944bc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1944bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1944c0:
    // 0x1944c0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1944c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1944c4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1944c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1944c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1944c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1944cc: 0xae230130  sw          $v1, 0x130($s1)
    ctx->pc = 0x1944ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 3));
    // 0x1944d0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1944d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_1944d4:
    // 0x1944d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1944d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1944d8:
    // 0x1944d8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1944d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1944dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1944dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1944e0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1944e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1944e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1944e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1944e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1944E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1944ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944E8u;
        // 0x1944ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1944E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1944F0u;
}
