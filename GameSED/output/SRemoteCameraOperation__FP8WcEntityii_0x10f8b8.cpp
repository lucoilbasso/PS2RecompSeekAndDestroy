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

// Function: SRemoteCameraOperation__FP8WcEntityii
// Address: 0x10f8b8 - 0x10fea4
void SRemoteCameraOperation__FP8WcEntityii_0x10f8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SRemoteCameraOperation__FP8WcEntityii_0x10f8b8");
#endif

    switch (ctx->pc) {
        case 0x10fa40u: goto label_10fa40;
        case 0x10fc70u: goto label_10fc70;
        case 0x10fcd4u: goto label_10fcd4;
        case 0x10fe08u: goto label_10fe08;
        case 0x10fe30u: goto label_10fe30;
        case 0x10fe40u: goto label_10fe40;
        case 0x10fe5cu: goto label_10fe5c;
        case 0x10fe6cu: goto label_10fe6c;
        default: break;
    }

    ctx->pc = 0x10f8b8u;

    // 0x10f8b8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x10f8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x10f8bc: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x10f8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x10f8c0: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x10f8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x10f8c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10f8c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f8c8: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x10f8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x10f8cc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x10f8ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f8d0: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x10f8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x10f8d4: 0xe7b40098  swc1        $f20, 0x98($sp)
    ctx->pc = 0x10f8d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x10f8d8: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x10f8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x10f8dc: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x10f8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x10f8e0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x10f8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x10f8e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x10f8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x10f8e8: 0xc7948064  lwc1        $f20, -0x7F9C($gp)
    ctx->pc = 0x10f8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10f8ec: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x10f8ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10f8f0: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10F8F0u;
    {
        const bool branch_taken_0x10f8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8F0u;
        // 0x10f8f4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f8f0) {
            ctx->pc = 0x10F910u;
            goto label_10f910;
        }
    }
    ctx->pc = 0x10F8F8u;
    // 0x10f8f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10f8f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f8fc: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x10f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10f900: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x10F900u;
    {
        const bool branch_taken_0x10f900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f900) {
            ctx->pc = 0x10F904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F900u;
            // 0x10f904: 0x8e550014  lw          $s5, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F92Cu;
            goto label_10f92c;
        }
    }
    ctx->pc = 0x10F908u;
    // 0x10f908: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10F908u;
    {
        const bool branch_taken_0x10f908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f908) {
            ctx->pc = 0x10F92Cu;
            goto label_10f92c;
        }
    }
    ctx->pc = 0x10F910u;
label_10f910:
    // 0x10f910: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x10f910u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f914: 0x8eb20018  lw          $s2, 0x18($s5)
    ctx->pc = 0x10f914u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x10f918: 0x12400158  beqz        $s2, . + 4 + (0x158 << 2)
    ctx->pc = 0x10F918u;
    {
        const bool branch_taken_0x10f918 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F918u;
        // 0x10f91c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f918) {
            ctx->pc = 0x10FE7Cu;
            goto label_10fe7c;
        }
    }
    ctx->pc = 0x10F920u;
    // 0x10f920: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x10f920u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10f924: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x10f924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x10f928: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x10f928u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_10f92c:
    // 0x10f92c: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F92Cu;
    {
        const bool branch_taken_0x10f92c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f92c) {
            ctx->pc = 0x10F930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F92Cu;
            // 0x10f930: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F940u;
            goto label_10f940;
        }
    }
    ctx->pc = 0x10F934u;
    // 0x10f934: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x10F934u;
    {
        const bool branch_taken_0x10f934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F934u;
        // 0x10f938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f934) {
            ctx->pc = 0x10FE7Cu;
            goto label_10fe7c;
        }
    }
    ctx->pc = 0x10F93Cu;
    // 0x10f93c: 0x0  nop
    ctx->pc = 0x10f93cu;
    // NOP
label_10f940:
    // 0x10f940: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10F940u;
    {
        const bool branch_taken_0x10f940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F940u;
        // 0x10f944: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f940) {
            ctx->pc = 0x10F958u;
            goto label_10f958;
        }
    }
    ctx->pc = 0x10F948u;
    // 0x10f948: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x10f948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x10f94c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10F94Cu;
    {
        const bool branch_taken_0x10f94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F94Cu;
        // 0x10f950: 0x244300d0  addiu       $v1, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f94c) {
            ctx->pc = 0x10F95Cu;
            goto label_10f95c;
        }
    }
    ctx->pc = 0x10F954u;
    // 0x10f954: 0x0  nop
    ctx->pc = 0x10f954u;
    // NOP
label_10f958:
    // 0x10f958: 0x264300d0  addiu       $v1, $s2, 0xD0
    ctx->pc = 0x10f958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_10f95c:
    // 0x10f95c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x10f95cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10f960: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x10f960u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x10f964: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x10f964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10f968: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10F968u;
    {
        const bool branch_taken_0x10f968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F968u;
        // 0x10f96c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f968) {
            ctx->pc = 0x10F980u;
            goto label_10f980;
        }
    }
    ctx->pc = 0x10F970u;
    // 0x10f970: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x10f970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x10f974: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10F974u;
    {
        const bool branch_taken_0x10f974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F974u;
        // 0x10f978: 0x24430030  addiu       $v1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f974) {
            ctx->pc = 0x10F984u;
            goto label_10f984;
        }
    }
    ctx->pc = 0x10F97Cu;
    // 0x10f97c: 0x0  nop
    ctx->pc = 0x10f97cu;
    // NOP
label_10f980:
    // 0x10f980: 0x26430030  addiu       $v1, $s2, 0x30
    ctx->pc = 0x10f980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_10f984:
    // 0x10f984: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x10f984u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10f988: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x10f988u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x10f98c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x10f98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10f990: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x10f990u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10f994: 0x32240008  andi        $a0, $s1, 0x8
    ctx->pc = 0x10f994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
    // 0x10f998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f99c: 0x1480002c  bnez        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x10F99Cu;
    {
        const bool branch_taken_0x10f99c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F99Cu;
        // 0x10f9a0: 0xaf829120  sw          $v0, -0x6EE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f99c) {
            ctx->pc = 0x10FA50u;
            goto label_10fa50;
        }
    }
    ctx->pc = 0x10F9A4u;
    // 0x10f9a4: 0x32220010  andi        $v0, $s1, 0x10
    ctx->pc = 0x10f9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
    // 0x10f9a8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x10f9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x10f9ac: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x10f9acu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x10f9b0: 0x32250040  andi        $a1, $s1, 0x40
    ctx->pc = 0x10f9b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)64);
    // 0x10f9b4: 0x24648000  addiu       $a0, $v1, -0x8000
    ctx->pc = 0x10f9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x10f9b8: 0x85180b  movn        $v1, $a0, $a1
    ctx->pc = 0x10f9b8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x10f9bc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10f9bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10f9c0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10f9c0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10f9c4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10f9c4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10f9c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10f9c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10f9cc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10f9ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x10f9d0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x10f9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x10f9d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10f9d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10f9d8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x10f9d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10f9dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10f9dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10f9e0: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x10f9e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10f9e4: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x10F9E4u;
    {
        const bool branch_taken_0x10f9e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9E4u;
        // 0x10f9e8: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f9e4) {
            ctx->pc = 0x10FA50u;
            goto label_10fa50;
        }
    }
    ctx->pc = 0x10F9ECu;
    // 0x10f9ec: 0x8f83911c  lw          $v1, -0x6EE4($gp)
    ctx->pc = 0x10f9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938908)));
    // 0x10f9f0: 0x28620017  slti        $v0, $v1, 0x17
    ctx->pc = 0x10f9f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x10f9f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F9F4u;
    {
        const bool branch_taken_0x10f9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9F4u;
        // 0x10f9f8: 0xaf809120  sw          $zero, -0x6EE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938912), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f9f4) {
            ctx->pc = 0x10FA10u;
            goto label_10fa10;
        }
    }
    ctx->pc = 0x10F9FCu;
    // 0x10f9fc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x10f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10fa00: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10fa00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10FA04u;
    {
        const bool branch_taken_0x10fa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA04u;
        // 0x10fa08: 0xaf82911c  sw          $v0, -0x6EE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938908), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa04) {
            ctx->pc = 0x10FA14u;
            goto label_10fa14;
        }
    }
    ctx->pc = 0x10FA0Cu;
    // 0x10fa0c: 0x0  nop
    ctx->pc = 0x10fa0cu;
    // NOP
label_10fa10:
    // 0x10fa10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10fa10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10fa14:
    // 0x10fa14: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FA14u;
    {
        const bool branch_taken_0x10fa14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA14u;
        // 0x10fa18: 0xc7a00028  lwc1        $f0, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa14) {
            ctx->pc = 0x10FA2Cu;
            goto label_10fa2c;
        }
    }
    ctx->pc = 0x10FA1Cu;
    // 0x10fa1c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x10fa1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x10fa20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10fa20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10fa24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10fa24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10fa28: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x10fa28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_10fa2c:
    // 0x10fa2c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x10fa2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10fa30: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x10fa30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10fa34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fa34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa38: 0xc067586  jal         func_19D618
    ctx->pc = 0x10FA38u;
    SET_GPR_U32(ctx, 31, 0x10FA40u);
    ctx->pc = 0x10FA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FA38u;
    // 0x10fa3c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D618u, 0x10FA38u, 0x10FA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FA40u;
label_10fa40:
    // 0x10fa40: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x10fa40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fa44: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x10fa44u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10fa48: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x10fa48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10fa4c: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x10fa4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_10fa50:
    // 0x10fa50: 0x32220008  andi        $v0, $s1, 0x8
    ctx->pc = 0x10fa50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
    // 0x10fa54: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x10FA54u;
    {
        const bool branch_taken_0x10fa54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA54u;
        // 0x10fa58: 0x241400b6  addiu       $s4, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa54) {
            ctx->pc = 0x10FBE0u;
            goto label_10fbe0;
        }
    }
    ctx->pc = 0x10FA5Cu;
    // 0x10fa5c: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x10fa5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
    // 0x10fa60: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x10FA60u;
    {
        const bool branch_taken_0x10fa60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA60u;
        // 0x10fa64: 0x32624000  andi        $v0, $s3, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa60) {
            ctx->pc = 0x10FAF0u;
            goto label_10faf0;
        }
    }
    ctx->pc = 0x10FA68u;
    // 0x10fa68: 0x32224000  andi        $v0, $s1, 0x4000
    ctx->pc = 0x10fa68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16384);
    // 0x10fa6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10FA6Cu;
    {
        const bool branch_taken_0x10fa6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA6Cu;
        // 0x10fa70: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa6c) {
            ctx->pc = 0x10FA88u;
            goto label_10fa88;
        }
    }
    ctx->pc = 0x10FA74u;
    // 0x10fa74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10fa74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10fa78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10fa78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fa7c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x10fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x10fa80: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x10fa80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10fa84: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x10fa84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_10fa88:
    // 0x10fa88: 0x32221000  andi        $v0, $s1, 0x1000
    ctx->pc = 0x10fa88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4096);
    // 0x10fa8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10FA8Cu;
    {
        const bool branch_taken_0x10fa8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA8Cu;
        // 0x10fa90: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa8c) {
            ctx->pc = 0x10FAA8u;
            goto label_10faa8;
        }
    }
    ctx->pc = 0x10FA94u;
    // 0x10fa94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10fa94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10fa98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10fa98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fa9c: 0x2442ff4a  addiu       $v0, $v0, -0xB6
    ctx->pc = 0x10fa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967114));
    // 0x10faa0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x10faa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10faa4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x10faa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_10faa8:
    // 0x10faa8: 0x32222000  andi        $v0, $s1, 0x2000
    ctx->pc = 0x10faa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
    // 0x10faac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10FAACu;
    {
        const bool branch_taken_0x10faac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAACu;
        // 0x10fab0: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10faac) {
            ctx->pc = 0x10FAC8u;
            goto label_10fac8;
        }
    }
    ctx->pc = 0x10FAB4u;
    // 0x10fab4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10fab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10fab8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10fab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fabc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x10fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x10fac0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x10fac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10fac4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x10fac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_10fac8:
    // 0x10fac8: 0x32228000  andi        $v0, $s1, 0x8000
    ctx->pc = 0x10fac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
    // 0x10facc: 0x104000cf  beqz        $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x10FACCu;
    {
        const bool branch_taken_0x10facc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FACCu;
        // 0x10fad0: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10facc) {
            ctx->pc = 0x10FE0Cu;
            goto label_10fe0c;
        }
    }
    ctx->pc = 0x10FAD4u;
    // 0x10fad4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10fad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10fad8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10fad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fadc: 0x2442ff4a  addiu       $v0, $v0, -0xB6
    ctx->pc = 0x10fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967114));
    // 0x10fae0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x10fae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10fae4: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x10FAE4u;
    {
        const bool branch_taken_0x10fae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAE4u;
        // 0x10fae8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fae4) {
            ctx->pc = 0x10FE0Cu;
            goto label_10fe0c;
        }
    }
    ctx->pc = 0x10FAECu;
    // 0x10faec: 0x0  nop
    ctx->pc = 0x10faecu;
    // NOP
label_10faf0:
    // 0x10faf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FAF0u;
    {
        const bool branch_taken_0x10faf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAF0u;
        // 0x10faf4: 0x2402e000  addiu       $v0, $zero, -0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10faf0) {
            ctx->pc = 0x10FB08u;
            goto label_10fb08;
        }
    }
    ctx->pc = 0x10FAF8u;
    // 0x10faf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10faf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10fafc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10fafcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fb00: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x10fb00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x10fb04: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x10fb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_10fb08:
    // 0x10fb08: 0x32621000  andi        $v0, $s3, 0x1000
    ctx->pc = 0x10fb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4096);
    // 0x10fb0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FB0Cu;
    {
        const bool branch_taken_0x10fb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB0Cu;
        // 0x10fb10: 0x32622000  andi        $v0, $s3, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb0c) {
            ctx->pc = 0x10FB24u;
            goto label_10fb24;
        }
    }
    ctx->pc = 0x10FB14u;
    // 0x10fb14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10fb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10fb18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10fb18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fb1c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x10fb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x10fb20: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x10fb20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_10fb24:
    // 0x10fb24: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x10FB24u;
    {
        const bool branch_taken_0x10fb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB24u;
        // 0x10fb28: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb24) {
            ctx->pc = 0x10FB7Cu;
            goto label_10fb7c;
        }
    }
    ctx->pc = 0x10FB2Cu;
    // 0x10fb2c: 0x30447fff  andi        $a0, $v0, 0x7FFF
    ctx->pc = 0x10fb2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x10fb30: 0x2c832000  sltiu       $v1, $a0, 0x2000
    ctx->pc = 0x10fb30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8192) ? 1 : 0);
    // 0x10fb34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FB34u;
    {
        const bool branch_taken_0x10fb34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB34u;
        // 0x10fb38: 0x2c824000  sltiu       $v0, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16384) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb34) {
            ctx->pc = 0x10FB48u;
            goto label_10fb48;
        }
    }
    ctx->pc = 0x10FB3Cu;
    // 0x10fb3c: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x10fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x10fb40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10FB40u;
    {
        const bool branch_taken_0x10fb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB40u;
        // 0x10fb44: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb40) {
            ctx->pc = 0x10FB70u;
            goto label_10fb70;
        }
    }
    ctx->pc = 0x10FB48u;
label_10fb48:
    // 0x10fb48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FB48u;
    {
        const bool branch_taken_0x10fb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB48u;
        // 0x10fb4c: 0x2c826000  sltiu       $v0, $a0, 0x6000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24576) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb48) {
            ctx->pc = 0x10FB60u;
            goto label_10fb60;
        }
    }
    ctx->pc = 0x10FB50u;
    // 0x10fb50: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x10fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x10fb54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10FB54u;
    {
        const bool branch_taken_0x10fb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB54u;
        // 0x10fb58: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb54) {
            ctx->pc = 0x10FB70u;
            goto label_10fb70;
        }
    }
    ctx->pc = 0x10FB5Cu;
    // 0x10fb5c: 0x0  nop
    ctx->pc = 0x10fb5cu;
    // NOP
label_10fb60:
    // 0x10fb60: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FB60u;
    {
        const bool branch_taken_0x10fb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fb60) {
            ctx->pc = 0x10FB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10FB60u;
            // 0x10fb64: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10FB70u;
            goto label_10fb70;
        }
    }
    ctx->pc = 0x10FB68u;
    // 0x10fb68: 0x24026000  addiu       $v0, $zero, 0x6000
    ctx->pc = 0x10fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x10fb6c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x10fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_10fb70:
    // 0x10fb70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10fb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10fb74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10fb74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fb78: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x10fb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_10fb7c:
    // 0x10fb7c: 0x32628000  andi        $v0, $s3, 0x8000
    ctx->pc = 0x10fb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
    // 0x10fb80: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x10FB80u;
    {
        const bool branch_taken_0x10fb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB80u;
        // 0x10fb84: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb80) {
            ctx->pc = 0x10FE0Cu;
            goto label_10fe0c;
        }
    }
    ctx->pc = 0x10FB88u;
    // 0x10fb88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10fb8c: 0x30447fff  andi        $a0, $v0, 0x7FFF
    ctx->pc = 0x10fb8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x10fb90: 0x2c836000  sltiu       $v1, $a0, 0x6000
    ctx->pc = 0x10fb90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24576) ? 1 : 0);
    // 0x10fb94: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FB94u;
    {
        const bool branch_taken_0x10fb94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB94u;
        // 0x10fb98: 0x2c824000  sltiu       $v0, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16384) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb94) {
            ctx->pc = 0x10FBA8u;
            goto label_10fba8;
        }
    }
    ctx->pc = 0x10FB9Cu;
    // 0x10fb9c: 0x24026000  addiu       $v0, $zero, 0x6000
    ctx->pc = 0x10fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x10fba0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10FBA0u;
    {
        const bool branch_taken_0x10fba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBA0u;
        // 0x10fba4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fba0) {
            ctx->pc = 0x10FBD0u;
            goto label_10fbd0;
        }
    }
    ctx->pc = 0x10FBA8u;
label_10fba8:
    // 0x10fba8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FBA8u;
    {
        const bool branch_taken_0x10fba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBA8u;
        // 0x10fbac: 0x2c822000  sltiu       $v0, $a0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8192) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fba8) {
            ctx->pc = 0x10FBC0u;
            goto label_10fbc0;
        }
    }
    ctx->pc = 0x10FBB0u;
    // 0x10fbb0: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x10fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x10fbb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10FBB4u;
    {
        const bool branch_taken_0x10fbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBB4u;
        // 0x10fbb8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbb4) {
            ctx->pc = 0x10FBD0u;
            goto label_10fbd0;
        }
    }
    ctx->pc = 0x10FBBCu;
    // 0x10fbbc: 0x0  nop
    ctx->pc = 0x10fbbcu;
    // NOP
label_10fbc0:
    // 0x10fbc0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FBC0u;
    {
        const bool branch_taken_0x10fbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fbc0) {
            ctx->pc = 0x10FBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10FBC0u;
            // 0x10fbc4: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10FBD0u;
            goto label_10fbd0;
        }
    }
    ctx->pc = 0x10FBC8u;
    // 0x10fbc8: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x10fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x10fbcc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x10fbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_10fbd0:
    // 0x10fbd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10fbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10fbd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10fbd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fbd8: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x10FBD8u;
    {
        const bool branch_taken_0x10fbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBD8u;
        // 0x10fbdc: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbd8) {
            ctx->pc = 0x10FE0Cu;
            goto label_10fe0c;
        }
    }
    ctx->pc = 0x10FBE0u;
label_10fbe0:
    // 0x10fbe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10fbe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fbe4: 0x32221000  andi        $v0, $s1, 0x1000
    ctx->pc = 0x10fbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4096);
    // 0x10fbe8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x10fbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10fbec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10FBECu;
    {
        const bool branch_taken_0x10fbec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBECu;
        // 0x10fbf0: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbec) {
            ctx->pc = 0x10FBF8u;
            goto label_10fbf8;
        }
    }
    ctx->pc = 0x10FBF4u;
    // 0x10fbf4: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x10fbf4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_10fbf8:
    // 0x10fbf8: 0x32224000  andi        $v0, $s1, 0x4000
    ctx->pc = 0x10fbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16384);
    // 0x10fbfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FBFCu;
    {
        const bool branch_taken_0x10fbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBFCu;
        // 0x10fc00: 0x32222000  andi        $v0, $s1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbfc) {
            ctx->pc = 0x10FC0Cu;
            goto label_10fc0c;
        }
    }
    ctx->pc = 0x10FC04u;
    // 0x10fc04: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x10fc04u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x10fc08: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x10fc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_10fc0c:
    // 0x10fc0c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10FC0Cu;
    {
        const bool branch_taken_0x10fc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fc0c) {
            ctx->pc = 0x10FC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10FC0Cu;
            // 0x10fc10: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10FC14u;
            goto label_10fc14;
        }
    }
    ctx->pc = 0x10FC14u;
label_10fc14:
    // 0x10fc14: 0x32228000  andi        $v0, $s1, 0x8000
    ctx->pc = 0x10fc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
    // 0x10fc18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FC18u;
    {
        const bool branch_taken_0x10fc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC18u;
        // 0x10fc1c: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc18) {
            ctx->pc = 0x10FC28u;
            goto label_10fc28;
        }
    }
    ctx->pc = 0x10FC20u;
    // 0x10fc20: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x10fc20u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x10fc24: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x10fc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_10fc28:
    // 0x10fc28: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x10fc28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10fc2c: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x10fc2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10fc30: 0x4a0002ff  vnop
    ctx->pc = 0x10fc30u;
    // NOP operation, no action needed for VU0
    // 0x10fc34: 0x4a0002ff  vnop
    ctx->pc = 0x10fc34u;
    // NOP operation, no action needed for VU0
    // 0x10fc38: 0x4a0002ff  vnop
    ctx->pc = 0x10fc38u;
    // NOP operation, no action needed for VU0
    // 0x10fc3c: 0x4a0002ff  vnop
    ctx->pc = 0x10fc3cu;
    // NOP operation, no action needed for VU0
    // 0x10fc40: 0x4a0002ff  vnop
    ctx->pc = 0x10fc40u;
    // NOP operation, no action needed for VU0
    // 0x10fc44: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x10fc44u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x10fc48: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x10fc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x10fc4c: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x10fc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x10fc50: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x10FC50u;
    {
        const bool branch_taken_0x10fc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC50u;
        // 0x10fc54: 0x32220004  andi        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc50) {
            ctx->pc = 0x10FCE8u;
            goto label_10fce8;
        }
    }
    ctx->pc = 0x10FC58u;
    // 0x10fc58: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x10fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x10fc5c: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x10fc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x10fc60: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x10fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x10fc64: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x10fc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x10fc68: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x10FC68u;
    SET_GPR_U32(ctx, 31, 0x10FC70u);
    ctx->pc = 0x10FC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC68u;
    // 0x10fc6c: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x10FC68u, 0x10FC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FC70u;
label_10fc70:
    // 0x10fc70: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x10FC70u;
    {
        const bool branch_taken_0x10fc70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC70u;
        // 0x10fc74: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc70) {
            ctx->pc = 0x10FCC4u;
            goto label_10fcc4;
        }
    }
    ctx->pc = 0x10FC78u;
    // 0x10fc78: 0x8f83911c  lw          $v1, -0x6EE4($gp)
    ctx->pc = 0x10fc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938908)));
    // 0x10fc7c: 0x28620017  slti        $v0, $v1, 0x17
    ctx->pc = 0x10fc7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x10fc80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FC80u;
    {
        const bool branch_taken_0x10fc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC80u;
        // 0x10fc84: 0xaf809120  sw          $zero, -0x6EE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938912), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc80) {
            ctx->pc = 0x10FC98u;
            goto label_10fc98;
        }
    }
    ctx->pc = 0x10FC88u;
    // 0x10fc88: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x10fc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10fc8c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10fc8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10FC90u;
    {
        const bool branch_taken_0x10fc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC90u;
        // 0x10fc94: 0xaf82911c  sw          $v0, -0x6EE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938908), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc90) {
            ctx->pc = 0x10FC9Cu;
            goto label_10fc9c;
        }
    }
    ctx->pc = 0x10FC98u;
label_10fc98:
    // 0x10fc98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10fc9c:
    // 0x10fc9c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x10FC9Cu;
    {
        const bool branch_taken_0x10fc9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC9Cu;
        // 0x10fca0: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc9c) {
            ctx->pc = 0x10FCC0u;
            goto label_10fcc0;
        }
    }
    ctx->pc = 0x10FCA4u;
    // 0x10fca4: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x10fca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x10fca8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10fca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10fcac: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x10fcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10fcb0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x10fcb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x10fcb4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x10fcb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x10fcb8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x10fcb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10fcbc: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x10fcbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_10fcc0:
    // 0x10fcc0: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x10fcc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_10fcc4:
    // 0x10fcc4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x10fcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10fcc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fccc: 0xc067586  jal         func_19D618
    ctx->pc = 0x10FCCCu;
    SET_GPR_U32(ctx, 31, 0x10FCD4u);
    ctx->pc = 0x10FCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FCCCu;
    // 0x10fcd0: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D618u, 0x10FCCCu, 0x10FCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FCD4u;
label_10fcd4:
    // 0x10fcd4: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x10fcd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fcd8: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x10fcd8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10fcdc: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x10fcdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10fce0: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x10fce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10fce4: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x10fce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
label_10fce8:
    // 0x10fce8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FCE8u;
    {
        const bool branch_taken_0x10fce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCE8u;
        // 0x10fcec: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fce8) {
            ctx->pc = 0x10FCF8u;
            goto label_10fcf8;
        }
    }
    ctx->pc = 0x10FCF0u;
    // 0x10fcf0: 0xc7808068  lwc1        $f0, -0x7F98($gp)
    ctx->pc = 0x10fcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10fcf4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x10fcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_10fcf8:
    // 0x10fcf8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FCF8u;
    {
        const bool branch_taken_0x10fcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCF8u;
        // 0x10fcfc: 0xc7a10024  lwc1        $f1, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fcf8) {
            ctx->pc = 0x10FD0Cu;
            goto label_10fd0c;
        }
    }
    ctx->pc = 0x10FD00u;
    // 0x10fd00: 0xc780806c  lwc1        $f0, -0x7F94($gp)
    ctx->pc = 0x10fd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10fd04: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x10fd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x10fd08: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x10fd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10fd0c:
    // 0x10fd0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10fd0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fd10: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x10fd10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10fd14: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x10FD14u;
    {
        const bool branch_taken_0x10fd14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD14u;
        // 0x10fd18: 0x8f83911c  lw          $v1, -0x6EE4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938908)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd14) {
            ctx->pc = 0x10FD64u;
            goto label_10fd64;
        }
    }
    ctx->pc = 0x10FD1Cu;
    // 0x10fd1c: 0x28620017  slti        $v0, $v1, 0x17
    ctx->pc = 0x10fd1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x10fd20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FD20u;
    {
        const bool branch_taken_0x10fd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD20u;
        // 0x10fd24: 0xaf809120  sw          $zero, -0x6EE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938912), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd20) {
            ctx->pc = 0x10FD38u;
            goto label_10fd38;
        }
    }
    ctx->pc = 0x10FD28u;
    // 0x10fd28: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x10fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10fd2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10fd2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10FD30u;
    {
        const bool branch_taken_0x10fd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD30u;
        // 0x10fd34: 0xaf82911c  sw          $v0, -0x6EE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938908), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd30) {
            ctx->pc = 0x10FD3Cu;
            goto label_10fd3c;
        }
    }
    ctx->pc = 0x10FD38u;
label_10fd38:
    // 0x10fd38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10fd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10fd3c:
    // 0x10fd3c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FD3Cu;
    {
        const bool branch_taken_0x10fd3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD3Cu;
        // 0x10fd40: 0xc7a00024  lwc1        $f0, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd3c) {
            ctx->pc = 0x10FD54u;
            goto label_10fd54;
        }
    }
    ctx->pc = 0x10FD44u;
    // 0x10fd44: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x10fd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x10fd48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10fd48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10fd4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10fd4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10fd50: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x10fd50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_10fd54:
    // 0x10fd54: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x10fd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10fd58: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x10fd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10fd5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x10fd5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x10fd60: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x10fd60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_10fd64:
    // 0x10fd64: 0x32220080  andi        $v0, $s1, 0x80
    ctx->pc = 0x10fd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
    // 0x10fd68: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10FD68u;
    {
        const bool branch_taken_0x10fd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD68u;
        // 0x10fd6c: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd68) {
            ctx->pc = 0x10FD84u;
            goto label_10fd84;
        }
    }
    ctx->pc = 0x10FD70u;
    // 0x10fd70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10fd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10fd74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10fd74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fd78: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x10fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x10fd7c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x10fd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10fd80: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x10fd80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_10fd84:
    // 0x10fd84: 0x32220020  andi        $v0, $s1, 0x20
    ctx->pc = 0x10fd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
    // 0x10fd88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10FD88u;
    {
        const bool branch_taken_0x10fd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD88u;
        // 0x10fd8c: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd88) {
            ctx->pc = 0x10FDA4u;
            goto label_10fda4;
        }
    }
    ctx->pc = 0x10FD90u;
    // 0x10fd90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10fd90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10fd94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10fd94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fd98: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x10fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x10fd9c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x10fd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10fda0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x10fda0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_10fda4:
    // 0x10fda4: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x10FDA4u;
    {
        const bool branch_taken_0x10fda4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDA4u;
        // 0x10fda8: 0x32220010  andi        $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fda4) {
            ctx->pc = 0x10FE0Cu;
            goto label_10fe0c;
        }
    }
    ctx->pc = 0x10FDACu;
    // 0x10fdac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FDACu;
    {
        const bool branch_taken_0x10fdac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDACu;
        // 0x10fdb0: 0xc6410154  lwc1        $f1, 0x154($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fdac) {
            ctx->pc = 0x10FDBCu;
            goto label_10fdbc;
        }
    }
    ctx->pc = 0x10FDB4u;
    // 0x10fdb4: 0xc7808070  lwc1        $f0, -0x7F90($gp)
    ctx->pc = 0x10fdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10fdb8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x10fdb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_10fdbc:
    // 0x10fdbc: 0x32220040  andi        $v0, $s1, 0x40
    ctx->pc = 0x10fdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)64);
    // 0x10fdc0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10FDC0u;
    {
        const bool branch_taken_0x10fdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fdc0) {
            ctx->pc = 0x10FDE4u;
            goto label_10fde4;
        }
    }
    ctx->pc = 0x10FDC8u;
    // 0x10fdc8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10fdc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10fdcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10fdccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fdd0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10fdd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10fdd4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x10FDD4u;
    {
        const bool branch_taken_0x10fdd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10fdd4) {
            ctx->pc = 0x10FDE4u;
            goto label_10fde4;
        }
    }
    ctx->pc = 0x10FDDCu;
    // 0x10fddc: 0xc7808074  lwc1        $f0, -0x7F8C($gp)
    ctx->pc = 0x10fddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10fde0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x10fde0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_10fde4:
    // 0x10fde4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10fde4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10fde8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10fde8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fdec: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x10fdecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x10fdf0: 0xe6410154  swc1        $f1, 0x154($s2)
    ctx->pc = 0x10fdf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 340), bits); }
    // 0x10fdf4: 0x0  nop
    ctx->pc = 0x10fdf4u;
    // NOP
    // 0x10fdf8: 0x0  nop
    ctx->pc = 0x10fdf8u;
    // NOP
    // 0x10fdfc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x10fdfcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x10fe00: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x10FE00u;
    SET_GPR_U32(ctx, 31, 0x10FE08u);
    ctx->pc = 0x10FE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE00u;
    // 0x10fe04: 0xe640015c  swc1        $f0, 0x15C($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 348), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x10FE00u, 0x10FE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE08u;
label_10fe08:
    // 0x10fe08: 0xae420158  sw          $v0, 0x158($s2)
    ctx->pc = 0x10fe08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 2));
label_10fe0c:
    // 0x10fe0c: 0x8f82911c  lw          $v0, -0x6EE4($gp)
    ctx->pc = 0x10fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938908)));
    // 0x10fe10: 0x8f839120  lw          $v1, -0x6EE0($gp)
    ctx->pc = 0x10fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938912)));
    // 0x10fe14: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x10fe14u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x10fe18: 0x12a0000b  beqz        $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x10FE18u;
    {
        const bool branch_taken_0x10fe18 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE18u;
        // 0x10fe1c: 0xaf82911c  sw          $v0, -0x6EE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938908), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe18) {
            ctx->pc = 0x10FE48u;
            goto label_10fe48;
        }
    }
    ctx->pc = 0x10FE20u;
    // 0x10fe20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10fe20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10fe24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe28: 0xc0618c2  jal         func_186308
    ctx->pc = 0x10FE28u;
    SET_GPR_U32(ctx, 31, 0x10FE30u);
    ctx->pc = 0x10FE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE28u;
    // 0x10fe2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x10FE28u, 0x10FE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE30u;
label_10fe30:
    // 0x10fe30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10fe30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10fe34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe38: 0xc0618da  jal         func_186368
    ctx->pc = 0x10FE38u;
    SET_GPR_U32(ctx, 31, 0x10FE40u);
    ctx->pc = 0x10FE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE38u;
    // 0x10fe3c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x10FE38u, 0x10FE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE40u;
label_10fe40:
    // 0x10fe40: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x10FE40u;
    {
        const bool branch_taken_0x10fe40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE40u;
        // 0x10fe44: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe40) {
            ctx->pc = 0x10FE7Cu;
            goto label_10fe7c;
        }
    }
    ctx->pc = 0x10FE48u;
label_10fe48:
    // 0x10fe48: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x10fe48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10fe4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10fe4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10fe50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe54: 0xc0618c2  jal         func_186308
    ctx->pc = 0x10FE54u;
    SET_GPR_U32(ctx, 31, 0x10FE5Cu);
    ctx->pc = 0x10FE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE54u;
    // 0x10fe58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x10FE54u, 0x10FE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE5Cu;
label_10fe5c:
    // 0x10fe5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10fe5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10fe60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe64: 0xc0618da  jal         func_186368
    ctx->pc = 0x10FE64u;
    SET_GPR_U32(ctx, 31, 0x10FE6Cu);
    ctx->pc = 0x10FE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE64u;
    // 0x10fe68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x10FE64u, 0x10FE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE6Cu;
label_10fe6c:
    // 0x10fe6c: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x10fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x10fe70: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x10fe70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x10fe74: 0xae420150  sw          $v0, 0x150($s2)
    ctx->pc = 0x10fe74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 2));
    // 0x10fe78: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x10fe78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10fe7c:
    // 0x10fe7c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x10fe7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10fe80: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x10fe80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x10fe84: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x10fe84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10fe88: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x10fe88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x10fe8c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x10fe8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10fe90: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x10fe90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x10fe94: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x10fe94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10fe98: 0xc7b40098  lwc1        $f20, 0x98($sp)
    ctx->pc = 0x10fe98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10fe9c: 0x3e00008  jr          $ra
    ctx->pc = 0x10FE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE9Cu;
        // 0x10fea0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FEA4u;
}
