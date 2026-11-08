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

// Function: entry_0016ba60
// Address: 0x16ba60 - 0x16bb40
void entry_0016ba60_0x16ba60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ba60_0x16ba60");
#endif

    ctx->pc = 0x16ba60u;

    // 0x16ba60: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x16ba60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ba64: 0xc4e2000c  lwc1        $f2, 0xC($a3)
    ctx->pc = 0x16ba64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16ba68: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x16ba68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x16ba6c: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x16ba6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ba70: 0xe5230008  swc1        $f3, 0x8($t1)
    ctx->pc = 0x16ba70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x16ba74: 0xe5210004  swc1        $f1, 0x4($t1)
    ctx->pc = 0x16ba74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x16ba78: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x16ba78u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x16ba7c: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x16ba7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x16ba80: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x16ba80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16ba84: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16ba84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16ba88: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x16ba88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ba8c: 0xf9210000  sqc2        $vf1, 0x0($t1)
    ctx->pc = 0x16ba8cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16ba90: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x16ba90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x16ba94: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x16ba94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x16ba98: 0x91e50007  lbu         $a1, 0x7($t7)
    ctx->pc = 0x16ba98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 7)));
    // 0x16ba9c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x16ba9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16baa0: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x16baa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x16baa4: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x16baa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x16baa8: 0x93a20083  lbu         $v0, 0x83($sp)
    ctx->pc = 0x16baa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 131)));
    // 0x16baac: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x16baacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16bab0: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x16bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    // 0x16bab4: 0xa3a20083  sb          $v0, 0x83($sp)
    ctx->pc = 0x16bab4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 131), (uint8_t)GPR_U32(ctx, 2));
    // 0x16bab8: 0x8f030000  lw          $v1, 0x0($t8)
    ctx->pc = 0x16bab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x16babc: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x16babcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x16bac0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x16bac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x16bac4: 0xfc940008  sd          $s4, 0x8($a0)
    ctx->pc = 0x16bac4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 20));
    // 0x16bac8: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x16bac8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16bacc: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x16baccu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    // 0x16bad0: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x16bad0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x16bad4: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x16bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x16bad8: 0x500019  multu       $v0, $s0
    ctx->pc = 0x16bad8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x16badc: 0x1812  mflo        $v1
    ctx->pc = 0x16badcu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x16bae0: 0x1010  mfhi        $v0
    ctx->pc = 0x16bae0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x16bae4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x16bae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x16bae8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x16bae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x16baec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x16baecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x16baf0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16baf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16baf4: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x16baf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x16baf8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x16baf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x16bafc: 0x704d10e8  pminw       $v0, $v0, $t5
    ctx->pc = 0x16bafcu;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 13)));
    // 0x16bb00: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x16bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x16bb04: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x16bb04u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
    // 0x16bb08: 0xb5840  sll         $t3, $t3, 1
    ctx->pc = 0x16bb08u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x16bb0c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x16bb0cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x16bb10: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x16bb10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x16bb14: 0x91c20000  lbu         $v0, 0x0($t6)
    ctx->pc = 0x16bb14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x16bb18: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x16bb18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x16bb1c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x16bb1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x16bb20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16BB20u;
    {
        const bool branch_taken_0x16bb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB20u;
        // 0x16bb24: 0x1791824  and         $v1, $t3, $t9 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb20) {
            ctx->pc = 0x16BB40u;
            return;
        }
    }
    ctx->pc = 0x16BB28u;
    // 0x16bb28: 0xad28000c  sw          $t0, 0xC($t1)
    ctx->pc = 0x16bb28u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 8));
    // 0x16bb2c: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x16BB2Cu;
    {
        const bool branch_taken_0x16bb2c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB2Cu;
        // 0x16bb30: 0x356b0001  ori         $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb2c) {
            ctx->pc = 0x16BB48u;
            return;
        }
    }
    ctx->pc = 0x16BB34u;
    // 0x16bb34: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x16BB34u;
    {
        const bool branch_taken_0x16bb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB34u;
        // 0x16bb38: 0x8e420094  lw          $v0, 0x94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb34) {
            ctx->pc = 0x16BC50u;
            return;
        }
    }
    ctx->pc = 0x16BB3Cu;
    // 0x16bb3c: 0x0  nop
    ctx->pc = 0x16bb3cu;
    // NOP
    ctx->pc = 0x16bb40u;
}
