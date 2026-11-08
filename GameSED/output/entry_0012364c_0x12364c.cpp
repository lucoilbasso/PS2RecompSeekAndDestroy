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

// Function: entry_0012364c
// Address: 0x12364c - 0x1236c0
void entry_0012364c_0x12364c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012364c_0x12364c");
#endif

    ctx->pc = 0x12364cu;

    // 0x12364c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x12364cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x123650: 0xe7b500d0  swc1        $f21, 0xD0($sp)
    ctx->pc = 0x123650u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x123654: 0xe7b400c8  swc1        $f20, 0xC8($sp)
    ctx->pc = 0x123654u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x123658: 0x9623002e  lhu         $v1, 0x2E($s1)
    ctx->pc = 0x123658u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x12365c: 0x1064016f  beq         $v1, $a0, . + 4 + (0x16F << 2)
    ctx->pc = 0x12365Cu;
    {
        const bool branch_taken_0x12365c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x123660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12365Cu;
        // 0x123660: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12365c) {
            ctx->pc = 0x123C1Cu;
            return;
        }
    }
    ctx->pc = 0x123664u;
    // 0x123664: 0x26220120  addiu       $v0, $s1, 0x120
    ctx->pc = 0x123664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x123668: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x123668u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x12366c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x12366cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x123670: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x123670u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x123674: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x123674u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x123678: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x123678u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12367c: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x12367cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x123680: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x123680u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x123684: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x123684u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x123688: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x123688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12368c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12368cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x123690: 0xc62000ec  lwc1        $f0, 0xEC($s1)
    ctx->pc = 0x123690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x123694: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x123694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x123698: 0x4502002a  bc1fl       . + 4 + (0x2A << 2)
    ctx->pc = 0x123698u;
    {
        const bool branch_taken_0x123698 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x123698) {
            ctx->pc = 0x12369Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123698u;
            // 0x12369c: 0xc62700ec  lwc1        $f7, 0xEC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x123744u;
            return;
        }
    }
    ctx->pc = 0x1236A0u;
    // 0x1236a0: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x1236a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x1236a4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1236a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1236a8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1236A8u;
    {
        const bool branch_taken_0x1236a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1236ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236A8u;
        // 0x1236ac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1236a8) {
            ctx->pc = 0x1236C0u;
            return;
        }
    }
    ctx->pc = 0x1236B0u;
    // 0x1236b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1236b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1236b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1236b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1236b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1236B8u;
    {
        const bool branch_taken_0x1236b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1236b8) {
            ctx->pc = 0x1236D4u;
            return;
        }
    }
    ctx->pc = 0x1236C0u;
}
