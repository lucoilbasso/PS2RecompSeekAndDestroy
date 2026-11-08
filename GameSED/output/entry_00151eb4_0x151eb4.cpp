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

// Function: entry_00151eb4
// Address: 0x151eb4 - 0x151f60
void entry_00151eb4_0x151eb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151eb4_0x151eb4");
#endif

    switch (ctx->pc) {
        case 0x151ebcu: goto label_151ebc;
        case 0x151f10u: goto label_151f10;
        default: break;
    }

    ctx->pc = 0x151eb4u;

    // 0x151eb4: 0xc061422  jal         func_185088
    ctx->pc = 0x151EB4u;
    SET_GPR_U32(ctx, 31, 0x151EBCu);
    ctx->pc = 0x151EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151EB4u;
    // 0x151eb8: 0x26150110  addiu       $s5, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x151EB4u, 0x151EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151EBCu;
label_151ebc:
    // 0x151ebc: 0x26540870  addiu       $s4, $s2, 0x870
    ctx->pc = 0x151ebcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 2160));
    // 0x151ec0: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x151ec0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x151ec4: 0xda830000  lqc2        $vf3, 0x0($s4)
    ctx->pc = 0x151ec4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x151ec8: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x151ec8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x151ecc: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x151eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151ed0: 0x8e4201f4  lw          $v0, 0x1F4($s2)
    ctx->pc = 0x151ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 500)));
    // 0x151ed4: 0x8e430890  lw          $v1, 0x890($s2)
    ctx->pc = 0x151ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2192)));
    // 0x151ed8: 0x8c560034  lw          $s6, 0x34($v0)
    ctx->pc = 0x151ed8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x151edc: 0x2c39823  subu        $s3, $s6, $v1
    ctx->pc = 0x151edcu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x151ee0: 0x32627fff  andi        $v0, $s3, 0x7FFF
    ctx->pc = 0x151ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32767);
    // 0x151ee4: 0x28444000  slti        $a0, $v0, 0x4000
    ctx->pc = 0x151ee4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x151ee8: 0x24438000  addiu       $v1, $v0, -0x8000
    ctx->pc = 0x151ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x151eec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x151eecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151ef0: 0x64980a  movz        $s3, $v1, $a0
    ctx->pc = 0x151ef0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x151ef4: 0x1260001a  beqz        $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x151EF4u;
    {
        const bool branch_taken_0x151ef4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x151EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151EF4u;
        // 0x151ef8: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ef4) {
            ctx->pc = 0x151F60u;
            return;
        }
    }
    ctx->pc = 0x151EFCu;
    // 0x151efc: 0x26510880  addiu       $s1, $s2, 0x880
    ctx->pc = 0x151efcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2176));
    // 0x151f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x151f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f08: 0xc06760e  jal         func_19D838
    ctx->pc = 0x151F08u;
    SET_GPR_U32(ctx, 31, 0x151F10u);
    ctx->pc = 0x151F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151F08u;
    // 0x151f0c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D838u, 0x151F08u, 0x151F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F10u;
label_151f10:
    // 0x151f10: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x151f10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151f14: 0xda230000  lqc2        $vf3, 0x0($s1)
    ctx->pc = 0x151f14u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x151f18: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x151f18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x151f1c: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x151f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151f20: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x151f20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151f24: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x151f24u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151f28: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x151f28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x151f2c: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x151f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151f30: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x151f30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x151f34: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x151f34u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151f38: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x151f38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x151f3c: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x151f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151f40: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x151f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x151f44: 0xae560890  sw          $s6, 0x890($s2)
    ctx->pc = 0x151f44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2192), GPR_U32(ctx, 22));
    // 0x151f48: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x151f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151f4c: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x151f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x151f50: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x151f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x151f54: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x151f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x151f58: 0xc0618d4  jal         func_186350
    ctx->pc = 0x151F58u;
    SET_GPR_U32(ctx, 31, 0x151F60u);
    ctx->pc = 0x151F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151F58u;
    // 0x151f5c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186350u, 0x151F58u, 0x151F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F60u;
}
