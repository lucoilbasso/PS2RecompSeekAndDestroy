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

// Function: HetomovMoveMotion__10ApcHetomov
// Address: 0x16ea30 - 0x16ed4c
void HetomovMoveMotion__10ApcHetomov_0x16ea30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HetomovMoveMotion__10ApcHetomov_0x16ea30");
#endif

    switch (ctx->pc) {
        case 0x16eae8u: goto label_16eae8;
        case 0x16eaf0u: goto label_16eaf0;
        case 0x16eb2cu: goto label_16eb2c;
        case 0x16eb34u: goto label_16eb34;
        case 0x16eb88u: goto label_16eb88;
        default: break;
    }

    ctx->pc = 0x16ea30u;

    // 0x16ea30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x16ea30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x16ea34: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x16ea34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x16ea38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16ea38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ea3c: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x16ea3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x16ea40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16ea40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ea44: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x16ea44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x16ea48: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16ea48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ea4c: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x16ea4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x16ea50: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x16ea50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ea54: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x16ea54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x16ea58: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x16ea58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x16ea5c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x16ea5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x16ea60: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x16ea60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x16ea64: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x16ea64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x16ea68: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x16ea68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x16ea6c: 0x8e360150  lw          $s6, 0x150($s1)
    ctx->pc = 0x16ea6cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x16ea70: 0x8e230260  lw          $v1, 0x260($s1)
    ctx->pc = 0x16ea70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x16ea74: 0xc6c10380  lwc1        $f1, 0x380($s6)
    ctx->pc = 0x16ea74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ea78: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x16ea78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x16ea7c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x16EA7Cu;
    {
        const bool branch_taken_0x16ea7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA7Cu;
        // 0x16ea80: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ea7c) {
            ctx->pc = 0x16EB64u;
            goto label_16eb64;
        }
    }
    ctx->pc = 0x16EA84u;
    // 0x16ea84: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16ea88: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x16ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x16ea8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16ea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ea90: 0x8c637510  lw          $v1, 0x7510($v1)
    ctx->pc = 0x16ea90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29968)));
    // 0x16ea94: 0x600008  jr          $v1
    ctx->pc = 0x16EA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EAA0u: goto label_16eaa0;
            case 0x16EAA8u: goto label_16eaa8;
            case 0x16EAB0u: goto label_16eab0;
            case 0x16EB00u: goto label_16eb00;
            case 0x16EB64u: goto label_16eb64;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EA94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16EA9Cu;
    // 0x16ea9c: 0x0  nop
    ctx->pc = 0x16ea9cu;
    // NOP
label_16eaa0:
    // 0x16eaa0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x16EAA0u;
    {
        const bool branch_taken_0x16eaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EAA0u;
        // 0x16eaa4: 0x26350270  addiu       $s5, $s1, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eaa0) {
            ctx->pc = 0x16EB64u;
            goto label_16eb64;
        }
    }
    ctx->pc = 0x16EAA8u;
label_16eaa8:
    // 0x16eaa8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x16EAA8u;
    {
        const bool branch_taken_0x16eaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EAA8u;
        // 0x16eaac: 0x26330270  addiu       $s3, $s1, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eaa8) {
            ctx->pc = 0x16EB64u;
            goto label_16eb64;
        }
    }
    ctx->pc = 0x16EAB0u;
label_16eab0:
    // 0x16eab0: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x16eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x16eab4: 0x8c500074  lw          $s0, 0x74($v0)
    ctx->pc = 0x16eab4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x16eab8: 0x5200002a  beql        $s0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x16EAB8u;
    {
        const bool branch_taken_0x16eab8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eab8) {
            ctx->pc = 0x16EABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EAB8u;
            // 0x16eabc: 0xae200260  sw          $zero, 0x260($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EB64u;
            goto label_16eb64;
        }
    }
    ctx->pc = 0x16EAC0u;
    // 0x16eac0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x16eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16eac4: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x16eac4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16eac8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16eac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16eacc: 0x24920020  addiu       $s2, $a0, 0x20
    ctx->pc = 0x16eaccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x16ead0: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x16ead0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x16ead4: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x16ead4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x16ead8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16EAD8u;
    {
        const bool branch_taken_0x16ead8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EAD8u;
        // 0x16eadc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ead8) {
            ctx->pc = 0x16EAE8u;
            goto label_16eae8;
        }
    }
    ctx->pc = 0x16EAE0u;
    // 0x16eae0: 0xc061920  jal         func_186480
    ctx->pc = 0x16EAE0u;
    SET_GPR_U32(ctx, 31, 0x16EAE8u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x16EAE0u, 0x16EAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EAE8u;
label_16eae8:
    // 0x16eae8: 0xc061422  jal         func_185088
    ctx->pc = 0x16EAE8u;
    SET_GPR_U32(ctx, 31, 0x16EAF0u);
    ctx->pc = 0x16EAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EAE8u;
    // 0x16eaec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x16EAE8u, 0x16EAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EAF0u;
label_16eaf0:
    // 0x16eaf0: 0x268300e0  addiu       $v1, $s4, 0xE0
    ctx->pc = 0x16eaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
    // 0x16eaf4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x16EAF4u;
    {
        const bool branch_taken_0x16eaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EAF4u;
        // 0x16eaf8: 0x260200a0  addiu       $v0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eaf4) {
            ctx->pc = 0x16EB3Cu;
            goto label_16eb3c;
        }
    }
    ctx->pc = 0x16EAFCu;
    // 0x16eafc: 0x0  nop
    ctx->pc = 0x16eafcu;
    // NOP
label_16eb00:
    // 0x16eb00: 0x8e340264  lw          $s4, 0x264($s1)
    ctx->pc = 0x16eb00u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x16eb04: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x16eb04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16eb08: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x16eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x16eb0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16eb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16eb10: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x16eb10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x16eb14: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x16eb14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x16eb18: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x16eb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x16eb1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16EB1Cu;
    {
        const bool branch_taken_0x16eb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB1Cu;
        // 0x16eb20: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb1c) {
            ctx->pc = 0x16EB2Cu;
            goto label_16eb2c;
        }
    }
    ctx->pc = 0x16EB24u;
    // 0x16eb24: 0xc061920  jal         func_186480
    ctx->pc = 0x16EB24u;
    SET_GPR_U32(ctx, 31, 0x16EB2Cu);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x16EB24u, 0x16EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EB2Cu;
label_16eb2c:
    // 0x16eb2c: 0xc061422  jal         func_185088
    ctx->pc = 0x16EB2Cu;
    SET_GPR_U32(ctx, 31, 0x16EB34u);
    ctx->pc = 0x16EB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EB2Cu;
    // 0x16eb30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x16EB2Cu, 0x16EB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EB34u;
label_16eb34:
    // 0x16eb34: 0x264300e0  addiu       $v1, $s2, 0xE0
    ctx->pc = 0x16eb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x16eb38: 0x268200a0  addiu       $v0, $s4, 0xA0
    ctx->pc = 0x16eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
label_16eb3c:
    // 0x16eb3c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x16eb3cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16eb40: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16eb40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16eb44: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x16eb44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x16eb48: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x16eb48u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16eb4c: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x16eb4cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x16eb50: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x16eb50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16eb54: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x16eb54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16eb58: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x16eb58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16eb5c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x16eb5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x16eb60: 0xfa6c0000  sqc2        $vf12, 0x0($s3)
    ctx->pc = 0x16eb60u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[12]));
label_16eb64:
    // 0x16eb64: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x16EB64u;
    {
        const bool branch_taken_0x16eb64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eb64) {
            ctx->pc = 0x16EB88u;
            goto label_16eb88;
        }
    }
    ctx->pc = 0x16EB6Cu;
    // 0x16eb6c: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x16eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x16eb70: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x16eb70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb74: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x16eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x16eb78: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x16eb78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16eb7c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x16eb7cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16eb80: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x16eb80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16eb84: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x16eb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_16eb88:
    // 0x16eb88: 0x12a0002b  beqz        $s5, . + 4 + (0x2B << 2)
    ctx->pc = 0x16EB88u;
    {
        const bool branch_taken_0x16eb88 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB88u;
        // 0x16eb8c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb88) {
            ctx->pc = 0x16EC38u;
            goto label_16ec38;
        }
    }
    ctx->pc = 0x16EB90u;
    // 0x16eb90: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x16eb90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x16eb94: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16eb94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16eb98: 0x4a852942  vaddz.y     $vf5, $vf5, $vf5z
    ctx->pc = 0x16eb98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16eb9c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16eb9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16eba0: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16eba0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16eba4: 0x4a0003bf  vwaitq
    ctx->pc = 0x16eba4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16eba8: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16eba8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ebac: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16ebacu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16ebb0: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16ebb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ebb4: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x16ebb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ebb8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16ebb8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16ebbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16ebbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ebc0: 0x4a0003bf  vwaitq
    ctx->pc = 0x16ebc0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16ebc4: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16ebc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ebc8: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x16ebc8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16ebcc: 0xc78084fc  lwc1        $f0, -0x7B04($gp)
    ctx->pc = 0x16ebccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ebd0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16ebd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ebd4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x16EBD4u;
    {
        const bool branch_taken_0x16ebd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBD4u;
        // 0x16ebd8: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ebd4) {
            ctx->pc = 0x16EC18u;
            goto label_16ec18;
        }
    }
    ctx->pc = 0x16EBDCu;
    // 0x16ebdc: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x16ebdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ebe0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x16EBE0u;
    {
        const bool branch_taken_0x16ebe0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16EBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBE0u;
        // 0x16ebe4: 0x27a30030  addiu       $v1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ebe0) {
            ctx->pc = 0x16EC08u;
            goto label_16ec08;
        }
    }
    ctx->pc = 0x16EBE8u;
    // 0x16ebe8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x16ebe8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16ebec: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x16ebecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16ebf0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16ebf0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16ebf4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x16ebf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ebf8: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16ebf8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16ebfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16EBFCu;
    {
        const bool branch_taken_0x16ebfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBFCu;
        // 0x16ec00: 0x26220280  addiu       $v0, $s1, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ebfc) {
            ctx->pc = 0x16EC20u;
            goto label_16ec20;
        }
    }
    ctx->pc = 0x16EC04u;
    // 0x16ec04: 0x0  nop
    ctx->pc = 0x16ec04u;
    // NOP
label_16ec08:
    // 0x16ec08: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x16ec08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x16ec0c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x16ec0cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x16ec10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16EC10u;
    {
        const bool branch_taken_0x16ec10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC10u;
        // 0x16ec14: 0x26220280  addiu       $v0, $s1, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ec10) {
            ctx->pc = 0x16EC20u;
            goto label_16ec20;
        }
    }
    ctx->pc = 0x16EC18u;
label_16ec18:
    // 0x16ec18: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x16ec18u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x16ec1c: 0x26220280  addiu       $v0, $s1, 0x280
    ctx->pc = 0x16ec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
label_16ec20:
    // 0x16ec20: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x16ec20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16ec24: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16ec24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ec28: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x16ec28u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ec2c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x16ec2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16ec30: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16ec30u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16ec34: 0xae200284  sw          $zero, 0x284($s1)
    ctx->pc = 0x16ec34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 0));
label_16ec38:
    // 0x16ec38: 0x8e230260  lw          $v1, 0x260($s1)
    ctx->pc = 0x16ec38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x16ec3c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16ec40: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x16EC40u;
    {
        const bool branch_taken_0x16ec40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC40u;
        // 0x16ec44: 0x26230280  addiu       $v1, $s1, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ec40) {
            ctx->pc = 0x16ED20u;
            goto label_16ed20;
        }
    }
    ctx->pc = 0x16EC48u;
    // 0x16ec48: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16ec48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ec4c: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x16ec4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ec50: 0x4a0002ff  vnop
    ctx->pc = 0x16ec50u;
    // NOP operation, no action needed for VU0
    // 0x16ec54: 0x4a0002ff  vnop
    ctx->pc = 0x16ec54u;
    // NOP operation, no action needed for VU0
    // 0x16ec58: 0x4a0002ff  vnop
    ctx->pc = 0x16ec58u;
    // NOP operation, no action needed for VU0
    // 0x16ec5c: 0x4a0002ff  vnop
    ctx->pc = 0x16ec5cu;
    // NOP operation, no action needed for VU0
    // 0x16ec60: 0x4a0002ff  vnop
    ctx->pc = 0x16ec60u;
    // NOP operation, no action needed for VU0
    // 0x16ec64: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x16ec64u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x16ec68: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x16ec68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x16ec6c: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x16ec6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x16ec70: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x16EC70u;
    {
        const bool branch_taken_0x16ec70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ec70) {
            ctx->pc = 0x16EC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EC70u;
            // 0x16ec74: 0x8e230260  lw          $v1, 0x260($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16ECDCu;
            goto label_16ecdc;
        }
    }
    ctx->pc = 0x16EC78u;
    // 0x16ec78: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16ec78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16ec7c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16ec7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ec80: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16ec80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ec84: 0x4a852942  vaddz.y     $vf5, $vf5, $vf5z
    ctx->pc = 0x16ec84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ec88: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16ec88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ec8c: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16ec8cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16ec90: 0x4a0003bf  vwaitq
    ctx->pc = 0x16ec90u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16ec94: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16ec94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ec98: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16ec98u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16ec9c: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16ec9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16eca0: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x16eca0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16eca4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16eca4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16eca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16eca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ecac: 0x4a0003bf  vwaitq
    ctx->pc = 0x16ecacu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16ecb0: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16ecb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ecb4: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x16ecb4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16ecb8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16ecb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ecbc: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x16ECBCu;
    {
        const bool branch_taken_0x16ecbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16ecbc) {
            ctx->pc = 0x16ECC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16ECBCu;
            // 0x16ecc0: 0x8e230260  lw          $v1, 0x260($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16ECDCu;
            goto label_16ecdc;
        }
    }
    ctx->pc = 0x16ECC4u;
    // 0x16ecc4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x16ecc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16ecc8: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x16ecc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16eccc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16ecccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16ecd0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x16ecd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ecd4: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16ecd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16ecd8: 0x8e230260  lw          $v1, 0x260($s1)
    ctx->pc = 0x16ecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_16ecdc:
    // 0x16ecdc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16ecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16ece0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16ECE0u;
    {
        const bool branch_taken_0x16ece0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16ECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ECE0u;
        // 0x16ece4: 0x26230280  addiu       $v1, $s1, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ece0) {
            ctx->pc = 0x16ED20u;
            goto label_16ed20;
        }
    }
    ctx->pc = 0x16ECE8u;
    // 0x16ece8: 0x26c20630  addiu       $v0, $s6, 0x630
    ctx->pc = 0x16ece8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1584));
    // 0x16ecec: 0xc7808500  lwc1        $f0, -0x7B00($gp)
    ctx->pc = 0x16ececu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ecf0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16ecf0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ecf4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x16ecf4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ecf8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x16ecf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16ecfc: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x16ecfcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x16ed00: 0x4a2c233c  vmove.w     $vf12, $vf4
    ctx->pc = 0x16ed00u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], ctx->vu0_vf[4], _mm_castsi128_ps(mask)); }
    // 0x16ed04: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x16ed04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x16ed08: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x16ed08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x16ed0c: 0x4bc621bc  vmulax.xyz  $ACC, $vf4, $vf6x
    ctx->pc = 0x16ed0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x16ed10: 0x4bc82b08  vmaddx.xyz  $vf12, $vf5, $vf8x
    ctx->pc = 0x16ed10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x16ed14: 0xf84c0000  sqc2        $vf12, 0x0($v0)
    ctx->pc = 0x16ed14u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x16ed18: 0xc6c10414  lwc1        $f1, 0x414($s6)
    ctx->pc = 0x16ed18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ed1c: 0xe6c10634  swc1        $f1, 0x634($s6)
    ctx->pc = 0x16ed1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 1588), bits); }
label_16ed20:
    // 0x16ed20: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x16ed20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16ed24: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x16ed24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x16ed28: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x16ed28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16ed2c: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x16ed2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16ed30: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x16ed30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16ed34: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x16ed34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x16ed38: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x16ed38u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16ed3c: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x16ed3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16ed40: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x16ed40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16ed44: 0x3e00008  jr          $ra
    ctx->pc = 0x16ED44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED44u;
        // 0x16ed48: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16ED44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16ED4Cu;
}
