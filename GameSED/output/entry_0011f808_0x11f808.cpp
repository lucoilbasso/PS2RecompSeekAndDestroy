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

// Function: entry_0011f808
// Address: 0x11f808 - 0x11f89c
void entry_0011f808_0x11f808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f808_0x11f808");
#endif

    switch (ctx->pc) {
        case 0x11f81cu: goto label_11f81c;
        case 0x11f83cu: goto label_11f83c;
        default: break;
    }

    ctx->pc = 0x11f808u;

    // 0x11f808: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x11f808u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x11f80c: 0x52000038  beql        $s0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x11F80Cu;
    {
        const bool branch_taken_0x11f80c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f80c) {
            ctx->pc = 0x11F810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F80Cu;
            // 0x11f810: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F8F0u;
            return;
        }
    }
    ctx->pc = 0x11F814u;
    // 0x11f814: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11F814u;
    SET_GPR_U32(ctx, 31, 0x11F81Cu);
    ctx->pc = 0x11F818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F814u;
    // 0x11f818: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11F814u, 0x11F81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F81Cu;
label_11f81c:
    // 0x11f81c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11f81cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f820: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11f820u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11f824: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11f824u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f828: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11f828u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11f82c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x11f82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11f830: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x11f830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11f834: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11F834u;
    SET_GPR_U32(ctx, 31, 0x11F83Cu);
    ctx->pc = 0x11F838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F834u;
    // 0x11f838: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11F834u, 0x11F83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F83Cu;
label_11f83c:
    // 0x11f83c: 0x8e230120  lw          $v1, 0x120($s1)
    ctx->pc = 0x11f83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x11f840: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x11f840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x11f844: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11f844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11f848: 0x4617a500  add.s       $f20, $f20, $f23
    ctx->pc = 0x11f848u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
    // 0x11f84c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11f84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11f850: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x11f850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x11f854: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x11f854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x11f858: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x11f858u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11f85c: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x11f85cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x11f860: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x11f860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x11f864: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x11f864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x11f868: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x11f868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f86c: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x11f86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f870: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x11f870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x11f874: 0xc6020078  lwc1        $f2, 0x78($s0)
    ctx->pc = 0x11f874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11f878: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x11f878u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11f87c: 0xe6010070  swc1        $f1, 0x70($s0)
    ctx->pc = 0x11f87cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x11f880: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x11f880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f884: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x11f884u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x11f888: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11f888u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11f88c: 0xe6020078  swc1        $f2, 0x78($s0)
    ctx->pc = 0x11f88cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x11f890: 0x12e00002  beqz        $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x11F890u;
    {
        const bool branch_taken_0x11f890 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F890u;
        // 0x11f894: 0xe7b40004  swc1        $f20, 0x4($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f890) {
            ctx->pc = 0x11F89Cu;
            return;
        }
    }
    ctx->pc = 0x11F898u;
    // 0x11f898: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x11f898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x11f89cu;
}
