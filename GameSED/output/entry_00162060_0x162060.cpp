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

// Function: entry_00162060
// Address: 0x162060 - 0x1620a4
void entry_00162060_0x162060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162060_0x162060");
#endif

    ctx->pc = 0x162060u;

    // 0x162060: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x162060u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x162064: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x162064u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x162068: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x162068u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16206c: 0xf9020000  sqc2        $vf2, 0x0($t0)
    ctx->pc = 0x16206cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x162070: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x162070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x162074: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x162074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162078: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x162078u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x16207c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x16207cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162080: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x162080u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x162084: 0x460700c2  mul.s       $f3, $f0, $f7
    ctx->pc = 0x162084u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x162088: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x162088u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x16208c: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x16208cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162090: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x162090u;
    {
        const bool branch_taken_0x162090 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162090u;
        // 0x162094: 0x46060002  mul.s       $f0, $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162090) {
            ctx->pc = 0x1620A4u;
            return;
        }
    }
    ctx->pc = 0x162098u;
    // 0x162098: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x162098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16209c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x16209Cu;
    {
        const bool branch_taken_0x16209c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1620A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16209Cu;
        // 0x1620a0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16209c) {
            ctx->pc = 0x1620C0u;
            return;
        }
    }
    ctx->pc = 0x1620A4u;
}
