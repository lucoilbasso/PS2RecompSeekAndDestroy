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

// Function: BMotion_SetLevel_IVector32__FP11BMotionCtrlbP9FVector32
// Address: 0x1a1d98 - 0x1a1f08
void BMotion_SetLevel_IVector32__FP11BMotionCtrlbP9FVector32_0x1a1d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotion_SetLevel_IVector32__FP11BMotionCtrlbP9FVector32_0x1a1d98");
#endif

    switch (ctx->pc) {
        case 0x1a1f00u: goto label_1a1f00;
        default: break;
    }

    ctx->pc = 0x1a1d98u;

    // 0x1a1d98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1d9c: 0x10a0002c  beqz        $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1A1D9Cu;
    {
        const bool branch_taken_0x1a1d9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D9Cu;
        // 0x1a1da0: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1d9c) {
            ctx->pc = 0x1A1E50u;
            goto label_1a1e50;
        }
    }
    ctx->pc = 0x1A1DA4u;
    // 0x1a1da4: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1a1da4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a1da8: 0x4be2117c  vftoi0.xyzw $vf2, $vf2
    ctx->pc = 0x1a1da8u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a1dac: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1a1dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a1db0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a1db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1db4: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x1a1db4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1a1db8: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1a1db8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a1dbc: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1a1dbcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1dc0: 0x2c820007  sltiu       $v0, $a0, 0x7
    ctx->pc = 0x1a1dc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1a1dc4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A1DC4u;
    {
        const bool branch_taken_0x1a1dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DC4u;
        // 0x1a1dc8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1dc4) {
            ctx->pc = 0x1A1E44u;
            goto label_1a1e44;
        }
    }
    ctx->pc = 0x1A1DCCu;
    // 0x1a1dcc: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1a1dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1a1dd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a1dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a1dd4: 0x8c6391a0  lw          $v1, -0x6E60($v1)
    ctx->pc = 0x1a1dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939040)));
    // 0x1a1dd8: 0x600008  jr          $v1
    ctx->pc = 0x1A1DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1DE0u: goto label_1a1de0;
            case 0x1A1DF0u: goto label_1a1df0;
            case 0x1A1E00u: goto label_1a1e00;
            case 0x1A1E10u: goto label_1a1e10;
            case 0x1A1E20u: goto label_1a1e20;
            case 0x1A1E30u: goto label_1a1e30;
            case 0x1A1E40u: goto label_1a1e40;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1DD8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A1DE0u;
label_1a1de0:
    // 0x1a1de0: 0x4bc21b3c  vmove.xyz   $vf2, $vf3
    ctx->pc = 0x1a1de0u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1de4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1A1DE4u;
    {
        const bool branch_taken_0x1a1de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1de4) {
            ctx->pc = 0x1A1E44u;
            goto label_1a1e44;
        }
    }
    ctx->pc = 0x1A1DECu;
    // 0x1a1dec: 0x0  nop
    ctx->pc = 0x1a1decu;
    // NOP
label_1a1df0:
    // 0x1a1df0: 0x4ac21b3c  vmove.yz    $vf2, $vf3
    ctx->pc = 0x1a1df0u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1df4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A1DF4u;
    {
        const bool branch_taken_0x1a1df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1df4) {
            ctx->pc = 0x1A1E44u;
            goto label_1a1e44;
        }
    }
    ctx->pc = 0x1A1DFCu;
    // 0x1a1dfc: 0x0  nop
    ctx->pc = 0x1a1dfcu;
    // NOP
label_1a1e00:
    // 0x1a1e00: 0x4b421b3c  vmove.xz    $vf2, $vf3
    ctx->pc = 0x1a1e00u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1e04: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A1E04u;
    {
        const bool branch_taken_0x1a1e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e04) {
            ctx->pc = 0x1A1E44u;
            goto label_1a1e44;
        }
    }
    ctx->pc = 0x1A1E0Cu;
    // 0x1a1e0c: 0x0  nop
    ctx->pc = 0x1a1e0cu;
    // NOP
label_1a1e10:
    // 0x1a1e10: 0x4a421b3c  vmove.z     $vf2, $vf3
    ctx->pc = 0x1a1e10u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1e14: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A1E14u;
    {
        const bool branch_taken_0x1a1e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e14) {
            ctx->pc = 0x1A1E44u;
            goto label_1a1e44;
        }
    }
    ctx->pc = 0x1A1E1Cu;
    // 0x1a1e1c: 0x0  nop
    ctx->pc = 0x1a1e1cu;
    // NOP
label_1a1e20:
    // 0x1a1e20: 0x4b821b3c  vmove.xy    $vf2, $vf3
    ctx->pc = 0x1a1e20u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1e24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1E24u;
    {
        const bool branch_taken_0x1a1e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e24) {
            ctx->pc = 0x1A1E44u;
            goto label_1a1e44;
        }
    }
    ctx->pc = 0x1A1E2Cu;
    // 0x1a1e2c: 0x0  nop
    ctx->pc = 0x1a1e2cu;
    // NOP
label_1a1e30:
    // 0x1a1e30: 0x4a821b3c  vmove.y     $vf2, $vf3
    ctx->pc = 0x1a1e30u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1e34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1E34u;
    {
        const bool branch_taken_0x1a1e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e34) {
            ctx->pc = 0x1A1E44u;
            goto label_1a1e44;
        }
    }
    ctx->pc = 0x1A1E3Cu;
    // 0x1a1e3c: 0x0  nop
    ctx->pc = 0x1a1e3cu;
    // NOP
label_1a1e40:
    // 0x1a1e40: 0x4b021b3c  vmove.x     $vf2, $vf3
    ctx->pc = 0x1a1e40u;
    { __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
label_1a1e44:
    // 0x1a1e44: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1a1e44u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a1e48: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1A1E48u;
    {
        const bool branch_taken_0x1a1e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e48) {
            ctx->pc = 0x1A1F00u;
            goto label_1a1f00;
        }
    }
    ctx->pc = 0x1A1E50u;
label_1a1e50:
    // 0x1a1e50: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1a1e50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1e54: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x1a1e54u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a1e58: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1a1e58u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a1e5c: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1a1e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a1e60: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x1a1e60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1a1e64: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1A1E64u;
    {
        const bool branch_taken_0x1a1e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E64u;
        // 0x1a1e68: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e64) {
            ctx->pc = 0x1A1F00u;
            goto label_1a1f00;
        }
    }
    ctx->pc = 0x1A1E6Cu;
    // 0x1a1e6c: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1a1e6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a1e70: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a1e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a1e74: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x1a1e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1a1e78: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A1E78u;
    {
        const bool branch_taken_0x1a1e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E78u;
        // 0x1a1e7c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e78) {
            ctx->pc = 0x1A1EFCu;
            goto label_1a1efc;
        }
    }
    ctx->pc = 0x1A1E80u;
    // 0x1a1e80: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1a1e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1a1e84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a1e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a1e88: 0x8c6391c0  lw          $v1, -0x6E40($v1)
    ctx->pc = 0x1a1e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939072)));
    // 0x1a1e8c: 0x600008  jr          $v1
    ctx->pc = 0x1A1E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1E98u: goto label_1a1e98;
            case 0x1A1EA8u: goto label_1a1ea8;
            case 0x1A1EB8u: goto label_1a1eb8;
            case 0x1A1EC8u: goto label_1a1ec8;
            case 0x1A1ED8u: goto label_1a1ed8;
            case 0x1A1EE8u: goto label_1a1ee8;
            case 0x1A1EF8u: goto label_1a1ef8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1E8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A1E94u;
    // 0x1a1e94: 0x0  nop
    ctx->pc = 0x1a1e94u;
    // NOP
label_1a1e98:
    // 0x1a1e98: 0x4b02033c  vmove.x     $vf2, $vf0
    ctx->pc = 0x1a1e98u;
    { __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a1e9c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1A1E9Cu;
    {
        const bool branch_taken_0x1a1e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e9c) {
            ctx->pc = 0x1A1EFCu;
            goto label_1a1efc;
        }
    }
    ctx->pc = 0x1A1EA4u;
    // 0x1a1ea4: 0x0  nop
    ctx->pc = 0x1a1ea4u;
    // NOP
label_1a1ea8:
    // 0x1a1ea8: 0x4a82033c  vmove.y     $vf2, $vf0
    ctx->pc = 0x1a1ea8u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a1eac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A1EACu;
    {
        const bool branch_taken_0x1a1eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1eac) {
            ctx->pc = 0x1A1EFCu;
            goto label_1a1efc;
        }
    }
    ctx->pc = 0x1A1EB4u;
    // 0x1a1eb4: 0x0  nop
    ctx->pc = 0x1a1eb4u;
    // NOP
label_1a1eb8:
    // 0x1a1eb8: 0x4b82033c  vmove.xy    $vf2, $vf0
    ctx->pc = 0x1a1eb8u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a1ebc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A1EBCu;
    {
        const bool branch_taken_0x1a1ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1ebc) {
            ctx->pc = 0x1A1EFCu;
            goto label_1a1efc;
        }
    }
    ctx->pc = 0x1A1EC4u;
    // 0x1a1ec4: 0x0  nop
    ctx->pc = 0x1a1ec4u;
    // NOP
label_1a1ec8:
    // 0x1a1ec8: 0x4a42033c  vmove.z     $vf2, $vf0
    ctx->pc = 0x1a1ec8u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a1ecc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A1ECCu;
    {
        const bool branch_taken_0x1a1ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1ecc) {
            ctx->pc = 0x1A1EFCu;
            goto label_1a1efc;
        }
    }
    ctx->pc = 0x1A1ED4u;
    // 0x1a1ed4: 0x0  nop
    ctx->pc = 0x1a1ed4u;
    // NOP
label_1a1ed8:
    // 0x1a1ed8: 0x4b42033c  vmove.xz    $vf2, $vf0
    ctx->pc = 0x1a1ed8u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a1edc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1EDCu;
    {
        const bool branch_taken_0x1a1edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1edc) {
            ctx->pc = 0x1A1EFCu;
            goto label_1a1efc;
        }
    }
    ctx->pc = 0x1A1EE4u;
    // 0x1a1ee4: 0x0  nop
    ctx->pc = 0x1a1ee4u;
    // NOP
label_1a1ee8:
    // 0x1a1ee8: 0x4ac2033c  vmove.yz    $vf2, $vf0
    ctx->pc = 0x1a1ee8u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a1eec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1EECu;
    {
        const bool branch_taken_0x1a1eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1eec) {
            ctx->pc = 0x1A1EFCu;
            goto label_1a1efc;
        }
    }
    ctx->pc = 0x1A1EF4u;
    // 0x1a1ef4: 0x0  nop
    ctx->pc = 0x1a1ef4u;
    // NOP
label_1a1ef8:
    // 0x1a1ef8: 0x4bc2033c  vmove.xyz   $vf2, $vf0
    ctx->pc = 0x1a1ef8u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a1efc:
    // 0x1a1efc: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1a1efcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1a1f00:
    // 0x1a1f00: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F00u;
        // 0x1a1f04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1F08u;
}
