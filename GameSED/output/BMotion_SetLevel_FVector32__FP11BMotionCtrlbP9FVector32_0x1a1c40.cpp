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

// Function: BMotion_SetLevel_FVector32__FP11BMotionCtrlbP9FVector32
// Address: 0x1a1c40 - 0x1a1d98
void BMotion_SetLevel_FVector32__FP11BMotionCtrlbP9FVector32_0x1a1c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotion_SetLevel_FVector32__FP11BMotionCtrlbP9FVector32_0x1a1c40");
#endif

    switch (ctx->pc) {
        case 0x1a1ce0u: goto label_1a1ce0;
        default: break;
    }

    ctx->pc = 0x1a1c40u;

    // 0x1a1c40: 0x10a00029  beqz        $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1A1C40u;
    {
        const bool branch_taken_0x1a1c40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C40u;
        // 0x1a1c44: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c40) {
            ctx->pc = 0x1A1CE8u;
            goto label_1a1ce8;
        }
    }
    ctx->pc = 0x1A1C48u;
    // 0x1a1c48: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a1c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1c4c: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x1a1c4cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1a1c50: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1a1c50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a1c54: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x1a1c54u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a1c58: 0x2c820007  sltiu       $v0, $a0, 0x7
    ctx->pc = 0x1a1c58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1a1c5c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A1C5Cu;
    {
        const bool branch_taken_0x1a1c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C5Cu;
        // 0x1a1c60: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c5c) {
            ctx->pc = 0x1A1CDCu;
            goto label_1a1cdc;
        }
    }
    ctx->pc = 0x1A1C64u;
    // 0x1a1c64: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1a1c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1a1c68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a1c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a1c6c: 0x8c639160  lw          $v1, -0x6EA0($v1)
    ctx->pc = 0x1a1c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938976)));
    // 0x1a1c70: 0x600008  jr          $v1
    ctx->pc = 0x1A1C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1C78u: goto label_1a1c78;
            case 0x1A1C88u: goto label_1a1c88;
            case 0x1A1C98u: goto label_1a1c98;
            case 0x1A1CA8u: goto label_1a1ca8;
            case 0x1A1CB8u: goto label_1a1cb8;
            case 0x1A1CC8u: goto label_1a1cc8;
            case 0x1A1CD8u: goto label_1a1cd8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1C70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A1C78u;
label_1a1c78:
    // 0x1a1c78: 0x4bc21b3c  vmove.xyz   $vf2, $vf3
    ctx->pc = 0x1a1c78u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1c7c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1A1C7Cu;
    {
        const bool branch_taken_0x1a1c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c7c) {
            ctx->pc = 0x1A1CDCu;
            goto label_1a1cdc;
        }
    }
    ctx->pc = 0x1A1C84u;
    // 0x1a1c84: 0x0  nop
    ctx->pc = 0x1a1c84u;
    // NOP
label_1a1c88:
    // 0x1a1c88: 0x4ac21b3c  vmove.yz    $vf2, $vf3
    ctx->pc = 0x1a1c88u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1c8c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A1C8Cu;
    {
        const bool branch_taken_0x1a1c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c8c) {
            ctx->pc = 0x1A1CDCu;
            goto label_1a1cdc;
        }
    }
    ctx->pc = 0x1A1C94u;
    // 0x1a1c94: 0x0  nop
    ctx->pc = 0x1a1c94u;
    // NOP
label_1a1c98:
    // 0x1a1c98: 0x4b421b3c  vmove.xz    $vf2, $vf3
    ctx->pc = 0x1a1c98u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1c9c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A1C9Cu;
    {
        const bool branch_taken_0x1a1c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c9c) {
            ctx->pc = 0x1A1CDCu;
            goto label_1a1cdc;
        }
    }
    ctx->pc = 0x1A1CA4u;
    // 0x1a1ca4: 0x0  nop
    ctx->pc = 0x1a1ca4u;
    // NOP
label_1a1ca8:
    // 0x1a1ca8: 0x4a421b3c  vmove.z     $vf2, $vf3
    ctx->pc = 0x1a1ca8u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1cac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A1CACu;
    {
        const bool branch_taken_0x1a1cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1cac) {
            ctx->pc = 0x1A1CDCu;
            goto label_1a1cdc;
        }
    }
    ctx->pc = 0x1A1CB4u;
    // 0x1a1cb4: 0x0  nop
    ctx->pc = 0x1a1cb4u;
    // NOP
label_1a1cb8:
    // 0x1a1cb8: 0x4b821b3c  vmove.xy    $vf2, $vf3
    ctx->pc = 0x1a1cb8u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1cbc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1CBCu;
    {
        const bool branch_taken_0x1a1cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1cbc) {
            ctx->pc = 0x1A1CDCu;
            goto label_1a1cdc;
        }
    }
    ctx->pc = 0x1A1CC4u;
    // 0x1a1cc4: 0x0  nop
    ctx->pc = 0x1a1cc4u;
    // NOP
label_1a1cc8:
    // 0x1a1cc8: 0x4a821b3c  vmove.y     $vf2, $vf3
    ctx->pc = 0x1a1cc8u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1ccc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1CCCu;
    {
        const bool branch_taken_0x1a1ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1ccc) {
            ctx->pc = 0x1A1CDCu;
            goto label_1a1cdc;
        }
    }
    ctx->pc = 0x1A1CD4u;
    // 0x1a1cd4: 0x0  nop
    ctx->pc = 0x1a1cd4u;
    // NOP
label_1a1cd8:
    // 0x1a1cd8: 0x4b021b3c  vmove.x     $vf2, $vf3
    ctx->pc = 0x1a1cd8u;
    { __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
label_1a1cdc:
    // 0x1a1cdc: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1a1cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1a1ce0:
    // 0x1a1ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1CE8u;
label_1a1ce8:
    // 0x1a1ce8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1a1ce8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1cec: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1a1cecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1a1cf0: 0x9483000a  lhu         $v1, 0xA($a0)
    ctx->pc = 0x1a1cf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1a1cf4: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A1CF4u;
    {
        const bool branch_taken_0x1a1cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CF4u;
        // 0x1a1cf8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1cf4) {
            ctx->pc = 0x1A1CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1ce0;
        }
    }
    ctx->pc = 0x1A1CFCu;
    // 0x1a1cfc: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1a1cfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a1d00: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1a1d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a1d04: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x1a1d04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1a1d08: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A1D08u;
    {
        const bool branch_taken_0x1a1d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D08u;
        // 0x1a1d0c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1d08) {
            ctx->pc = 0x1A1D8Cu;
            goto label_1a1d8c;
        }
    }
    ctx->pc = 0x1A1D10u;
    // 0x1a1d10: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1a1d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1a1d14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a1d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a1d18: 0x8c639180  lw          $v1, -0x6E80($v1)
    ctx->pc = 0x1a1d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939008)));
    // 0x1a1d1c: 0x600008  jr          $v1
    ctx->pc = 0x1A1D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1D28u: goto label_1a1d28;
            case 0x1A1D38u: goto label_1a1d38;
            case 0x1A1D48u: goto label_1a1d48;
            case 0x1A1D58u: goto label_1a1d58;
            case 0x1A1D68u: goto label_1a1d68;
            case 0x1A1D78u: goto label_1a1d78;
            case 0x1A1D88u: goto label_1a1d88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1D1Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A1D24u;
    // 0x1a1d24: 0x0  nop
    ctx->pc = 0x1a1d24u;
    // NOP
label_1a1d28:
    // 0x1a1d28: 0x4b02033c  vmove.x     $vf2, $vf0
    ctx->pc = 0x1a1d28u;
    { __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a1d2c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1A1D2Cu;
    {
        const bool branch_taken_0x1a1d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1d2c) {
            ctx->pc = 0x1A1D8Cu;
            goto label_1a1d8c;
        }
    }
    ctx->pc = 0x1A1D34u;
    // 0x1a1d34: 0x0  nop
    ctx->pc = 0x1a1d34u;
    // NOP
label_1a1d38:
    // 0x1a1d38: 0x4a82033c  vmove.y     $vf2, $vf0
    ctx->pc = 0x1a1d38u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a1d3c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A1D3Cu;
    {
        const bool branch_taken_0x1a1d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1d3c) {
            ctx->pc = 0x1A1D8Cu;
            goto label_1a1d8c;
        }
    }
    ctx->pc = 0x1A1D44u;
    // 0x1a1d44: 0x0  nop
    ctx->pc = 0x1a1d44u;
    // NOP
label_1a1d48:
    // 0x1a1d48: 0x4b82033c  vmove.xy    $vf2, $vf0
    ctx->pc = 0x1a1d48u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a1d4c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A1D4Cu;
    {
        const bool branch_taken_0x1a1d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1d4c) {
            ctx->pc = 0x1A1D8Cu;
            goto label_1a1d8c;
        }
    }
    ctx->pc = 0x1A1D54u;
    // 0x1a1d54: 0x0  nop
    ctx->pc = 0x1a1d54u;
    // NOP
label_1a1d58:
    // 0x1a1d58: 0x4a42033c  vmove.z     $vf2, $vf0
    ctx->pc = 0x1a1d58u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a1d5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A1D5Cu;
    {
        const bool branch_taken_0x1a1d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1d5c) {
            ctx->pc = 0x1A1D8Cu;
            goto label_1a1d8c;
        }
    }
    ctx->pc = 0x1A1D64u;
    // 0x1a1d64: 0x0  nop
    ctx->pc = 0x1a1d64u;
    // NOP
label_1a1d68:
    // 0x1a1d68: 0x4b42033c  vmove.xz    $vf2, $vf0
    ctx->pc = 0x1a1d68u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a1d6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1D6Cu;
    {
        const bool branch_taken_0x1a1d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1d6c) {
            ctx->pc = 0x1A1D8Cu;
            goto label_1a1d8c;
        }
    }
    ctx->pc = 0x1A1D74u;
    // 0x1a1d74: 0x0  nop
    ctx->pc = 0x1a1d74u;
    // NOP
label_1a1d78:
    // 0x1a1d78: 0x4ac2033c  vmove.yz    $vf2, $vf0
    ctx->pc = 0x1a1d78u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a1d7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1D7Cu;
    {
        const bool branch_taken_0x1a1d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1d7c) {
            ctx->pc = 0x1A1D8Cu;
            goto label_1a1d8c;
        }
    }
    ctx->pc = 0x1A1D84u;
    // 0x1a1d84: 0x0  nop
    ctx->pc = 0x1a1d84u;
    // NOP
label_1a1d88:
    // 0x1a1d88: 0x4bc2033c  vmove.xyz   $vf2, $vf0
    ctx->pc = 0x1a1d88u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a1d8c:
    // 0x1a1d8c: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1a1d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a1d90: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1D98u;
}
