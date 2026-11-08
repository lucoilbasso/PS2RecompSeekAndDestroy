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

// Function: BMotionLinerVectorSetup__FP5BcObjP11BMotionCtrlP9FVector32i
// Address: 0x1a2f70 - 0x1a309c
void BMotionLinerVectorSetup__FP5BcObjP11BMotionCtrlP9FVector32i_0x1a2f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionLinerVectorSetup__FP5BcObjP11BMotionCtrlP9FVector32i_0x1a2f70");
#endif

    switch (ctx->pc) {
        case 0x1a2f70u: goto label_1a2f70;
        case 0x1a2f74u: goto label_1a2f74;
        case 0x1a2f78u: goto label_1a2f78;
        case 0x1a2f7cu: goto label_1a2f7c;
        case 0x1a2f80u: goto label_1a2f80;
        case 0x1a2f84u: goto label_1a2f84;
        case 0x1a2f88u: goto label_1a2f88;
        case 0x1a2f8cu: goto label_1a2f8c;
        case 0x1a2f90u: goto label_1a2f90;
        case 0x1a2f94u: goto label_1a2f94;
        case 0x1a2f98u: goto label_1a2f98;
        case 0x1a2f9cu: goto label_1a2f9c;
        case 0x1a2fa0u: goto label_1a2fa0;
        case 0x1a2fa4u: goto label_1a2fa4;
        case 0x1a2fa8u: goto label_1a2fa8;
        case 0x1a2facu: goto label_1a2fac;
        case 0x1a2fb0u: goto label_1a2fb0;
        case 0x1a2fb4u: goto label_1a2fb4;
        case 0x1a2fb8u: goto label_1a2fb8;
        case 0x1a2fbcu: goto label_1a2fbc;
        case 0x1a2fc0u: goto label_1a2fc0;
        case 0x1a2fc4u: goto label_1a2fc4;
        case 0x1a2fc8u: goto label_1a2fc8;
        case 0x1a2fccu: goto label_1a2fcc;
        case 0x1a2fd0u: goto label_1a2fd0;
        case 0x1a2fd4u: goto label_1a2fd4;
        case 0x1a2fd8u: goto label_1a2fd8;
        case 0x1a2fdcu: goto label_1a2fdc;
        case 0x1a2fe0u: goto label_1a2fe0;
        case 0x1a2fe4u: goto label_1a2fe4;
        case 0x1a2fe8u: goto label_1a2fe8;
        case 0x1a2fecu: goto label_1a2fec;
        case 0x1a2ff0u: goto label_1a2ff0;
        case 0x1a2ff4u: goto label_1a2ff4;
        case 0x1a2ff8u: goto label_1a2ff8;
        case 0x1a2ffcu: goto label_1a2ffc;
        case 0x1a3000u: goto label_1a3000;
        case 0x1a3004u: goto label_1a3004;
        case 0x1a3008u: goto label_1a3008;
        case 0x1a300cu: goto label_1a300c;
        case 0x1a3010u: goto label_1a3010;
        case 0x1a3014u: goto label_1a3014;
        case 0x1a3018u: goto label_1a3018;
        case 0x1a301cu: goto label_1a301c;
        case 0x1a3020u: goto label_1a3020;
        case 0x1a3024u: goto label_1a3024;
        case 0x1a3028u: goto label_1a3028;
        case 0x1a302cu: goto label_1a302c;
        case 0x1a3030u: goto label_1a3030;
        case 0x1a3034u: goto label_1a3034;
        case 0x1a3038u: goto label_1a3038;
        case 0x1a303cu: goto label_1a303c;
        case 0x1a3040u: goto label_1a3040;
        case 0x1a3044u: goto label_1a3044;
        case 0x1a3048u: goto label_1a3048;
        case 0x1a304cu: goto label_1a304c;
        case 0x1a3050u: goto label_1a3050;
        case 0x1a3054u: goto label_1a3054;
        case 0x1a3058u: goto label_1a3058;
        case 0x1a305cu: goto label_1a305c;
        case 0x1a3060u: goto label_1a3060;
        case 0x1a3064u: goto label_1a3064;
        case 0x1a3068u: goto label_1a3068;
        case 0x1a306cu: goto label_1a306c;
        case 0x1a3070u: goto label_1a3070;
        case 0x1a3074u: goto label_1a3074;
        case 0x1a3078u: goto label_1a3078;
        case 0x1a307cu: goto label_1a307c;
        case 0x1a3080u: goto label_1a3080;
        case 0x1a3084u: goto label_1a3084;
        case 0x1a3088u: goto label_1a3088;
        case 0x1a308cu: goto label_1a308c;
        case 0x1a3090u: goto label_1a3090;
        case 0x1a3094u: goto label_1a3094;
        case 0x1a3098u: goto label_1a3098;
        default: break;
    }

    ctx->pc = 0x1a2f70u;

label_1a2f70:
    // 0x1a2f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a2f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a2f74:
    // 0x1a2f74: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a2f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
label_1a2f78:
    // 0x1a2f78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a2f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a2f7c:
    // 0x1a2f7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a2f7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a2f80:
    // 0x1a2f80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a2f84:
    // 0x1a2f84: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a2f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a2f88:
    // 0x1a2f88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a2f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a2f8c:
    // 0x1a2f8c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1a2f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a2f90:
    // 0x1a2f90: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a2f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a2f94:
    // 0x1a2f94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a2f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a2f98:
    // 0x1a2f98: 0x24462d88  addiu       $a2, $v0, 0x2D88
    ctx->pc = 0x1a2f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 11656));
label_1a2f9c:
    // 0x1a2f9c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a2f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1a2fa0:
    // 0x1a2fa0: 0xc068866  jal         func_1A2198
label_1a2fa4:
    if (ctx->pc == 0x1A2FA4u) {
        ctx->pc = 0x1A2FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FA0u;
        // 0x1a2fa4: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2FA8u;
        goto label_1a2fa8;
    }
    ctx->pc = 0x1A2FA0u;
    SET_GPR_U32(ctx, 31, 0x1A2FA8u);
    ctx->pc = 0x1A2FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2FA0u;
    // 0x1a2fa4: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A2FA0u, 0x1A2FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2FA8u;
label_1a2fa8:
    // 0x1a2fa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a2fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2fac:
    // 0x1a2fac: 0x9642000a  lhu         $v0, 0xA($s2)
    ctx->pc = 0x1a2facu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_1a2fb0:
    // 0x1a2fb0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1a2fb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1a2fb4:
    // 0x1a2fb4: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1a2fb4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a2fb8:
    // 0x1a2fb8: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1a2fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a2fbc:
    // 0x1a2fbc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a2fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a2fc0:
    // 0x1a2fc0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_1a2fc4:
    if (ctx->pc == 0x1A2FC4u) {
        ctx->pc = 0x1A2FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FC0u;
        // 0x1a2fc4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2FC8u;
        goto label_1a2fc8;
    }
    ctx->pc = 0x1A2FC0u;
    {
        const bool branch_taken_0x1a2fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FC0u;
        // 0x1a2fc4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fc0) {
            ctx->pc = 0x1A3058u;
            goto label_1a3058;
        }
    }
    ctx->pc = 0x1A2FC8u;
label_1a2fc8:
    // 0x1a2fc8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1a2fc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1a2fcc:
    // 0x1a2fcc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a2fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1a2fd0:
    // 0x1a2fd0: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x1a2fd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1a2fd4:
    // 0x1a2fd4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1a2fd8:
    if (ctx->pc == 0x1A2FD8u) {
        ctx->pc = 0x1A2FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FD4u;
        // 0x1a2fd8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2FDCu;
        goto label_1a2fdc;
    }
    ctx->pc = 0x1A2FD4u;
    {
        const bool branch_taken_0x1a2fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FD4u;
        // 0x1a2fd8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fd4) {
            ctx->pc = 0x1A3054u;
            goto label_1a3054;
        }
    }
    ctx->pc = 0x1A2FDCu;
label_1a2fdc:
    // 0x1a2fdc: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1a2fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
label_1a2fe0:
    // 0x1a2fe0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a2fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a2fe4:
    // 0x1a2fe4: 0x8c639280  lw          $v1, -0x6D80($v1)
    ctx->pc = 0x1a2fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939264)));
label_1a2fe8:
    // 0x1a2fe8: 0x600008  jr          $v1
label_1a2fec:
    if (ctx->pc == 0x1A2FECu) {
        ctx->pc = 0x1A2FF0u;
        goto label_1a2ff0;
    }
    ctx->pc = 0x1A2FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2FF0u: goto label_1a2ff0;
            case 0x1A3000u: goto label_1a3000;
            case 0x1A3010u: goto label_1a3010;
            case 0x1A3020u: goto label_1a3020;
            case 0x1A3030u: goto label_1a3030;
            case 0x1A3040u: goto label_1a3040;
            case 0x1A3050u: goto label_1a3050;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2FE8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A2FF0u;
label_1a2ff0:
    // 0x1a2ff0: 0x4b02033c  vmove.x     $vf2, $vf0
    ctx->pc = 0x1a2ff0u;
    { __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a2ff4:
    // 0x1a2ff4: 0x10000017  b           . + 4 + (0x17 << 2)
label_1a2ff8:
    if (ctx->pc == 0x1A2FF8u) {
        ctx->pc = 0x1A2FFCu;
        goto label_1a2ffc;
    }
    ctx->pc = 0x1A2FF4u;
    {
        const bool branch_taken_0x1a2ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2ff4) {
            ctx->pc = 0x1A3054u;
            goto label_1a3054;
        }
    }
    ctx->pc = 0x1A2FFCu;
label_1a2ffc:
    // 0x1a2ffc: 0x0  nop
    ctx->pc = 0x1a2ffcu;
    // NOP
label_1a3000:
    // 0x1a3000: 0x4a82033c  vmove.y     $vf2, $vf0
    ctx->pc = 0x1a3000u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3004:
    // 0x1a3004: 0x10000013  b           . + 4 + (0x13 << 2)
label_1a3008:
    if (ctx->pc == 0x1A3008u) {
        ctx->pc = 0x1A300Cu;
        goto label_1a300c;
    }
    ctx->pc = 0x1A3004u;
    {
        const bool branch_taken_0x1a3004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3004) {
            ctx->pc = 0x1A3054u;
            goto label_1a3054;
        }
    }
    ctx->pc = 0x1A300Cu;
label_1a300c:
    // 0x1a300c: 0x0  nop
    ctx->pc = 0x1a300cu;
    // NOP
label_1a3010:
    // 0x1a3010: 0x4b82033c  vmove.xy    $vf2, $vf0
    ctx->pc = 0x1a3010u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3014:
    // 0x1a3014: 0x1000000f  b           . + 4 + (0xF << 2)
label_1a3018:
    if (ctx->pc == 0x1A3018u) {
        ctx->pc = 0x1A301Cu;
        goto label_1a301c;
    }
    ctx->pc = 0x1A3014u;
    {
        const bool branch_taken_0x1a3014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3014) {
            ctx->pc = 0x1A3054u;
            goto label_1a3054;
        }
    }
    ctx->pc = 0x1A301Cu;
label_1a301c:
    // 0x1a301c: 0x0  nop
    ctx->pc = 0x1a301cu;
    // NOP
label_1a3020:
    // 0x1a3020: 0x4a42033c  vmove.z     $vf2, $vf0
    ctx->pc = 0x1a3020u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3024:
    // 0x1a3024: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a3028:
    if (ctx->pc == 0x1A3028u) {
        ctx->pc = 0x1A302Cu;
        goto label_1a302c;
    }
    ctx->pc = 0x1A3024u;
    {
        const bool branch_taken_0x1a3024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3024) {
            ctx->pc = 0x1A3054u;
            goto label_1a3054;
        }
    }
    ctx->pc = 0x1A302Cu;
label_1a302c:
    // 0x1a302c: 0x0  nop
    ctx->pc = 0x1a302cu;
    // NOP
label_1a3030:
    // 0x1a3030: 0x4b42033c  vmove.xz    $vf2, $vf0
    ctx->pc = 0x1a3030u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3034:
    // 0x1a3034: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a3038:
    if (ctx->pc == 0x1A3038u) {
        ctx->pc = 0x1A303Cu;
        goto label_1a303c;
    }
    ctx->pc = 0x1A3034u;
    {
        const bool branch_taken_0x1a3034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3034) {
            ctx->pc = 0x1A3054u;
            goto label_1a3054;
        }
    }
    ctx->pc = 0x1A303Cu;
label_1a303c:
    // 0x1a303c: 0x0  nop
    ctx->pc = 0x1a303cu;
    // NOP
label_1a3040:
    // 0x1a3040: 0x4ac2033c  vmove.yz    $vf2, $vf0
    ctx->pc = 0x1a3040u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3044:
    // 0x1a3044: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a3048:
    if (ctx->pc == 0x1A3048u) {
        ctx->pc = 0x1A304Cu;
        goto label_1a304c;
    }
    ctx->pc = 0x1A3044u;
    {
        const bool branch_taken_0x1a3044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3044) {
            ctx->pc = 0x1A3054u;
            goto label_1a3054;
        }
    }
    ctx->pc = 0x1A304Cu;
label_1a304c:
    // 0x1a304c: 0x0  nop
    ctx->pc = 0x1a304cu;
    // NOP
label_1a3050:
    // 0x1a3050: 0x4bc2033c  vmove.xyz   $vf2, $vf0
    ctx->pc = 0x1a3050u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3054:
    // 0x1a3054: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1a3054u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1a3058:
    // 0x1a3058: 0xa4b10030  sh          $s1, 0x30($a1)
    ctx->pc = 0x1a3058u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 17));
label_1a305c:
    // 0x1a305c: 0x8e43007c  lw          $v1, 0x7C($s2)
    ctx->pc = 0x1a305cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_1a3060:
    // 0x1a3060: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x1a3060u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_1a3064:
    // 0x1a3064: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1a3064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1a3068:
    // 0x1a3068: 0x14720006  bne         $v1, $s2, . + 4 + (0x6 << 2)
label_1a306c:
    if (ctx->pc == 0x1A306Cu) {
        ctx->pc = 0x1A306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3068u;
        // 0x1a306c: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3070u;
        goto label_1a3070;
    }
    ctx->pc = 0x1A3068u;
    {
        const bool branch_taken_0x1a3068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x1A306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3068u;
        // 0x1a306c: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3068) {
            ctx->pc = 0x1A3084u;
            goto label_1a3084;
        }
    }
    ctx->pc = 0x1A3070u;
label_1a3070:
    // 0x1a3070: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1a3070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a3074:
    // 0x1a3074: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1a3074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1a3078:
    // 0x1a3078: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x1a3078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1a307c:
    // 0x1a307c: 0x40f809  jalr        $v0
label_1a3080:
    if (ctx->pc == 0x1A3080u) {
        ctx->pc = 0x1A3080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A307Cu;
        // 0x1a3080: 0x2406fffe  addiu       $a2, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3084u;
        goto label_1a3084;
    }
    ctx->pc = 0x1A307Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3084u);
        ctx->pc = 0x1A3080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A307Cu;
        // 0x1a3080: 0x2406fffe  addiu       $a2, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A307Cu, 0x1A3084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3084u;
label_1a3084:
    // 0x1a3084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3088:
    // 0x1a3088: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a3088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a308c:
    // 0x1a308c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a308cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3090:
    // 0x1a3090: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a3090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a3094:
    // 0x1a3094: 0x3e00008  jr          $ra
label_1a3098:
    if (ctx->pc == 0x1A3098u) {
        ctx->pc = 0x1A3098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3094u;
        // 0x1a3098: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A309Cu;
        goto label_fallthrough_0x1a3094;
    }
    ctx->pc = 0x1A3094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3094u;
        // 0x1a3098: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a3094:
    ctx->pc = 0x1A309Cu;
}
