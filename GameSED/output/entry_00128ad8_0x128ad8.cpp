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

// Function: entry_00128ad8
// Address: 0x128ad8 - 0x128b38
void entry_00128ad8_0x128ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128ad8_0x128ad8");
#endif

    switch (ctx->pc) {
        case 0x128af4u: goto label_128af4;
        default: break;
    }

    ctx->pc = 0x128ad8u;

    // 0x128ad8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x128adc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x128adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x128ae0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x128ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x128ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x128ae8: 0x263001b0  addiu       $s0, $s1, 0x1B0
    ctx->pc = 0x128ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    // 0x128aec: 0xc04844a  jal         func_121128
    ctx->pc = 0x128AECu;
    SET_GPR_U32(ctx, 31, 0x128AF4u);
    ctx->pc = 0x128AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128AECu;
    // 0x128af0: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x128AECu, 0x128AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128AF4u;
label_128af4:
    // 0x128af4: 0x8e2400f4  lw          $a0, 0xF4($s1)
    ctx->pc = 0x128af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x128af8: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x128AF8u;
    {
        const bool branch_taken_0x128af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x128AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128AF8u;
        // 0x128afc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128af8) {
            ctx->pc = 0x128B38u;
            return;
        }
    }
    ctx->pc = 0x128B00u;
    // 0x128b00: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x128b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x128b04: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x128b04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x128b08: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x128b08u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x128b0c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x128b0cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x128b10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x128b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128b14: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x128b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x128b18: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x128b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x128b1c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x128b1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x128b20: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x128b20u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x128b24: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x128b24u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x128b28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x128b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128b2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x128B2Cu;
    {
        const bool branch_taken_0x128b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B2Cu;
        // 0x128b30: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b2c) {
            ctx->pc = 0x128B48u;
            return;
        }
    }
    ctx->pc = 0x128B34u;
    // 0x128b34: 0x0  nop
    ctx->pc = 0x128b34u;
    // NOP
    ctx->pc = 0x128b38u;
}
