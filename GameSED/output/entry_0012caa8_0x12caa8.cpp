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

// Function: entry_0012caa8
// Address: 0x12caa8 - 0x12cae8
void entry_0012caa8_0x12caa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012caa8_0x12caa8");
#endif

    switch (ctx->pc) {
        case 0x12cab4u: goto label_12cab4;
        case 0x12cac4u: goto label_12cac4;
        default: break;
    }

    ctx->pc = 0x12caa8u;

    // 0x12caa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12caa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12caac: 0xc04844a  jal         func_121128
    ctx->pc = 0x12CAACu;
    SET_GPR_U32(ctx, 31, 0x12CAB4u);
    ctx->pc = 0x12CAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CAACu;
    // 0x12cab0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12CAACu, 0x12CAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CAB4u;
label_12cab4:
    // 0x12cab4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12CAB4u;
    {
        const bool branch_taken_0x12cab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CAB4u;
        // 0x12cab8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cab4) {
            ctx->pc = 0x12CAE8u;
            return;
        }
    }
    ctx->pc = 0x12CABCu;
    // 0x12cabc: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12CABCu;
    SET_GPR_U32(ctx, 31, 0x12CAC4u);
    ctx->pc = 0x12CAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CABCu;
    // 0x12cac0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12CABCu, 0x12CAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CAC4u;
label_12cac4:
    // 0x12cac4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12cac4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cac8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12cac8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12cacc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12caccu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12cad0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12cad0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12cad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12cad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12cad8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12cad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12cadc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12cadcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12cae0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12cae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12cae4: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x12cae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
    ctx->pc = 0x12cae8u;
}
