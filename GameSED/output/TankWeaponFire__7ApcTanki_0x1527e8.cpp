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

// Function: TankWeaponFire__7ApcTanki
// Address: 0x1527e8 - 0x152d64
void TankWeaponFire__7ApcTanki_0x1527e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TankWeaponFire__7ApcTanki_0x1527e8");
#endif

    switch (ctx->pc) {
        case 0x152878u: goto label_152878;
        case 0x1528e4u: goto label_1528e4;
        case 0x152908u: goto label_152908;
        case 0x1529a0u: goto label_1529a0;
        case 0x1529b8u: goto label_1529b8;
        case 0x152a50u: goto label_152a50;
        case 0x152ab4u: goto label_152ab4;
        case 0x152b58u: goto label_152b58;
        case 0x152b68u: goto label_152b68;
        case 0x152b70u: goto label_152b70;
        case 0x152b9cu: goto label_152b9c;
        case 0x152bacu: goto label_152bac;
        case 0x152bd0u: goto label_152bd0;
        case 0x152c10u: goto label_152c10;
        case 0x152c18u: goto label_152c18;
        case 0x152c2cu: goto label_152c2c;
        case 0x152c58u: goto label_152c58;
        case 0x152cb8u: goto label_152cb8;
        case 0x152cd4u: goto label_152cd4;
        case 0x152cdcu: goto label_152cdc;
        case 0x152d34u: goto label_152d34;
        default: break;
    }

    ctx->pc = 0x1527e8u;

    // 0x1527e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1527e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1527ec: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1527ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1527f0: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1527f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x1527f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1527f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1527f8: 0x8c51b830  lw          $s1, -0x47D0($v0)
    ctx->pc = 0x1527f8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1527fc: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1527fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x152800: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x152800u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152804: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x152804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x152808: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x152808u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15280c: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x15280cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x152810: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x152810u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152814: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x152814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x152818: 0x26350020  addiu       $s5, $s1, 0x20
    ctx->pc = 0x152818u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x15281c: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x15281cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x152820: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x152820u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152824: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x152824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x152828: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x152828u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15282c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x15282cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x152830: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x152830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x152834: 0x12830032  beq         $s4, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x152834u;
    {
        const bool branch_taken_0x152834 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x152838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152834u;
        // 0x152838: 0xffbf0098  sd          $ra, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152834) {
            ctx->pc = 0x152900u;
            goto label_152900;
        }
    }
    ctx->pc = 0x15283Cu;
    // 0x15283c: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x15283cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x152840: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x152840u;
    {
        const bool branch_taken_0x152840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152840u;
        // 0x152844: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152840) {
            ctx->pc = 0x152860u;
            goto label_152860;
        }
    }
    ctx->pc = 0x152848u;
    // 0x152848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x152848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15284c: 0x12820008  beq         $s4, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15284Cu;
    {
        const bool branch_taken_0x15284c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x15284c) {
            ctx->pc = 0x152870u;
            goto label_152870;
        }
    }
    ctx->pc = 0x152854u;
    // 0x152854: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x152854u;
    {
        const bool branch_taken_0x152854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152854u;
        // 0x152858: 0x8e430690  lw          $v1, 0x690($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152854) {
            ctx->pc = 0x152884u;
            goto label_152884;
        }
    }
    ctx->pc = 0x15285Cu;
    // 0x15285c: 0x0  nop
    ctx->pc = 0x15285cu;
    // NOP
label_152860:
    // 0x152860: 0x12820053  beq         $s4, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x152860u;
    {
        const bool branch_taken_0x152860 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x152860) {
            ctx->pc = 0x1529B0u;
            goto label_1529b0;
        }
    }
    ctx->pc = 0x152868u;
    // 0x152868: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x152868u;
    {
        const bool branch_taken_0x152868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152868u;
        // 0x15286c: 0x8e430690  lw          $v1, 0x690($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152868) {
            ctx->pc = 0x152884u;
            goto label_152884;
        }
    }
    ctx->pc = 0x152870u;
label_152870:
    // 0x152870: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x152870u;
    SET_GPR_U32(ctx, 31, 0x152878u);
    ctx->pc = 0x152874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152870u;
    // 0x152874: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x152870u, 0x152878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152878u;
label_152878:
    // 0x152878: 0x1440012f  bnez        $v0, . + 4 + (0x12F << 2)
    ctx->pc = 0x152878u;
    {
        const bool branch_taken_0x152878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152878u;
        // 0x15287c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152878) {
            ctx->pc = 0x152D38u;
            goto label_152d38;
        }
    }
    ctx->pc = 0x152880u;
    // 0x152880: 0x8e430690  lw          $v1, 0x690($s2)
    ctx->pc = 0x152880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
label_152884:
    // 0x152884: 0x8c6219f0  lw          $v0, 0x19F0($v1)
    ctx->pc = 0x152884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6640)));
    // 0x152888: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x152888u;
    {
        const bool branch_taken_0x152888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152888u;
        // 0x15288c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152888) {
            ctx->pc = 0x1528E8u;
            goto label_1528e8;
        }
    }
    ctx->pc = 0x152890u;
    // 0x152890: 0x8c7019f4  lw          $s0, 0x19F4($v1)
    ctx->pc = 0x152890u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6644)));
    // 0x152894: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x152894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x152898: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x152898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x15289c: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x15289cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1528a0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1528a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1528a4: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1528a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1528a8: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1528a8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1528ac: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x1528acu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1528b0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1528b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1528b4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1528b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1528b8: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1528b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1528bc: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1528bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1528c0: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x1528c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1528c4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1528c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1528c8: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x1528c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x1528cc: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1528ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1528d0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1528d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1528d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1528d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1528d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1528d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1528dc: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x1528DCu;
    SET_GPR_U32(ctx, 31, 0x1528E4u);
    ctx->pc = 0x1528E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1528DCu;
    // 0x1528e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x1528DCu, 0x1528E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1528E4u;
label_1528e4:
    // 0x1528e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1528e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1528e8:
    // 0x1528e8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1528e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1528ec: 0x12c0005b  beqz        $s6, . + 4 + (0x5B << 2)
    ctx->pc = 0x1528ECu;
    {
        const bool branch_taken_0x1528ec = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1528ec) {
            ctx->pc = 0x152A5Cu;
            goto label_152a5c;
        }
    }
    ctx->pc = 0x1528F4u;
    // 0x1528f4: 0x265306dc  addiu       $s3, $s2, 0x6DC
    ctx->pc = 0x1528f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1756));
    // 0x1528f8: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1528F8u;
    {
        const bool branch_taken_0x1528f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1528FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528F8u;
        // 0x1528fc: 0x8e770004  lw          $s7, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1528f8) {
            ctx->pc = 0x152A5Cu;
            goto label_152a5c;
        }
    }
    ctx->pc = 0x152900u;
label_152900:
    // 0x152900: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x152900u;
    SET_GPR_U32(ctx, 31, 0x152908u);
    ctx->pc = 0x152904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152900u;
    // 0x152904: 0x2404003a  addiu       $a0, $zero, 0x3A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x152900u, 0x152908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152908u;
label_152908:
    // 0x152908: 0x1440010b  bnez        $v0, . + 4 + (0x10B << 2)
    ctx->pc = 0x152908u;
    {
        const bool branch_taken_0x152908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152908u;
        // 0x15290c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152908) {
            ctx->pc = 0x152D38u;
            goto label_152d38;
        }
    }
    ctx->pc = 0x152910u;
    // 0x152910: 0x2643071c  addiu       $v1, $s2, 0x71C
    ctx->pc = 0x152910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1820));
    // 0x152914: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x152914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x152918: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x152918u;
    {
        const bool branch_taken_0x152918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152918) {
            ctx->pc = 0x152A5Cu;
            goto label_152a5c;
        }
    }
    ctx->pc = 0x152920u;
    // 0x152920: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x152920u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152924: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x152924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x152928: 0x8c621200  lw          $v0, 0x1200($v1)
    ctx->pc = 0x152928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4608)));
    // 0x15292c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15292Cu;
    {
        const bool branch_taken_0x15292c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15292Cu;
        // 0x152930: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15292c) {
            ctx->pc = 0x1529A4u;
            goto label_1529a4;
        }
    }
    ctx->pc = 0x152934u;
    // 0x152934: 0x24631200  addiu       $v1, $v1, 0x1200
    ctx->pc = 0x152934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4608));
    // 0x152938: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x152938u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15293c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15293cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x152940: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152940u;
    {
        const bool branch_taken_0x152940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152940u;
        // 0x152944: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152940) {
            ctx->pc = 0x152950u;
            goto label_152950;
        }
    }
    ctx->pc = 0x152948u;
    // 0x152948: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x152948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15294c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x15294cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_152950:
    // 0x152950: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x152950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x152954: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x152954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x152958: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x152958u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15295c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x15295cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152960: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x152960u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x152964: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x152964u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x152968: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x152968u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x15296c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x15296cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x152970: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x152970u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x152974: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x152974u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x152978: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x152978u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x15297c: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x15297cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x152980: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x152980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x152984: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x152984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x152988: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x152988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x15298c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x15298cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x152990: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x152990u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x152994: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x152994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152998: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x152998u;
    SET_GPR_U32(ctx, 31, 0x1529A0u);
    ctx->pc = 0x15299Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152998u;
    // 0x15299c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x152998u, 0x1529A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1529A0u;
label_1529a0:
    // 0x1529a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1529a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1529a4:
    // 0x1529a4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1529a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1529a8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1529A8u;
    {
        const bool branch_taken_0x1529a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1529ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1529A8u;
        // 0x1529ac: 0x8e770004  lw          $s7, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1529a8) {
            ctx->pc = 0x152A5Cu;
            goto label_152a5c;
        }
    }
    ctx->pc = 0x1529B0u;
label_1529b0:
    // 0x1529b0: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x1529B0u;
    SET_GPR_U32(ctx, 31, 0x1529B8u);
    ctx->pc = 0x1529B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1529B0u;
    // 0x1529b4: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x1529B0u, 0x1529B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1529B8u;
label_1529b8:
    // 0x1529b8: 0x144000df  bnez        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x1529B8u;
    {
        const bool branch_taken_0x1529b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1529BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1529B8u;
        // 0x1529bc: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1529b8) {
            ctx->pc = 0x152D38u;
            goto label_152d38;
        }
    }
    ctx->pc = 0x1529C0u;
    // 0x1529c0: 0x2643075c  addiu       $v1, $s2, 0x75C
    ctx->pc = 0x1529c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1884));
    // 0x1529c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1529c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1529c8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1529C8u;
    {
        const bool branch_taken_0x1529c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1529c8) {
            ctx->pc = 0x152A5Cu;
            goto label_152a5c;
        }
    }
    ctx->pc = 0x1529D0u;
    // 0x1529d0: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1529d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1529d4: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1529d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1529d8: 0x8c621200  lw          $v0, 0x1200($v1)
    ctx->pc = 0x1529d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4608)));
    // 0x1529dc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1529DCu;
    {
        const bool branch_taken_0x1529dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1529E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1529DCu;
        // 0x1529e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1529dc) {
            ctx->pc = 0x152A54u;
            goto label_152a54;
        }
    }
    ctx->pc = 0x1529E4u;
    // 0x1529e4: 0x24631200  addiu       $v1, $v1, 0x1200
    ctx->pc = 0x1529e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4608));
    // 0x1529e8: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x1529e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1529ec: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1529ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1529f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1529F0u;
    {
        const bool branch_taken_0x1529f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1529F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1529F0u;
        // 0x1529f4: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1529f0) {
            ctx->pc = 0x152A00u;
            goto label_152a00;
        }
    }
    ctx->pc = 0x1529F8u;
    // 0x1529f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1529f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1529fc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1529fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_152a00:
    // 0x152a00: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x152a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x152a04: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x152a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x152a08: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x152a08u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x152a0c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x152a0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152a10: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x152a10u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x152a14: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x152a14u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x152a18: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x152a18u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x152a1c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x152a1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x152a20: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x152a20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x152a24: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x152a24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x152a28: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x152a28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x152a2c: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x152a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x152a30: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x152a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x152a34: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x152a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x152a38: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x152a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x152a3c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x152a3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x152a40: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x152a40u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x152a44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x152a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a48: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x152A48u;
    SET_GPR_U32(ctx, 31, 0x152A50u);
    ctx->pc = 0x152A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152A48u;
    // 0x152a4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x152A48u, 0x152A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152A50u;
label_152a50:
    // 0x152a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_152a54:
    // 0x152a54: 0x8e770004  lw          $s7, 0x4($s3)
    ctx->pc = 0x152a54u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x152a58: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x152a58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_152a5c:
    // 0x152a5c: 0x126000b6  beqz        $s3, . + 4 + (0xB6 << 2)
    ctx->pc = 0x152A5Cu;
    {
        const bool branch_taken_0x152a5c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x152A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A5Cu;
        // 0x152a60: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a5c) {
            ctx->pc = 0x152D38u;
            goto label_152d38;
        }
    }
    ctx->pc = 0x152A64u;
    // 0x152a64: 0x12e000b4  beqz        $s7, . + 4 + (0xB4 << 2)
    ctx->pc = 0x152A64u;
    {
        const bool branch_taken_0x152a64 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x152A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A64u;
        // 0x152a68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a64) {
            ctx->pc = 0x152D38u;
            goto label_152d38;
        }
    }
    ctx->pc = 0x152A6Cu;
    // 0x152a6c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x152a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x152a70: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x152A70u;
    {
        const bool branch_taken_0x152a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x152A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A70u;
        // 0x152a74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a70) {
            ctx->pc = 0x152A88u;
            goto label_152a88;
        }
    }
    ctx->pc = 0x152A78u;
    // 0x152a78: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x152A78u;
    {
        const bool branch_taken_0x152a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x152A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A78u;
        // 0x152a7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a78) {
            ctx->pc = 0x152AA0u;
            goto label_152aa0;
        }
    }
    ctx->pc = 0x152A80u;
    // 0x152a80: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x152A80u;
    {
        const bool branch_taken_0x152a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a80) {
            ctx->pc = 0x152AC4u;
            goto label_152ac4;
        }
    }
    ctx->pc = 0x152A88u;
label_152a88:
    // 0x152a88: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x152a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x152a8c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x152a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x152a90: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x152a90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x152a94: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x152A94u;
    {
        const bool branch_taken_0x152a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A94u;
        // 0x152a98: 0xac640044  sw          $a0, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a94) {
            ctx->pc = 0x152AC0u;
            goto label_152ac0;
        }
    }
    ctx->pc = 0x152A9Cu;
    // 0x152a9c: 0x0  nop
    ctx->pc = 0x152a9cu;
    // NOP
label_152aa0:
    // 0x152aa0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x152aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x152aa4: 0x52820007  beql        $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x152AA4u;
    {
        const bool branch_taken_0x152aa4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x152aa4) {
            ctx->pc = 0x152AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152AA4u;
            // 0x152aa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152AC4u;
            goto label_152ac4;
        }
    }
    ctx->pc = 0x152AACu;
    // 0x152aac: 0xc059594  jal         func_165650
    ctx->pc = 0x152AACu;
    SET_GPR_U32(ctx, 31, 0x152AB4u);
    ctx->pc = 0x152AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152AACu;
    // 0x152ab0: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165650u, 0x152AACu, 0x152AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152AB4u;
label_152ab4:
    // 0x152ab4: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x152ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x152ab8: 0x8c64b830  lw          $a0, -0x47D0($v1)
    ctx->pc = 0x152ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x152abc: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x152abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
label_152ac0:
    // 0x152ac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x152ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_152ac4:
    // 0x152ac4: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x152AC4u;
    {
        const bool branch_taken_0x152ac4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x152AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152AC4u;
        // 0x152ac8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ac4) {
            ctx->pc = 0x152AD8u;
            goto label_152ad8;
        }
    }
    ctx->pc = 0x152ACCu;
    // 0x152acc: 0x8e4206dc  lw          $v0, 0x6DC($s2)
    ctx->pc = 0x152accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1756)));
    // 0x152ad0: 0x3842003b  xori        $v0, $v0, 0x3B
    ctx->pc = 0x152ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)59);
    // 0x152ad4: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x152ad4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_152ad8:
    // 0x152ad8: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x152ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x152adc: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x152adcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x152ae0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x152ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ae4: 0x129e0040  beq         $s4, $fp, . + 4 + (0x40 << 2)
    ctx->pc = 0x152AE4u;
    {
        const bool branch_taken_0x152ae4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 30));
        ctx->pc = 0x152AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152AE4u;
        // 0x152ae8: 0x8e550170  lw          $s5, 0x170($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ae4) {
            ctx->pc = 0x152BE8u;
            goto label_152be8;
        }
    }
    ctx->pc = 0x152AECu;
    // 0x152aec: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x152aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x152af0: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x152af0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152af4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x152af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x152af8: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x152af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152afc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152afcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152b00: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x152b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x152b04: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x152b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
    // 0x152b08: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x152b08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x152b0c: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x152b0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x152b10: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x152b10u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x152b14: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x152b14u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x152b18: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x152b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x152b1c: 0x8f848b2c  lw          $a0, -0x74D4($gp)
    ctx->pc = 0x152b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x152b20: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x152B20u;
    {
        const bool branch_taken_0x152b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x152B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B20u;
        // 0x152b24: 0xafa30038  sw          $v1, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b20) {
            ctx->pc = 0x152B60u;
            goto label_152b60;
        }
    }
    ctx->pc = 0x152B28u;
    // 0x152b28: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x152b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x152b2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x152b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b30: 0x8c83026c  lw          $v1, 0x26C($a0)
    ctx->pc = 0x152b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 620)));
    // 0x152b34: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x152b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x152b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x152b3c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x152b3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b44: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x152b44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b48: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x152b48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b4c: 0xaf838b2c  sw          $v1, -0x74D4($gp)
    ctx->pc = 0x152b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 3));
    // 0x152b50: 0xc055bb0  jal         func_156EC0
    ctx->pc = 0x152B50u;
    SET_GPR_U32(ctx, 31, 0x152B58u);
    ctx->pc = 0x152B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152B50u;
    // 0x152b54: 0xaf828b30  sw          $v0, -0x74D0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156EC0u, 0x152B50u, 0x152B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152B58u;
label_152b58:
    // 0x152b58: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x152B58u;
    {
        const bool branch_taken_0x152b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B58u;
        // 0x152b5c: 0xae1e026c  sw          $fp, 0x26C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b58) {
            ctx->pc = 0x152B9Cu;
            goto label_152b9c;
        }
    }
    ctx->pc = 0x152B60u;
label_152b60:
    // 0x152b60: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x152B60u;
    SET_GPR_U32(ctx, 31, 0x152B68u);
    ctx->pc = 0x152B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152B60u;
    // 0x152b64: 0x24042118  addiu       $a0, $zero, 0x2118 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x152B60u, 0x152B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152B68u;
label_152b68:
    // 0x152b68: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x152B68u;
    SET_GPR_U32(ctx, 31, 0x152B70u);
    ctx->pc = 0x152B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152B68u;
    // 0x152b6c: 0x24040290  addiu       $a0, $zero, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x152B68u, 0x152B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152B70u;
label_152b70:
    // 0x152b70: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x152b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x152b74: 0x2463f0d0  addiu       $v1, $v1, -0xF30
    ctx->pc = 0x152b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963408));
    // 0x152b78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x152b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b7c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x152b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x152b80: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x152b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b84: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x152b84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b90: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x152b90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b94: 0xc055bb0  jal         func_156EC0
    ctx->pc = 0x152B94u;
    SET_GPR_U32(ctx, 31, 0x152B9Cu);
    ctx->pc = 0x152B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152B94u;
    // 0x152b98: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156EC0u, 0x152B94u, 0x152B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152B9Cu;
label_152b9c:
    // 0x152b9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x152b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152ba0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x152ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ba4: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x152BA4u;
    SET_GPR_U32(ctx, 31, 0x152BACu);
    ctx->pc = 0x152BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152BA4u;
    // 0x152ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x152BA4u, 0x152BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152BACu;
label_152bac:
    // 0x152bac: 0x8e250178  lw          $a1, 0x178($s1)
    ctx->pc = 0x152bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x152bb0: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x152BB0u;
    {
        const bool branch_taken_0x152bb0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x152BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152BB0u;
        // 0x152bb4: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152bb0) {
            ctx->pc = 0x152BD4u;
            goto label_152bd4;
        }
    }
    ctx->pc = 0x152BB8u;
    // 0x152bb8: 0x8e240174  lw          $a0, 0x174($s1)
    ctx->pc = 0x152bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x152bbc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x152BBCu;
    {
        const bool branch_taken_0x152bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x152BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152BBCu;
        // 0x152bc0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152bbc) {
            ctx->pc = 0x152BD4u;
            goto label_152bd4;
        }
    }
    ctx->pc = 0x152BC4u;
    // 0x152bc4: 0x8e2801b4  lw          $t0, 0x1B4($s1)
    ctx->pc = 0x152bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x152bc8: 0xc041228  jal         func_1048A0
    ctx->pc = 0x152BC8u;
    SET_GPR_U32(ctx, 31, 0x152BD0u);
    ctx->pc = 0x152BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152BC8u;
    // 0x152bcc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x152BC8u, 0x152BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152BD0u;
label_152bd0:
    // 0x152bd0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x152bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_152bd4:
    // 0x152bd4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x152BD4u;
    {
        const bool branch_taken_0x152bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152bd4) {
            ctx->pc = 0x152BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152BD4u;
            // 0x152bd8: 0x8e700008  lw          $s0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152BECu;
            goto label_152bec;
        }
    }
    ctx->pc = 0x152BDCu;
    // 0x152bdc: 0x8e420184  lw          $v0, 0x184($s2)
    ctx->pc = 0x152bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x152be0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x152be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x152be4: 0xae420184  sw          $v0, 0x184($s2)
    ctx->pc = 0x152be4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 2));
label_152be8:
    // 0x152be8: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x152be8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_152bec:
    // 0x152bec: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x152becu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152bf0: 0x141027  nor         $v0, $zero, $s4
    ctx->pc = 0x152bf0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
    // 0x152bf4: 0x2a2800a  movz        $s0, $s5, $v0
    ctx->pc = 0x152bf4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 21));
    // 0x152bf8: 0x6000017  bltz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x152BF8u;
    {
        const bool branch_taken_0x152bf8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x152BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152BF8u;
        // 0x152bfc: 0xaf919144  sw          $s1, -0x6EBC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938948), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152bf8) {
            ctx->pc = 0x152C58u;
            goto label_152c58;
        }
    }
    ctx->pc = 0x152C00u;
    // 0x152c00: 0x52c00016  beql        $s6, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x152C00u;
    {
        const bool branch_taken_0x152c00 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x152c00) {
            ctx->pc = 0x152C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152C00u;
            // 0x152c04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152C5Cu;
            goto label_152c5c;
        }
    }
    ctx->pc = 0x152C08u;
    // 0x152c08: 0xc04c99a  jal         func_132668
    ctx->pc = 0x152C08u;
    SET_GPR_U32(ctx, 31, 0x152C10u);
    ctx->pc = 0x132668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132668u, 0x152C08u, 0x152C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C10u;
label_152c10:
    // 0x152c10: 0xc04c9a6  jal         func_132698
    ctx->pc = 0x152C10u;
    SET_GPR_U32(ctx, 31, 0x152C18u);
    ctx->pc = 0x152C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152C10u;
    // 0x152c14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132698u, 0x152C10u, 0x152C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C18u;
label_152c18:
    // 0x152c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c1c: 0x8ec50014  lw          $a1, 0x14($s6)
    ctx->pc = 0x152c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x152c20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c24: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x152C24u;
    SET_GPR_U32(ctx, 31, 0x152C2Cu);
    ctx->pc = 0x152C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152C24u;
    // 0x152c28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x152C24u, 0x152C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C2Cu;
label_152c2c:
    // 0x152c2c: 0x8e4301ac  lw          $v1, 0x1AC($s2)
    ctx->pc = 0x152c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x152c30: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x152C30u;
    {
        const bool branch_taken_0x152c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x152C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C30u;
        // 0x152c34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c30) {
            ctx->pc = 0x152C5Cu;
            goto label_152c5c;
        }
    }
    ctx->pc = 0x152C38u;
    // 0x152c38: 0x16150008  bne         $s0, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x152C38u;
    {
        const bool branch_taken_0x152c38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x152C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C38u;
        // 0x152c3c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c38) {
            ctx->pc = 0x152C5Cu;
            goto label_152c5c;
        }
    }
    ctx->pc = 0x152C40u;
    // 0x152c40: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x152c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x152c44: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x152c44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x240100u));
    // 0x152c48: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x152C48u;
    {
        const bool branch_taken_0x152c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x152c48) {
            ctx->pc = 0x152C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152C48u;
            // 0x152c4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152C5Cu;
            goto label_152c5c;
        }
    }
    ctx->pc = 0x152C50u;
    // 0x152c50: 0xc04fb3a  jal         func_13ECE8
    ctx->pc = 0x152C50u;
    SET_GPR_U32(ctx, 31, 0x152C58u);
    ctx->pc = 0x13ECE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECE8u, 0x152C50u, 0x152C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C58u;
label_152c58:
    // 0x152c58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x152c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_152c5c:
    // 0x152c5c: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x152C5Cu;
    {
        const bool branch_taken_0x152c5c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x152C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C5Cu;
        // 0x152c60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c5c) {
            ctx->pc = 0x152C74u;
            goto label_152c74;
        }
    }
    ctx->pc = 0x152C64u;
    // 0x152c64: 0x8e4306dc  lw          $v1, 0x6DC($s2)
    ctx->pc = 0x152c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1756)));
    // 0x152c68: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x152c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x152c6c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x152C6Cu;
    {
        const bool branch_taken_0x152c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x152c6c) {
            ctx->pc = 0x152C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152C6Cu;
            // 0x152c70: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152C90u;
            goto label_152c90;
        }
    }
    ctx->pc = 0x152C74u;
label_152c74:
    // 0x152c74: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x152C74u;
    {
        const bool branch_taken_0x152c74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x152C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C74u;
        // 0x152c78: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c74) {
            ctx->pc = 0x152C90u;
            goto label_152c90;
        }
    }
    ctx->pc = 0x152C7Cu;
    // 0x152c7c: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152C7Cu;
    {
        const bool branch_taken_0x152c7c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x152C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C7Cu;
        // 0x152c80: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c7c) {
            ctx->pc = 0x152C8Cu;
            goto label_152c8c;
        }
    }
    ctx->pc = 0x152C84u;
    // 0x152c84: 0x16e20003  bne         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152C84u;
    {
        const bool branch_taken_0x152c84 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x152C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C84u;
        // 0x152c88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c84) {
            ctx->pc = 0x152C94u;
            goto label_152c94;
        }
    }
    ctx->pc = 0x152C8Cu;
label_152c8c:
    // 0x152c8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x152c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_152c90:
    // 0x152c90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x152c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_152c94:
    // 0x152c94: 0x1682000a  bne         $s4, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x152C94u;
    {
        const bool branch_taken_0x152c94 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x152C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C94u;
        // 0x152c98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c94) {
            ctx->pc = 0x152CC0u;
            goto label_152cc0;
        }
    }
    ctx->pc = 0x152C9Cu;
    // 0x152c9c: 0x56000009  bnel        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x152C9Cu;
    {
        const bool branch_taken_0x152c9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x152c9c) {
            ctx->pc = 0x152CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152C9Cu;
            // 0x152ca0: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152CC4u;
            goto label_152cc4;
        }
    }
    ctx->pc = 0x152CA4u;
    // 0x152ca4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x152ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152ca8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x152CA8u;
    {
        const bool branch_taken_0x152ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152ca8) {
            ctx->pc = 0x152CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152CA8u;
            // 0x152cac: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152CC4u;
            goto label_152cc4;
        }
    }
    ctx->pc = 0x152CB0u;
    // 0x152cb0: 0xc054b5a  jal         func_152D68
    ctx->pc = 0x152CB0u;
    SET_GPR_U32(ctx, 31, 0x152CB8u);
    ctx->pc = 0x152CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152CB0u;
    // 0x152cb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152D68u, 0x152CB0u, 0x152CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152CB8u;
label_152cb8:
    // 0x152cb8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x152CB8u;
    {
        const bool branch_taken_0x152cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152cb8) {
            ctx->pc = 0x152CDCu;
            goto label_152cdc;
        }
    }
    ctx->pc = 0x152CC0u;
label_152cc0:
    // 0x152cc0: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x152cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_152cc4:
    // 0x152cc4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x152CC4u;
    {
        const bool branch_taken_0x152cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152cc4) {
            ctx->pc = 0x152CDCu;
            goto label_152cdc;
        }
    }
    ctx->pc = 0x152CCCu;
    // 0x152ccc: 0xc059606  jal         func_165818
    ctx->pc = 0x152CCCu;
    SET_GPR_U32(ctx, 31, 0x152CD4u);
    ctx->pc = 0x165818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165818u, 0x152CCCu, 0x152CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152CD4u;
label_152cd4:
    // 0x152cd4: 0xc05962e  jal         func_1658B8
    ctx->pc = 0x152CD4u;
    SET_GPR_U32(ctx, 31, 0x152CDCu);
    ctx->pc = 0x152CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152CD4u;
    // 0x152cd8: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1658B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1658B8u, 0x152CD4u, 0x152CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152CDCu;
label_152cdc:
    // 0x152cdc: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x152CDCu;
    {
        const bool branch_taken_0x152cdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x152cdc) {
            ctx->pc = 0x152CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152CDCu;
            // 0x152ce0: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152D08u;
            goto label_152d08;
        }
    }
    ctx->pc = 0x152CE4u;
    // 0x152ce4: 0x8e420854  lw          $v0, 0x854($s2)
    ctx->pc = 0x152ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2132)));
    // 0x152ce8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152CE8u;
    {
        const bool branch_taken_0x152ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152CE8u;
        // 0x152cec: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ce8) {
            ctx->pc = 0x152CF8u;
            goto label_152cf8;
        }
    }
    ctx->pc = 0x152CF0u;
    // 0x152cf0: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x152CF0u;
    {
        const bool branch_taken_0x152cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x152cf0) {
            ctx->pc = 0x152CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152CF0u;
            // 0x152cf4: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152D08u;
            goto label_152d08;
        }
    }
    ctx->pc = 0x152CF8u;
label_152cf8:
    // 0x152cf8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x152cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x152cfc: 0xae430854  sw          $v1, 0x854($s2)
    ctx->pc = 0x152cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2132), GPR_U32(ctx, 3));
    // 0x152d00: 0xae420858  sw          $v0, 0x858($s2)
    ctx->pc = 0x152d00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2136), GPR_U32(ctx, 2));
    // 0x152d04: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x152d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_152d08:
    // 0x152d08: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x152D08u;
    {
        const bool branch_taken_0x152d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x152D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D08u;
        // 0x152d0c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d08) {
            ctx->pc = 0x152D38u;
            goto label_152d38;
        }
    }
    ctx->pc = 0x152D10u;
    // 0x152d10: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x152D10u;
    {
        const bool branch_taken_0x152d10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x152d10) {
            ctx->pc = 0x152D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152D10u;
            // 0x152d14: 0xdfb10058  ld          $s1, 0x58($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152D3Cu;
            goto label_152d3c;
        }
    }
    ctx->pc = 0x152D18u;
    // 0x152d18: 0x8c820c04  lw          $v0, 0xC04($a0)
    ctx->pc = 0x152d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3076)));
    // 0x152d1c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x152d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x152d20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x152D20u;
    {
        const bool branch_taken_0x152d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D20u;
        // 0x152d24: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d20) {
            ctx->pc = 0x152D38u;
            goto label_152d38;
        }
    }
    ctx->pc = 0x152D28u;
    // 0x152d28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x152d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d2c: 0xc0596d8  jal         func_165B60
    ctx->pc = 0x152D2Cu;
    SET_GPR_U32(ctx, 31, 0x152D34u);
    ctx->pc = 0x152D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152D2Cu;
    // 0x152d30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165B60u, 0x152D2Cu, 0x152D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D34u;
label_152d34:
    // 0x152d34: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x152d34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_152d38:
    // 0x152d38: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x152d38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_152d3c:
    // 0x152d3c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x152d3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x152d40: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x152d40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x152d44: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x152d44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x152d48: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x152d48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x152d4c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x152d4cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152d50: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x152d50u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x152d54: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x152d54u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x152d58: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x152d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x152d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x152D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D5Cu;
        // 0x152d60: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152D64u;
}
