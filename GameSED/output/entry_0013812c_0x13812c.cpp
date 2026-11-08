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

// Function: entry_0013812c
// Address: 0x13812c - 0x13827c
void entry_0013812c_0x13812c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013812c_0x13812c");
#endif

    switch (ctx->pc) {
        case 0x138134u: goto label_138134;
        default: break;
    }

    ctx->pc = 0x13812cu;

    // 0x13812c: 0xc061422  jal         func_185088
    ctx->pc = 0x13812Cu;
    SET_GPR_U32(ctx, 31, 0x138134u);
    ctx->pc = 0x138130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13812Cu;
    // 0x138130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x13812Cu, 0x138134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138134u;
label_138134:
    // 0x138134: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x138134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x138138: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x138138u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13813c: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x13813cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x138140: 0x4615a280  add.s       $f10, $f20, $f21
    ctx->pc = 0x138140u;
    ctx->f[10] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x138144: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x138144u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x138148: 0x7ee20000  sq          $v0, 0x0($s7)
    ctx->pc = 0x138148u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 2));
    // 0x13814c: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x13814cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x138150: 0x7ec20000  sq          $v0, 0x0($s6)
    ctx->pc = 0x138150u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
    // 0x138154: 0x460a5082  mul.s       $f2, $f10, $f10
    ctx->pc = 0x138154u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x138158: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x138158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13815c: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x13815cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x138160: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x138160u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x138164: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x138164u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x138168: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x138168u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13816c: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x13816cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x138170: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x138170u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x138174: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x138174u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x138178: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x138178u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13817c: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x13817cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x138180: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x138180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x138184: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x138184u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x138188: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x138188u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13818c: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x13818cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x138190: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x138190u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x138194: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x138194u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x138198: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x138198u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13819c: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x13819cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1381a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1381a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1381a4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1381a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1381a8: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1381a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1381ac: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1381acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1381b0: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x1381b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1381b4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1381b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1381b8: 0xc7a40050  lwc1        $f4, 0x50($sp)
    ctx->pc = 0x1381b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1381bc: 0x4602b036  c.le.s      $f22, $f2
    ctx->pc = 0x1381bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1381c0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1381c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1381c4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1381c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1381c8: 0x46012281  sub.s       $f10, $f4, $f1
    ctx->pc = 0x1381c8u;
    ctx->f[10] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x1381cc: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1381ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1381d0: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x1381d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1381d4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1381d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1381d8: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x1381d8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1381dc: 0xc7a70010  lwc1        $f7, 0x10($sp)
    ctx->pc = 0x1381dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1381e0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1381e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1381e4: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x1381e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1381e8: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x1381e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1381ec: 0x46003a07  neg.s       $f8, $f7
    ctx->pc = 0x1381ecu;
    ctx->f[8] = FPU_NEG_S(ctx->f[7]);
    // 0x1381f0: 0x460a3082  mul.s       $f2, $f6, $f10
    ctx->pc = 0x1381f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x1381f4: 0x46033902  mul.s       $f4, $f7, $f3
    ctx->pc = 0x1381f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x1381f8: 0x46003042  mul.s       $f1, $f6, $f0
    ctx->pc = 0x1381f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1381fc: 0x460a2a42  mul.s       $f9, $f5, $f10
    ctx->pc = 0x1381fcu;
    ctx->f[9] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x138200: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x138200u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x138204: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x138204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x138208: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x138208u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x13820c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x13820cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x138210: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x138210u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x138214: 0x460439c2  mul.s       $f7, $f7, $f4
    ctx->pc = 0x138214u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x138218: 0x46013082  mul.s       $f2, $f6, $f1
    ctx->pc = 0x138218u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x13821c: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x13821cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x138220: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x138220u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x138224: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x138224u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x138228: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x138228u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x13822c: 0x46024501  sub.s       $f20, $f8, $f2
    ctx->pc = 0x13822cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
    // 0x138230: 0x46070881  sub.s       $f2, $f1, $f7
    ctx->pc = 0x138230u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x138234: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x138234u;
    {
        const bool branch_taken_0x138234 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x138238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138234u;
        // 0x138238: 0x46053040  add.s       $f1, $f6, $f5 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x138234) {
            ctx->pc = 0x13827Cu;
            return;
        }
    }
    ctx->pc = 0x13823Cu;
    // 0x13823c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x13823cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x138240: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x138240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x138244: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x138244u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x138248: 0x4614a0c2  mul.s       $f3, $f20, $f20
    ctx->pc = 0x138248u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x13824c: 0xc44000e0  lwc1        $f0, 0xE0($v0)
    ctx->pc = 0x13824cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138250: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x138250u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x138254: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x138254u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x138258: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x138258u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x13825c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13825cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138260: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x138260u;
    {
        const bool branch_taken_0x138260 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x138260) {
            ctx->pc = 0x138264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138260u;
            // 0x138264: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138280u;
            return;
        }
    }
    ctx->pc = 0x138268u;
    // 0x138268: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x138268u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x13826c: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x13826cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x138270: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x138270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x138274: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x138274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x138278: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x138278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    ctx->pc = 0x13827cu;
}
