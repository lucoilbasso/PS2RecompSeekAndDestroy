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

// Function: entry_00150c28
// Address: 0x150c28 - 0x150c70
void entry_00150c28_0x150c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150c28_0x150c28");
#endif

    ctx->pc = 0x150c28u;

    // 0x150c28: 0x10800056  beqz        $a0, . + 4 + (0x56 << 2)
    ctx->pc = 0x150C28u;
    {
        const bool branch_taken_0x150c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x150C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C28u;
        // 0x150c2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c28) {
            ctx->pc = 0x150D84u;
            return;
        }
    }
    ctx->pc = 0x150C30u;
    // 0x150c30: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x150c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x150c34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x150c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150c38: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x150c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x150c3c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x150c3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x150c40: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x150c40u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150c44: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x150c44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x150c48: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x150c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x150c4c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x150c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150c50: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x150c50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x150c54: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x150c54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150c58: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x150C58u;
    {
        const bool branch_taken_0x150c58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x150c58) {
            ctx->pc = 0x150C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150C58u;
            // 0x150c5c: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150C70u;
            return;
        }
    }
    ctx->pc = 0x150C60u;
    // 0x150c60: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x150c60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150c64: 0x4bc200ac  vsub.xyz    $vf2, $vf0, $vf2
    ctx->pc = 0x150c64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x150c68: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x150c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x150c6c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x150c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->pc = 0x150c70u;
}
