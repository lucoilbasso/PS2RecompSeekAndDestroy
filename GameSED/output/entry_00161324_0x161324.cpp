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

// Function: entry_00161324
// Address: 0x161324 - 0x161384
void entry_00161324_0x161324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161324_0x161324");
#endif

    ctx->pc = 0x161324u;

    // 0x161324: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x161324u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x161328: 0x25050030  addiu       $a1, $t0, 0x30
    ctx->pc = 0x161328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x16132c: 0xc7808318  lwc1        $f0, -0x7CE8($gp)
    ctx->pc = 0x16132cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161330: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x161330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x161334: 0x0  nop
    ctx->pc = 0x161334u;
    // NOP
    // 0x161338: 0x0  nop
    ctx->pc = 0x161338u;
    // NOP
    // 0x16133c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x16133cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x161340: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x161340u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x161344: 0xe501000c  swc1        $f1, 0xC($t0)
    ctx->pc = 0x161344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x161348: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x161348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x16134c: 0xe5010010  swc1        $f1, 0x10($t0)
    ctx->pc = 0x16134cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x161350: 0xe5000014  swc1        $f0, 0x14($t0)
    ctx->pc = 0x161350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x161354: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x161354u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161358: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x161358u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x16135c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x16135cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x161360: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x161360u;
    {
        const bool branch_taken_0x161360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161360) {
            ctx->pc = 0x161364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161360u;
            // 0x161364: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x161384u;
            return;
        }
    }
    ctx->pc = 0x161368u;
    // 0x161368: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x161368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16136c: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x16136cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x161370: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x161370u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x161374: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x161374u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161378: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x161378u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16137c: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x16137cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x161380: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x161380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x161384u;
}
