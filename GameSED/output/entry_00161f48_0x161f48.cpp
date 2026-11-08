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

// Function: entry_00161f48
// Address: 0x161f48 - 0x161f98
void entry_00161f48_0x161f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161f48_0x161f48");
#endif

    ctx->pc = 0x161f48u;

    // 0x161f48: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x161f48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161f4c: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x161f4cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x161f50: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x161f50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x161f54: 0xf9a20000  sqc2        $vf2, 0x0($t5)
    ctx->pc = 0x161f54u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x161f58: 0xc7848334  lwc1        $f4, -0x7CCC($gp)
    ctx->pc = 0x161f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x161f5c: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x161f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x161f60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x161f60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f64: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x161f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161f68: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x161f68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x161f6c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x161f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161f70: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x161f70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x161f74: 0xc7828338  lwc1        $f2, -0x7CC8($gp)
    ctx->pc = 0x161f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x161f78: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x161f78u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x161f7c: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x161f7cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x161f80: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x161f80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161f84: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x161F84u;
    {
        const bool branch_taken_0x161f84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x161F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F84u;
        // 0x161f88: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f84) {
            ctx->pc = 0x161F98u;
            return;
        }
    }
    ctx->pc = 0x161F8Cu;
    // 0x161f8c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x161f8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161f90: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x161F90u;
    {
        const bool branch_taken_0x161f90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161f90) {
            ctx->pc = 0x161FB0u;
            return;
        }
    }
    ctx->pc = 0x161F98u;
}
