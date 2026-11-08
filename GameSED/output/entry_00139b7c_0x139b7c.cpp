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

// Function: entry_00139b7c
// Address: 0x139b7c - 0x139be4
void entry_00139b7c_0x139b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139b7c_0x139b7c");
#endif

    switch (ctx->pc) {
        case 0x139b84u: goto label_139b84;
        case 0x139bb4u: goto label_139bb4;
        case 0x139be0u: goto label_139be0;
        default: break;
    }

    ctx->pc = 0x139b7cu;

    // 0x139b7c: 0xc061422  jal         func_185088
    ctx->pc = 0x139B7Cu;
    SET_GPR_U32(ctx, 31, 0x139B84u);
    ctx->pc = 0x139B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139B7Cu;
    // 0x139b80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x139B7Cu, 0x139B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B84u;
label_139b84:
    // 0x139b84: 0x262300e0  addiu       $v1, $s1, 0xE0
    ctx->pc = 0x139b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x139b88: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x139b88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x139b8c: 0x7ec20000  sq          $v0, 0x0($s6)
    ctx->pc = 0x139b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
    // 0x139b90: 0xc6a00088  lwc1        $f0, 0x88($s5)
    ctx->pc = 0x139b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139b94: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x139b94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x139b98: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x139b98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x139b9c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x139b9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x139ba0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x139ba0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x139ba4: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x139ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x139ba8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x139ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139bac: 0xc04e4f2  jal         func_1393C8
    ctx->pc = 0x139BACu;
    SET_GPR_U32(ctx, 31, 0x139BB4u);
    ctx->pc = 0x139BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139BACu;
    // 0x139bb0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1393C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1393C8u, 0x139BACu, 0x139BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139BB4u;
label_139bb4:
    // 0x139bb4: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x139bb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x139bb8: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x139bb8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139bbc: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x139bbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x139bc0: 0xfa420000  sqc2        $vf2, 0x0($s2)
    ctx->pc = 0x139bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x139bc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x139bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x139bc8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x139bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139bcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x139bccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139bd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x139BD0u;
    {
        const bool branch_taken_0x139bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139BD0u;
        // 0x139bd4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139bd0) {
            ctx->pc = 0x139BE4u;
            return;
        }
    }
    ctx->pc = 0x139BD8u;
    // 0x139bd8: 0xc06924e  jal         func_1A4938
    ctx->pc = 0x139BD8u;
    SET_GPR_U32(ctx, 31, 0x139BE0u);
    ctx->pc = 0x1A4938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4938u, 0x139BD8u, 0x139BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139BE0u;
label_139be0:
    // 0x139be0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x139be0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x139be4u;
}
