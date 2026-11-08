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

// Function: ApCMFreePositionMove__FP16CameraMotionWorkP9FVector32ff
// Address: 0x141c90 - 0x141d8c
void ApCMFreePositionMove__FP16CameraMotionWorkP9FVector32ff_0x141c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCMFreePositionMove__FP16CameraMotionWorkP9FVector32ff_0x141c90");
#endif

    switch (ctx->pc) {
        case 0x141d14u: goto label_141d14;
        case 0x141d2cu: goto label_141d2c;
        case 0x141d44u: goto label_141d44;
        default: break;
    }

    ctx->pc = 0x141c90u;

    // 0x141c90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x141c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x141c94: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x141c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x141c98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x141c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x141c9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x141c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141ca0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x141ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x141ca4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x141ca4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141ca8: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x141ca8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x141cac: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x141cacu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x141cb0: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x141cb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x141cb4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x141cb4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x141cb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x141cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141cbc: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x141cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x141cc0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x141cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x141cc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x141cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x141cc8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x141cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x141ccc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x141cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x141cd0: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x141cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x141cd4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x141cd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x141cd8: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x141cd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x141cdc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x141cdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x141ce0: 0x4a0002ff  vnop
    ctx->pc = 0x141ce0u;
    // NOP operation, no action needed for VU0
    // 0x141ce4: 0x4a0002ff  vnop
    ctx->pc = 0x141ce4u;
    // NOP operation, no action needed for VU0
    // 0x141ce8: 0x4a0002ff  vnop
    ctx->pc = 0x141ce8u;
    // NOP operation, no action needed for VU0
    // 0x141cec: 0x4a0002ff  vnop
    ctx->pc = 0x141cecu;
    // NOP operation, no action needed for VU0
    // 0x141cf0: 0x4a0002ff  vnop
    ctx->pc = 0x141cf0u;
    // NOP operation, no action needed for VU0
    // 0x141cf4: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x141cf4u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x141cf8: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x141cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x141cfc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x141cfcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x141d00: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x141d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x141d04: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x141D04u;
    {
        const bool branch_taken_0x141d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141D04u;
        // 0x141d08: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x141d04) {
            ctx->pc = 0x141D68u;
            goto label_141d68;
        }
    }
    ctx->pc = 0x141D0Cu;
    // 0x141d0c: 0xc067c0a  jal         func_19F028
    ctx->pc = 0x141D0Cu;
    SET_GPR_U32(ctx, 31, 0x141D14u);
    ctx->pc = 0x141D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D0Cu;
    // 0x141d10: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F028u, 0x141D0Cu, 0x141D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D14u;
label_141d14:
    // 0x141d14: 0x26240034  addiu       $a0, $s1, 0x34
    ctx->pc = 0x141d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x141d18: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x141d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x141d1c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x141d1cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x141d20: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x141d20u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x141d24: 0xc067c0a  jal         func_19F028
    ctx->pc = 0x141D24u;
    SET_GPR_U32(ctx, 31, 0x141D2Cu);
    ctx->pc = 0x141D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D24u;
    // 0x141d28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F028u, 0x141D24u, 0x141D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D2Cu;
label_141d2c:
    // 0x141d2c: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x141d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x141d30: 0xc64c0008  lwc1        $f12, 0x8($s2)
    ctx->pc = 0x141d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x141d34: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x141d34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x141d38: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x141d38u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x141d3c: 0xc067c0a  jal         func_19F028
    ctx->pc = 0x141D3Cu;
    SET_GPR_U32(ctx, 31, 0x141D44u);
    ctx->pc = 0x141D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D3Cu;
    // 0x141d40: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F028u, 0x141D3Cu, 0x141D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D44u;
label_141d44:
    // 0x141d44: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x141D44u;
    {
        const bool branch_taken_0x141d44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x141d44) {
            ctx->pc = 0x141D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141D44u;
            // 0x141d48: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141D60u;
            goto label_141d60;
        }
    }
    ctx->pc = 0x141D4Cu;
    // 0x141d4c: 0x56600004  bnel        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x141D4Cu;
    {
        const bool branch_taken_0x141d4c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x141d4c) {
            ctx->pc = 0x141D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141D4Cu;
            // 0x141d50: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141D60u;
            goto label_141d60;
        }
    }
    ctx->pc = 0x141D54u;
    // 0x141d54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x141D54u;
    {
        const bool branch_taken_0x141d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141D54u;
        // 0x141d58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141d54) {
            ctx->pc = 0x141D6Cu;
            goto label_141d6c;
        }
    }
    ctx->pc = 0x141D5Cu;
    // 0x141d5c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x141d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_141d60:
    // 0x141d60: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x141d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x141d64: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x141d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_141d68:
    // 0x141d68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x141d68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141d6c:
    // 0x141d6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x141d6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141d70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x141d70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141d74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x141d74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x141d78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x141d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141d7c: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x141d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x141d80: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x141d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x141d84: 0x3e00008  jr          $ra
    ctx->pc = 0x141D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141D84u;
        // 0x141d88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141D8Cu;
}
