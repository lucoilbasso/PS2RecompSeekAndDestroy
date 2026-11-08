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

// Function: entry_0012189c
// Address: 0x12189c - 0x121910
void entry_0012189c_0x12189c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012189c_0x12189c");
#endif

    switch (ctx->pc) {
        case 0x1218acu: goto label_1218ac;
        case 0x1218d0u: goto label_1218d0;
        case 0x1218f4u: goto label_1218f4;
        default: break;
    }

    ctx->pc = 0x12189cu;

    // 0x12189c: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x12189Cu;
    {
        const bool branch_taken_0x12189c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1218A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12189Cu;
        // 0x1218a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12189c) {
            ctx->pc = 0x121910u;
            return;
        }
    }
    ctx->pc = 0x1218A4u;
    // 0x1218a4: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x1218A4u;
    SET_GPR_U32(ctx, 31, 0x1218ACu);
    ctx->pc = 0x1218A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1218A4u;
    // 0x1218a8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x1218A4u, 0x1218ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1218ACu;
label_1218ac:
    // 0x1218ac: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1218acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1218b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1218b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1218b4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1218b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1218b8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1218b8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1218bc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1218bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1218c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1218c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1218c4: 0xe600016c  swc1        $f0, 0x16C($s0)
    ctx->pc = 0x1218c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1218c8: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x1218C8u;
    SET_GPR_U32(ctx, 31, 0x1218D0u);
    ctx->pc = 0x1218CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1218C8u;
    // 0x1218cc: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x1218C8u, 0x1218D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1218D0u;
label_1218d0:
    // 0x1218d0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1218d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1218d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1218d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1218d8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1218d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1218dc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1218dcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1218e0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1218e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1218e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1218e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1218e8: 0xe6000170  swc1        $f0, 0x170($s0)
    ctx->pc = 0x1218e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 368), bits); }
    // 0x1218ec: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x1218ECu;
    SET_GPR_U32(ctx, 31, 0x1218F4u);
    ctx->pc = 0x1218F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1218ECu;
    // 0x1218f0: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x1218ECu, 0x1218F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1218F4u;
label_1218f4:
    // 0x1218f4: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x1218f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x1218f8: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1218F8u;
    {
        const bool branch_taken_0x1218f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1218f8) {
            ctx->pc = 0x1219B0u;
            return;
        }
    }
    ctx->pc = 0x121900u;
    // 0x121900: 0xc6000170  lwc1        $f0, 0x170($s0)
    ctx->pc = 0x121900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121904: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x121904u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x121908: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x121908u;
    {
        const bool branch_taken_0x121908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121908u;
        // 0x12190c: 0xe6000170  swc1        $f0, 0x170($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 368), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121908) {
            ctx->pc = 0x1219B0u;
            return;
        }
    }
    ctx->pc = 0x121910u;
}
