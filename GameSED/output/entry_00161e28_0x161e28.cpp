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

// Function: entry_00161e28
// Address: 0x161e28 - 0x161e6c
void entry_00161e28_0x161e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161e28_0x161e28");
#endif

    ctx->pc = 0x161e28u;

    // 0x161e28: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x161e28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161e2c: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x161e2cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x161e30: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x161e30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x161e34: 0xf9020000  sqc2        $vf2, 0x0($t0)
    ctx->pc = 0x161e34u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x161e38: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x161e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x161e3c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x161e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161e40: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x161e40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x161e44: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x161e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161e48: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x161e48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x161e4c: 0x460700c2  mul.s       $f3, $f0, $f7
    ctx->pc = 0x161e4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x161e50: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x161e50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x161e54: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x161e54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161e58: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x161E58u;
    {
        const bool branch_taken_0x161e58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x161E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E58u;
        // 0x161e5c: 0x46060002  mul.s       $f0, $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e58) {
            ctx->pc = 0x161E6Cu;
            return;
        }
    }
    ctx->pc = 0x161E60u;
    // 0x161e60: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x161e60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161e64: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x161E64u;
    {
        const bool branch_taken_0x161e64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x161E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E64u;
        // 0x161e68: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e64) {
            ctx->pc = 0x161E84u;
            return;
        }
    }
    ctx->pc = 0x161E6Cu;
}
