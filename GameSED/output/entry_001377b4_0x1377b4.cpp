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

// Function: entry_001377b4
// Address: 0x1377b4 - 0x1377fc
void entry_001377b4_0x1377b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001377b4_0x1377b4");
#endif

    switch (ctx->pc) {
        case 0x1377bcu: goto label_1377bc;
        default: break;
    }

    ctx->pc = 0x1377b4u;

    // 0x1377b4: 0xc061422  jal         func_185088
    ctx->pc = 0x1377B4u;
    SET_GPR_U32(ctx, 31, 0x1377BCu);
    ctx->pc = 0x1377B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1377B4u;
    // 0x1377b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1377B4u, 0x1377BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1377BCu;
label_1377bc:
    // 0x1377bc: 0x26430110  addiu       $v1, $s2, 0x110
    ctx->pc = 0x1377bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
    // 0x1377c0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1377c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1377c4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1377c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1377c8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1377c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1377cc: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x1377ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1377d0: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x1377d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1377d4: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x1377d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1377d8: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x1377d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1377dc: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x1377dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1377e0: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x1377e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1377e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1377e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1377e8: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x1377e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
    // 0x1377ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1377ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1377f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1377f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1377f4: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x1377F4u;
    {
        const bool branch_taken_0x1377f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1377F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1377F4u;
        // 0x1377f8: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1377f4) {
            ctx->pc = 0x13783Cu;
            return;
        }
    }
    ctx->pc = 0x1377FCu;
}
