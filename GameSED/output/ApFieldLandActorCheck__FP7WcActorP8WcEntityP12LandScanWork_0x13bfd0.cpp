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

// Function: ApFieldLandActorCheck__FP7WcActorP8WcEntityP12LandScanWork
// Address: 0x13bfd0 - 0x13c1c4
void ApFieldLandActorCheck__FP7WcActorP8WcEntityP12LandScanWork_0x13bfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApFieldLandActorCheck__FP7WcActorP8WcEntityP12LandScanWork_0x13bfd0");
#endif

    switch (ctx->pc) {
        case 0x13c044u: goto label_13c044;
        case 0x13c050u: goto label_13c050;
        case 0x13c094u: goto label_13c094;
        case 0x13c0e4u: goto label_13c0e4;
        case 0x13c0f8u: goto label_13c0f8;
        default: break;
    }

    ctx->pc = 0x13bfd0u;

    // 0x13bfd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13bfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13bfd4: 0x8f829138  lw          $v0, -0x6EC8($gp)
    ctx->pc = 0x13bfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
    // 0x13bfd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13bfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13bfdc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13bfdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bfe0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13bfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13bfe4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13bfe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bfe8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13bfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13bfec: 0x26140020  addiu       $s4, $s0, 0x20
    ctx->pc = 0x13bfecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x13bff0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x13bff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x13bff4: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x13bff4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bff8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x13bff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x13bffc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x13bffcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c000: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13c000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13c004: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13c004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13c008: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13c008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13c00c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x13c00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x13c010: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x13c010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13c014: 0x8e130018  lw          $s3, 0x18($s0)
    ctx->pc = 0x13c014u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x13c018: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x13c018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x13c01c: 0xaf829138  sw          $v0, -0x6EC8($gp)
    ctx->pc = 0x13c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938936), GPR_U32(ctx, 2));
    // 0x13c020: 0x1460005e  bnez        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x13C020u;
    {
        const bool branch_taken_0x13c020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C020u;
        // 0x13c024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c020) {
            ctx->pc = 0x13C19Cu;
            goto label_13c19c;
        }
    }
    ctx->pc = 0x13C028u;
    // 0x13c028: 0x26320020  addiu       $s2, $s1, 0x20
    ctx->pc = 0x13c028u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x13c02c: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x13c02cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x13c030: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x13c030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x13c034: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C034u;
    {
        const bool branch_taken_0x13c034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c034) {
            ctx->pc = 0x13C038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C034u;
            // 0x13c038: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C048u;
            goto label_13c048;
        }
    }
    ctx->pc = 0x13C03Cu;
    // 0x13c03c: 0xc061920  jal         func_186480
    ctx->pc = 0x13C03Cu;
    SET_GPR_U32(ctx, 31, 0x13C044u);
    ctx->pc = 0x13C040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C03Cu;
    // 0x13c040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x13C03Cu, 0x13C044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C044u;
label_13c044:
    // 0x13c044: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13c044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13c048:
    // 0x13c048: 0xc061422  jal         func_185088
    ctx->pc = 0x13C048u;
    SET_GPR_U32(ctx, 31, 0x13C050u);
    ctx->pc = 0x13C04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C048u;
    // 0x13c04c: 0x263200e0  addiu       $s2, $s1, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x13C048u, 0x13C050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C050u;
label_13c050:
    // 0x13c050: 0x26230110  addiu       $v1, $s1, 0x110
    ctx->pc = 0x13c050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x13c054: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x13c054u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13c058: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x13c058u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c05c: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x13c05cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13c060: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x13c060u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13c064: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x13c064u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13c068: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x13c068u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13c06c: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x13c06cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x13c070: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13c070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13c074: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x13c074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c078: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13c078u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c07c: 0x45010047  bc1t        . + 4 + (0x47 << 2)
    ctx->pc = 0x13C07Cu;
    {
        const bool branch_taken_0x13c07c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C07Cu;
        // 0x13c080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c07c) {
            ctx->pc = 0x13C19Cu;
            goto label_13c19c;
        }
    }
    ctx->pc = 0x13C084u;
    // 0x13c084: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13c084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13c088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c08c: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x13C08Cu;
    SET_GPR_U32(ctx, 31, 0x13C094u);
    ctx->pc = 0x13C090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C08Cu;
    // 0x13c090: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1853D8u, 0x13C08Cu, 0x13C094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C094u;
label_13c094:
    // 0x13c094: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x13c094u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13c098: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x13c098u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x13c09c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13c09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13c0a0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13C0A0u;
    {
        const bool branch_taken_0x13c0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c0a0) {
            ctx->pc = 0x13C0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C0A0u;
            // 0x13c0a4: 0xc6ac0010  lwc1        $f12, 0x10($s5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C0D0u;
            goto label_13c0d0;
        }
    }
    ctx->pc = 0x13C0A8u;
    // 0x13c0a8: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x13c0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c0ac: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x13c0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c0b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13c0b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c0b4: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x13C0B4u;
    {
        const bool branch_taken_0x13c0b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C0B4u;
        // 0x13c0b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c0b4) {
            ctx->pc = 0x13C19Cu;
            goto label_13c19c;
        }
    }
    ctx->pc = 0x13C0BCu;
    // 0x13c0bc: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x13c0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c0c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13c0c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c0c4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x13C0C4u;
    {
        const bool branch_taken_0x13c0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C0C4u;
        // 0x13c0c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c0c4) {
            ctx->pc = 0x13C1A0u;
            goto label_13c1a0;
        }
    }
    ctx->pc = 0x13C0CCu;
    // 0x13c0cc: 0x0  nop
    ctx->pc = 0x13c0ccu;
    // NOP
label_13c0d0:
    // 0x13c0d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13c0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c0d4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x13c0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x13c0d8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x13c0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x13c0dc: 0xc060aa2  jal         func_182A88
    ctx->pc = 0x13C0DCu;
    SET_GPR_U32(ctx, 31, 0x13C0E4u);
    ctx->pc = 0x13C0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C0DCu;
    // 0x13c0e0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182A88u, 0x13C0DCu, 0x13C0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C0E4u;
label_13c0e4:
    // 0x13c0e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13c0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c0e8: 0x5443002c  bnel        $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x13C0E8u;
    {
        const bool branch_taken_0x13c0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13c0e8) {
            ctx->pc = 0x13C0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C0E8u;
            // 0x13c0ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C19Cu;
            goto label_13c19c;
        }
    }
    ctx->pc = 0x13C0F0u;
    // 0x13c0f0: 0xc0609fe  jal         func_1827F8
    ctx->pc = 0x13C0F0u;
    SET_GPR_U32(ctx, 31, 0x13C0F8u);
    ctx->pc = 0x1827F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1827F8u, 0x13C0F0u, 0x13C0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C0F8u;
label_13c0f8:
    // 0x13c0f8: 0x8ec70160  lw          $a3, 0x160($s6)
    ctx->pc = 0x13c0f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 352)));
    // 0x13c0fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13c0fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c100: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x13c100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c104: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x13c104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c108: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x13c108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c10c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13c10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c110: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x13C110u;
    {
        const bool branch_taken_0x13c110 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C110u;
        // 0x13c114: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c110) {
            ctx->pc = 0x13C148u;
            goto label_13c148;
        }
    }
    ctx->pc = 0x13C118u;
    // 0x13c118: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x13c118u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13c11c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x13c11cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x13c120: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x13c120u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x13c124: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x13c124u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x13c128: 0xdcc20010  ld          $v0, 0x10($a2)
    ctx->pc = 0x13c128u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x13c12c: 0xfce20010  sd          $v0, 0x10($a3)
    ctx->pc = 0x13c12cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 2));
    // 0x13c130: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x13c130u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x13c134: 0xfce30018  sd          $v1, 0x18($a3)
    ctx->pc = 0x13c134u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 3));
    // 0x13c138: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x13c138u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x13c13c: 0xfce20020  sd          $v0, 0x20($a3)
    ctx->pc = 0x13c13cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 32), GPR_U64(ctx, 2));
    // 0x13c140: 0xdcc30028  ld          $v1, 0x28($a2)
    ctx->pc = 0x13c140u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x13c144: 0xfce30028  sd          $v1, 0x28($a3)
    ctx->pc = 0x13c144u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 40), GPR_U64(ctx, 3));
label_13c148:
    // 0x13c148: 0x5240000d  beql        $s2, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x13C148u;
    {
        const bool branch_taken_0x13c148 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c148) {
            ctx->pc = 0x13C14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C148u;
            // 0x13c14c: 0x90e20020  lbu         $v0, 0x20($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C180u;
            goto label_13c180;
        }
    }
    ctx->pc = 0x13C150u;
    // 0x13c150: 0x24e20030  addiu       $v0, $a3, 0x30
    ctx->pc = 0x13c150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x13c154: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x13c154u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13c158: 0xda450010  lqc2        $vf5, 0x10($s2)
    ctx->pc = 0x13c158u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x13c15c: 0xda460020  lqc2        $vf6, 0x20($s2)
    ctx->pc = 0x13c15cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x13c160: 0xda470030  lqc2        $vf7, 0x30($s2)
    ctx->pc = 0x13c160u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x13c164: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x13c164u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13c168: 0xf8450010  sqc2        $vf5, 0x10($v0)
    ctx->pc = 0x13c168u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x13c16c: 0xf8460020  sqc2        $vf6, 0x20($v0)
    ctx->pc = 0x13c16cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x13c170: 0xf8470030  sqc2        $vf7, 0x30($v0)
    ctx->pc = 0x13c170u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x13c174: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13C174u;
    {
        const bool branch_taken_0x13c174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C174u;
        // 0x13c178: 0xe4e10098  swc1        $f1, 0x98($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c174) {
            ctx->pc = 0x13C18Cu;
            goto label_13c18c;
        }
    }
    ctx->pc = 0x13C17Cu;
    // 0x13c17c: 0x0  nop
    ctx->pc = 0x13c17cu;
    // NOP
label_13c180:
    // 0x13c180: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x13c180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x13c184: 0xa0e20020  sb          $v0, 0x20($a3)
    ctx->pc = 0x13c184u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x13c188: 0xe4e10098  swc1        $f1, 0x98($a3)
    ctx->pc = 0x13c188u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 152), bits); }
label_13c18c:
    // 0x13c18c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c190: 0xace40090  sw          $a0, 0x90($a3)
    ctx->pc = 0x13c190u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 4));
    // 0x13c194: 0xace50094  sw          $a1, 0x94($a3)
    ctx->pc = 0x13c194u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 5));
    // 0x13c198: 0xace0009c  sw          $zero, 0x9C($a3)
    ctx->pc = 0x13c198u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 156), GPR_U32(ctx, 0));
label_13c19c:
    // 0x13c19c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13c19cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13c1a0:
    // 0x13c1a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13c1a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13c1a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13c1a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c1a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13c1a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13c1ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13c1acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c1b0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13c1b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13c1b4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x13c1b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c1b8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x13c1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13c1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x13C1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C1BCu;
        // 0x13c1c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C1C4u;
}
