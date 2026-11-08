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

// Function: BMotion_SetLevel_XVector32__FP11BMotionCtrlbP9FVector32
// Address: 0x1a1f08 - 0x1a2078
void BMotion_SetLevel_XVector32__FP11BMotionCtrlbP9FVector32_0x1a1f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotion_SetLevel_XVector32__FP11BMotionCtrlbP9FVector32_0x1a1f08");
#endif

    switch (ctx->pc) {
        case 0x1a2070u: goto label_1a2070;
        default: break;
    }

    ctx->pc = 0x1a1f08u;

    // 0x1a1f08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1f0c: 0x10a0002c  beqz        $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1A1F0Cu;
    {
        const bool branch_taken_0x1a1f0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F0Cu;
        // 0x1a1f10: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f0c) {
            ctx->pc = 0x1A1FC0u;
            goto label_1a1fc0;
        }
    }
    ctx->pc = 0x1A1F14u;
    // 0x1a1f14: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1a1f14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a1f18: 0x4be2117f  vftoi15.xyzw $vf2, $vf2
    ctx->pc = 0x1a1f18u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a1f1c: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1a1f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a1f20: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a1f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f24: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x1a1f24u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1a1f28: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1a1f28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a1f2c: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1a1f2cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1f30: 0x2c820007  sltiu       $v0, $a0, 0x7
    ctx->pc = 0x1a1f30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1a1f34: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A1F34u;
    {
        const bool branch_taken_0x1a1f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F34u;
        // 0x1a1f38: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f34) {
            ctx->pc = 0x1A1FB4u;
            goto label_1a1fb4;
        }
    }
    ctx->pc = 0x1A1F3Cu;
    // 0x1a1f3c: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1a1f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1a1f40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a1f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a1f44: 0x8c6391e0  lw          $v1, -0x6E20($v1)
    ctx->pc = 0x1a1f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939104)));
    // 0x1a1f48: 0x600008  jr          $v1
    ctx->pc = 0x1A1F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1F50u: goto label_1a1f50;
            case 0x1A1F60u: goto label_1a1f60;
            case 0x1A1F70u: goto label_1a1f70;
            case 0x1A1F80u: goto label_1a1f80;
            case 0x1A1F90u: goto label_1a1f90;
            case 0x1A1FA0u: goto label_1a1fa0;
            case 0x1A1FB0u: goto label_1a1fb0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1F48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A1F50u;
label_1a1f50:
    // 0x1a1f50: 0x4bc21b3c  vmove.xyz   $vf2, $vf3
    ctx->pc = 0x1a1f50u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1f54: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1A1F54u;
    {
        const bool branch_taken_0x1a1f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1f54) {
            ctx->pc = 0x1A1FB4u;
            goto label_1a1fb4;
        }
    }
    ctx->pc = 0x1A1F5Cu;
    // 0x1a1f5c: 0x0  nop
    ctx->pc = 0x1a1f5cu;
    // NOP
label_1a1f60:
    // 0x1a1f60: 0x4ac21b3c  vmove.yz    $vf2, $vf3
    ctx->pc = 0x1a1f60u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1f64: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A1F64u;
    {
        const bool branch_taken_0x1a1f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1f64) {
            ctx->pc = 0x1A1FB4u;
            goto label_1a1fb4;
        }
    }
    ctx->pc = 0x1A1F6Cu;
    // 0x1a1f6c: 0x0  nop
    ctx->pc = 0x1a1f6cu;
    // NOP
label_1a1f70:
    // 0x1a1f70: 0x4b421b3c  vmove.xz    $vf2, $vf3
    ctx->pc = 0x1a1f70u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1f74: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A1F74u;
    {
        const bool branch_taken_0x1a1f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1f74) {
            ctx->pc = 0x1A1FB4u;
            goto label_1a1fb4;
        }
    }
    ctx->pc = 0x1A1F7Cu;
    // 0x1a1f7c: 0x0  nop
    ctx->pc = 0x1a1f7cu;
    // NOP
label_1a1f80:
    // 0x1a1f80: 0x4a421b3c  vmove.z     $vf2, $vf3
    ctx->pc = 0x1a1f80u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1f84: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A1F84u;
    {
        const bool branch_taken_0x1a1f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1f84) {
            ctx->pc = 0x1A1FB4u;
            goto label_1a1fb4;
        }
    }
    ctx->pc = 0x1A1F8Cu;
    // 0x1a1f8c: 0x0  nop
    ctx->pc = 0x1a1f8cu;
    // NOP
label_1a1f90:
    // 0x1a1f90: 0x4b821b3c  vmove.xy    $vf2, $vf3
    ctx->pc = 0x1a1f90u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1f94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1F94u;
    {
        const bool branch_taken_0x1a1f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1f94) {
            ctx->pc = 0x1A1FB4u;
            goto label_1a1fb4;
        }
    }
    ctx->pc = 0x1A1F9Cu;
    // 0x1a1f9c: 0x0  nop
    ctx->pc = 0x1a1f9cu;
    // NOP
label_1a1fa0:
    // 0x1a1fa0: 0x4a821b3c  vmove.y     $vf2, $vf3
    ctx->pc = 0x1a1fa0u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1fa4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1FA4u;
    {
        const bool branch_taken_0x1a1fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1fa4) {
            ctx->pc = 0x1A1FB4u;
            goto label_1a1fb4;
        }
    }
    ctx->pc = 0x1A1FACu;
    // 0x1a1fac: 0x0  nop
    ctx->pc = 0x1a1facu;
    // NOP
label_1a1fb0:
    // 0x1a1fb0: 0x4b021b3c  vmove.x     $vf2, $vf3
    ctx->pc = 0x1a1fb0u;
    { __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
label_1a1fb4:
    // 0x1a1fb4: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1a1fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a1fb8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1A1FB8u;
    {
        const bool branch_taken_0x1a1fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1fb8) {
            ctx->pc = 0x1A2070u;
            goto label_1a2070;
        }
    }
    ctx->pc = 0x1A1FC0u;
label_1a1fc0:
    // 0x1a1fc0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1a1fc0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1fc4: 0x4bc2113f  vitof15.xyz $vf2, $vf2
    ctx->pc = 0x1a1fc4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a1fc8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1a1fc8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a1fcc: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1a1fccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a1fd0: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x1a1fd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1a1fd4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1A1FD4u;
    {
        const bool branch_taken_0x1a1fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FD4u;
        // 0x1a1fd8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1fd4) {
            ctx->pc = 0x1A2070u;
            goto label_1a2070;
        }
    }
    ctx->pc = 0x1A1FDCu;
    // 0x1a1fdc: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1a1fdcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a1fe0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a1fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a1fe4: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x1a1fe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1a1fe8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A1FE8u;
    {
        const bool branch_taken_0x1a1fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FE8u;
        // 0x1a1fec: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1fe8) {
            ctx->pc = 0x1A206Cu;
            goto label_1a206c;
        }
    }
    ctx->pc = 0x1A1FF0u;
    // 0x1a1ff0: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1a1ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1a1ff4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a1ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a1ff8: 0x8c639200  lw          $v1, -0x6E00($v1)
    ctx->pc = 0x1a1ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939136)));
    // 0x1a1ffc: 0x600008  jr          $v1
    ctx->pc = 0x1A1FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2008u: goto label_1a2008;
            case 0x1A2018u: goto label_1a2018;
            case 0x1A2028u: goto label_1a2028;
            case 0x1A2038u: goto label_1a2038;
            case 0x1A2048u: goto label_1a2048;
            case 0x1A2058u: goto label_1a2058;
            case 0x1A2068u: goto label_1a2068;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1FFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A2004u;
    // 0x1a2004: 0x0  nop
    ctx->pc = 0x1a2004u;
    // NOP
label_1a2008:
    // 0x1a2008: 0x4b02033c  vmove.x     $vf2, $vf0
    ctx->pc = 0x1a2008u;
    { __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a200c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1A200Cu;
    {
        const bool branch_taken_0x1a200c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a200c) {
            ctx->pc = 0x1A206Cu;
            goto label_1a206c;
        }
    }
    ctx->pc = 0x1A2014u;
    // 0x1a2014: 0x0  nop
    ctx->pc = 0x1a2014u;
    // NOP
label_1a2018:
    // 0x1a2018: 0x4a82033c  vmove.y     $vf2, $vf0
    ctx->pc = 0x1a2018u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a201c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A201Cu;
    {
        const bool branch_taken_0x1a201c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a201c) {
            ctx->pc = 0x1A206Cu;
            goto label_1a206c;
        }
    }
    ctx->pc = 0x1A2024u;
    // 0x1a2024: 0x0  nop
    ctx->pc = 0x1a2024u;
    // NOP
label_1a2028:
    // 0x1a2028: 0x4b82033c  vmove.xy    $vf2, $vf0
    ctx->pc = 0x1a2028u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a202c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A202Cu;
    {
        const bool branch_taken_0x1a202c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a202c) {
            ctx->pc = 0x1A206Cu;
            goto label_1a206c;
        }
    }
    ctx->pc = 0x1A2034u;
    // 0x1a2034: 0x0  nop
    ctx->pc = 0x1a2034u;
    // NOP
label_1a2038:
    // 0x1a2038: 0x4a42033c  vmove.z     $vf2, $vf0
    ctx->pc = 0x1a2038u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a203c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A203Cu;
    {
        const bool branch_taken_0x1a203c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a203c) {
            ctx->pc = 0x1A206Cu;
            goto label_1a206c;
        }
    }
    ctx->pc = 0x1A2044u;
    // 0x1a2044: 0x0  nop
    ctx->pc = 0x1a2044u;
    // NOP
label_1a2048:
    // 0x1a2048: 0x4b42033c  vmove.xz    $vf2, $vf0
    ctx->pc = 0x1a2048u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a204c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A204Cu;
    {
        const bool branch_taken_0x1a204c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a204c) {
            ctx->pc = 0x1A206Cu;
            goto label_1a206c;
        }
    }
    ctx->pc = 0x1A2054u;
    // 0x1a2054: 0x0  nop
    ctx->pc = 0x1a2054u;
    // NOP
label_1a2058:
    // 0x1a2058: 0x4ac2033c  vmove.yz    $vf2, $vf0
    ctx->pc = 0x1a2058u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a205c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A205Cu;
    {
        const bool branch_taken_0x1a205c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a205c) {
            ctx->pc = 0x1A206Cu;
            goto label_1a206c;
        }
    }
    ctx->pc = 0x1A2064u;
    // 0x1a2064: 0x0  nop
    ctx->pc = 0x1a2064u;
    // NOP
label_1a2068:
    // 0x1a2068: 0x4bc2033c  vmove.xyz   $vf2, $vf0
    ctx->pc = 0x1a2068u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a206c:
    // 0x1a206c: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1a206cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1a2070:
    // 0x1a2070: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2070u;
        // 0x1a2074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2078u;
}
