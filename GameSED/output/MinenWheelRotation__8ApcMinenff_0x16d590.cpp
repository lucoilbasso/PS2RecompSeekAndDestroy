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

// Function: MinenWheelRotation__8ApcMinenff
// Address: 0x16d590 - 0x16d62c
void MinenWheelRotation__8ApcMinenff_0x16d590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MinenWheelRotation__8ApcMinenff_0x16d590");
#endif

    switch (ctx->pc) {
        case 0x16d5fcu: goto label_16d5fc;
        case 0x16d618u: goto label_16d618;
        default: break;
    }

    ctx->pc = 0x16d590u;

    // 0x16d590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16d590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16d594: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16d594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16d598: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16d598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d59c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16d59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16d5a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16d5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16d5a4: 0xc62002d0  lwc1        $f0, 0x2D0($s1)
    ctx->pc = 0x16d5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d5a8: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x16d5a8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x16d5ac: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x16d5acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16d5b0: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x16d5b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16d5b4: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x16d5b4u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16d5b8: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x16d5b8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16d5bc: 0x52800  sll         $a1, $a1, 0
    ctx->pc = 0x16d5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x16d5c0: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x16d5c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x16d5c4: 0x52823  negu        $a1, $a1
    ctx->pc = 0x16d5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x16d5c8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16d5c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16d5cc: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x16d5ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16d5d0: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x16d5d0u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16d5d4: 0x48302800  qmfc2.ni    $s0, $vf5
    ctx->pc = 0x16d5d4u;
    SET_GPR_VEC(ctx, 16, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16d5d8: 0x108000  sll         $s0, $s0, 0
    ctx->pc = 0x16d5d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 0));
    // 0x16d5dc: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x16d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x16d5e0: 0x108023  negu        $s0, $s0
    ctx->pc = 0x16d5e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x16d5e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16d5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d5e8: 0x24860030  addiu       $a2, $a0, 0x30
    ctx->pc = 0x16d5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x16d5ec: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16d5f0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16d5f4: 0xc0618d4  jal         func_186350
    ctx->pc = 0x16D5F4u;
    SET_GPR_U32(ctx, 31, 0x16D5FCu);
    ctx->pc = 0x16D5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D5F4u;
    // 0x16d5f8: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186350u, 0x16D5F4u, 0x16D5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D5FCu;
label_16d5fc:
    // 0x16d5fc: 0x8e2202b4  lw          $v0, 0x2B4($s1)
    ctx->pc = 0x16d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x16d600: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16d600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d604: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x16d604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x16d608: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16d608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d60c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x16d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x16d610: 0xc0618d4  jal         func_186350
    ctx->pc = 0x16D610u;
    SET_GPR_U32(ctx, 31, 0x16D618u);
    ctx->pc = 0x16D614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D610u;
    // 0x16d614: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186350u, 0x16D610u, 0x16D618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D618u;
label_16d618:
    // 0x16d618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16d618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d61c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16d61cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16d620: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16d620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d624: 0x3e00008  jr          $ra
    ctx->pc = 0x16D624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D624u;
        // 0x16d628: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D62Cu;
}
