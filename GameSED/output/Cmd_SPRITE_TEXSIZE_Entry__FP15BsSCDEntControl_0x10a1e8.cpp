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

// Function: Cmd_SPRITE_TEXSIZE_Entry__FP15BsSCDEntControl
// Address: 0x10a1e8 - 0x10a324
void Cmd_SPRITE_TEXSIZE_Entry__FP15BsSCDEntControl_0x10a1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SPRITE_TEXSIZE_Entry__FP15BsSCDEntControl_0x10a1e8");
#endif

    switch (ctx->pc) {
        case 0x10a210u: goto label_10a210;
        case 0x10a224u: goto label_10a224;
        default: break;
    }

    ctx->pc = 0x10a1e8u;

    // 0x10a1e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10a1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10a1ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10a1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a1f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10a1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10a1f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a1f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a1f8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x10a1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10a1fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10a1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a200: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10a200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10a204: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10a204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10a208: 0xc04110c  jal         func_104430
    ctx->pc = 0x10A208u;
    SET_GPR_U32(ctx, 31, 0x10A210u);
    ctx->pc = 0x10A20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A208u;
    // 0x10a20c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10A208u, 0x10A210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A210u;
label_10a210:
    // 0x10a210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a214: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10a214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a218: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x10a218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a21c: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x10A21Cu;
    SET_GPR_U32(ctx, 31, 0x10A224u);
    ctx->pc = 0x10A220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A21Cu;
    // 0x10a220: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x10A21Cu, 0x10A224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A224u;
label_10a224:
    // 0x10a224: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x10a224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a228: 0x26290150  addiu       $t1, $s1, 0x150
    ctx->pc = 0x10a228u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x10a22c: 0x96220204  lhu         $v0, 0x204($s1)
    ctx->pc = 0x10a22cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x10a230: 0x96250206  lhu         $a1, 0x206($s1)
    ctx->pc = 0x10a230u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 518)));
    // 0x10a234: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A234u;
    {
        const bool branch_taken_0x10a234 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A234u;
        // 0x10a238: 0x8faa0004  lw          $t2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a234) {
            ctx->pc = 0x10A244u;
            goto label_10a244;
        }
    }
    ctx->pc = 0x10A23Cu;
    // 0x10a23c: 0x862201a0  lh          $v0, 0x1A0($s1)
    ctx->pc = 0x10a23cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x10a240: 0x862401a4  lh          $a0, 0x1A4($s1)
    ctx->pc = 0x10a240u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 420)));
label_10a244:
    // 0x10a244: 0x15400003  bnez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A244u;
    {
        const bool branch_taken_0x10a244 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A244u;
        // 0x10a248: 0x23400  sll         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a244) {
            ctx->pc = 0x10A254u;
            goto label_10a254;
        }
    }
    ctx->pc = 0x10A24Cu;
    // 0x10a24c: 0x862501a2  lh          $a1, 0x1A2($s1)
    ctx->pc = 0x10a24cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 418)));
    // 0x10a250: 0x862a01a6  lh          $t2, 0x1A6($s1)
    ctx->pc = 0x10a250u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 422)));
label_10a254:
    // 0x10a254: 0x95280008  lhu         $t0, 0x8($t1)
    ctx->pc = 0x10a254u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x10a258: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x10a258u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x10a25c: 0xa5220050  sh          $v0, 0x50($t1)
    ctx->pc = 0x10a25cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x10a260: 0x61bc0  sll         $v1, $a2, 15
    ctx->pc = 0x10a260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 15));
    // 0x10a264: 0xa5250052  sh          $a1, 0x52($t1)
    ctx->pc = 0x10a264u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 82), (uint16_t)GPR_U32(ctx, 5));
    // 0x10a268: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x10a268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x10a26c: 0xa5240054  sh          $a0, 0x54($t1)
    ctx->pc = 0x10a26cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 84), (uint16_t)GPR_U32(ctx, 4));
    // 0x10a270: 0xa52a0056  sh          $t2, 0x56($t1)
    ctx->pc = 0x10a270u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 86), (uint16_t)GPR_U32(ctx, 10));
    // 0x10a274: 0x1031807  srav        $v1, $v1, $t0
    ctx->pc = 0x10a274u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 8) & 0x1F));
    // 0x10a278: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10a278u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10a27c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10a27cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a280: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10a280u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10a284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a288: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x10a288u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x10a28c: 0x9527000a  lhu         $a3, 0xA($t1)
    ctx->pc = 0x10a28cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x10a290: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x10a290u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x10a294: 0xe5200060  swc1        $f0, 0x60($t1)
    ctx->pc = 0x10a294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 96), bits); }
    // 0x10a298: 0x51bc0  sll         $v1, $a1, 15
    ctx->pc = 0x10a298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x10a29c: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x10a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x10a2a0: 0xe31807  srav        $v1, $v1, $a3
    ctx->pc = 0x10a2a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x10a2a4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10a2a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10a2a8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10a2a8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a2ac: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10a2acu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a2b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10a2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a2b4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x10a2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x10a2b8: 0xe5200064  swc1        $f0, 0x64($t1)
    ctx->pc = 0x10a2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 100), bits); }
    // 0x10a2bc: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x10a2bcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x10a2c0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x10a2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x10a2c4: 0x633c0  sll         $a2, $a2, 15
    ctx->pc = 0x10a2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 15));
    // 0x10a2c8: 0x24c6c000  addiu       $a2, $a2, -0x4000
    ctx->pc = 0x10a2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950912));
    // 0x10a2cc: 0x1063007  srav        $a2, $a2, $t0
    ctx->pc = 0x10a2ccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
    // 0x10a2d0: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x10a2d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x10a2d4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10a2d4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a2d8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10a2d8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a2dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10a2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a2e0: 0xa1c00  sll         $v1, $t2, 16
    ctx->pc = 0x10a2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x10a2e4: 0xe5200068  swc1        $f0, 0x68($t1)
    ctx->pc = 0x10a2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 104), bits); }
    // 0x10a2e8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x10a2e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x10a2ec: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x10a2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10a2f0: 0x52bc0  sll         $a1, $a1, 15
    ctx->pc = 0x10a2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x10a2f4: 0x24a5c000  addiu       $a1, $a1, -0x4000
    ctx->pc = 0x10a2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950912));
    // 0x10a2f8: 0xe52807  srav        $a1, $a1, $a3
    ctx->pc = 0x10a2f8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x10a2fc: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x10a2fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x10a300: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10a300u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a304: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10a304u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10a308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a30c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10a30cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a310: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x10a310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10a314: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10a314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a318: 0xe520006c  swc1        $f0, 0x6C($t1)
    ctx->pc = 0x10a318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 108), bits); }
    // 0x10a31c: 0x3e00008  jr          $ra
    ctx->pc = 0x10A31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A31Cu;
        // 0x10a320: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A324u;
}
