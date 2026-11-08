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

// Function: entry_0013d0fc
// Address: 0x13d0fc - 0x13d280
void entry_0013d0fc_0x13d0fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d0fc_0x13d0fc");
#endif

    switch (ctx->pc) {
        case 0x13d274u: goto label_13d274;
        default: break;
    }

    ctx->pc = 0x13d0fcu;

    // 0x13d0fc: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x13d0fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13d100: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x13d100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x13d104: 0xa3a40000  sb          $a0, 0x0($sp)
    ctx->pc = 0x13d104u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x13d108: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x13d108u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x13d10c: 0xa3a50003  sb          $a1, 0x3($sp)
    ctx->pc = 0x13d10cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x13d110: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x13d110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x13d114: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x13d114u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x13d118: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x13d118u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x13d11c: 0xa3a40001  sb          $a0, 0x1($sp)
    ctx->pc = 0x13d11cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x13d120: 0x1281023  subu        $v0, $t1, $t0
    ctx->pc = 0x13d120u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x13d124: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x13d124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13d128: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x13d128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x13d12c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x13d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x13d130: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x13d130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d134: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13d134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13d138: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x13d138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x13d13c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x13d13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x13d140: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13d140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d144: 0x2405044e  addiu       $a1, $zero, 0x44E
    ctx->pc = 0x13d144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1102));
    // 0x13d148: 0x3c063023  lui         $a2, 0x3023
    ctx->pc = 0x13d148u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12323 << 16));
    // 0x13d14c: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x13d14cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x13d150: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x13d150u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x13d154: 0x34c68001  ori         $a2, $a2, 0x8001
    ctx->pc = 0x13d154u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32769);
    // 0x13d158: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x13d158u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x13d15c: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x13d15cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x13d160: 0xfd030008  sd          $v1, 0x8($t0)
    ctx->pc = 0x13d160u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 3));
    // 0x13d164: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x13d164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d168: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x13d168u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x13d16c: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x13d16cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x13d170: 0xfce60000  sd          $a2, 0x0($a3)
    ctx->pc = 0x13d170u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
    // 0x13d174: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x13d174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13d178: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13d178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13d17c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13d17cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d180: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13d180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d184: 0x3c0144e0  lui         $at, 0x44E0
    ctx->pc = 0x13d184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17632 << 16));
    // 0x13d188: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13d188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13d18c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x13d18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x13d190: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x13d190u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x13d194: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13d194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13d198: 0x3c0144e4  lui         $at, 0x44E4
    ctx->pc = 0x13d198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17636 << 16));
    // 0x13d19c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13d19cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d1a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13d1a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13d1a4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x13d1a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x13d1a8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x13d1a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13d1ac: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x13d1acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13d1b0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x13d1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x13d1b4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x13d1b4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x13d1b8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x13d1b8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x13d1bc: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x13d1bcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x13d1c0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x13d1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x13d1c4: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x13d1c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d1c8: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x13d1c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x13d1cc: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x13d1ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13d1d0: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x13d1d0u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d1d4: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x13d1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13d1d8: 0x3c014510  lui         $at, 0x4510
    ctx->pc = 0x13d1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17680 << 16));
    // 0x13d1dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13d1dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13d1e0: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x13d1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x13d1e4: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x13d1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x13d1e8: 0x3c01450e  lui         $at, 0x450E
    ctx->pc = 0x13d1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17678 << 16));
    // 0x13d1ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13d1ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d1f0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x13d1f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x13d1f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x13d1f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13d1f8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x13d1f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13d1fc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x13d1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x13d200: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x13d200u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x13d204: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x13d204u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x13d208: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x13d208u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x13d20c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x13d20cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x13d210: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x13d210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d214: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x13d214u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x13d218: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x13d218u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13d21c: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x13d21cu;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d220: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x13d220u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13d224: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x13d224u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x13d228: 0x12a1023  subu        $v0, $t1, $t2
    ctx->pc = 0x13d228u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x13d22c: 0x3c055000  lui         $a1, 0x5000
    ctx->pc = 0x13d22cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    // 0x13d230: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x13d230u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x13d234: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x13d234u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x13d238: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13d238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13d23c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x13d23cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x13d240: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x13d240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13d244: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x13d244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x13d248: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x13d248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x13d24c: 0x3c061300  lui         $a2, 0x1300
    ctx->pc = 0x13d24cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4864 << 16));
    // 0x13d250: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x13d250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x13d254: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x13d254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x13d258: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x13d258u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x13d25c: 0x24b02200  addiu       $s0, $a1, 0x2200
    ctx->pc = 0x13d25cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 8704));
    // 0x13d260: 0xad42000c  sw          $v0, 0xC($t2)
    ctx->pc = 0x13d260u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 2));
    // 0x13d264: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13d264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d268: 0xad460008  sw          $a2, 0x8($t2)
    ctx->pc = 0x13d268u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 6));
    // 0x13d26c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13D26Cu;
    SET_GPR_U32(ctx, 31, 0x13D274u);
    ctx->pc = 0x13D270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D26Cu;
    // 0x13d270: 0xad400004  sw          $zero, 0x4($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13D26Cu, 0x13D274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D274u;
label_13d274:
    // 0x13d274: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13d274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13d278: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x13d278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x13d27c: 0x0  nop
    ctx->pc = 0x13d27cu;
    // NOP
    ctx->pc = 0x13d280u;
}
