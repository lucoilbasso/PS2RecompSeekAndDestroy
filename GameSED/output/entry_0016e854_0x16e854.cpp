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

// Function: entry_0016e854
// Address: 0x16e854 - 0x16e8c0
void entry_0016e854_0x16e854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e854_0x16e854");
#endif

    ctx->pc = 0x16e854u;

    // 0x16e854: 0x26230220  addiu       $v1, $s1, 0x220
    ctx->pc = 0x16e854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x16e858: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16e858u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e85c: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x16e85cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e860: 0x4a0002ff  vnop
    ctx->pc = 0x16e860u;
    // NOP operation, no action needed for VU0
    // 0x16e864: 0x4a0002ff  vnop
    ctx->pc = 0x16e864u;
    // NOP operation, no action needed for VU0
    // 0x16e868: 0x4a0002ff  vnop
    ctx->pc = 0x16e868u;
    // NOP operation, no action needed for VU0
    // 0x16e86c: 0x4a0002ff  vnop
    ctx->pc = 0x16e86cu;
    // NOP operation, no action needed for VU0
    // 0x16e870: 0x4a0002ff  vnop
    ctx->pc = 0x16e870u;
    // NOP operation, no action needed for VU0
    // 0x16e874: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x16e874u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x16e878: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x16e878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x16e87c: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x16e87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x16e880: 0x50400060  beql        $v0, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x16E880u;
    {
        const bool branch_taken_0x16e880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e880) {
            ctx->pc = 0x16E884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E880u;
            // 0x16e884: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EA04u;
            return;
        }
    }
    ctx->pc = 0x16E888u;
    // 0x16e888: 0xc6200200  lwc1        $f0, 0x200($s1)
    ctx->pc = 0x16e888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e88c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x16e88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x16e890: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x16e890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16e894: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x16e894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x16e898: 0x460200c2  mul.s       $f3, $f0, $f2
    ctx->pc = 0x16e898u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x16e89c: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x16e89cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e8a0: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x16E8A0u;
    {
        const bool branch_taken_0x16e8a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e8a0) {
            ctx->pc = 0x16E8A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E8A0u;
            // 0x16e8a4: 0xc620020c  lwc1        $f0, 0x20C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E8C0u;
            return;
        }
    }
    ctx->pc = 0x16E8A8u;
    // 0x16e8a8: 0xc6200224  lwc1        $f0, 0x224($s1)
    ctx->pc = 0x16e8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e8ac: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x16e8acu;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x16e8b0: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x16e8b0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x16e8b4: 0x46030029  min.s       $f0, $f0, $f3
    ctx->pc = 0x16e8b4u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[3]);
    // 0x16e8b8: 0xe6200224  swc1        $f0, 0x224($s1)
    ctx->pc = 0x16e8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
    // 0x16e8bc: 0xc620020c  lwc1        $f0, 0x20C($s1)
    ctx->pc = 0x16e8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x16e8c0u;
}
