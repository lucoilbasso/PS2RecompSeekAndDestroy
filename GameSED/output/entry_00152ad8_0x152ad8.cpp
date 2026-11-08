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

// Function: entry_00152ad8
// Address: 0x152ad8 - 0x152b60
void entry_00152ad8_0x152ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152ad8_0x152ad8");
#endif

    switch (ctx->pc) {
        case 0x152b58u: goto label_152b58;
        default: break;
    }

    ctx->pc = 0x152ad8u;

    // 0x152ad8: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x152ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x152adc: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x152adcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x152ae0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x152ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ae4: 0x129e0040  beq         $s4, $fp, . + 4 + (0x40 << 2)
    ctx->pc = 0x152AE4u;
    {
        const bool branch_taken_0x152ae4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 30));
        ctx->pc = 0x152AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152AE4u;
        // 0x152ae8: 0x8e550170  lw          $s5, 0x170($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ae4) {
            ctx->pc = 0x152BE8u;
            return;
        }
    }
    ctx->pc = 0x152AECu;
    // 0x152aec: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x152aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x152af0: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x152af0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152af4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x152af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x152af8: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x152af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152afc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152afcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152b00: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x152b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x152b04: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x152b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
    // 0x152b08: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x152b08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x152b0c: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x152b0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x152b10: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x152b10u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x152b14: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x152b14u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x152b18: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x152b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x152b1c: 0x8f848b2c  lw          $a0, -0x74D4($gp)
    ctx->pc = 0x152b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x152b20: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x152B20u;
    {
        const bool branch_taken_0x152b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x152B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B20u;
        // 0x152b24: 0xafa30038  sw          $v1, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b20) {
            ctx->pc = 0x152B60u;
            return;
        }
    }
    ctx->pc = 0x152B28u;
    // 0x152b28: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x152b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x152b2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x152b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b30: 0x8c83026c  lw          $v1, 0x26C($a0)
    ctx->pc = 0x152b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 620)));
    // 0x152b34: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x152b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x152b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x152b3c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x152b3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b44: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x152b44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b48: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x152b48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b4c: 0xaf838b2c  sw          $v1, -0x74D4($gp)
    ctx->pc = 0x152b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 3));
    // 0x152b50: 0xc055bb0  jal         func_156EC0
    ctx->pc = 0x152B50u;
    SET_GPR_U32(ctx, 31, 0x152B58u);
    ctx->pc = 0x152B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152B50u;
    // 0x152b54: 0xaf828b30  sw          $v0, -0x74D0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156EC0u, 0x152B50u, 0x152B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152B58u;
label_152b58:
    // 0x152b58: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x152B58u;
    {
        const bool branch_taken_0x152b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B58u;
        // 0x152b5c: 0xae1e026c  sw          $fp, 0x26C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b58) {
            ctx->pc = 0x152B9Cu;
            return;
        }
    }
    ctx->pc = 0x152B60u;
}
