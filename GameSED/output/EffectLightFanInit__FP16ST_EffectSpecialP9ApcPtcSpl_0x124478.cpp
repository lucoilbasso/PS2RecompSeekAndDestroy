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

// Function: EffectLightFanInit__FP16ST_EffectSpecialP9ApcPtcSpl
// Address: 0x124478 - 0x12458c
void EffectLightFanInit__FP16ST_EffectSpecialP9ApcPtcSpl_0x124478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectLightFanInit__FP16ST_EffectSpecialP9ApcPtcSpl_0x124478");
#endif

    switch (ctx->pc) {
        case 0x1244b0u: goto label_1244b0;
        case 0x1244dcu: goto label_1244dc;
        default: break;
    }

    ctx->pc = 0x124478u;

    // 0x124478: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x124478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12447c: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x12447cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x124480: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x124480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x124484: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x124484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124488: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x124488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12448c: 0x261101b0  addiu       $s1, $s0, 0x1B0
    ctx->pc = 0x12448cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x124490: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x124490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x124494: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x124494u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x124498: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x124498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x12449c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12449cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1244a0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1244a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1244a4: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1244a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1244a8: 0xc04782c  jal         func_11E0B0
    ctx->pc = 0x1244A8u;
    SET_GPR_U32(ctx, 31, 0x1244B0u);
    ctx->pc = 0x1244ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1244A8u;
    // 0x1244ac: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x1244A8u, 0x1244B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1244B0u;
label_1244b0:
    // 0x1244b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1244b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1244b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1244b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1244b8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1244B8u;
    {
        const bool branch_taken_0x1244b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1244BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244B8u;
        // 0x1244bc: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1244b8) {
            ctx->pc = 0x1244D0u;
            goto label_1244d0;
        }
    }
    ctx->pc = 0x1244C0u;
    // 0x1244c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1244c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1244c4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1244c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1244c8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1244c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1244cc: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1244ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_1244d0:
    // 0x1244d0: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x1244d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1244d4: 0xc04844a  jal         func_121128
    ctx->pc = 0x1244D4u;
    SET_GPR_U32(ctx, 31, 0x1244DCu);
    ctx->pc = 0x1244D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1244D4u;
    // 0x1244d8: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1244D4u, 0x1244DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1244DCu;
label_1244dc:
    // 0x1244dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1244dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1244e0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1244E0u;
    {
        const bool branch_taken_0x1244e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1244E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244E0u;
        // 0x1244e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1244e0) {
            ctx->pc = 0x124528u;
            goto label_124528;
        }
    }
    ctx->pc = 0x1244E8u;
    // 0x1244e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1244e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1244ec: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1244ECu;
    {
        const bool branch_taken_0x1244ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1244ec) {
            ctx->pc = 0x1244F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1244ECu;
            // 0x1244f0: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124500u;
            goto label_124500;
        }
    }
    ctx->pc = 0x1244F4u;
    // 0x1244f4: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x1244f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x1244f8: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x1244f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x1244fc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1244fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_124500:
    // 0x124500: 0x54440005  bnel        $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x124500u;
    {
        const bool branch_taken_0x124500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x124500) {
            ctx->pc = 0x124504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124500u;
            // 0x124504: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124518u;
            goto label_124518;
        }
    }
    ctx->pc = 0x124508u;
    // 0x124508: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x124508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12450c: 0xae040110  sw          $a0, 0x110($s0)
    ctx->pc = 0x12450cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 4));
    // 0x124510: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x124510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x124514: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x124514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_124518:
    // 0x124518: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x124518u;
    {
        const bool branch_taken_0x124518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x124518) {
            ctx->pc = 0x12451Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124518u;
            // 0x12451c: 0x8e0400f4  lw          $a0, 0xF4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12452Cu;
            goto label_12452c;
        }
    }
    ctx->pc = 0x124520u;
    // 0x124520: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x124520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x124524: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x124524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_124528:
    // 0x124528: 0x8e0400f4  lw          $a0, 0xF4($s0)
    ctx->pc = 0x124528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_12452c:
    // 0x12452c: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x12452Cu;
    {
        const bool branch_taken_0x12452c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12452c) {
            ctx->pc = 0x124530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12452Cu;
            // 0x124530: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124568u;
            goto label_124568;
        }
    }
    ctx->pc = 0x124534u;
    // 0x124534: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x124534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x124538: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x124538u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12453c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12453cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x124540: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x124540u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x124544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x124544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124548: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x124548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x12454c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x12454cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x124550: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x124550u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x124554: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x124554u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x124558: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x124558u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12455c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12455cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124560: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x124560u;
    {
        const bool branch_taken_0x124560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124560u;
        // 0x124564: 0xe6200020  swc1        $f0, 0x20($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x124560) {
            ctx->pc = 0x124574u;
            goto label_124574;
        }
    }
    ctx->pc = 0x124568u;
label_124568:
    // 0x124568: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x124568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12456c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12456cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124570: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x124570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_124574:
    // 0x124574: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x124574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124578: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x124578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12457c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12457cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124580: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x124580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124584: 0x3e00008  jr          $ra
    ctx->pc = 0x124584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124584u;
        // 0x124588: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12458Cu;
}
