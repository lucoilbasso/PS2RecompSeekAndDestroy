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

// Function: entry_00138700
// Address: 0x138700 - 0x138794
void entry_00138700_0x138700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138700_0x138700");
#endif

    switch (ctx->pc) {
        case 0x138780u: goto label_138780;
        default: break;
    }

    ctx->pc = 0x138700u;

label_138700:
    // 0x138700: 0x24900040  addiu       $s0, $a0, 0x40
    ctx->pc = 0x138700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x138704: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x138704u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x138708: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x138708u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13870c: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x13870cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x138710: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x138710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x138714: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x138714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x138718: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x138718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x13871c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x13871cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138720: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x138720u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x138724: 0x4a852942  vaddz.y     $vf5, $vf5, $vf5z
    ctx->pc = 0x138724u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x138728: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x138728u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x13872c: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13872cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x138730: 0x4a0003bf  vwaitq
    ctx->pc = 0x138730u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x138734: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x138734u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x138738: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x138738u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x13873c: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x13873cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x138740: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x138740u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x138744: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x138744u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x138748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x138748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13874c: 0x4a0003bf  vwaitq
    ctx->pc = 0x13874cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x138750: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x138750u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x138754: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x138754u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x138758: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x138758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x13875c: 0x0  nop
    ctx->pc = 0x13875cu;
    // NOP
    // 0x138760: 0x0  nop
    ctx->pc = 0x138760u;
    // NOP
    // 0x138764: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x138764u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x138768: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x138768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x13876c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x13876cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x138770: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x138770u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x138774: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x138774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x138778: 0xc06760e  jal         func_19D838
    ctx->pc = 0x138778u;
    SET_GPR_U32(ctx, 31, 0x138780u);
    ctx->pc = 0x13877Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138778u;
    // 0x13877c: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D838u, 0x138778u, 0x138780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138780u;
label_138780:
    // 0x138780: 0x8e420400  lw          $v0, 0x400($s2)
    ctx->pc = 0x138780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1024)));
    // 0x138784: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x138784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x138788: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x138788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13878c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x13878Cu;
    {
        const bool branch_taken_0x13878c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x138790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13878Cu;
        // 0x138790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13878c) {
            ctx->pc = 0x138700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138700;
        }
    }
    ctx->pc = 0x138794u;
}
