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

// Function: entry_0016d45c
// Address: 0x16d45c - 0x16d568
void entry_0016d45c_0x16d45c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d45c_0x16d45c");
#endif

    switch (ctx->pc) {
        case 0x16d494u: goto label_16d494;
        case 0x16d4bcu: goto label_16d4bc;
        case 0x16d4d0u: goto label_16d4d0;
        case 0x16d4e8u: goto label_16d4e8;
        case 0x16d528u: goto label_16d528;
        case 0x16d564u: goto label_16d564;
        default: break;
    }

    ctx->pc = 0x16d45cu;

    // 0x16d45c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16d45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16d460: 0xe7b60038  swc1        $f22, 0x38($sp)
    ctx->pc = 0x16d460u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x16d464: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16d464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16d468: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16d468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16d46c: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x16d46cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x16d470: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x16d470u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x16d474: 0x8e120150  lw          $s2, 0x150($s0)
    ctx->pc = 0x16d474u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x16d478: 0xc65503bc  lwc1        $f21, 0x3BC($s2)
    ctx->pc = 0x16d478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16d47c: 0xc65403c0  lwc1        $f20, 0x3C0($s2)
    ctx->pc = 0x16d47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16d480: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16d480u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x16d484: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x16d484u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x16d488: 0x4614ad80  add.s       $f22, $f21, $f20
    ctx->pc = 0x16d488u;
    ctx->f[22] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x16d48c: 0xc05b564  jal         func_16D590
    ctx->pc = 0x16D48Cu;
    SET_GPR_U32(ctx, 31, 0x16D494u);
    ctx->pc = 0x16D490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D48Cu;
    // 0x16d490: 0x4615a501  sub.s       $f20, $f20, $f21 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D590u, 0x16D48Cu, 0x16D494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D494u;
label_16d494:
    // 0x16d494: 0xc60102d8  lwc1        $f1, 0x2D8($s0)
    ctx->pc = 0x16d494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16d498: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x16d498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x16d49c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16d49cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d4a0: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x16d4a0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x16d4a4: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x16d4a4u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x16d4a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16d4a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x16d4ac: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x16d4acu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x16d4b0: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x16d4b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x16d4b4: 0xc067a02  jal         func_19E808
    ctx->pc = 0x16D4B4u;
    SET_GPR_U32(ctx, 31, 0x16D4BCu);
    ctx->pc = 0x16D4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D4B4u;
    // 0x16d4b8: 0x4616b582  mul.s       $f22, $f22, $f22 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x16D4B4u, 0x16D4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D4BCu;
label_16d4bc:
    // 0x16d4bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d4c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16d4c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d4c4: 0x24060f5c  addiu       $a2, $zero, 0xF5C
    ctx->pc = 0x16d4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3932));
    // 0x16d4c8: 0xc067b88  jal         func_19EE20
    ctx->pc = 0x16D4C8u;
    SET_GPR_U32(ctx, 31, 0x16D4D0u);
    ctx->pc = 0x16D4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D4C8u;
    // 0x16d4cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE20u, 0x16D4C8u, 0x16D4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D4D0u;
label_16d4d0:
    // 0x16d4d0: 0x8e0302bc  lw          $v1, 0x2BC($s0)
    ctx->pc = 0x16d4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x16d4d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16d4d8: 0x4616a500  add.s       $f20, $f20, $f22
    ctx->pc = 0x16d4d8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
    // 0x16d4dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16d4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d4e0: 0xc0618d4  jal         func_186350
    ctx->pc = 0x16D4E0u;
    SET_GPR_U32(ctx, 31, 0x16D4E8u);
    ctx->pc = 0x16D4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D4E0u;
    // 0x16d4e4: 0xac820034  sw          $v0, 0x34($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186350u, 0x16D4E0u, 0x16D4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D4E8u;
label_16d4e8:
    // 0x16d4e8: 0x46140504  c1          0x140504
    ctx->pc = 0x16d4e8u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x16d4ec: 0xc60002d4  lwc1        $f0, 0x2D4($s0)
    ctx->pc = 0x16d4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d4f0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x16d4f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x16d4f4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16d4f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16d4f8: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x16d4f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16d4fc: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x16d4fcu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16d500: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x16d500u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16d504: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x16d504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x16d508: 0x8e0502b8  lw          $a1, 0x2B8($s0)
    ctx->pc = 0x16d508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
    // 0x16d50c: 0x38823  negu        $s1, $v1
    ctx->pc = 0x16d50cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x16d510: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x16d510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16d514: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x16d514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x16d518: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16d518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d51c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x16d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x16d520: 0xc0618d4  jal         func_186350
    ctx->pc = 0x16D520u;
    SET_GPR_U32(ctx, 31, 0x16D528u);
    ctx->pc = 0x16D524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D520u;
    // 0x16d524: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186350u, 0x16D520u, 0x16D528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D528u;
label_16d528:
    // 0x16d528: 0x8e0402e0  lw          $a0, 0x2E0($s0)
    ctx->pc = 0x16d528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x16d52c: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x16D52Cu;
    {
        const bool branch_taken_0x16d52c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d52c) {
            ctx->pc = 0x16D530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D52Cu;
            // 0x16d530: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D568u;
            return;
        }
    }
    ctx->pc = 0x16D534u;
    // 0x16d534: 0xac930014  sw          $s3, 0x14($a0)
    ctx->pc = 0x16d534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 19));
    // 0x16d538: 0x48b12000  qmtc2.ni    $s1, $vf4
    ctx->pc = 0x16d538u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 17));
    // 0x16d53c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x16d53cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16d540: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16d540u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16d544: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16d544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16d548: 0x48b12000  qmtc2.ni    $s1, $vf4
    ctx->pc = 0x16d548u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 17));
    // 0x16d54c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x16d54cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16d550: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16d550u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16d554: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16d554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16d558: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16d558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d55c: 0xc04c288  jal         func_130A20
    ctx->pc = 0x16D55Cu;
    SET_GPR_U32(ctx, 31, 0x16D564u);
    ctx->pc = 0x16D560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D55Cu;
    // 0x16d560: 0x92460575  lbu         $a2, 0x575($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1397)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130A20u, 0x16D55Cu, 0x16D564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D564u;
label_16d564:
    // 0x16d564: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16d564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x16d568u;
}
