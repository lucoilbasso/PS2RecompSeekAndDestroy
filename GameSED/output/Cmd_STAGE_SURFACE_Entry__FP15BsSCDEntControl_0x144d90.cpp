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

// Function: Cmd_STAGE_SURFACE_Entry__FP15BsSCDEntControl
// Address: 0x144d90 - 0x1450d8
void Cmd_STAGE_SURFACE_Entry__FP15BsSCDEntControl_0x144d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_STAGE_SURFACE_Entry__FP15BsSCDEntControl_0x144d90");
#endif

    switch (ctx->pc) {
        case 0x144db8u: goto label_144db8;
        case 0x144df8u: goto label_144df8;
        case 0x144e50u: goto label_144e50;
        case 0x144e64u: goto label_144e64;
        case 0x144e78u: goto label_144e78;
        case 0x144e8cu: goto label_144e8c;
        case 0x144ea0u: goto label_144ea0;
        case 0x145008u: goto label_145008;
        case 0x145030u: goto label_145030;
        case 0x145090u: goto label_145090;
        case 0x145098u: goto label_145098;
        default: break;
    }

    ctx->pc = 0x144d90u;

    // 0x144d90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x144d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x144d94: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x144d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x144d98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x144d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144d9c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x144d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x144da0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x144da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x144da4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x144da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x144da8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x144da8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x144dac: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x144dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x144db0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x144DB0u;
    SET_GPR_U32(ctx, 31, 0x144DB8u);
    ctx->pc = 0x144DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144DB0u;
    // 0x144db4: 0x8c520048  lw          $s2, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x144DB0u, 0x144DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144DB8u;
label_144db8:
    // 0x144db8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x144db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144dbc: 0x48b12000  qmtc2.ni    $s1, $vf4
    ctx->pc = 0x144dbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 17));
    // 0x144dc0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x144dc0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x144dc4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x144dc4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x144dc8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x144dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x144dcc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x144dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x144dd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x144dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144dd4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x144DD4u;
    {
        const bool branch_taken_0x144dd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x144DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144DD4u;
        // 0x144dd8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144dd4) {
            ctx->pc = 0x144DE8u;
            goto label_144de8;
        }
    }
    ctx->pc = 0x144DDCu;
    // 0x144ddc: 0x8e420328  lw          $v0, 0x328($s2)
    ctx->pc = 0x144ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x144de0: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x144DE0u;
    {
        const bool branch_taken_0x144de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144DE0u;
        // 0x144de4: 0xe4544000  swc1        $f20, 0x4000($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16384), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144de0) {
            ctx->pc = 0x1450BCu;
            goto label_1450bc;
        }
    }
    ctx->pc = 0x144DE8u;
label_144de8:
    // 0x144de8: 0x54820015  bnel        $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x144DE8u;
    {
        const bool branch_taken_0x144de8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x144de8) {
            ctx->pc = 0x144DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144DE8u;
            // 0x144dec: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144E40u;
            goto label_144e40;
        }
    }
    ctx->pc = 0x144DF0u;
    // 0x144df0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x144DF0u;
    SET_GPR_U32(ctx, 31, 0x144DF8u);
    ctx->pc = 0x144DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144DF0u;
    // 0x144df4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x144DF0u, 0x144DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144DF8u;
label_144df8:
    // 0x144df8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x144df8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144dfc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x144DFCu;
    {
        const bool branch_taken_0x144dfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x144E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144DFCu;
        // 0x144e00: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144dfc) {
            ctx->pc = 0x144E10u;
            goto label_144e10;
        }
    }
    ctx->pc = 0x144E04u;
    // 0x144e04: 0x8e420328  lw          $v0, 0x328($s2)
    ctx->pc = 0x144e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x144e08: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x144E08u;
    {
        const bool branch_taken_0x144e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E08u;
        // 0x144e0c: 0xe4544004  swc1        $f20, 0x4004($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16388), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e08) {
            ctx->pc = 0x1450BCu;
            goto label_1450bc;
        }
    }
    ctx->pc = 0x144E10u;
label_144e10:
    // 0x144e10: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x144E10u;
    {
        const bool branch_taken_0x144e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x144E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E10u;
        // 0x144e14: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e10) {
            ctx->pc = 0x144E28u;
            goto label_144e28;
        }
    }
    ctx->pc = 0x144E18u;
    // 0x144e18: 0x8e420328  lw          $v0, 0x328($s2)
    ctx->pc = 0x144e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x144e1c: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x144E1Cu;
    {
        const bool branch_taken_0x144e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E1Cu;
        // 0x144e20: 0xe4544010  swc1        $f20, 0x4010($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16400), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e1c) {
            ctx->pc = 0x1450BCu;
            goto label_1450bc;
        }
    }
    ctx->pc = 0x144E24u;
    // 0x144e24: 0x0  nop
    ctx->pc = 0x144e24u;
    // NOP
label_144e28:
    // 0x144e28: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x144E28u;
    {
        const bool branch_taken_0x144e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x144E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E28u;
        // 0x144e2c: 0x8e420328  lw          $v0, 0x328($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e28) {
            ctx->pc = 0x144E38u;
            goto label_144e38;
        }
    }
    ctx->pc = 0x144E30u;
    // 0x144e30: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x144E30u;
    {
        const bool branch_taken_0x144e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E30u;
        // 0x144e34: 0xe4544014  swc1        $f20, 0x4014($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16404), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e30) {
            ctx->pc = 0x1450BCu;
            goto label_1450bc;
        }
    }
    ctx->pc = 0x144E38u;
label_144e38:
    // 0x144e38: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x144E38u;
    {
        const bool branch_taken_0x144e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E38u;
        // 0x144e3c: 0xa0514019  sb          $s1, 0x4019($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 16409), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e38) {
            ctx->pc = 0x1450BCu;
            goto label_1450bc;
        }
    }
    ctx->pc = 0x144E40u;
label_144e40:
    // 0x144e40: 0x14820091  bne         $a0, $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x144E40u;
    {
        const bool branch_taken_0x144e40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x144e40) {
            ctx->pc = 0x145088u;
            goto label_145088;
        }
    }
    ctx->pc = 0x144E48u;
    // 0x144e48: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x144E48u;
    SET_GPR_U32(ctx, 31, 0x144E50u);
    ctx->pc = 0x144E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E48u;
    // 0x144e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x144E48u, 0x144E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E50u;
label_144e50:
    // 0x144e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144e58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x144e58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x144e5c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x144E5Cu;
    SET_GPR_U32(ctx, 31, 0x144E64u);
    ctx->pc = 0x144E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E5Cu;
    // 0x144e60: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x144E5Cu, 0x144E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E64u;
label_144e64:
    // 0x144e64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144e68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x144e68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x144e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e70: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x144E70u;
    SET_GPR_U32(ctx, 31, 0x144E78u);
    ctx->pc = 0x144E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E70u;
    // 0x144e74: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x144E70u, 0x144E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E78u;
label_144e78:
    // 0x144e78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144e7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x144e7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x144e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e84: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x144E84u;
    SET_GPR_U32(ctx, 31, 0x144E8Cu);
    ctx->pc = 0x144E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E84u;
    // 0x144e88: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x144E84u, 0x144E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E8Cu;
label_144e8c:
    // 0x144e8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144e90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x144e90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x144e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e98: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x144E98u;
    SET_GPR_U32(ctx, 31, 0x144EA0u);
    ctx->pc = 0x144E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E98u;
    // 0x144e9c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x144E98u, 0x144EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144EA0u;
label_144ea0:
    // 0x144ea0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ea4: 0x8e430328  lw          $v1, 0x328($s2)
    ctx->pc = 0x144ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x144ea8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x144ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x144eac: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x144eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x144eb0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x144eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x144eb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x144eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144eb8: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x144eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x144ebc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x144ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x144ec0: 0xe4544004  swc1        $f20, 0x4004($v0)
    ctx->pc = 0x144ec0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16388), bits); }
    // 0x144ec4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x144ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144ec8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x144ec8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x144ecc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x144eccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144ed0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144ed0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x144ed4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x144ed4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x144ed8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x144ED8u;
    {
        const bool branch_taken_0x144ed8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x144ed8) {
            ctx->pc = 0x144EF4u;
            goto label_144ef4;
        }
    }
    ctx->pc = 0x144EE0u;
    // 0x144ee0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x144ee0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x144ee4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x144ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x144ee8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144ee8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x144eec: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x144eecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x144ef0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x144ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_144ef4:
    // 0x144ef4: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x144ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x144ef8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x144ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x144efc: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x144efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x144f00: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x144f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144f04: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x144f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x144f08: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x144f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x144f0c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x144f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x144f10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x144f10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x144f14: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x144f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x144f18: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x144f18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144f1c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144f1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x144f20: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x144f20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x144f24: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x144F24u;
    {
        const bool branch_taken_0x144f24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x144f24) {
            ctx->pc = 0x144F40u;
            goto label_144f40;
        }
    }
    ctx->pc = 0x144F2Cu;
    // 0x144f2c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x144f2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x144f30: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x144f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x144f34: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144f34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x144f38: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x144f38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x144f3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x144f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_144f40:
    // 0x144f40: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x144f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x144f44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x144f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x144f48: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x144f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x144f4c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x144f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144f50: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x144f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x144f54: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x144f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x144f58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x144f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x144f5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x144f5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x144f60: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x144f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x144f64: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x144f64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144f68: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144f68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x144f6c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x144f6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x144f70: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x144F70u;
    {
        const bool branch_taken_0x144f70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x144f70) {
            ctx->pc = 0x144F8Cu;
            goto label_144f8c;
        }
    }
    ctx->pc = 0x144F78u;
    // 0x144f78: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x144f78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x144f7c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x144f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x144f80: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144f80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x144f84: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x144f84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x144f88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x144f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_144f8c:
    // 0x144f8c: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x144f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x144f90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x144f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x144f94: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x144f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x144f98: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x144f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144f9c: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x144f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x144fa0: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x144fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x144fa4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x144fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x144fa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x144fa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x144fac: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x144facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x144fb0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x144fb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144fb4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144fb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x144fb8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x144fb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x144fbc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x144FBCu;
    {
        const bool branch_taken_0x144fbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x144FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144FBCu;
        // 0x144fc0: 0x31142  srl         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144fbc) {
            ctx->pc = 0x144FDCu;
            goto label_144fdc;
        }
    }
    ctx->pc = 0x144FC4u;
    // 0x144fc4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x144fc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x144fc8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x144fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x144fcc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144fccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x144fd0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x144fd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x144fd4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x144fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x144fd8: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x144fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_144fdc:
    // 0x144fdc: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x144fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x144fe0: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x144fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x144fe4: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x144fe4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x144fe8: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x144fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x144fec: 0x8e490328  lw          $t1, 0x328($s2)
    ctx->pc = 0x144fecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x144ff0: 0x44180  sll         $t0, $a0, 6
    ctx->pc = 0x144ff0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x144ff4: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x144ff4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x144ff8: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x144FF8u;
    {
        const bool branch_taken_0x144ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x144FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144FF8u;
        // 0x144ffc: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ff8) {
            ctx->pc = 0x1450BCu;
            goto label_1450bc;
        }
    }
    ctx->pc = 0x145000u;
    // 0x145000: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x145000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x145004: 0x0  nop
    ctx->pc = 0x145004u;
    // NOP
label_145008:
    // 0x145008: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x145008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14500c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x14500cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x145010: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x145010u;
    {
        const bool branch_taken_0x145010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145010) {
            ctx->pc = 0x145014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145010u;
            // 0x145014: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145070u;
            goto label_145070;
        }
    }
    ctx->pc = 0x145018u;
    // 0x145018: 0x619c0  sll         $v1, $a2, 7
    ctx->pc = 0x145018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x14501c: 0xa91021  addu        $v0, $a1, $t1
    ctx->pc = 0x14501cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x145020: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x145020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x145024: 0x24c40040  addiu       $a0, $a2, 0x40
    ctx->pc = 0x145024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x145028: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x145028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x14502c: 0x24432040  addiu       $v1, $v0, 0x2040
    ctx->pc = 0x14502cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8256));
label_145030:
    // 0x145030: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x145030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x145034: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x145034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x145038: 0x704410c8  pmaxw       $v0, $v0, $a0
    ctx->pc = 0x145038u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x14503c: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x14503cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x145040: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x145040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x145044: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x145044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x145048: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x145048u;
    {
        const bool branch_taken_0x145048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145048u;
        // 0x14504c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145048) {
            ctx->pc = 0x14505Cu;
            goto label_14505c;
        }
    }
    ctx->pc = 0x145050u;
    // 0x145050: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x145050u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145054: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x145054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x145058: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x145058u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_14505c:
    // 0x14505c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x14505cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x145060: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x145060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x145064: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x145064u;
    {
        const bool branch_taken_0x145064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145064u;
        // 0x145068: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145064) {
            ctx->pc = 0x145030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145030;
        }
    }
    ctx->pc = 0x14506Cu;
    // 0x14506c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x14506cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_145070:
    // 0x145070: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x145070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x145074: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x145074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x145078: 0x5040ffe3  beql        $v0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x145078u;
    {
        const bool branch_taken_0x145078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145078) {
            ctx->pc = 0x14507Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145078u;
            // 0x14507c: 0x8d450000  lw          $a1, 0x0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145008;
        }
    }
    ctx->pc = 0x145080u;
    // 0x145080: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x145080u;
    {
        const bool branch_taken_0x145080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145080u;
        // 0x145084: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145080) {
            ctx->pc = 0x1450C0u;
            goto label_1450c0;
        }
    }
    ctx->pc = 0x145088u;
label_145088:
    // 0x145088: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x145088u;
    SET_GPR_U32(ctx, 31, 0x145090u);
    ctx->pc = 0x14508Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145088u;
    // 0x14508c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x145088u, 0x145090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145090u;
label_145090:
    // 0x145090: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x145090u;
    SET_GPR_U32(ctx, 31, 0x145098u);
    ctx->pc = 0x145094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145090u;
    // 0x145094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x145090u, 0x145098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145098u;
label_145098:
    // 0x145098: 0x8e430328  lw          $v1, 0x328($s2)
    ctx->pc = 0x145098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x14509c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14509cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1450a0: 0xc4604004  lwc1        $f0, 0x4004($v1)
    ctx->pc = 0x1450a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1450a4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1450a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1450a8: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1450a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1450ac: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x1450acu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1450b0: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x1450b0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1450b4: 0x42000  sll         $a0, $a0, 0
    ctx->pc = 0x1450b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x1450b8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1450b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_1450bc:
    // 0x1450bc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1450bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1450c0:
    // 0x1450c0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1450c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1450c4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1450c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1450c8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1450c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1450cc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1450ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1450d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1450D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1450D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450D0u;
        // 0x1450d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1450D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1450D8u;
}
