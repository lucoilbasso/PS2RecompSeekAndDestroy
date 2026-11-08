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

// Function: WHitpolySearchPPD_1__FP15WHitpolyPackageP9FVector32ffi
// Address: 0x180358 - 0x180610
void WHitpolySearchPPD_1__FP15WHitpolyPackageP9FVector32ffi_0x180358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WHitpolySearchPPD_1__FP15WHitpolyPackageP9FVector32ffi_0x180358");
#endif

    switch (ctx->pc) {
        case 0x1803e8u: goto label_1803e8;
        default: break;
    }

    ctx->pc = 0x180358u;

    // 0x180358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18035c: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x18035cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180360: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x180360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180364: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x180364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180368: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x180368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18036c: 0x108000a4  beqz        $a0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x18036Cu;
    {
        const bool branch_taken_0x18036c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x180370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18036Cu;
        // 0x180370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18036c) {
            ctx->pc = 0x180600u;
            goto label_180600;
        }
    }
    ctx->pc = 0x180374u;
    // 0x180374: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x180374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x180378: 0xaf848d40  sw          $a0, -0x72C0($gp)
    ctx->pc = 0x180378u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937920), GPR_U32(ctx, 4));
    // 0x18037c: 0x244fdbc0  addiu       $t7, $v0, -0x2440
    ctx->pc = 0x18037cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x180380: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x180380u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x180384: 0x8c8d0010  lw          $t5, 0x10($a0)
    ctx->pc = 0x180384u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x180388: 0x8c8c0014  lw          $t4, 0x14($a0)
    ctx->pc = 0x180388u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x18038c: 0x8c980018  lw          $t8, 0x18($a0)
    ctx->pc = 0x18038cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x180390: 0x8c91001c  lw          $s1, 0x1C($a0)
    ctx->pc = 0x180390u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x180394: 0xd9d50000  lqc2        $vf21, 0x0($t6)
    ctx->pc = 0x180394u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x180398: 0x48a2b000  qmtc2.ni    $v0, $vf22
    ctx->pc = 0x180398u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x18039c: 0x4c0000a  bltz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x18039Cu;
    {
        const bool branch_taken_0x18039c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1803A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18039Cu;
        // 0x1803a0: 0xc0582d  daddu       $t3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18039c) {
            ctx->pc = 0x1803C8u;
            goto label_1803c8;
        }
    }
    ctx->pc = 0x1803A4u;
    // 0x1803a4: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x1803a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1803a8: 0xb1900  sll         $v1, $t3, 4
    ctx->pc = 0x1803a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x1803ac: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1803acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1803b0: 0x1836021  addu        $t4, $t4, $v1
    ctx->pc = 0x1803b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1803b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1803b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1803b8: 0x25790001  addiu       $t9, $t3, 0x1
    ctx->pc = 0x1803b8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1803bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1803BCu;
    {
        const bool branch_taken_0x1803bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1803C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1803BCu;
        // 0x1803c0: 0x1a26821  addu        $t5, $t5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1803bc) {
            ctx->pc = 0x1803D0u;
            goto label_1803d0;
        }
    }
    ctx->pc = 0x1803C4u;
    // 0x1803c4: 0x0  nop
    ctx->pc = 0x1803c4u;
    // NOP
label_1803c8:
    // 0x1803c8: 0x94990002  lhu         $t9, 0x2($a0)
    ctx->pc = 0x1803c8u;
    SET_GPR_ZE32(ctx, 25, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1803cc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1803ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1803d0:
    // 0x1803d0: 0x179102a  slt         $v0, $t3, $t9
    ctx->pc = 0x1803d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x1803d4: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x1803D4u;
    {
        const bool branch_taken_0x1803d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1803D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1803D4u;
        // 0x1803d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1803d4) {
            ctx->pc = 0x180600u;
            goto label_180600;
        }
    }
    ctx->pc = 0x1803DCu;
    // 0x1803dc: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x1803dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1803e0: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1803e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1803e4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1803e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1803e8:
    // 0x1803e8: 0x91a6000c  lbu         $a2, 0xC($t5)
    ctx->pc = 0x1803e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x1803ec: 0x95840004  lhu         $a0, 0x4($t4)
    ctx->pc = 0x1803ecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x1803f0: 0x95850006  lhu         $a1, 0x6($t4)
    ctx->pc = 0x1803f0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 6)));
    // 0x1803f4: 0x63842  srl         $a3, $a2, 1
    ctx->pc = 0x1803f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x1803f8: 0x95830008  lhu         $v1, 0x8($t4)
    ctx->pc = 0x1803f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x1803fc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1803fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x180400: 0x9582000a  lhu         $v0, 0xA($t4)
    ctx->pc = 0x180400u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 10)));
    // 0x180404: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x180404u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x180408: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x180408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18040c: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x18040cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x180410: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x180410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x180414: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x180414u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x180418: 0x3044021  addu        $t0, $t8, $a0
    ctx->pc = 0x180418u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x18041c: 0x3052821  addu        $a1, $t8, $a1
    ctx->pc = 0x18041cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
    // 0x180420: 0x3034821  addu        $t1, $t8, $v1
    ctx->pc = 0x180420u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 3)));
    // 0x180424: 0x14c00070  bnez        $a2, . + 4 + (0x70 << 2)
    ctx->pc = 0x180424u;
    {
        const bool branch_taken_0x180424 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x180428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180424u;
        // 0x180428: 0x2225021  addu        $t2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180424) {
            ctx->pc = 0x1805E8u;
            goto label_1805e8;
        }
    }
    ctx->pc = 0x18042Cu;
    // 0x18042c: 0x50e0006f  beql        $a3, $zero, . + 4 + (0x6F << 2)
    ctx->pc = 0x18042Cu;
    {
        const bool branch_taken_0x18042c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x18042c) {
            ctx->pc = 0x180430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18042Cu;
            // 0x180430: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1805ECu;
            goto label_1805ec;
        }
    }
    ctx->pc = 0x180434u;
    // 0x180434: 0x46076032  c.eq.s      $f12, $f7
    ctx->pc = 0x180434u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180438: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x180438u;
    {
        const bool branch_taken_0x180438 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180438) {
            ctx->pc = 0x180458u;
            goto label_180458;
        }
    }
    ctx->pc = 0x180440u;
    // 0x180440: 0xc5a00014  lwc1        $f0, 0x14($t5)
    ctx->pc = 0x180440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180444: 0xc5c10004  lwc1        $f1, 0x4($t6)
    ctx->pc = 0x180444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180448: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x180448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x18044c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18044cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180450: 0x45030066  bc1tl       . + 4 + (0x66 << 2)
    ctx->pc = 0x180450u;
    {
        const bool branch_taken_0x180450 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180450) {
            ctx->pc = 0x180454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180450u;
            // 0x180454: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1805ECu;
            goto label_1805ec;
        }
    }
    ctx->pc = 0x180458u;
label_180458:
    // 0x180458: 0xd9a10000  lqc2        $vf1, 0x0($t5)
    ctx->pc = 0x180458u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x18045c: 0xd9a20010  lqc2        $vf2, 0x10($t5)
    ctx->pc = 0x18045cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x180460: 0x4b560844  vsubx.xz    $vf1, $vf1, $vf22x
    ctx->pc = 0x180460u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[22], ctx->vu0_vf[22], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x180464: 0x4b561080  vaddx.xz    $vf2, $vf2, $vf22x
    ctx->pc = 0x180464u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[22], ctx->vu0_vf[22], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x180468: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x180468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x18046c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x18046cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x180470: 0x48a26000  qmtc2.ni    $v0, $vf12
    ctx->pc = 0x180470u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x180474: 0x48c08000  ctc2.ni     $zero, $vi16
    ctx->pc = 0x180474u;
    ctx->vu0_status = static_cast<uint16_t>(GPR_U32(ctx, 0) & 0xFFFFu);
    // 0x180478: 0x4b5511ac  vsub.xz     $vf6, $vf2, $vf21
    ctx->pc = 0x180478u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18047c: 0x4b41a96c  vsub.xz     $vf5, $vf21, $vf1
    ctx->pc = 0x18047cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x180480: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x180480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x180484: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x180484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x180488: 0x48a26800  qmtc2.ni    $v0, $vf13
    ctx->pc = 0x180488u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x18048c: 0x3c023f83  lui         $v0, 0x3F83
    ctx->pc = 0x18048cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16259 << 16));
    // 0x180490: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x180490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x180494: 0x48a27000  qmtc2.ni    $v0, $vf14
    ctx->pc = 0x180494u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x180498: 0x4a0002ff  vnop
    ctx->pc = 0x180498u;
    // NOP operation, no action needed for VU0
    // 0x18049c: 0x48428000  cfc2.ni     $v0, $vi16
    ctx->pc = 0x18049cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
    // 0x1804a0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1804a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1804a4: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1804A4u;
    {
        const bool branch_taken_0x1804a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1804a4) {
            ctx->pc = 0x1805E8u;
            goto label_1805e8;
        }
    }
    ctx->pc = 0x1804ACu;
    // 0x1804ac: 0x0  nop
    ctx->pc = 0x1804acu;
    // NOP
    // 0x1804b0: 0xd9170000  lqc2        $vf23, 0x0($t0)
    ctx->pc = 0x1804b0u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1804b4: 0xd8b80000  lqc2        $vf24, 0x0($a1)
    ctx->pc = 0x1804b4u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1804b8: 0xd9390000  lqc2        $vf25, 0x0($t1)
    ctx->pc = 0x1804b8u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1804bc: 0x4a2c0258  vmulx.w     $vf9, $vf0, $vf12x
    ctx->pc = 0x1804bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1804c0: 0x4bd8b9ac  vsub.xyz    $vf6, $vf23, $vf24
    ctx->pc = 0x1804c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[23], ctx->vu0_vf[24]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1804c4: 0x4bd8c9ec  vsub.xyz    $vf7, $vf25, $vf24
    ctx->pc = 0x1804c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[25], ctx->vu0_vf[24]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1804c8: 0x4bd8aa2c  vsub.xyz    $vf8, $vf21, $vf24
    ctx->pc = 0x1804c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[24]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1804cc: 0x4b0731be  vmulaz.x    $ACC, $vf6, $vf7z
    ctx->pc = 0x1804ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1804d0: 0x4b063a4e  vmsubz.x    $vf9, $vf7, $vf6z
    ctx->pc = 0x1804d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1804d4: 0x4bc949ff  .word       0x4BC949FF                   # vclipw.xyz  $vf9, $vf9w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1804d4u;
    { __m128 fs = ctx->vu0_vf[9]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x1804d8: 0x4b0741be  vmulaz.x    $ACC, $vf8, $vf7z
    ctx->pc = 0x1804d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1804dc: 0x4a6903bc  vdiv        $Q, $vf0w, $vf9x
    ctx->pc = 0x1804dcu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1804e0: 0x4b083a8e  vmsubz.x    $vf10, $vf7, $vf8z
    ctx->pc = 0x1804e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1804e4: 0x4b0831be  vmulaz.x    $ACC, $vf6, $vf8z
    ctx->pc = 0x1804e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1804e8: 0x4b0642ce  vmsubz.x    $vf11, $vf8, $vf6z
    ctx->pc = 0x1804e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1804ec: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x1804ecu;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x1804f0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1804f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1804f4: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1804F4u;
    {
        const bool branch_taken_0x1804f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1804f4) {
            ctx->pc = 0x1805E8u;
            goto label_1805e8;
        }
    }
    ctx->pc = 0x1804FCu;
    // 0x1804fc: 0x0  nop
    ctx->pc = 0x1804fcu;
    // NOP
    // 0x180500: 0x4a0003bf  vwaitq
    ctx->pc = 0x180500u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x180504: 0x4b00529c  vmulq.x     $vf10, $vf10, $Q
    ctx->pc = 0x180504u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x180508: 0x4b005adc  vmulq.x     $vf11, $vf11, $Q
    ctx->pc = 0x180508u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x18050c: 0x4b0a5bc0  vaddx.x     $vf15, $vf11, $vf10x
    ctx->pc = 0x18050cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x180510: 0x4a0002ff  vnop
    ctx->pc = 0x180510u;
    // NOP operation, no action needed for VU0
    // 0x180514: 0x4a0002ff  vnop
    ctx->pc = 0x180514u;
    // NOP operation, no action needed for VU0
    // 0x180518: 0x48c08000  ctc2.ni     $zero, $vi16
    ctx->pc = 0x180518u;
    ctx->vu0_status = static_cast<uint16_t>(GPR_U32(ctx, 0) & 0xFFFFu);
    // 0x18051c: 0x4b0d5400  vaddx.x     $vf16, $vf10, $vf13x
    ctx->pc = 0x18051cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x180520: 0x4b0d5c40  vaddx.x     $vf17, $vf11, $vf13x
    ctx->pc = 0x180520u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x180524: 0x4b0a7484  vsubx.x     $vf18, $vf14, $vf10x
    ctx->pc = 0x180524u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x180528: 0x4b0b74c4  vsubx.x     $vf19, $vf14, $vf11x
    ctx->pc = 0x180528u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x18052c: 0x4b0f7504  vsubx.x     $vf20, $vf14, $vf15x
    ctx->pc = 0x18052cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x180530: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x180530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x180534: 0xc5a10004  lwc1        $f1, 0x4($t5)
    ctx->pc = 0x180534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180538: 0xc5c20004  lwc1        $f2, 0x4($t6)
    ctx->pc = 0x180538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18053c: 0x460c08c1  sub.s       $f3, $f1, $f12
    ctx->pc = 0x18053cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x180540: 0xc5e5000c  lwc1        $f5, 0xC($t7)
    ctx->pc = 0x180540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x180544: 0x48428000  cfc2.ni     $v0, $vi16
    ctx->pc = 0x180544u;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
    // 0x180548: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x180548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x18054c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x18054Cu;
    {
        const bool branch_taken_0x18054c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18054c) {
            ctx->pc = 0x1805E8u;
            goto label_1805e8;
        }
    }
    ctx->pc = 0x180554u;
    // 0x180554: 0x0  nop
    ctx->pc = 0x180554u;
    // NOP
    // 0x180558: 0x4b08003d  vadday.x    $ACC, $vf0, $vf8y
    ctx->pc = 0x180558u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x18055c: 0x4b0650fd  vmsubay.x   $ACC, $vf10, $vf6y
    ctx->pc = 0x18055cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x180560: 0x4b075b8d  vmsuby.x    $vf14, $vf11, $vf7y
    ctx->pc = 0x180560u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x180564: 0x48237000  qmfc2.ni    $v1, $vf14
    ctx->pc = 0x180564u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x180568: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x180568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x18056c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18056cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180570: 0x46016032  c.eq.s      $f12, $f1
    ctx->pc = 0x180570u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180574: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x180574u;
    {
        const bool branch_taken_0x180574 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180574) {
            ctx->pc = 0x180588u;
            goto label_180588;
        }
    }
    ctx->pc = 0x18057Cu;
    // 0x18057c: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x18057cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180580: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x180580u;
    {
        const bool branch_taken_0x180580 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x180580) {
            ctx->pc = 0x1805A4u;
            goto label_1805a4;
        }
    }
    ctx->pc = 0x180588u;
label_180588:
    // 0x180588: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x180588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x18058c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18058Cu;
    {
        const bool branch_taken_0x18058c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18058c) {
            ctx->pc = 0x1805A4u;
            goto label_1805a4;
        }
    }
    ctx->pc = 0x180594u;
    // 0x180594: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x180594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180598: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x180598u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18059c: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x18059Cu;
    {
        const bool branch_taken_0x18059c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18059c) {
            ctx->pc = 0x1805E8u;
            goto label_1805e8;
        }
    }
    ctx->pc = 0x1805A4u;
label_1805a4:
    // 0x1805a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1805a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1805a8: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x1805a8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x1805ac: 0x8da2000c  lw          $v0, 0xC($t5)
    ctx->pc = 0x1805acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x1805b0: 0xade20020  sw          $v0, 0x20($t7)
    ctx->pc = 0x1805b0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 32), GPR_U32(ctx, 2));
    // 0x1805b4: 0x48225000  qmfc2.ni    $v0, $vf10
    ctx->pc = 0x1805b4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x1805b8: 0xade20004  sw          $v0, 0x4($t7)
    ctx->pc = 0x1805b8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 2));
    // 0x1805bc: 0x48225800  qmfc2.ni    $v0, $vf11
    ctx->pc = 0x1805bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x1805c0: 0xade20008  sw          $v0, 0x8($t7)
    ctx->pc = 0x1805c0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 2));
    // 0x1805c4: 0xade3000c  sw          $v1, 0xC($t7)
    ctx->pc = 0x1805c4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 3));
    // 0x1805c8: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1805c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1805cc: 0xade80010  sw          $t0, 0x10($t7)
    ctx->pc = 0x1805ccu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 8));
    // 0x1805d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1805d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1805d4: 0xade50014  sw          $a1, 0x14($t7)
    ctx->pc = 0x1805d4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 20), GPR_U32(ctx, 5));
    // 0x1805d8: 0xade90018  sw          $t1, 0x18($t7)
    ctx->pc = 0x1805d8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 24), GPR_U32(ctx, 9));
    // 0x1805dc: 0xadea001c  sw          $t2, 0x1C($t7)
    ctx->pc = 0x1805dcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 28), GPR_U32(ctx, 10));
    // 0x1805e0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1805E0u;
    {
        const bool branch_taken_0x1805e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1805E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1805E0u;
        // 0x1805e4: 0xaf8b8d3c  sw          $t3, -0x72C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937916), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1805e0) {
            ctx->pc = 0x180600u;
            goto label_180600;
        }
    }
    ctx->pc = 0x1805E8u;
label_1805e8:
    // 0x1805e8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1805e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1805ec:
    // 0x1805ec: 0x25ad0030  addiu       $t5, $t5, 0x30
    ctx->pc = 0x1805ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 48));
    // 0x1805f0: 0x179102a  slt         $v0, $t3, $t9
    ctx->pc = 0x1805f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x1805f4: 0x1440ff7c  bnez        $v0, . + 4 + (-0x84 << 2)
    ctx->pc = 0x1805F4u;
    {
        const bool branch_taken_0x1805f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1805F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1805F4u;
        // 0x1805f8: 0x258c0010  addiu       $t4, $t4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1805f4) {
            ctx->pc = 0x1803E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1803e8;
        }
    }
    ctx->pc = 0x1805FCu;
    // 0x1805fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1805fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_180600:
    // 0x180600: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180600u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180604: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x180604u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180608: 0x3e00008  jr          $ra
    ctx->pc = 0x180608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180608u;
        // 0x18060c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180610u;
}
