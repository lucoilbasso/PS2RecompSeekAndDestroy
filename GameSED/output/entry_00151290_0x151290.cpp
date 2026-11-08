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

// Function: entry_00151290
// Address: 0x151290 - 0x1512fc
void entry_00151290_0x151290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151290_0x151290");
#endif

    ctx->pc = 0x151290u;

    // 0x151290: 0x26050630  addiu       $a1, $s0, 0x630
    ctx->pc = 0x151290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
    // 0x151294: 0xc6030414  lwc1        $f3, 0x414($s0)
    ctx->pc = 0x151294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x151298: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x151298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15129c: 0xc60203b4  lwc1        $f2, 0x3B4($s0)
    ctx->pc = 0x15129cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1512a0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1512a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1512a4: 0xc7808254  lwc1        $f0, -0x7DAC($gp)
    ctx->pc = 0x1512a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1512a8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1512a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1512ac: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1512acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1512b0: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1512b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1512b4: 0x4bc110ac  vsub.xyz    $vf2, $vf2, $vf1
    ctx->pc = 0x1512b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1512b8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1512b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1512bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1512bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1512c0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1512c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1512c4: 0x70621c88  pextlw      $v1, $v1, $v0
    ctx->pc = 0x1512c4u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1512c8: 0x70822488  pextlw      $a0, $a0, $v0
    ctx->pc = 0x1512c8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1512cc: 0x70831389  pcpyld      $v0, $a0, $v1
    ctx->pc = 0x1512ccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x1512d0: 0x48a24000  qmtc2.ni    $v0, $vf8
    ctx->pc = 0x1512d0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1512d4: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1512d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1512d8: 0x4bc2422a  vmul.xyz    $vf8, $vf8, $vf2
    ctx->pc = 0x1512d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1512dc: 0x4bc80868  vadd.xyz    $vf1, $vf1, $vf8
    ctx->pc = 0x1512dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1512e0: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1512e0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1512e4: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1512E4u;
    {
        const bool branch_taken_0x1512e4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1512E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512E4u;
        // 0x1512e8: 0x26020670  addiu       $v0, $s0, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512e4) {
            ctx->pc = 0x1512FCu;
            return;
        }
    }
    ctx->pc = 0x1512ECu;
    // 0x1512ec: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1512ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1512f0: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1512f0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1512f4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1512f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1512f8: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1512f8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x1512fcu;
}
