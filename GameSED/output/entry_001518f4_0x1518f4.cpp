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

// Function: entry_001518f4
// Address: 0x1518f4 - 0x15192c
void entry_001518f4_0x1518f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001518f4_0x1518f4");
#endif

    ctx->pc = 0x1518f4u;

    // 0x1518f4: 0xc7948288  lwc1        $f20, -0x7D78($gp)
    ctx->pc = 0x1518f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1518f8: 0x26440630  addiu       $a0, $s2, 0x630
    ctx->pc = 0x1518f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1584));
    // 0x1518fc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1518fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x151900: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x151900u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x151904: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x151904u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x151908: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x151908u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15190c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x15190cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x151910: 0x8e430184  lw          $v1, 0x184($s2)
    ctx->pc = 0x151910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x151914: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x151914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x151918: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x151918u;
    {
        const bool branch_taken_0x151918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151918u;
        // 0x15191c: 0x265000b0  addiu       $s0, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151918) {
            ctx->pc = 0x15192Cu;
            return;
        }
    }
    ctx->pc = 0x151920u;
    // 0x151920: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151924: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x151924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x151928: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x151928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->pc = 0x15192cu;
}
