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

// Function: EffectSendFactorySmoke__17ST_EffectParticlePUiUiP20ST_ParticleGenerator
// Address: 0x11fc38 - 0x11fda8
void EffectSendFactorySmoke__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x11fc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSendFactorySmoke__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x11fc38");
#endif

    switch (ctx->pc) {
        case 0x11fd00u: goto label_11fd00;
        case 0x11fd28u: goto label_11fd28;
        case 0x11fd50u: goto label_11fd50;
        default: break;
    }

    ctx->pc = 0x11fc38u;

    // 0x11fc38: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11fc38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11fc3c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x11fc3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11fc40: 0x24470790  addiu       $a3, $v0, 0x790
    ctx->pc = 0x11fc40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x11fc44: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x11fc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11fc48: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x11fc48u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x410790u));
    // 0x11fc4c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11fc4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11fc50: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11fc50u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11fc54: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11fc54u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11fc58: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x11fc58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11fc5c: 0x14c00020  bnez        $a2, . + 4 + (0x20 << 2)
    ctx->pc = 0x11FC5Cu;
    {
        const bool branch_taken_0x11fc5c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC5Cu;
        // 0x11fc60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc5c) {
            ctx->pc = 0x11FCE0u;
            goto label_11fce0;
        }
    }
    ctx->pc = 0x11FC64u;
    // 0x11fc64: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FC64u;
    {
        const bool branch_taken_0x11fc64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fc64) {
            ctx->pc = 0x11FC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FC64u;
            // 0x11fc68: 0x8ce50004  lw          $a1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FC88u;
            goto label_11fc88;
        }
    }
    ctx->pc = 0x11FC6Cu;
    // 0x11fc6c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11fc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11fc70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11fc70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fc74: 0xc4a10070  lwc1        $f1, 0x70($a1)
    ctx->pc = 0x11fc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11fc78: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11fc78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11fc7c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11fc7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11fc80: 0xe4a10070  swc1        $f1, 0x70($a1)
    ctx->pc = 0x11fc80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
    // 0x11fc84: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x11fc84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_11fc88:
    // 0x11fc88: 0x10a00045  beqz        $a1, . + 4 + (0x45 << 2)
    ctx->pc = 0x11FC88u;
    {
        const bool branch_taken_0x11fc88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fc88) {
            ctx->pc = 0x11FDA0u;
            goto label_11fda0;
        }
    }
    ctx->pc = 0x11FC90u;
    // 0x11fc90: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11fc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11fc94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11fc94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fc98: 0xc4a50070  lwc1        $f5, 0x70($a1)
    ctx->pc = 0x11fc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11fc9c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11fc9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11fca0: 0xc4a20088  lwc1        $f2, 0x88($a1)
    ctx->pc = 0x11fca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11fca4: 0xc4a10080  lwc1        $f1, 0x80($a1)
    ctx->pc = 0x11fca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11fca8: 0xc4a40090  lwc1        $f4, 0x90($a1)
    ctx->pc = 0x11fca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11fcac: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x11fcacu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x11fcb0: 0xc4a30098  lwc1        $f3, 0x98($a1)
    ctx->pc = 0x11fcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11fcb4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x11fcb4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x11fcb8: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x11fcb8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x11fcbc: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x11fcbcu;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x11fcc0: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x11fcc0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x11fcc4: 0xe4a20088  swc1        $f2, 0x88($a1)
    ctx->pc = 0x11fcc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 136), bits); }
    // 0x11fcc8: 0xe4a10080  swc1        $f1, 0x80($a1)
    ctx->pc = 0x11fcc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 128), bits); }
    // 0x11fccc: 0xe4a50070  swc1        $f5, 0x70($a1)
    ctx->pc = 0x11fcccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
    // 0x11fcd0: 0xe4a40090  swc1        $f4, 0x90($a1)
    ctx->pc = 0x11fcd0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 144), bits); }
    // 0x11fcd4: 0x3e00008  jr          $ra
    ctx->pc = 0x11FCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCD4u;
        // 0x11fcd8: 0xe4a30098  swc1        $f3, 0x98($a1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FCD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FCDCu;
    // 0x11fcdc: 0x0  nop
    ctx->pc = 0x11fcdcu;
    // NOP
label_11fce0:
    // 0x11fce0: 0x14c20013  bne         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11FCE0u;
    {
        const bool branch_taken_0x11fce0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCE0u;
        // 0x11fce4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fce0) {
            ctx->pc = 0x11FD30u;
            goto label_11fd30;
        }
    }
    ctx->pc = 0x11FCE8u;
    // 0x11fce8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11fce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11fcec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11fcecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fcf0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x11fcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fcf4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11fcf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fcf8: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x11fcf8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11fcfc: 0x46001887  neg.s       $f2, $f3
    ctx->pc = 0x11fcfcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[3]);
label_11fd00:
    // 0x11fd00: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x11fd00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11fd04: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FD04u;
    {
        const bool branch_taken_0x11fd04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD04u;
        // 0x11fd08: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd04) {
            ctx->pc = 0x11FD18u;
            goto label_11fd18;
        }
    }
    ctx->pc = 0x11FD0Cu;
    // 0x11fd0c: 0xc4a00070  lwc1        $f0, 0x70($a1)
    ctx->pc = 0x11fd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fd10: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11fd10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11fd14: 0xe4a00070  swc1        $f0, 0x70($a1)
    ctx->pc = 0x11fd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
label_11fd18:
    // 0x11fd18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11fd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11fd1c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x11fd1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11fd20: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11FD20u;
    {
        const bool branch_taken_0x11fd20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD20u;
        // 0x11fd24: 0x46031080  add.s       $f2, $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd20) {
            ctx->pc = 0x11FD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fd00;
        }
    }
    ctx->pc = 0x11FD28u;
label_11fd28:
    // 0x11fd28: 0x3e00008  jr          $ra
    ctx->pc = 0x11FD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FD30u;
label_11fd30:
    // 0x11fd30: 0x14c2fffd  bne         $a2, $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x11FD30u;
    {
        const bool branch_taken_0x11fd30 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD30u;
        // 0x11fd34: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd30) {
            ctx->pc = 0x11FD28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fd28;
        }
    }
    ctx->pc = 0x11FD38u;
    // 0x11fd38: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11fd38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11fd3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11fd3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fd40: 0x24470790  addiu       $a3, $v0, 0x790
    ctx->pc = 0x11fd40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x11fd44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11fd44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd48: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x11fd48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11fd4c: 0x46001887  neg.s       $f2, $f3
    ctx->pc = 0x11fd4cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[3]);
label_11fd50:
    // 0x11fd50: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x11fd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11fd54: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x11FD54u;
    {
        const bool branch_taken_0x11fd54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fd54) {
            ctx->pc = 0x11FD58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FD54u;
            // 0x11fd58: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FD90u;
            goto label_11fd90;
        }
    }
    ctx->pc = 0x11FD5Cu;
    // 0x11fd5c: 0xc4a00070  lwc1        $f0, 0x70($a1)
    ctx->pc = 0x11fd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fd60: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11fd60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11fd64: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x11FD64u;
    {
        const bool branch_taken_0x11fd64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD64u;
        // 0x11fd68: 0xe4a00070  swc1        $f0, 0x70($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd64) {
            ctx->pc = 0x11FD8Cu;
            goto label_11fd8c;
        }
    }
    ctx->pc = 0x11FD6Cu;
    // 0x11fd6c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x11fd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11fd70: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11fd70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11fd74: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11fd74u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11fd78: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11fd78u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11fd7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11fd7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11fd80: 0xc4a00074  lwc1        $f0, 0x74($a1)
    ctx->pc = 0x11fd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fd84: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11fd84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11fd88: 0xe4a00074  swc1        $f0, 0x74($a1)
    ctx->pc = 0x11fd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 116), bits); }
label_11fd8c:
    // 0x11fd8c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11fd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_11fd90:
    // 0x11fd90: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x11fd90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x11fd94: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x11fd94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11fd98: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x11FD98u;
    {
        const bool branch_taken_0x11fd98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD98u;
        // 0x11fd9c: 0x46031080  add.s       $f2, $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd98) {
            ctx->pc = 0x11FD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fd50;
        }
    }
    ctx->pc = 0x11FDA0u;
label_11fda0:
    // 0x11fda0: 0x3e00008  jr          $ra
    ctx->pc = 0x11FDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FDA8u;
}
