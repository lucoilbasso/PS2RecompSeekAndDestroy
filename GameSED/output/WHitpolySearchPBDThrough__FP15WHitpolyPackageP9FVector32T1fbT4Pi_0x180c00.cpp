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

// Function: WHitpolySearchPBDThrough__FP15WHitpolyPackageP9FVector32T1fbT4Pi
// Address: 0x180c00 - 0x1813cc
void WHitpolySearchPBDThrough__FP15WHitpolyPackageP9FVector32T1fbT4Pi_0x180c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WHitpolySearchPBDThrough__FP15WHitpolyPackageP9FVector32T1fbT4Pi_0x180c00");
#endif

    switch (ctx->pc) {
        case 0x180cc0u: goto label_180cc0;
        default: break;
    }

    ctx->pc = 0x180c00u;

    // 0x180c00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x180c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x180c04: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x180c04u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c08: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x180c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x180c0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c10: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x180c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x180c14: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x180c14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c18: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x180c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x180c1c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x180c1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c20: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x180c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x180c24: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x180c24u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c28: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x180c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x180c2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x180c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c30: 0x8e0c0010  lw          $t4, 0x10($s0)
    ctx->pc = 0x180c30u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x180c34: 0x8e180014  lw          $t8, 0x14($s0)
    ctx->pc = 0x180c34u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x180c38: 0x8e080018  lw          $t0, 0x18($s0)
    ctx->pc = 0x180c38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x180c3c: 0x8e13001c  lw          $s3, 0x1C($s0)
    ctx->pc = 0x180c3cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x180c40: 0xd9a20000  lqc2        $vf2, 0x0($t5)
    ctx->pc = 0x180c40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x180c44: 0xd9c30000  lqc2        $vf3, 0x0($t6)
    ctx->pc = 0x180c44u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x180c48: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x180c48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x180c4c: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x180c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x180c50: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x180c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x180c54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x180c54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180c58: 0x2465dbc0  addiu       $a1, $v1, -0x2440
    ctx->pc = 0x180c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x180c5c: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x180c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x180c60: 0xa0a20020  sb          $v0, 0x20($a1)
    ctx->pc = 0x180c60u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x26DBE0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x26DBE0u, _value); } while (0);
    // 0x180c64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x180c64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c68: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x180c68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DBC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC0u, _value); } while (0);
    // 0x180c6c: 0x120001d0  beqz        $s0, . + 4 + (0x1D0 << 2)
    ctx->pc = 0x180C6Cu;
    {
        const bool branch_taken_0x180c6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x180C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C6Cu;
        // 0x180c70: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180c6c) {
            ctx->pc = 0x1813B0u;
            goto label_1813b0;
        }
    }
    ctx->pc = 0x180C74u;
    // 0x180c74: 0x51200009  beql        $t1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x180C74u;
    {
        const bool branch_taken_0x180c74 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x180c74) {
            ctx->pc = 0x180C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180C74u;
            // 0x180c78: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180C9Cu;
            goto label_180c9c;
        }
    }
    ctx->pc = 0x180C7Cu;
    // 0x180c7c: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x180c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x180c80: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x180c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x180c84: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x180c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x180c88: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x180c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x180c8c: 0x303c021  addu        $t8, $t8, $v1
    ctx->pc = 0x180c8cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 3)));
    // 0x180c90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x180c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x180c94: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x180c94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x180c98: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x180c98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_180c9c:
    // 0x180c9c: 0x80c82d  daddu       $t9, $a0, $zero
    ctx->pc = 0x180c9cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180ca0: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x180ca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x180ca4: 0x104001c2  beqz        $v0, . + 4 + (0x1C2 << 2)
    ctx->pc = 0x180CA4u;
    {
        const bool branch_taken_0x180ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CA4u;
        // 0x180ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ca4) {
            ctx->pc = 0x1813B0u;
            goto label_1813b0;
        }
    }
    ctx->pc = 0x180CACu;
    // 0x180cac: 0xc7898568  lwc1        $f9, -0x7A98($gp)
    ctx->pc = 0x180cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x180cb0: 0x46000206  mov.s       $f8, $f0
    ctx->pc = 0x180cb0u;
    ctx->f[8] = FPU_MOV_S(ctx->f[0]);
    // 0x180cb4: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x180cb4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180cb8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x180cb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180cbc: 0x0  nop
    ctx->pc = 0x180cbcu;
    // NOP
label_180cc0:
    // 0x180cc0: 0x9183000c  lbu         $v1, 0xC($t4)
    ctx->pc = 0x180cc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x180cc4: 0x311c2  srl         $v0, $v1, 7
    ctx->pc = 0x180cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x180cc8: 0x544001b3  bnel        $v0, $zero, . + 4 + (0x1B3 << 2)
    ctx->pc = 0x180CC8u;
    {
        const bool branch_taken_0x180cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180cc8) {
            ctx->pc = 0x180CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180CC8u;
            // 0x180ccc: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181398u;
            goto label_181398;
        }
    }
    ctx->pc = 0x180CD0u;
    // 0x180cd0: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x180cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x180cd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x180cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x180cd8: 0x504001af  beql        $v0, $zero, . + 4 + (0x1AF << 2)
    ctx->pc = 0x180CD8u;
    {
        const bool branch_taken_0x180cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180cd8) {
            ctx->pc = 0x180CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180CD8u;
            // 0x180cdc: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181398u;
            goto label_181398;
        }
    }
    ctx->pc = 0x180CE0u;
    // 0x180ce0: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x180ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180ce4: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x180ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180ce8: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x180ce8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x180cec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x180cecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180cf0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x180CF0u;
    {
        const bool branch_taken_0x180cf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x180CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CF0u;
        // 0x180cf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180cf0) {
            ctx->pc = 0x180CFCu;
            goto label_180cfc;
        }
    }
    ctx->pc = 0x180CF8u;
    // 0x180cf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_180cfc:
    // 0x180cfc: 0xc5800010  lwc1        $f0, 0x10($t4)
    ctx->pc = 0x180cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180d00: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x180d00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x180d04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x180d04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180d08: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x180D08u;
    {
        const bool branch_taken_0x180d08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180d08) {
            ctx->pc = 0x180D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180D08u;
            // 0x180d0c: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180D10u;
            goto label_180d10;
        }
    }
    ctx->pc = 0x180D10u;
label_180d10:
    // 0x180d10: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x180d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180d14: 0xc5c10008  lwc1        $f1, 0x8($t6)
    ctx->pc = 0x180d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180d18: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x180d18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x180d1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x180d1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180d20: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x180D20u;
    {
        const bool branch_taken_0x180d20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180d20) {
            ctx->pc = 0x180D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180D20u;
            // 0x180d24: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180D28u;
            goto label_180d28;
        }
    }
    ctx->pc = 0x180D28u;
label_180d28:
    // 0x180d28: 0xc5800018  lwc1        $f0, 0x18($t4)
    ctx->pc = 0x180d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180d2c: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x180d2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x180d30: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x180d30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180d34: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x180D34u;
    {
        const bool branch_taken_0x180d34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180d34) {
            ctx->pc = 0x180D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180D34u;
            // 0x180d38: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180D3Cu;
            goto label_180d3c;
        }
    }
    ctx->pc = 0x180D3Cu;
label_180d3c:
    // 0x180d3c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x180D3Cu;
    {
        const bool branch_taken_0x180d3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x180D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D3Cu;
        // 0x180d40: 0xc5800004  lwc1        $f0, 0x4($t4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180d3c) {
            ctx->pc = 0x180D60u;
            goto label_180d60;
        }
    }
    ctx->pc = 0x180D44u;
    // 0x180d44: 0xc5c10004  lwc1        $f1, 0x4($t6)
    ctx->pc = 0x180d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180d48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x180d48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180d4c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x180D4Cu;
    {
        const bool branch_taken_0x180d4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180d4c) {
            ctx->pc = 0x180D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180D4Cu;
            // 0x180d50: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180D54u;
            goto label_180d54;
        }
    }
    ctx->pc = 0x180D54u;
label_180d54:
    // 0x180d54: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x180D54u;
    {
        const bool branch_taken_0x180d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D54u;
        // 0x180d58: 0xc5800014  lwc1        $f0, 0x14($t4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180d54) {
            ctx->pc = 0x180D7Cu;
            goto label_180d7c;
        }
    }
    ctx->pc = 0x180D5Cu;
    // 0x180d5c: 0x0  nop
    ctx->pc = 0x180d5cu;
    // NOP
label_180d60:
    // 0x180d60: 0xc5c10004  lwc1        $f1, 0x4($t6)
    ctx->pc = 0x180d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180d64: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x180d64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x180d68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x180d68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180d6c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x180D6Cu;
    {
        const bool branch_taken_0x180d6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180d6c) {
            ctx->pc = 0x180D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180D6Cu;
            // 0x180d70: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180D74u;
            goto label_180d74;
        }
    }
    ctx->pc = 0x180D74u;
label_180d74:
    // 0x180d74: 0xc5800014  lwc1        $f0, 0x14($t4)
    ctx->pc = 0x180d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180d78: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x180d78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_180d7c:
    // 0x180d7c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x180d7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180d80: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x180D80u;
    {
        const bool branch_taken_0x180d80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180d80) {
            ctx->pc = 0x180D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180D80u;
            // 0x180d84: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180D88u;
            goto label_180d88;
        }
    }
    ctx->pc = 0x180D88u;
label_180d88:
    // 0x180d88: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x180d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180d8c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x180d8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180d90: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x180d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180d94: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x180d94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x180d98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x180d98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180d9c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x180D9Cu;
    {
        const bool branch_taken_0x180d9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x180DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D9Cu;
        // 0x180da0: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180d9c) {
            ctx->pc = 0x180DA8u;
            goto label_180da8;
        }
    }
    ctx->pc = 0x180DA4u;
    // 0x180da4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x180da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_180da8:
    // 0x180da8: 0xc5800010  lwc1        $f0, 0x10($t4)
    ctx->pc = 0x180da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180dac: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x180dacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x180db0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x180db0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180db4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x180DB4u;
    {
        const bool branch_taken_0x180db4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180db4) {
            ctx->pc = 0x180DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180DB4u;
            // 0x180db8: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180DBCu;
            goto label_180dbc;
        }
    }
    ctx->pc = 0x180DBCu;
label_180dbc:
    // 0x180dbc: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x180dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180dc0: 0xc5a10008  lwc1        $f1, 0x8($t5)
    ctx->pc = 0x180dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180dc4: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x180dc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x180dc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x180dc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180dcc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x180DCCu;
    {
        const bool branch_taken_0x180dcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180dcc) {
            ctx->pc = 0x180DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180DCCu;
            // 0x180dd0: 0x34630010  ori         $v1, $v1, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180DD4u;
            goto label_180dd4;
        }
    }
    ctx->pc = 0x180DD4u;
label_180dd4:
    // 0x180dd4: 0xc5800018  lwc1        $f0, 0x18($t4)
    ctx->pc = 0x180dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180dd8: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x180dd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x180ddc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x180ddcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180de0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x180DE0u;
    {
        const bool branch_taken_0x180de0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180de0) {
            ctx->pc = 0x180DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180DE0u;
            // 0x180de4: 0x34630020  ori         $v1, $v1, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180DE8u;
            goto label_180de8;
        }
    }
    ctx->pc = 0x180DE8u;
label_180de8:
    // 0x180de8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x180DE8u;
    {
        const bool branch_taken_0x180de8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x180DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180DE8u;
        // 0x180dec: 0xc5800004  lwc1        $f0, 0x4($t4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180de8) {
            ctx->pc = 0x180E08u;
            goto label_180e08;
        }
    }
    ctx->pc = 0x180DF0u;
    // 0x180df0: 0xc5a10004  lwc1        $f1, 0x4($t5)
    ctx->pc = 0x180df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180df4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x180df4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180df8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x180DF8u;
    {
        const bool branch_taken_0x180df8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180df8) {
            ctx->pc = 0x180DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180DF8u;
            // 0x180dfc: 0x34630004  ori         $v1, $v1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180E00u;
            goto label_180e00;
        }
    }
    ctx->pc = 0x180E00u;
label_180e00:
    // 0x180e00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x180E00u;
    {
        const bool branch_taken_0x180e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E00u;
        // 0x180e04: 0xc5800014  lwc1        $f0, 0x14($t4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180e00) {
            ctx->pc = 0x180E24u;
            goto label_180e24;
        }
    }
    ctx->pc = 0x180E08u;
label_180e08:
    // 0x180e08: 0xc5a10004  lwc1        $f1, 0x4($t5)
    ctx->pc = 0x180e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180e0c: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x180e0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x180e10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x180e10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180e14: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x180E14u;
    {
        const bool branch_taken_0x180e14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180e14) {
            ctx->pc = 0x180E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180E14u;
            // 0x180e18: 0x34630004  ori         $v1, $v1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180E1Cu;
            goto label_180e1c;
        }
    }
    ctx->pc = 0x180E1Cu;
label_180e1c:
    // 0x180e1c: 0xc5800014  lwc1        $f0, 0x14($t4)
    ctx->pc = 0x180e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180e20: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x180e20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_180e24:
    // 0x180e24: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x180e24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180e28: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x180E28u;
    {
        const bool branch_taken_0x180e28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180e28) {
            ctx->pc = 0x180E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180E28u;
            // 0x180e2c: 0x34630008  ori         $v1, $v1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180E30u;
            goto label_180e30;
        }
    }
    ctx->pc = 0x180E30u;
label_180e30:
    // 0x180e30: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x180e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x180e34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x180E34u;
    {
        const bool branch_taken_0x180e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E34u;
        // 0x180e38: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180e34) {
            ctx->pc = 0x180E4Cu;
            goto label_180e4c;
        }
    }
    ctx->pc = 0x180E3Cu;
    // 0x180e3c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x180E3Cu;
    {
        const bool branch_taken_0x180e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x180E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E3Cu;
        // 0x180e40: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180e3c) {
            ctx->pc = 0x180E4Cu;
            goto label_180e4c;
        }
    }
    ctx->pc = 0x180E44u;
    // 0x180e44: 0x54400154  bnel        $v0, $zero, . + 4 + (0x154 << 2)
    ctx->pc = 0x180E44u;
    {
        const bool branch_taken_0x180e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180e44) {
            ctx->pc = 0x180E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180E44u;
            // 0x180e48: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181398u;
            goto label_181398;
        }
    }
    ctx->pc = 0x180E4Cu;
label_180e4c:
    // 0x180e4c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x180e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x180e50: 0x97050004  lhu         $a1, 0x4($t8)
    ctx->pc = 0x180e50u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x180e54: 0x97060006  lhu         $a2, 0x6($t8)
    ctx->pc = 0x180e54u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 6)));
    // 0x180e58: 0x7180b  movn        $v1, $zero, $a3
    ctx->pc = 0x180e58u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x180e5c: 0x97040008  lhu         $a0, 0x8($t8)
    ctx->pc = 0x180e5cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x180e60: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x180e60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x180e64: 0x9702000a  lhu         $v0, 0xA($t8)
    ctx->pc = 0x180e64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10)));
    // 0x180e68: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x180e68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x180e6c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x180e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x180e70: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x180e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x180e74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x180e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x180e78: 0x1045021  addu        $t2, $t0, $a0
    ctx->pc = 0x180e78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x180e7c: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x180e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x180e80: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x180e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x180e84: 0x14e0000c  bnez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x180E84u;
    {
        const bool branch_taken_0x180e84 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x180E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E84u;
        // 0x180e88: 0x2622021  addu        $a0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180e84) {
            ctx->pc = 0x180EB8u;
            goto label_180eb8;
        }
    }
    ctx->pc = 0x180E8Cu;
    // 0x180e8c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x180e8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x180e90: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x180e90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x180e94: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x180e94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x180e98: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x180e98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x180e9c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x180e9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x180ea0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x180ea0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x180ea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x180ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180ea8: 0x46004034  c.lt.s      $f8, $f0
    ctx->pc = 0x180ea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180eac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x180EACu;
    {
        const bool branch_taken_0x180eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180eac) {
            ctx->pc = 0x180ED8u;
            goto label_180ed8;
        }
    }
    ctx->pc = 0x180EB4u;
    // 0x180eb4: 0x0  nop
    ctx->pc = 0x180eb4u;
    // NOP
label_180eb8:
    // 0x180eb8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x180eb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x180ebc: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x180ebcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x180ec0: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x180ec0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x180ec4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x180ec4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x180ec8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x180ec8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x180ecc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x180eccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x180ed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x180ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180ed4: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x180ed4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_180ed8:
    // 0x180ed8: 0x4503012f  bc1tl       . + 4 + (0x12F << 2)
    ctx->pc = 0x180ED8u;
    {
        const bool branch_taken_0x180ed8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180ed8) {
            ctx->pc = 0x180EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180ED8u;
            // 0x180edc: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181398u;
            goto label_181398;
        }
    }
    ctx->pc = 0x180EE0u;
    // 0x180ee0: 0x27ab0010  addiu       $t3, $sp, 0x10
    ctx->pc = 0x180ee0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x180ee4: 0x460061c6  mov.s       $f7, $f12
    ctx->pc = 0x180ee4u;
    ctx->f[7] = FPU_MOV_S(ctx->f[12]);
    // 0x180ee8: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x180ee8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180eec: 0xd8c60000  lqc2        $vf6, 0x0($a2)
    ctx->pc = 0x180eecu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x180ef0: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x180ef0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x180ef4: 0xd9470000  lqc2        $vf7, 0x0($t2)
    ctx->pc = 0x180ef4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x180ef8: 0xd9c40000  lqc2        $vf4, 0x0($t6)
    ctx->pc = 0x180ef8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x180efc: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x180efcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x180f00: 0x4bc6296c  vsub.xyz    $vf5, $vf5, $vf6
    ctx->pc = 0x180f00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x180f04: 0x4bc639ec  vsub.xyz    $vf7, $vf7, $vf6
    ctx->pc = 0x180f04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x180f08: 0x4bc6212c  vsub.xyz    $vf4, $vf4, $vf6
    ctx->pc = 0x180f08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x180f0c: 0x4bc00043  vaddw.xyz   $vf1, $vf0, $vf0w
    ctx->pc = 0x180f0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x180f10: 0x4bc542fe  vopmula.xyz $ACC, $vf8, $vf5
    ctx->pc = 0x180f10u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x180f14: 0x4bc82aae  vopmsub.xyz $vf10, $vf5, $vf8
    ctx->pc = 0x180f14u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x180f18: 0x4bc72afe  vopmula.xyz $ACC, $vf5, $vf7
    ctx->pc = 0x180f18u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x180f1c: 0x4bc53aee  vopmsub.xyz $vf11, $vf7, $vf5
    ctx->pc = 0x180f1cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x180f20: 0x4bc83afe  vopmula.xyz $ACC, $vf7, $vf8
    ctx->pc = 0x180f20u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x180f24: 0x4bc7426e  vopmsub.xyz $vf9, $vf8, $vf7
    ctx->pc = 0x180f24u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x180f28: 0x4bcb432a  vmul.xyz    $vf12, $vf8, $vf11
    ctx->pc = 0x180f28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x180f2c: 0x4bcb23ea  vmul.xyz    $vf15, $vf4, $vf11
    ctx->pc = 0x180f2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x180f30: 0x4bca23aa  vmul.xyz    $vf14, $vf4, $vf10
    ctx->pc = 0x180f30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x180f34: 0x4bc9236a  vmul.xyz    $vf13, $vf4, $vf9
    ctx->pc = 0x180f34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x180f38: 0x4b0c09bc  vmulax.x    $ACC, $vf1, $vf12x
    ctx->pc = 0x180f38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x180f3c: 0x4b0c08bd  vmadday.x   $ACC, $vf1, $vf12y
    ctx->pc = 0x180f3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x180f40: 0x4b0c0b0a  vmaddz.x    $vf12, $vf1, $vf12z
    ctx->pc = 0x180f40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x180f44: 0x4a8e09bc  vmulax.y    $ACC, $vf1, $vf14x
    ctx->pc = 0x180f44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x180f48: 0x4a8e08bd  vmadday.y   $ACC, $vf1, $vf14y
    ctx->pc = 0x180f48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x180f4c: 0x4a8e088a  vmaddz.y    $vf2, $vf1, $vf14z
    ctx->pc = 0x180f4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x180f50: 0x4a6c03bc  vdiv        $Q, $vf0w, $vf12x
    ctx->pc = 0x180f50u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x180f54: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x180f54u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x180f58: 0x4b0d09bc  vmulax.x    $ACC, $vf1, $vf13x
    ctx->pc = 0x180f58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x180f5c: 0x4b0d08bd  vmadday.x   $ACC, $vf1, $vf13y
    ctx->pc = 0x180f5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x180f60: 0x4b0d088a  vmaddz.x    $vf2, $vf1, $vf13z
    ctx->pc = 0x180f60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x180f64: 0x4a4f09bc  vmulax.z    $ACC, $vf1, $vf15x
    ctx->pc = 0x180f64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x180f68: 0x4a4f08bd  vmadday.z   $ACC, $vf1, $vf15y
    ctx->pc = 0x180f68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x180f6c: 0x4a4f088a  vmaddz.z    $vf2, $vf1, $vf15z
    ctx->pc = 0x180f6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x180f70: 0x4a0003bf  vwaitq
    ctx->pc = 0x180f70u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x180f74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x180f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180f78: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x180f78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x180f7c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x180f7cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x180f80: 0x46090034  c.lt.s      $f0, $f9
    ctx->pc = 0x180f80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180f84: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x180F84u;
    {
        const bool branch_taken_0x180f84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x180F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180F84u;
        // 0x180f88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180f84) {
            ctx->pc = 0x180F94u;
            goto label_180f94;
        }
    }
    ctx->pc = 0x180F8Cu;
    // 0x180f8c: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x180f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x180f90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_180f94:
    // 0x180f94: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x180F94u;
    {
        const bool branch_taken_0x180f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180F94u;
        // 0x180f98: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180f94) {
            ctx->pc = 0x181024u;
            goto label_181024;
        }
    }
    ctx->pc = 0x180F9Cu;
    // 0x180f9c: 0xc5650008  lwc1        $f5, 0x8($t3)
    ctx->pc = 0x180f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x180fa0: 0xc5610010  lwc1        $f1, 0x10($t3)
    ctx->pc = 0x180fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180fa4: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x180fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x180fa8: 0x46012902  mul.s       $f4, $f5, $f1
    ctx->pc = 0x180fa8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x180fac: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x180facu;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x180fb0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x180fb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180fb4: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x180FB4u;
    {
        const bool branch_taken_0x180fb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180fb4) {
            ctx->pc = 0x181024u;
            goto label_181024;
        }
    }
    ctx->pc = 0x180FBCu;
    // 0x180fbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x180fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x180fc0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x180fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x180fc4: 0x46062000  add.s       $f0, $f4, $f6
    ctx->pc = 0x180fc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x180fc8: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x180fc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180fcc: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x180FCCu;
    {
        const bool branch_taken_0x180fcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180fcc) {
            ctx->pc = 0x181024u;
            goto label_181024;
        }
    }
    ctx->pc = 0x180FD4u;
    // 0x180fd4: 0xc5610014  lwc1        $f1, 0x14($t3)
    ctx->pc = 0x180fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180fd8: 0xc5620004  lwc1        $f2, 0x4($t3)
    ctx->pc = 0x180fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x180fdc: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x180fdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x180fe0: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x180fe0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x180fe4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x180fe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180fe8: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x180FE8u;
    {
        const bool branch_taken_0x180fe8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180fe8) {
            ctx->pc = 0x181024u;
            goto label_181024;
        }
    }
    ctx->pc = 0x180FF0u;
    // 0x180ff0: 0x46060800  add.s       $f0, $f1, $f6
    ctx->pc = 0x180ff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x180ff4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x180ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180ff8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x180FF8u;
    {
        const bool branch_taken_0x180ff8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180ff8) {
            ctx->pc = 0x181024u;
            goto label_181024;
        }
    }
    ctx->pc = 0x181000u;
    // 0x181000: 0x46021840  add.s       $f1, $f3, $f2
    ctx->pc = 0x181000u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x181004: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x181004u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x181008: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x181008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18100c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x18100Cu;
    {
        const bool branch_taken_0x18100c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18100c) {
            ctx->pc = 0x181024u;
            goto label_181024;
        }
    }
    ctx->pc = 0x181014u;
    // 0x181014: 0x46072834  c.lt.s      $f5, $f7
    ctx->pc = 0x181014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181018: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x181018u;
    {
        const bool branch_taken_0x181018 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181018u;
        // 0x18101c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181018) {
            ctx->pc = 0x181024u;
            goto label_181024;
        }
    }
    ctx->pc = 0x181020u;
    // 0x181020: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x181020u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181024:
    // 0x181024: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x181024u;
    {
        const bool branch_taken_0x181024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x181028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181024u;
        // 0x181028: 0x27ab0030  addiu       $t3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181024) {
            ctx->pc = 0x181068u;
            goto label_181068;
        }
    }
    ctx->pc = 0x18102Cu;
    // 0x18102c: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x18102cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x181030: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x181030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181034: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x181034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181038: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x181038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18103c: 0xade4001c  sw          $a0, 0x1C($t7)
    ctx->pc = 0x18103cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 28), GPR_U32(ctx, 4));
    // 0x181040: 0xadf40000  sw          $s4, 0x0($t7)
    ctx->pc = 0x181040u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 20));
    // 0x181044: 0xade20020  sw          $v0, 0x20($t7)
    ctx->pc = 0x181044u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 32), GPR_U32(ctx, 2));
    // 0x181048: 0xe5e00004  swc1        $f0, 0x4($t7)
    ctx->pc = 0x181048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    // 0x18104c: 0xe5e10008  swc1        $f1, 0x8($t7)
    ctx->pc = 0x18104cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x181050: 0xe5e2000c  swc1        $f2, 0xC($t7)
    ctx->pc = 0x181050u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 12), bits); }
    // 0x181054: 0xade50010  sw          $a1, 0x10($t7)
    ctx->pc = 0x181054u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 5));
    // 0x181058: 0xade60014  sw          $a2, 0x14($t7)
    ctx->pc = 0x181058u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 20), GPR_U32(ctx, 6));
    // 0x18105c: 0xadea0018  sw          $t2, 0x18($t7)
    ctx->pc = 0x18105cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 24), GPR_U32(ctx, 10));
    // 0x181060: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x181060u;
    {
        const bool branch_taken_0x181060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181060u;
        // 0x181064: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181060) {
            ctx->pc = 0x181384u;
            goto label_181384;
        }
    }
    ctx->pc = 0x181068u;
label_181068:
    // 0x181068: 0x460061c6  mov.s       $f7, $f12
    ctx->pc = 0x181068u;
    ctx->f[7] = FPU_MOV_S(ctx->f[12]);
    // 0x18106c: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x18106cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181070: 0xd8c60000  lqc2        $vf6, 0x0($a2)
    ctx->pc = 0x181070u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x181074: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x181074u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x181078: 0xd9470000  lqc2        $vf7, 0x0($t2)
    ctx->pc = 0x181078u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x18107c: 0xd9a40000  lqc2        $vf4, 0x0($t5)
    ctx->pc = 0x18107cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x181080: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x181080u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x181084: 0x4bc6296c  vsub.xyz    $vf5, $vf5, $vf6
    ctx->pc = 0x181084u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x181088: 0x4bc639ec  vsub.xyz    $vf7, $vf7, $vf6
    ctx->pc = 0x181088u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18108c: 0x4bc6212c  vsub.xyz    $vf4, $vf4, $vf6
    ctx->pc = 0x18108cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x181090: 0x4bc00043  vaddw.xyz   $vf1, $vf0, $vf0w
    ctx->pc = 0x181090u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x181094: 0x4bc542fe  vopmula.xyz $ACC, $vf8, $vf5
    ctx->pc = 0x181094u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x181098: 0x4bc82aae  vopmsub.xyz $vf10, $vf5, $vf8
    ctx->pc = 0x181098u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x18109c: 0x4bc72afe  vopmula.xyz $ACC, $vf5, $vf7
    ctx->pc = 0x18109cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1810a0: 0x4bc53aee  vopmsub.xyz $vf11, $vf7, $vf5
    ctx->pc = 0x1810a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1810a4: 0x4bc83afe  vopmula.xyz $ACC, $vf7, $vf8
    ctx->pc = 0x1810a4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1810a8: 0x4bc7426e  vopmsub.xyz $vf9, $vf8, $vf7
    ctx->pc = 0x1810a8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1810ac: 0x4bcb432a  vmul.xyz    $vf12, $vf8, $vf11
    ctx->pc = 0x1810acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1810b0: 0x4bcb23ea  vmul.xyz    $vf15, $vf4, $vf11
    ctx->pc = 0x1810b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x1810b4: 0x4bca23aa  vmul.xyz    $vf14, $vf4, $vf10
    ctx->pc = 0x1810b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1810b8: 0x4bc9236a  vmul.xyz    $vf13, $vf4, $vf9
    ctx->pc = 0x1810b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1810bc: 0x4b0c09bc  vmulax.x    $ACC, $vf1, $vf12x
    ctx->pc = 0x1810bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1810c0: 0x4b0c08bd  vmadday.x   $ACC, $vf1, $vf12y
    ctx->pc = 0x1810c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1810c4: 0x4b0c0b0a  vmaddz.x    $vf12, $vf1, $vf12z
    ctx->pc = 0x1810c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1810c8: 0x4a8e09bc  vmulax.y    $ACC, $vf1, $vf14x
    ctx->pc = 0x1810c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x1810cc: 0x4a8e08bd  vmadday.y   $ACC, $vf1, $vf14y
    ctx->pc = 0x1810ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x1810d0: 0x4a8e088a  vmaddz.y    $vf2, $vf1, $vf14z
    ctx->pc = 0x1810d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1810d4: 0x4a6c03bc  vdiv        $Q, $vf0w, $vf12x
    ctx->pc = 0x1810d4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1810d8: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x1810d8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1810dc: 0x4b0d09bc  vmulax.x    $ACC, $vf1, $vf13x
    ctx->pc = 0x1810dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1810e0: 0x4b0d08bd  vmadday.x   $ACC, $vf1, $vf13y
    ctx->pc = 0x1810e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1810e4: 0x4b0d088a  vmaddz.x    $vf2, $vf1, $vf13z
    ctx->pc = 0x1810e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1810e8: 0x4a4f09bc  vmulax.z    $ACC, $vf1, $vf15x
    ctx->pc = 0x1810e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x1810ec: 0x4a4f08bd  vmadday.z   $ACC, $vf1, $vf15y
    ctx->pc = 0x1810ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x1810f0: 0x4a4f088a  vmaddz.z    $vf2, $vf1, $vf15z
    ctx->pc = 0x1810f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1810f4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1810f4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1810f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1810f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1810fc: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1810fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x181100: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x181100u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x181104: 0x46090034  c.lt.s      $f0, $f9
    ctx->pc = 0x181104u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181108: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x181108u;
    {
        const bool branch_taken_0x181108 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181108u;
        // 0x18110c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181108) {
            ctx->pc = 0x181118u;
            goto label_181118;
        }
    }
    ctx->pc = 0x181110u;
    // 0x181110: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x181110u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x181114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181118:
    // 0x181118: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x181118u;
    {
        const bool branch_taken_0x181118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181118u;
        // 0x18111c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181118) {
            ctx->pc = 0x1811A8u;
            goto label_1811a8;
        }
    }
    ctx->pc = 0x181120u;
    // 0x181120: 0xc5650008  lwc1        $f5, 0x8($t3)
    ctx->pc = 0x181120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x181124: 0xc5610010  lwc1        $f1, 0x10($t3)
    ctx->pc = 0x181124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181128: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x181128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18112c: 0x46012902  mul.s       $f4, $f5, $f1
    ctx->pc = 0x18112cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x181130: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x181130u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x181134: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x181134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181138: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x181138u;
    {
        const bool branch_taken_0x181138 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181138) {
            ctx->pc = 0x1811A8u;
            goto label_1811a8;
        }
    }
    ctx->pc = 0x181140u;
    // 0x181140: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x181140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x181144: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x181144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x181148: 0x46062000  add.s       $f0, $f4, $f6
    ctx->pc = 0x181148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x18114c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x18114cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181150: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x181150u;
    {
        const bool branch_taken_0x181150 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181150) {
            ctx->pc = 0x1811A8u;
            goto label_1811a8;
        }
    }
    ctx->pc = 0x181158u;
    // 0x181158: 0xc5610014  lwc1        $f1, 0x14($t3)
    ctx->pc = 0x181158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18115c: 0xc5620004  lwc1        $f2, 0x4($t3)
    ctx->pc = 0x18115cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x181160: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x181160u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x181164: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x181164u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x181168: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x181168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18116c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x18116Cu;
    {
        const bool branch_taken_0x18116c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18116c) {
            ctx->pc = 0x1811A8u;
            goto label_1811a8;
        }
    }
    ctx->pc = 0x181174u;
    // 0x181174: 0x46060800  add.s       $f0, $f1, $f6
    ctx->pc = 0x181174u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x181178: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x181178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18117c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x18117Cu;
    {
        const bool branch_taken_0x18117c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18117c) {
            ctx->pc = 0x1811A8u;
            goto label_1811a8;
        }
    }
    ctx->pc = 0x181184u;
    // 0x181184: 0x46021840  add.s       $f1, $f3, $f2
    ctx->pc = 0x181184u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x181188: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x181188u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x18118c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18118cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181190: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x181190u;
    {
        const bool branch_taken_0x181190 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181190) {
            ctx->pc = 0x1811A8u;
            goto label_1811a8;
        }
    }
    ctx->pc = 0x181198u;
    // 0x181198: 0x46072834  c.lt.s      $f5, $f7
    ctx->pc = 0x181198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18119c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18119Cu;
    {
        const bool branch_taken_0x18119c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1811A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18119Cu;
        // 0x1811a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18119c) {
            ctx->pc = 0x1811A8u;
            goto label_1811a8;
        }
    }
    ctx->pc = 0x1811A4u;
    // 0x1811a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1811a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1811a8:
    // 0x1811a8: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1811A8u;
    {
        const bool branch_taken_0x1811a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1811ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811A8u;
        // 0x1811ac: 0xc7a20018  lwc1        $f2, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1811a8) {
            ctx->pc = 0x1811F8u;
            goto label_1811f8;
        }
    }
    ctx->pc = 0x1811B0u;
    // 0x1811b0: 0x14e00012  bnez        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1811B0u;
    {
        const bool branch_taken_0x1811b0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1811B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811B0u;
        // 0x1811b4: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1811b0) {
            ctx->pc = 0x1811FCu;
            goto label_1811fc;
        }
    }
    ctx->pc = 0x1811B8u;
    // 0x1811b8: 0x8d83000c  lw          $v1, 0xC($t4)
    ctx->pc = 0x1811b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x1811bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1811bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1811c0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1811c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1811c4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1811c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1811c8: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1811c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1811cc: 0xade4001c  sw          $a0, 0x1C($t7)
    ctx->pc = 0x1811ccu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 28), GPR_U32(ctx, 4));
    // 0x1811d0: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x1811d0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x1811d4: 0xade30020  sw          $v1, 0x20($t7)
    ctx->pc = 0x1811d4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 32), GPR_U32(ctx, 3));
    // 0x1811d8: 0xe5e00004  swc1        $f0, 0x4($t7)
    ctx->pc = 0x1811d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    // 0x1811dc: 0xe5e10008  swc1        $f1, 0x8($t7)
    ctx->pc = 0x1811dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x1811e0: 0xe5e2000c  swc1        $f2, 0xC($t7)
    ctx->pc = 0x1811e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 12), bits); }
    // 0x1811e4: 0xade50010  sw          $a1, 0x10($t7)
    ctx->pc = 0x1811e4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 5));
    // 0x1811e8: 0xade60014  sw          $a2, 0x14($t7)
    ctx->pc = 0x1811e8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 20), GPR_U32(ctx, 6));
    // 0x1811ec: 0xadea0018  sw          $t2, 0x18($t7)
    ctx->pc = 0x1811ecu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 24), GPR_U32(ctx, 10));
    // 0x1811f0: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1811F0u;
    {
        const bool branch_taken_0x1811f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1811F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811F0u;
        // 0x1811f4: 0xafa30074  sw          $v1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1811f0) {
            ctx->pc = 0x181384u;
            goto label_181384;
        }
    }
    ctx->pc = 0x1811F8u;
label_1811f8:
    // 0x1811f8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1811f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1811fc:
    // 0x1811fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1811fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181200: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x181200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x181204: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x181204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181208: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x181208u;
    {
        const bool branch_taken_0x181208 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181208u;
        // 0x18120c: 0x27ab0050  addiu       $t3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181208) {
            ctx->pc = 0x181220u;
            goto label_181220;
        }
    }
    ctx->pc = 0x181210u;
    // 0x181210: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x181210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181214: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x181214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181218: 0x45030039  bc1tl       . + 4 + (0x39 << 2)
    ctx->pc = 0x181218u;
    {
        const bool branch_taken_0x181218 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181218) {
            ctx->pc = 0x18121Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181218u;
            // 0x18121c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181300u;
            goto label_181300;
        }
    }
    ctx->pc = 0x181220u;
label_181220:
    // 0x181220: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x181220u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181224: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x181224u;
    {
        const bool branch_taken_0x181224 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x181224) {
            ctx->pc = 0x181228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181224u;
            // 0x181228: 0xc4610008  lwc1        $f1, 0x8($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x181240u;
            goto label_181240;
        }
    }
    ctx->pc = 0x18122Cu;
    // 0x18122c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x18122cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181230: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x181230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181234: 0x45030032  bc1tl       . + 4 + (0x32 << 2)
    ctx->pc = 0x181234u;
    {
        const bool branch_taken_0x181234 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181234) {
            ctx->pc = 0x181238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181234u;
            // 0x181238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181300u;
            goto label_181300;
        }
    }
    ctx->pc = 0x18123Cu;
    // 0x18123c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x18123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_181240:
    // 0x181240: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x181240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181244: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x181244u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181248: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x181248u;
    {
        const bool branch_taken_0x181248 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x181248) {
            ctx->pc = 0x181268u;
            goto label_181268;
        }
    }
    ctx->pc = 0x181250u;
    // 0x181250: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x181250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181258: 0xe5610000  swc1        $f1, 0x0($t3)
    ctx->pc = 0x181258u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x18125c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x18125cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181260: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x181260u;
    {
        const bool branch_taken_0x181260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181260u;
        // 0x181264: 0xe5600004  swc1        $f0, 0x4($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x181260) {
            ctx->pc = 0x181300u;
            goto label_181300;
        }
    }
    ctx->pc = 0x181268u;
label_181268:
    // 0x181268: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x181268u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18126c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x18126cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x181270: 0xd9640000  lqc2        $vf4, 0x0($t3)
    ctx->pc = 0x181270u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x181274: 0x4a421946  vsubz.z     $vf5, $vf3, $vf2z
    ctx->pc = 0x181274u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x181278: 0x4b6503bc  vdiv        $Q, $vf0w, $vf5z
    ctx->pc = 0x181278u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,2))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x18127c: 0x4b03119a  vmulz.x     $vf6, $vf2, $vf3z
    ctx->pc = 0x18127cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x181280: 0x4b0219da  vmulz.x     $vf7, $vf3, $vf2z
    ctx->pc = 0x181280u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x181284: 0x4b073284  vsubx.x     $vf10, $vf6, $vf7x
    ctx->pc = 0x181284u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x181288: 0x4a83121a  vmulz.y     $vf8, $vf2, $vf3z
    ctx->pc = 0x181288u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x18128c: 0x4a821a5a  vmulz.y     $vf9, $vf3, $vf2z
    ctx->pc = 0x18128cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x181290: 0x4a8942c5  vsuby.y     $vf11, $vf8, $vf9y
    ctx->pc = 0x181290u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x181294: 0x4a0003bf  vwaitq
    ctx->pc = 0x181294u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x181298: 0x4b00511c  vmulq.x     $vf4, $vf10, $Q
    ctx->pc = 0x181298u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18129c: 0x4a80591c  vmulq.y     $vf4, $vf11, $Q
    ctx->pc = 0x18129cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1812a0: 0xf9640000  sqc2        $vf4, 0x0($t3)
    ctx->pc = 0x1812a0u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1812a4: 0x3c01bb80  lui         $at, 0xBB80
    ctx->pc = 0x1812a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48000 << 16));
    // 0x1812a8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1812a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1812ac: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x1812acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1812b0: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x1812b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1812b4: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
    ctx->pc = 0x1812B4u;
    {
        const bool branch_taken_0x1812b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1812b4) {
            ctx->pc = 0x1812B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1812B4u;
            // 0x1812b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181300u;
            goto label_181300;
        }
    }
    ctx->pc = 0x1812BCu;
    // 0x1812bc: 0xc782856c  lwc1        $f2, -0x7A94($gp)
    ctx->pc = 0x1812bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1812c0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1812c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1812c4: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
    ctx->pc = 0x1812C4u;
    {
        const bool branch_taken_0x1812c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1812c4) {
            ctx->pc = 0x1812C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1812C4u;
            // 0x1812c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181300u;
            goto label_181300;
        }
    }
    ctx->pc = 0x1812CCu;
    // 0x1812cc: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x1812ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1812d0: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1812d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1812d4: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x1812D4u;
    {
        const bool branch_taken_0x1812d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1812d4) {
            ctx->pc = 0x1812D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1812D4u;
            // 0x1812d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181300u;
            goto label_181300;
        }
    }
    ctx->pc = 0x1812DCu;
    // 0x1812dc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1812dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1812e0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1812E0u;
    {
        const bool branch_taken_0x1812e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1812e0) {
            ctx->pc = 0x1812E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1812E0u;
            // 0x1812e4: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1812F0u;
            goto label_1812f0;
        }
    }
    ctx->pc = 0x1812E8u;
    // 0x1812e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1812E8u;
    {
        const bool branch_taken_0x1812e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1812ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1812E8u;
        // 0x1812ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1812e8) {
            ctx->pc = 0x181300u;
            goto label_181300;
        }
    }
    ctx->pc = 0x1812F0u;
label_1812f0:
    // 0x1812f0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1812f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1812f4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1812F4u;
    {
        const bool branch_taken_0x1812f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1812F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1812F4u;
        // 0x1812f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1812f4) {
            ctx->pc = 0x181300u;
            goto label_181300;
        }
    }
    ctx->pc = 0x1812FCu;
    // 0x1812fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1812fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181300:
    // 0x181300: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x181300u;
    {
        const bool branch_taken_0x181300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181300) {
            ctx->pc = 0x181304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181300u;
            // 0x181304: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181398u;
            goto label_181398;
        }
    }
    ctx->pc = 0x181308u;
    // 0x181308: 0x54e00011  bnel        $a3, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x181308u;
    {
        const bool branch_taken_0x181308 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x181308) {
            ctx->pc = 0x18130Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181308u;
            // 0x18130c: 0x8d82000c  lw          $v0, 0xC($t4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181350u;
            goto label_181350;
        }
    }
    ctx->pc = 0x181310u;
    // 0x181310: 0x8d83000c  lw          $v1, 0xC($t4)
    ctx->pc = 0x181310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x181314: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x181314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x181318: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x181318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18131c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x18131cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181320: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x181320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x181324: 0xade4001c  sw          $a0, 0x1C($t7)
    ctx->pc = 0x181324u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 28), GPR_U32(ctx, 4));
    // 0x181328: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x181328u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x18132c: 0xade30020  sw          $v1, 0x20($t7)
    ctx->pc = 0x18132cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 32), GPR_U32(ctx, 3));
    // 0x181330: 0xe5e00004  swc1        $f0, 0x4($t7)
    ctx->pc = 0x181330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    // 0x181334: 0xe5e10008  swc1        $f1, 0x8($t7)
    ctx->pc = 0x181334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x181338: 0xe5e2000c  swc1        $f2, 0xC($t7)
    ctx->pc = 0x181338u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 12), bits); }
    // 0x18133c: 0xade50010  sw          $a1, 0x10($t7)
    ctx->pc = 0x18133cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 5));
    // 0x181340: 0xade60014  sw          $a2, 0x14($t7)
    ctx->pc = 0x181340u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 20), GPR_U32(ctx, 6));
    // 0x181344: 0xadea0018  sw          $t2, 0x18($t7)
    ctx->pc = 0x181344u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 24), GPR_U32(ctx, 10));
    // 0x181348: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x181348u;
    {
        const bool branch_taken_0x181348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181348u;
        // 0x18134c: 0xafa30078  sw          $v1, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181348) {
            ctx->pc = 0x181384u;
            goto label_181384;
        }
    }
    ctx->pc = 0x181350u;
label_181350:
    // 0x181350: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x181350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181354: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x181354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181358: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x181358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18135c: 0xade4001c  sw          $a0, 0x1C($t7)
    ctx->pc = 0x18135cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 28), GPR_U32(ctx, 4));
    // 0x181360: 0xadf40000  sw          $s4, 0x0($t7)
    ctx->pc = 0x181360u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 20));
    // 0x181364: 0xade20020  sw          $v0, 0x20($t7)
    ctx->pc = 0x181364u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 32), GPR_U32(ctx, 2));
    // 0x181368: 0xe5e00004  swc1        $f0, 0x4($t7)
    ctx->pc = 0x181368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    // 0x18136c: 0xe5e10008  swc1        $f1, 0x8($t7)
    ctx->pc = 0x18136cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x181370: 0xe5e2000c  swc1        $f2, 0xC($t7)
    ctx->pc = 0x181370u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 12), bits); }
    // 0x181374: 0xade50010  sw          $a1, 0x10($t7)
    ctx->pc = 0x181374u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 5));
    // 0x181378: 0xade60014  sw          $a2, 0x14($t7)
    ctx->pc = 0x181378u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 20), GPR_U32(ctx, 6));
    // 0x18137c: 0xadea0018  sw          $t2, 0x18($t7)
    ctx->pc = 0x18137cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 24), GPR_U32(ctx, 10));
    // 0x181380: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x181380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_181384:
    // 0x181384: 0x55200001  bnel        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x181384u;
    {
        const bool branch_taken_0x181384 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x181384) {
            ctx->pc = 0x181388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181384u;
            // 0x181388: 0xad390000  sw          $t9, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 25));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18138Cu;
            goto label_18138c;
        }
    }
    ctx->pc = 0x18138Cu;
label_18138c:
    // 0x18138c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18138Cu;
    {
        const bool branch_taken_0x18138c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18138Cu;
        // 0x181390: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18138c) {
            ctx->pc = 0x1813B0u;
            goto label_1813b0;
        }
    }
    ctx->pc = 0x181394u;
    // 0x181394: 0x0  nop
    ctx->pc = 0x181394u;
    // NOP
label_181398:
    // 0x181398: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x181398u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x18139c: 0x258c0030  addiu       $t4, $t4, 0x30
    ctx->pc = 0x18139cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 48));
    // 0x1813a0: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x1813a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1813a4: 0x1440fe46  bnez        $v0, . + 4 + (-0x1BA << 2)
    ctx->pc = 0x1813A4u;
    {
        const bool branch_taken_0x1813a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1813A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1813A4u;
        // 0x1813a8: 0x27180010  addiu       $t8, $t8, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1813a4) {
            ctx->pc = 0x180CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180cc0;
        }
    }
    ctx->pc = 0x1813ACu;
    // 0x1813ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1813acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1813b0:
    // 0x1813b0: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1813b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1813b4: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x1813b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1813b8: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1813b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1813bc: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x1813bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1813c0: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1813c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1813c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1813C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1813C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1813C4u;
        // 0x1813c8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1813C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1813CCu;
}
