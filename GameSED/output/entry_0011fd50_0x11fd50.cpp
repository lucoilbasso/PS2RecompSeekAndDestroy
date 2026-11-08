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

// Function: entry_0011fd50
// Address: 0x11fd50 - 0x11fd8c
void entry_0011fd50_0x11fd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fd50_0x11fd50");
#endif

    ctx->pc = 0x11fd50u;

    // 0x11fd50: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x11fd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11fd54: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x11FD54u;
    {
        const bool branch_taken_0x11fd54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fd54) {
            ctx->pc = 0x11FD58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FD54u;
            // 0x11fd58: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FD90u;
            return;
        }
    }
    ctx->pc = 0x11FD5Cu;
    // 0x11fd5c: 0xc4a00070  lwc1        $f0, 0x70($a1)
    ctx->pc = 0x11fd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fd60: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11fd60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11fd64: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x11FD64u;
    {
        const bool branch_taken_0x11fd64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD64u;
        // 0x11fd68: 0xe4a00070  swc1        $f0, 0x70($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd64) {
            ctx->pc = 0x11FD8Cu;
            return;
        }
    }
    ctx->pc = 0x11FD6Cu;
    // 0x11fd6c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x11fd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11fd70: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11fd70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11fd74: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11fd74u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11fd78: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11fd78u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11fd7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11fd7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11fd80: 0xc4a00074  lwc1        $f0, 0x74($a1)
    ctx->pc = 0x11fd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fd84: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11fd84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11fd88: 0xe4a00074  swc1        $f0, 0x74($a1)
    ctx->pc = 0x11fd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 116), bits); }
    ctx->pc = 0x11fd8cu;
}
