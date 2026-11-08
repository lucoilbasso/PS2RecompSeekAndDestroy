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

// Function: ExecMIMeDifference__9WMIMeCtrlP8WcObjectf
// Address: 0x193d88 - 0x193e94
void ExecMIMeDifference__9WMIMeCtrlP8WcObjectf_0x193d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExecMIMeDifference__9WMIMeCtrlP8WcObjectf_0x193d88");
#endif

    switch (ctx->pc) {
        case 0x193dc0u: goto label_193dc0;
        case 0x193dc8u: goto label_193dc8;
        case 0x193dd0u: goto label_193dd0;
        case 0x193dd8u: goto label_193dd8;
        case 0x193e14u: goto label_193e14;
        case 0x193e54u: goto label_193e54;
        case 0x193e5cu: goto label_193e5c;
        case 0x193e64u: goto label_193e64;
        case 0x193e6cu: goto label_193e6c;
        case 0x193e74u: goto label_193e74;
        default: break;
    }

    ctx->pc = 0x193d88u;

    // 0x193d88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x193d8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x193d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x193d90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x193d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d94: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x193d94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x193d98: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x193d98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x193d9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x193d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193da0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x193da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x193da4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x193da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193da8: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x193da8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193dac: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x193DACu;
    {
        const bool branch_taken_0x193dac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x193DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193DACu;
        // 0x193db0: 0x3c100022  lui         $s0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193dac) {
            ctx->pc = 0x193E7Cu;
            goto label_193e7c;
        }
    }
    ctx->pc = 0x193DB4u;
    // 0x193db4: 0x2610d650  addiu       $s0, $s0, -0x29B0
    ctx->pc = 0x193db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956624));
    // 0x193db8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x193DB8u;
    SET_GPR_U32(ctx, 31, 0x193DC0u);
    ctx->pc = 0x193DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193DB8u;
    // 0x193dbc: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x193DB8u, 0x193DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193DC0u;
label_193dc0:
    // 0x193dc0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x193DC0u;
    SET_GPR_U32(ctx, 31, 0x193DC8u);
    ctx->pc = 0x193DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193DC0u;
    // 0x193dc4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x193DC0u, 0x193DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193DC8u;
label_193dc8:
    // 0x193dc8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x193DC8u;
    SET_GPR_U32(ctx, 31, 0x193DD0u);
    ctx->pc = 0x193DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193DC8u;
    // 0x193dcc: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x193DC8u, 0x193DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193DD0u;
label_193dd0:
    // 0x193dd0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x193DD0u;
    SET_GPR_U32(ctx, 31, 0x193DD8u);
    ctx->pc = 0x193DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193DD0u;
    // 0x193dd4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x193DD0u, 0x193DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193DD8u;
label_193dd8:
    // 0x193dd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x193dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193ddc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x193ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x193de0: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x193de0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x193de4: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x193de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x193de8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x193de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x193dec: 0xae040094  sw          $a0, 0x94($s0)
    ctx->pc = 0x193decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 4));
    // 0x193df0: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x193df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x193df4: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x193df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x193df8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x193df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x193dfc: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x193dfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x193e00: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x193e00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x193e04: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x193e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193e08: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x193e08u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193e0c: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x193e0cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193e10: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x193e10u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_193e14:
    // 0x193e14: 0xd9c10000  lqc2        $vf1, 0x0($t6)
    ctx->pc = 0x193e14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x193e18: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x193e18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x193e1c: 0xd9a30000  lqc2        $vf3, 0x0($t5)
    ctx->pc = 0x193e1cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x193e20: 0x4bc30868  vadd.xyz    $vf1, $vf1, $vf3
    ctx->pc = 0x193e20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x193e24: 0xf9810000  sqc2        $vf1, 0x0($t4)
    ctx->pc = 0x193e24u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x193e28: 0x218c0010  addi        $t4, $t4, 0x10
    ctx->pc = 0x193e28u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x193e2c: 0x21ad0010  addi        $t5, $t5, 0x10
    ctx->pc = 0x193e2cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 13), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x193e30: 0x21ce0010  addi        $t6, $t6, 0x10
    ctx->pc = 0x193e30u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 14), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
    // 0x193e34: 0x2042ffff  addi        $v0, $v0, -0x1
    ctx->pc = 0x193e34u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x193e38: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x193E38u;
    {
        const bool branch_taken_0x193e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193e38) {
            ctx->pc = 0x193E14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193e14;
        }
    }
    ctx->pc = 0x193E40u;
    // 0x193e40: 0x0  nop
    ctx->pc = 0x193e40u;
    // NOP
    // 0x193e44: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x193e44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x193e48: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x193e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x193e4c: 0xc05fe70  jal         func_17F9C0
    ctx->pc = 0x193E4Cu;
    SET_GPR_U32(ctx, 31, 0x193E54u);
    ctx->pc = 0x193E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E4Cu;
    // 0x193e50: 0x8ce50008  lw          $a1, 0x8($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F9C0u, 0x193E4Cu, 0x193E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E54u;
label_193e54:
    // 0x193e54: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x193E54u;
    SET_GPR_U32(ctx, 31, 0x193E5Cu);
    ctx->pc = 0x193E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E54u;
    // 0x193e58: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x193E54u, 0x193E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E5Cu;
label_193e5c:
    // 0x193e5c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x193E5Cu;
    SET_GPR_U32(ctx, 31, 0x193E64u);
    ctx->pc = 0x193E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E5Cu;
    // 0x193e60: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x193E5Cu, 0x193E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E64u;
label_193e64:
    // 0x193e64: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x193E64u;
    SET_GPR_U32(ctx, 31, 0x193E6Cu);
    ctx->pc = 0x193E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E64u;
    // 0x193e68: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x193E64u, 0x193E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E6Cu;
label_193e6c:
    // 0x193e6c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x193E6Cu;
    SET_GPR_U32(ctx, 31, 0x193E74u);
    ctx->pc = 0x193E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E6Cu;
    // 0x193e70: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x193E6Cu, 0x193E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E74u;
label_193e74:
    // 0x193e74: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x193e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x193e78: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x193e78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_193e7c:
    // 0x193e7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193e7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193e80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x193e80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x193e84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193e88: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x193e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x193e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x193E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E8Cu;
        // 0x193e90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193E94u;
}
