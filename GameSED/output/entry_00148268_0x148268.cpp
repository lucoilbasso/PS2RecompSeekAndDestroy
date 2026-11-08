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

// Function: entry_00148268
// Address: 0x148268 - 0x1483d8
void entry_00148268_0x148268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148268_0x148268");
#endif

    switch (ctx->pc) {
        case 0x148294u: goto label_148294;
        default: break;
    }

    ctx->pc = 0x148268u;

    // 0x148268: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x148268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14826c: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x14826cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148270: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x148270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x148274: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x148274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148278: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x148278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14827c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14827cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148280: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x148280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x148284: 0x7fa800b0  sq          $t0, 0xB0($sp)
    ctx->pc = 0x148284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 8));
    // 0x148288: 0x8c4504f4  lw          $a1, 0x4F4($v0)
    ctx->pc = 0x148288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1268)));
    // 0x14828c: 0xc061228  jal         func_1848A0
    ctx->pc = 0x14828Cu;
    SET_GPR_U32(ctx, 31, 0x148294u);
    ctx->pc = 0x148290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14828Cu;
    // 0x148290: 0x7fa900c0  sq          $t1, 0xC0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1848A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1848A0u, 0x14828Cu, 0x148294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148294u;
label_148294:
    // 0x148294: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x148294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x148298: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x148298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x14829c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x14829cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1482a0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1482a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1482a4: 0x1701023  subu        $v0, $t3, $s0
    ctx->pc = 0x1482a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 16)));
    // 0x1482a8: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x1482a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x1482ac: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1482acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1482b0: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1482b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1482b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1482b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1482b8: 0x7ba800b0  lq          $t0, 0xB0($sp)
    ctx->pc = 0x1482b8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1482bc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1482bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1482c0: 0x24a542a0  addiu       $a1, $a1, 0x42A0
    ctx->pc = 0x1482c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17056));
    // 0x1482c4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1482c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1482c8: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x1482c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1482cc: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1482ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1482d0: 0xc68004d8  lwc1        $f0, 0x4D8($s4)
    ctx->pc = 0x1482d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1482d4: 0xc68104dc  lwc1        $f1, 0x4DC($s4)
    ctx->pc = 0x1482d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1482d8: 0x46020102  mul.s       $f4, $f0, $f2
    ctx->pc = 0x1482d8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1482dc: 0x7ba900c0  lq          $t1, 0xC0($sp)
    ctx->pc = 0x1482dcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1482e0: 0x4604b836  c.le.s      $f23, $f4
    ctx->pc = 0x1482e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1482e4: 0x450000b3  bc1f        . + 4 + (0xB3 << 2)
    ctx->pc = 0x1482E4u;
    {
        const bool branch_taken_0x1482e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1482E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1482E4u;
        // 0x1482e8: 0x46020942  mul.s       $f5, $f1, $f2 (Delay Slot)
        ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1482e4) {
            ctx->pc = 0x1485B4u;
            return;
        }
    }
    ctx->pc = 0x1482ECu;
    // 0x1482ec: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1482ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x1482f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1482f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1482f4: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x1482f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1482f8: 0x450200af  bc1fl       . + 4 + (0xAF << 2)
    ctx->pc = 0x1482F8u;
    {
        const bool branch_taken_0x1482f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1482f8) {
            ctx->pc = 0x1482FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1482F8u;
            // 0x1482fc: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1485B8u;
            return;
        }
    }
    ctx->pc = 0x148300u;
    // 0x148300: 0x4605b836  c.le.s      $f23, $f5
    ctx->pc = 0x148300u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148304: 0x450200ac  bc1fl       . + 4 + (0xAC << 2)
    ctx->pc = 0x148304u;
    {
        const bool branch_taken_0x148304 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148304) {
            ctx->pc = 0x148308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148304u;
            // 0x148308: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1485B8u;
            return;
        }
    }
    ctx->pc = 0x14830Cu;
    // 0x14830c: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x14830cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148310: 0x450200a9  bc1fl       . + 4 + (0xA9 << 2)
    ctx->pc = 0x148310u;
    {
        const bool branch_taken_0x148310 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148310) {
            ctx->pc = 0x148314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148310u;
            // 0x148314: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1485B8u;
            return;
        }
    }
    ctx->pc = 0x148318u;
    // 0x148318: 0x8e8204e4  lw          $v0, 0x4E4($s4)
    ctx->pc = 0x148318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1252)));
    // 0x14831c: 0x26e50001  addiu       $a1, $s7, 0x1
    ctx->pc = 0x14831cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x148320: 0x8e8304e0  lw          $v1, 0x4E0($s4)
    ctx->pc = 0x148320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1248)));
    // 0x148324: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x148324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x148328: 0x8e8404e8  lw          $a0, 0x4E8($s4)
    ctx->pc = 0x148328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1256)));
    // 0x14832c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14832cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x148330: 0xc622fff8  lwc1        $f2, -0x8($s1)
    ctx->pc = 0x148330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x148334: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x148334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x148338: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x148338u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14833c: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x14833cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x148340: 0x24622000  addiu       $v0, $v1, 0x2000
    ctx->pc = 0x148340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
    // 0x148344: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x148344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x148348: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x148348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x14834c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x14834cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x148350: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x148350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x148354: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x148354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148358: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x148358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x14835c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14835cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148360: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x148360u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x148364: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x148364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x148368: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x148368u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x14836c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x14836cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x148370: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x148370u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x148374: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x148374u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x148378: 0xf8c40030  sqc2        $vf4, 0x30($a2)
    ctx->pc = 0x148378u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14837c: 0xf8c50020  sqc2        $vf5, 0x20($a2)
    ctx->pc = 0x14837cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x148380: 0xf8c60010  sqc2        $vf6, 0x10($a2)
    ctx->pc = 0x148380u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x148384: 0xf8c70000  sqc2        $vf7, 0x0($a2)
    ctx->pc = 0x148384u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x148388: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x148388u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
    // 0x14838c: 0x8fc30164  lw          $v1, 0x164($fp)
    ctx->pc = 0x14838cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 356)));
    // 0x148390: 0x461500c2  mul.s       $f3, $f0, $f21
    ctx->pc = 0x148390u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x148394: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x148394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x148398: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x148398u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x14839c: 0x24474360  addiu       $a3, $v0, 0x4360
    ctx->pc = 0x14839cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 17248));
    // 0x1483a0: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x1483a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x1483a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1483a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1483a8: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x1483a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x1483ac: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x1483acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1483b0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1483b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1483b4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1483b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1483b8: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x1483b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1483bc: 0xc46001b8  lwc1        $f0, 0x1B8($v1)
    ctx->pc = 0x1483bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1483c0: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x1483c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1483c4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1483c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1483c8: 0xc46101bc  lwc1        $f1, 0x1BC($v1)
    ctx->pc = 0x1483c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1483cc: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x1483ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x1483d0: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1483d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1483d4: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1483d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    ctx->pc = 0x1483d8u;
}
