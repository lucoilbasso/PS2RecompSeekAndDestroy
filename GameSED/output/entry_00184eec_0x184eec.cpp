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

// Function: entry_00184eec
// Address: 0x184eec - 0x184f50
void entry_00184eec_0x184eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184eec_0x184eec");
#endif

    ctx->pc = 0x184eecu;

    // 0x184eec: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x184eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x184ef0: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x184EF0u;
    {
        const bool branch_taken_0x184ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184ef0) {
            ctx->pc = 0x184EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184EF0u;
            // 0x184ef4: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184FA4u;
            return;
        }
    }
    ctx->pc = 0x184EF8u;
    // 0x184ef8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x184ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184efc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x184efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x184f00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x184f00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x184f04: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x184f04u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184f08: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x184F08u;
    {
        const bool branch_taken_0x184f08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x184f08) {
            ctx->pc = 0x184F50u;
            return;
        }
    }
    ctx->pc = 0x184F10u;
    // 0x184f10: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x184f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184f14: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x184f14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184f18: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x184F18u;
    {
        const bool branch_taken_0x184f18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x184f18) {
            ctx->pc = 0x184F50u;
            return;
        }
    }
    ctx->pc = 0x184F20u;
    // 0x184f20: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x184f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184f24: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x184f24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184f28: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x184F28u;
    {
        const bool branch_taken_0x184f28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F28u;
        // 0x184f2c: 0x34631000  ori         $v1, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f28) {
            ctx->pc = 0x184F50u;
            return;
        }
    }
    ctx->pc = 0x184F30u;
    // 0x184f30: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x184f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x184f34: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x184f34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x184f38: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x184f38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184f3c: 0x4be00843  vaddw.xyzw  $vf1, $vf1, $vf0w
    ctx->pc = 0x184f3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184f40: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x184f40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x184f44: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x184F44u;
    {
        const bool branch_taken_0x184f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F44u;
        // 0x184f48: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f44) {
            ctx->pc = 0x184FA4u;
            return;
        }
    }
    ctx->pc = 0x184F4Cu;
    // 0x184f4c: 0x0  nop
    ctx->pc = 0x184f4cu;
    // NOP
    ctx->pc = 0x184f50u;
}
