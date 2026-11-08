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

// Function: ApcTurretMotionProc__FP11BMotionCtrlP11BMotionWorki
// Address: 0x1638e8 - 0x163de8
void ApcTurretMotionProc__FP11BMotionCtrlP11BMotionWorki_0x1638e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApcTurretMotionProc__FP11BMotionCtrlP11BMotionWorki_0x1638e8");
#endif

    switch (ctx->pc) {
        case 0x163970u: goto label_163970;
        case 0x16398cu: goto label_16398c;
        case 0x1639d8u: goto label_1639d8;
        case 0x1639e0u: goto label_1639e0;
        case 0x163a48u: goto label_163a48;
        case 0x163a50u: goto label_163a50;
        case 0x163ac0u: goto label_163ac0;
        case 0x163ac8u: goto label_163ac8;
        case 0x163b34u: goto label_163b34;
        case 0x163b3cu: goto label_163b3c;
        case 0x163bb0u: goto label_163bb0;
        case 0x163be0u: goto label_163be0;
        case 0x163bfcu: goto label_163bfc;
        case 0x163c04u: goto label_163c04;
        case 0x163c4cu: goto label_163c4c;
        case 0x163c64u: goto label_163c64;
        case 0x163c68u: goto label_163c68;
        case 0x163cacu: goto label_163cac;
        case 0x163ce0u: goto label_163ce0;
        case 0x163d04u: goto label_163d04;
        case 0x163d68u: goto label_163d68;
        case 0x163d90u: goto label_163d90;
        case 0x163db0u: goto label_163db0;
        default: break;
    }

    ctx->pc = 0x1638e8u;

    // 0x1638e8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1638e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1638ec: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1638ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1638f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1638f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1638f4: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1638f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1638f8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1638f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1638fc: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x1638fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x163900: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x163900u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163904: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x163904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x163908: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x163908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x16390c: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x16390cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x163910: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x163910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x163914: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x163914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x163918: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x163918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x16391c: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x16391cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x163920: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x163920u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x163924: 0x8e430250  lw          $v1, 0x250($s2)
    ctx->pc = 0x163924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x163928: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x163928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x16392c: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x16392Cu;
    {
        const bool branch_taken_0x16392c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16392Cu;
        // 0x163930: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16392c) {
            ctx->pc = 0x163B94u;
            goto label_163b94;
        }
    }
    ctx->pc = 0x163934u;
    // 0x163934: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x163934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x163938: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x163938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x16393c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16393cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x163940: 0x8c636f50  lw          $v1, 0x6F50($v1)
    ctx->pc = 0x163940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28496)));
    // 0x163944: 0x600008  jr          $v1
    ctx->pc = 0x163944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163950u: goto label_163950;
            case 0x163998u: goto label_163998;
            case 0x1639A0u: goto label_1639a0;
            case 0x163A18u: goto label_163a18;
            case 0x163B94u: goto label_163b94;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163944u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16394Cu;
    // 0x16394c: 0x0  nop
    ctx->pc = 0x16394cu;
    // NOP
label_163950:
    // 0x163950: 0x265001f0  addiu       $s0, $s2, 0x1F0
    ctx->pc = 0x163950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
    // 0x163954: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x163954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x163958: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x163958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16395c: 0x8e450264  lw          $a1, 0x264($s2)
    ctx->pc = 0x16395cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
    // 0x163960: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x163960u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x163964: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x163964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x163968: 0xc0677e0  jal         func_19DF80
    ctx->pc = 0x163968u;
    SET_GPR_U32(ctx, 31, 0x163970u);
    ctx->pc = 0x16396Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163968u;
    // 0x16396c: 0x8e460274  lw          $a2, 0x274($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF80u, 0x163968u, 0x163970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163970u;
label_163970:
    // 0x163970: 0x8e450260  lw          $a1, 0x260($s2)
    ctx->pc = 0x163970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x163974: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x163974u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163978: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x163978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16397c: 0x8e460270  lw          $a2, 0x270($s2)
    ctx->pc = 0x16397cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
    // 0x163980: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x163980u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x163984: 0xc0677e0  jal         func_19DF80
    ctx->pc = 0x163984u;
    SET_GPR_U32(ctx, 31, 0x16398Cu);
    ctx->pc = 0x163988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163984u;
    // 0x163988: 0x8c440030  lw          $a0, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF80u, 0x163984u, 0x16398Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16398Cu;
label_16398c:
    // 0x16398c: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x16398Cu;
    {
        const bool branch_taken_0x16398c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16398Cu;
        // 0x163990: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16398c) {
            ctx->pc = 0x163B94u;
            goto label_163b94;
        }
    }
    ctx->pc = 0x163994u;
    // 0x163994: 0x0  nop
    ctx->pc = 0x163994u;
    // NOP
label_163998:
    // 0x163998: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x163998u;
    {
        const bool branch_taken_0x163998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163998u;
        // 0x16399c: 0x26560260  addiu       $s6, $s2, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163998) {
            ctx->pc = 0x163B94u;
            goto label_163b94;
        }
    }
    ctx->pc = 0x1639A0u;
label_1639a0:
    // 0x1639a0: 0x8e420254  lw          $v0, 0x254($s2)
    ctx->pc = 0x1639a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
    // 0x1639a4: 0x8c500074  lw          $s0, 0x74($v0)
    ctx->pc = 0x1639a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1639a8: 0x5200007a  beql        $s0, $zero, . + 4 + (0x7A << 2)
    ctx->pc = 0x1639A8u;
    {
        const bool branch_taken_0x1639a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1639a8) {
            ctx->pc = 0x1639ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1639A8u;
            // 0x1639ac: 0xae400250  sw          $zero, 0x250($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163B94u;
            goto label_163b94;
        }
    }
    ctx->pc = 0x1639B0u;
    // 0x1639b0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1639b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1639b4: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x1639b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1639b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1639b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1639bc: 0x24910020  addiu       $s1, $a0, 0x20
    ctx->pc = 0x1639bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1639c0: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1639c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1639c4: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1639c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x1639c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1639C8u;
    {
        const bool branch_taken_0x1639c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1639CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639C8u;
        // 0x1639cc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639c8) {
            ctx->pc = 0x1639D8u;
            goto label_1639d8;
        }
    }
    ctx->pc = 0x1639D0u;
    // 0x1639d0: 0xc061920  jal         func_186480
    ctx->pc = 0x1639D0u;
    SET_GPR_U32(ctx, 31, 0x1639D8u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1639D0u, 0x1639D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1639D8u;
label_1639d8:
    // 0x1639d8: 0xc061422  jal         func_185088
    ctx->pc = 0x1639D8u;
    SET_GPR_U32(ctx, 31, 0x1639E0u);
    ctx->pc = 0x1639DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1639D8u;
    // 0x1639dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1639D8u, 0x1639E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1639E0u;
label_1639e0:
    // 0x1639e0: 0x266300e0  addiu       $v1, $s3, 0xE0
    ctx->pc = 0x1639e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
    // 0x1639e4: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x1639e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1639e8: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x1639e8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1639ec: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1639ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1639f0: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1639f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1639f4: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1639f4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1639f8: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1639f8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1639fc: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1639fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x163a00: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x163a00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x163a04: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x163a04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x163a08: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x163a08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x163a0c: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x163a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x163a10: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x163A10u;
    {
        const bool branch_taken_0x163a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163a10) {
            ctx->pc = 0x163B94u;
            goto label_163b94;
        }
    }
    ctx->pc = 0x163A18u;
label_163a18:
    // 0x163a18: 0x8e530254  lw          $s3, 0x254($s2)
    ctx->pc = 0x163a18u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
    // 0x163a1c: 0x3415e000  ori         $s5, $zero, 0xE000
    ctx->pc = 0x163a1cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x163a20: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x163a20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163a24: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x163a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x163a28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x163a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163a2c: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x163a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x163a30: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x163a30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x163a34: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x163a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x163a38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163A38u;
    {
        const bool branch_taken_0x163a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A38u;
        // 0x163a3c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a38) {
            ctx->pc = 0x163A48u;
            goto label_163a48;
        }
    }
    ctx->pc = 0x163A40u;
    // 0x163a40: 0xc061920  jal         func_186480
    ctx->pc = 0x163A40u;
    SET_GPR_U32(ctx, 31, 0x163A48u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x163A40u, 0x163A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163A48u;
label_163a48:
    // 0x163a48: 0xc061422  jal         func_185088
    ctx->pc = 0x163A48u;
    SET_GPR_U32(ctx, 31, 0x163A50u);
    ctx->pc = 0x163A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163A48u;
    // 0x163a4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x163A48u, 0x163A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163A50u;
label_163a50:
    // 0x163a50: 0x262300e0  addiu       $v1, $s1, 0xE0
    ctx->pc = 0x163a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x163a54: 0x266200a0  addiu       $v0, $s3, 0xA0
    ctx->pc = 0x163a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x163a58: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x163a58u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163a5c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x163a5cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163a60: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x163a60u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x163a64: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x163a64u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x163a68: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x163a68u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x163a6c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x163a6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x163a70: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x163a70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x163a74: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x163a74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x163a78: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x163a78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x163a7c: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x163a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x163a80: 0x8e440250  lw          $a0, 0x250($s2)
    ctx->pc = 0x163a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x163a84: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x163a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x163a88: 0x14820042  bne         $a0, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x163A88u;
    {
        const bool branch_taken_0x163a88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x163a88) {
            ctx->pc = 0x163B94u;
            goto label_163b94;
        }
    }
    ctx->pc = 0x163A90u;
    // 0x163a90: 0x8e5001f0  lw          $s0, 0x1F0($s2)
    ctx->pc = 0x163a90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x163a94: 0x8e430254  lw          $v1, 0x254($s2)
    ctx->pc = 0x163a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
    // 0x163a98: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x163a98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x163a9c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x163a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x163aa0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x163aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163aa4: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x163aa4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x163aa8: 0xc4600088  lwc1        $f0, 0x88($v1)
    ctx->pc = 0x163aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163aac: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x163aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x163ab0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163AB0u;
    {
        const bool branch_taken_0x163ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163AB0u;
        // 0x163ab4: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ab0) {
            ctx->pc = 0x163AC0u;
            goto label_163ac0;
        }
    }
    ctx->pc = 0x163AB8u;
    // 0x163ab8: 0xc061920  jal         func_186480
    ctx->pc = 0x163AB8u;
    SET_GPR_U32(ctx, 31, 0x163AC0u);
    ctx->pc = 0x163ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163AB8u;
    // 0x163abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x163AB8u, 0x163AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163AC0u;
label_163ac0:
    // 0x163ac0: 0xc061422  jal         func_185088
    ctx->pc = 0x163AC0u;
    SET_GPR_U32(ctx, 31, 0x163AC8u);
    ctx->pc = 0x163AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163AC0u;
    // 0x163ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x163AC0u, 0x163AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163AC8u;
label_163ac8:
    // 0x163ac8: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x163ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x163acc: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x163accu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163ad0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x163ad0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163ad4: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x163ad4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x163ad8: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x163ad8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x163adc: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x163adcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x163ae0: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x163ae0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x163ae4: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x163ae4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x163ae8: 0x4a0003bf  vwaitq
    ctx->pc = 0x163ae8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x163aec: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x163aecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x163af0: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x163af0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x163af4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x163af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163af8: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x163af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x163afc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x163afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163b00: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x163b00u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
    // 0x163b04: 0x8e430254  lw          $v1, 0x254($s2)
    ctx->pc = 0x163b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
    // 0x163b08: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x163b08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x163b0c: 0x46140d02  mul.s       $f20, $f1, $f20
    ctx->pc = 0x163b0cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x163b10: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x163b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x163b14: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x163b14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163b18: 0x26130020  addiu       $s3, $s0, 0x20
    ctx->pc = 0x163b18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x163b1c: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x163b1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x163b20: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x163b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x163b24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163B24u;
    {
        const bool branch_taken_0x163b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B24u;
        // 0x163b28: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b24) {
            ctx->pc = 0x163B34u;
            goto label_163b34;
        }
    }
    ctx->pc = 0x163B2Cu;
    // 0x163b2c: 0xc061920  jal         func_186480
    ctx->pc = 0x163B2Cu;
    SET_GPR_U32(ctx, 31, 0x163B34u);
    ctx->pc = 0x163B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163B2Cu;
    // 0x163b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x163B2Cu, 0x163B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163B34u;
label_163b34:
    // 0x163b34: 0xc061422  jal         func_185088
    ctx->pc = 0x163B34u;
    SET_GPR_U32(ctx, 31, 0x163B3Cu);
    ctx->pc = 0x163B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163B34u;
    // 0x163b38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x163B34u, 0x163B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163B3Cu;
label_163b3c:
    // 0x163b3c: 0x260300e0  addiu       $v1, $s0, 0xE0
    ctx->pc = 0x163b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x163b40: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x163b40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x163b44: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x163b44u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x163b48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x163b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x163b4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x163b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163b50: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x163b50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163b54: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x163B54u;
    {
        const bool branch_taken_0x163b54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163b54) {
            ctx->pc = 0x163B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163B54u;
            // 0x163b58: 0x8e430254  lw          $v1, 0x254($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163B74u;
            goto label_163b74;
        }
    }
    ctx->pc = 0x163B5Cu;
    // 0x163b5c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x163b5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x163b60: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x163b60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x163b64: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x163b64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x163b68: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x163b68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x163b6c: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x163b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x163b70: 0x8e430254  lw          $v1, 0x254($s2)
    ctx->pc = 0x163b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
label_163b74:
    // 0x163b74: 0x8c6203b0  lw          $v0, 0x3B0($v1)
    ctx->pc = 0x163b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 944)));
    // 0x163b78: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x163b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x163b7c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x163B7Cu;
    {
        const bool branch_taken_0x163b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163b7c) {
            ctx->pc = 0x163B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163B7Cu;
            // 0x163b80: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163B84u;
            goto label_163b84;
        }
    }
    ctx->pc = 0x163B84u;
label_163b84:
    // 0x163b84: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x163b84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163b88: 0xda230000  lqc2        $vf3, 0x0($s1)
    ctx->pc = 0x163b88u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x163b8c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x163b8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x163b90: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x163b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_163b94:
    // 0x163b94: 0x12c00034  beqz        $s6, . + 4 + (0x34 << 2)
    ctx->pc = 0x163B94u;
    {
        const bool branch_taken_0x163b94 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x163B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B94u;
        // 0x163b98: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b94) {
            ctx->pc = 0x163C68u;
            goto label_163c68;
        }
    }
    ctx->pc = 0x163B9Cu;
    // 0x163b9c: 0x8e5101f0  lw          $s1, 0x1F0($s2)
    ctx->pc = 0x163b9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x163ba0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x163ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ba4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x163ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ba8: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x163BA8u;
    SET_GPR_U32(ctx, 31, 0x163BB0u);
    ctx->pc = 0x163BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163BA8u;
    // 0x163bac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1853D8u, 0x163BA8u, 0x163BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163BB0u;
label_163bb0:
    // 0x163bb0: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x163bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163bb4: 0x46006045  abs.s       $f1, $f12
    ctx->pc = 0x163bb4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[12]);
    // 0x163bb8: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x163bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x163bbc: 0x46006805  abs.s       $f0, $f13
    ctx->pc = 0x163bbcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[13]);
    // 0x163bc0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x163bc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163bc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x163bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x163bc8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x163bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x163bcc: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x163bccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163bd0: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x163BD0u;
    {
        const bool branch_taken_0x163bd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163bd0) {
            ctx->pc = 0x163BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163BD0u;
            // 0x163bd4: 0x8e4201f4  lw          $v0, 0x1F4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 500)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163C04u;
            goto label_163c04;
        }
    }
    ctx->pc = 0x163BD8u;
    // 0x163bd8: 0xc067a02  jal         func_19E808
    ctx->pc = 0x163BD8u;
    SET_GPR_U32(ctx, 31, 0x163BE0u);
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x163BD8u, 0x163BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163BE0u;
label_163be0:
    // 0x163be0: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x163be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x163be4: 0x8e4301f0  lw          $v1, 0x1F0($s2)
    ctx->pc = 0x163be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x163be8: 0x8e460274  lw          $a2, 0x274($s2)
    ctx->pc = 0x163be8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 628)));
    // 0x163bec: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x163becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x163bf0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x163bf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x163bf4: 0xc0677e0  jal         func_19DF80
    ctx->pc = 0x163BF4u;
    SET_GPR_U32(ctx, 31, 0x163BFCu);
    ctx->pc = 0x163BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163BF4u;
    // 0x163bf8: 0x8c640034  lw          $a0, 0x34($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF80u, 0x163BF4u, 0x163BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163BFCu;
label_163bfc:
    // 0x163bfc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x163bfcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163c00: 0x8e4201f4  lw          $v0, 0x1F4($s2)
    ctx->pc = 0x163c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 500)));
label_163c04:
    // 0x163c04: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x163c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x163c08: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x163c08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163c0c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x163c0cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163c10: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x163c10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x163c14: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x163c14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x163c18: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x163c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163c1c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x163c1cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x163c20: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x163c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163c24: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x163c24u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x163c28: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x163c28u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163c2c: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x163c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163c30: 0x46006005  abs.s       $f0, $f12
    ctx->pc = 0x163c30u;
    ctx->f[0] = FPU_ABS_S(ctx->f[12]);
    // 0x163c34: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x163c34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x163c38: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x163c38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163c3c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x163C3Cu;
    {
        const bool branch_taken_0x163c3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163c3c) {
            ctx->pc = 0x163C68u;
            goto label_163c68;
        }
    }
    ctx->pc = 0x163C44u;
    // 0x163c44: 0xc067a02  jal         func_19E808
    ctx->pc = 0x163C44u;
    SET_GPR_U32(ctx, 31, 0x163C4Cu);
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x163C44u, 0x163C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163C4Cu;
label_163c4c:
    // 0x163c4c: 0x8e4301f4  lw          $v1, 0x1F4($s2)
    ctx->pc = 0x163c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 500)));
    // 0x163c50: 0x8e460270  lw          $a2, 0x270($s2)
    ctx->pc = 0x163c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
    // 0x163c54: 0x22823  negu        $a1, $v0
    ctx->pc = 0x163c54u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x163c58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x163c58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x163c5c: 0xc0677e0  jal         func_19DF80
    ctx->pc = 0x163C5Cu;
    SET_GPR_U32(ctx, 31, 0x163C64u);
    ctx->pc = 0x163C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163C5Cu;
    // 0x163c60: 0x8c640030  lw          $a0, 0x30($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF80u, 0x163C5Cu, 0x163C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163C64u;
label_163c64:
    // 0x163c64: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x163c64u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163c68:
    // 0x163c68: 0x12e0002e  beqz        $s7, . + 4 + (0x2E << 2)
    ctx->pc = 0x163C68u;
    {
        const bool branch_taken_0x163c68 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x163C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C68u;
        // 0x163c6c: 0x265001f0  addiu       $s0, $s2, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c68) {
            ctx->pc = 0x163D24u;
            goto label_163d24;
        }
    }
    ctx->pc = 0x163C70u;
    // 0x163c70: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x163c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x163c74: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x163c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x163c78: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x163C78u;
    {
        const bool branch_taken_0x163c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C78u;
        // 0x163c7c: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c78) {
            ctx->pc = 0x163D24u;
            goto label_163d24;
        }
    }
    ctx->pc = 0x163C80u;
    // 0x163c80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x163c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163c84: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x163C84u;
    {
        const bool branch_taken_0x163c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C84u;
        // 0x163c88: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c84) {
            ctx->pc = 0x163D24u;
            goto label_163d24;
        }
    }
    ctx->pc = 0x163C8Cu;
    // 0x163c8c: 0x7e200000  sq          $zero, 0x0($s1)
    ctx->pc = 0x163c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 0));
    // 0x163c90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x163c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163c94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x163c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163c98: 0xafb70034  sw          $s7, 0x34($sp)
    ctx->pc = 0x163c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 23));
    // 0x163c9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x163c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163ca0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x163ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ca4: 0xc0618da  jal         func_186368
    ctx->pc = 0x163CA4u;
    SET_GPR_U32(ctx, 31, 0x163CACu);
    ctx->pc = 0x163CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163CA4u;
    // 0x163ca8: 0x8c530034  lw          $s3, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x163CA4u, 0x163CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163CACu;
label_163cac:
    // 0x163cac: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x163cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x163cb0: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x163CB0u;
    {
        const bool branch_taken_0x163cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163cb0) {
            ctx->pc = 0x163CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163CB0u;
            // 0x163cb4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163D08u;
            goto label_163d08;
        }
    }
    ctx->pc = 0x163CB8u;
    // 0x163cb8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x163cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163cbc: 0x8e07004c  lw          $a3, 0x4C($s0)
    ctx->pc = 0x163cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x163cc0: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x163cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x163cc4: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x163cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x163cc8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x163CC8u;
    {
        const bool branch_taken_0x163cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CC8u;
        // 0x163ccc: 0x8e080048  lw          $t0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163cc8) {
            ctx->pc = 0x163CE8u;
            goto label_163ce8;
        }
    }
    ctx->pc = 0x163CD0u;
    // 0x163cd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x163cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163cd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x163cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163cd8: 0xc0618da  jal         func_186368
    ctx->pc = 0x163CD8u;
    SET_GPR_U32(ctx, 31, 0x163CE0u);
    ctx->pc = 0x163CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163CD8u;
    // 0x163cdc: 0xafa70034  sw          $a3, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x163CD8u, 0x163CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163CE0u;
label_163ce0:
    // 0x163ce0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x163CE0u;
    {
        const bool branch_taken_0x163ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CE0u;
        // 0x163ce4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ce0) {
            ctx->pc = 0x163D08u;
            goto label_163d08;
        }
    }
    ctx->pc = 0x163CE8u;
label_163ce8:
    // 0x163ce8: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x163ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x163cec: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x163CECu;
    {
        const bool branch_taken_0x163cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163cec) {
            ctx->pc = 0x163CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163CECu;
            // 0x163cf0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163D08u;
            goto label_163d08;
        }
    }
    ctx->pc = 0x163CF4u;
    // 0x163cf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x163cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163cf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x163cf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163cfc: 0xc0618da  jal         func_186368
    ctx->pc = 0x163CFCu;
    SET_GPR_U32(ctx, 31, 0x163D04u);
    ctx->pc = 0x163D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163CFCu;
    // 0x163d00: 0xafa80034  sw          $t0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x163CFCu, 0x163D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163D04u;
label_163d04:
    // 0x163d04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x163d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_163d08:
    // 0x163d08: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x163d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x163d0c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x163d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x163d10: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x163d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x163d14: 0x28444000  slti        $a0, $v0, 0x4000
    ctx->pc = 0x163d14u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x163d18: 0x24438000  addiu       $v1, $v0, -0x8000
    ctx->pc = 0x163d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x163d1c: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x163d1cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x163d20: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x163d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_163d24:
    // 0x163d24: 0x13c00022  beqz        $fp, . + 4 + (0x22 << 2)
    ctx->pc = 0x163D24u;
    {
        const bool branch_taken_0x163d24 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x163D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D24u;
        // 0x163d28: 0x265001f0  addiu       $s0, $s2, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d24) {
            ctx->pc = 0x163DB0u;
            goto label_163db0;
        }
    }
    ctx->pc = 0x163D2Cu;
    // 0x163d2c: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x163d2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x163d30: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x163d30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x163d34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x163d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x163d38: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x163d38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x163d3c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x163D3Cu;
    {
        const bool branch_taken_0x163d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163d3c) {
            ctx->pc = 0x163DB0u;
            goto label_163db0;
        }
    }
    ctx->pc = 0x163D44u;
    // 0x163d44: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x163d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x163d48: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x163D48u;
    {
        const bool branch_taken_0x163d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D48u;
        // 0x163d4c: 0x27b10040  addiu       $s1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d48) {
            ctx->pc = 0x163DB0u;
            goto label_163db0;
        }
    }
    ctx->pc = 0x163D50u;
    // 0x163d50: 0x7e200000  sq          $zero, 0x0($s1)
    ctx->pc = 0x163d50u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 0));
    // 0x163d54: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x163d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x163d58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x163d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163d5c: 0xae3e0000  sw          $fp, 0x0($s1)
    ctx->pc = 0x163d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 30));
    // 0x163d60: 0xc0618da  jal         func_186368
    ctx->pc = 0x163D60u;
    SET_GPR_U32(ctx, 31, 0x163D68u);
    ctx->pc = 0x163D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163D60u;
    // 0x163d64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x163D60u, 0x163D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163D68u;
label_163d68:
    // 0x163d68: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x163d68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x163d6c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x163d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x163d70: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x163d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x163d74: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x163d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x163d78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x163D78u;
    {
        const bool branch_taken_0x163d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D78u;
        // 0x163d7c: 0x8e100040  lw          $s0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d78) {
            ctx->pc = 0x163D98u;
            goto label_163d98;
        }
    }
    ctx->pc = 0x163D80u;
    // 0x163d80: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x163d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x163d84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x163d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163d88: 0xc0618da  jal         func_186368
    ctx->pc = 0x163D88u;
    SET_GPR_U32(ctx, 31, 0x163D90u);
    ctx->pc = 0x163D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163D88u;
    // 0x163d8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x163D88u, 0x163D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163D90u;
label_163d90:
    // 0x163d90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x163D90u;
    {
        const bool branch_taken_0x163d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163d90) {
            ctx->pc = 0x163DB0u;
            goto label_163db0;
        }
    }
    ctx->pc = 0x163D98u;
label_163d98:
    // 0x163d98: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x163d98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x163d9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x163D9Cu;
    {
        const bool branch_taken_0x163d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D9Cu;
        // 0x163da0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d9c) {
            ctx->pc = 0x163DB0u;
            goto label_163db0;
        }
    }
    ctx->pc = 0x163DA4u;
    // 0x163da4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x163da4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x163da8: 0xc0618da  jal         func_186368
    ctx->pc = 0x163DA8u;
    SET_GPR_U32(ctx, 31, 0x163DB0u);
    ctx->pc = 0x163DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163DA8u;
    // 0x163dac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x163DA8u, 0x163DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163DB0u;
label_163db0:
    // 0x163db0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x163db0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163db4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x163db4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x163db8: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x163db8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x163dbc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x163dbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x163dc0: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x163dc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x163dc4: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x163dc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x163dc8: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x163dc8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x163dcc: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x163dccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x163dd0: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x163dd0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x163dd4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x163dd4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x163dd8: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x163dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x163ddc: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x163ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x163de0: 0x3e00008  jr          $ra
    ctx->pc = 0x163DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DE0u;
        // 0x163de4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163DE8u;
}
