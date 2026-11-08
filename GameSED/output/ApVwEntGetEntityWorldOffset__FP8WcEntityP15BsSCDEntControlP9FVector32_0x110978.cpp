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

// Function: ApVwEntGetEntityWorldOffset__FP8WcEntityP15BsSCDEntControlP9FVector32
// Address: 0x110978 - 0x110aa0
void ApVwEntGetEntityWorldOffset__FP8WcEntityP15BsSCDEntControlP9FVector32_0x110978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApVwEntGetEntityWorldOffset__FP8WcEntityP15BsSCDEntControlP9FVector32_0x110978");
#endif

    switch (ctx->pc) {
        case 0x1109d0u: goto label_1109d0;
        case 0x1109d8u: goto label_1109d8;
        case 0x110a0cu: goto label_110a0c;
        default: break;
    }

    ctx->pc = 0x110978u;

    // 0x110978: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x110978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11097c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x11097cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x110980: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x110980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x110984: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x110984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x110988: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x110988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11098c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11098cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x110990: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x110990u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110994: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x110994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x110998: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x110998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x11099c: 0x26540020  addiu       $s4, $s2, 0x20
    ctx->pc = 0x11099cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1109a0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1109a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1109a4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1109a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1109a8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1109a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1109ac: 0x265600e0  addiu       $s6, $s2, 0xE0
    ctx->pc = 0x1109acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x1109b0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1109b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1109b4: 0x8c70b830  lw          $s0, -0x47D0($v1)
    ctx->pc = 0x1109b4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1109b8: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x1109b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x1109bc: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1109bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x1109c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1109C0u;
    {
        const bool branch_taken_0x1109c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1109C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1109C0u;
        // 0x1109c4: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1109c0) {
            ctx->pc = 0x1109D0u;
            goto label_1109d0;
        }
    }
    ctx->pc = 0x1109C8u;
    // 0x1109c8: 0xc061920  jal         func_186480
    ctx->pc = 0x1109C8u;
    SET_GPR_U32(ctx, 31, 0x1109D0u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1109C8u, 0x1109D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1109D0u;
label_1109d0:
    // 0x1109d0: 0xc061422  jal         func_185088
    ctx->pc = 0x1109D0u;
    SET_GPR_U32(ctx, 31, 0x1109D8u);
    ctx->pc = 0x1109D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1109D0u;
    // 0x1109d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1109D0u, 0x1109D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1109D8u;
label_1109d8:
    // 0x1109d8: 0x26430110  addiu       $v1, $s2, 0x110
    ctx->pc = 0x1109d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
    // 0x1109dc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1109dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1109e0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1109e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x1109e4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1109e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1109e8: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x1109e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1109ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1109ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1109f0: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1109F0u;
    {
        const bool branch_taken_0x1109f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1109f0) {
            ctx->pc = 0x110A10u;
            goto label_110a10;
        }
    }
    ctx->pc = 0x1109F8u;
    // 0x1109f8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1109f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1109fc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1109fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x110a00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x110a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a04: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x110A04u;
    SET_GPR_U32(ctx, 31, 0x110A0Cu);
    ctx->pc = 0x110A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110A04u;
    // 0x110a08: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x110A04u, 0x110A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110A0Cu;
label_110a0c:
    // 0x110a0c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x110a0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_110a10:
    // 0x110a10: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x110A10u;
    {
        const bool branch_taken_0x110a10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x110A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A10u;
        // 0x110a14: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a10) {
            ctx->pc = 0x110A7Cu;
            goto label_110a7c;
        }
    }
    ctx->pc = 0x110A18u;
    // 0x110a18: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x110a18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x110a1c: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x110a1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x110a20: 0x4a0002ff  vnop
    ctx->pc = 0x110a20u;
    // NOP operation, no action needed for VU0
    // 0x110a24: 0x4a0002ff  vnop
    ctx->pc = 0x110a24u;
    // NOP operation, no action needed for VU0
    // 0x110a28: 0x4a0002ff  vnop
    ctx->pc = 0x110a28u;
    // NOP operation, no action needed for VU0
    // 0x110a2c: 0x4a0002ff  vnop
    ctx->pc = 0x110a2cu;
    // NOP operation, no action needed for VU0
    // 0x110a30: 0x4a0002ff  vnop
    ctx->pc = 0x110a30u;
    // NOP operation, no action needed for VU0
    // 0x110a34: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x110a34u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x110a38: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x110a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x110a3c: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x110a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x110a40: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x110A40u;
    {
        const bool branch_taken_0x110a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A40u;
        // 0x110a44: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a40) {
            ctx->pc = 0x110A7Cu;
            goto label_110a7c;
        }
    }
    ctx->pc = 0x110A48u;
    // 0x110a48: 0xda280000  lqc2        $vf8, 0x0($s1)
    ctx->pc = 0x110a48u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x110a4c: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x110a4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x110a50: 0xdac50010  lqc2        $vf5, 0x10($s6)
    ctx->pc = 0x110a50u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x110a54: 0xdac60020  lqc2        $vf6, 0x20($s6)
    ctx->pc = 0x110a54u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x110a58: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x110a58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x110a5c: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x110a5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x110a60: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x110a60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x110a64: 0xfba80000  sqc2        $vf8, 0x0($sp)
    ctx->pc = 0x110a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x110a68: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x110a68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x110a6c: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x110a6cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110a70: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x110a70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x110a74: 0xfa620000  sqc2        $vf2, 0x0($s3)
    ctx->pc = 0x110a74u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x110a78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x110a78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_110a7c:
    // 0x110a7c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x110a7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x110a80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x110a80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110a84: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x110a84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x110a88: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x110a88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x110a8c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x110a8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x110a90: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x110a90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x110a94: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x110a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x110a98: 0x3e00008  jr          $ra
    ctx->pc = 0x110A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A98u;
        // 0x110a9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110AA0u;
}
