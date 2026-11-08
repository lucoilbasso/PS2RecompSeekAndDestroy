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

// Function: entry_00133c64
// Address: 0x133c64 - 0x133d70
void entry_00133c64_0x133c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133c64_0x133c64");
#endif

    switch (ctx->pc) {
        case 0x133c6cu: goto label_133c6c;
        case 0x133d20u: goto label_133d20;
        default: break;
    }

    ctx->pc = 0x133c64u;

label_133c64:
    // 0x133c64: 0xc061422  jal         func_185088
label_133c68:
    if (ctx->pc == 0x133C68u) {
        ctx->pc = 0x133C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C64u;
        // 0x133c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133C6Cu;
        goto label_133c6c;
    }
    ctx->pc = 0x133C64u;
    SET_GPR_U32(ctx, 31, 0x133C6Cu);
    ctx->pc = 0x133C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C64u;
    // 0x133c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x133C64u, 0x133C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C6Cu;
label_133c6c:
    // 0x133c6c: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x133c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_133c70:
    // 0x133c70: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x133c70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_133c74:
    // 0x133c74: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x133c74u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_133c78:
    // 0x133c78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x133c78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_133c7c:
    // 0x133c7c: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x133c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_133c80:
    // 0x133c80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x133c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_133c84:
    // 0x133c84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x133c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_133c88:
    // 0x133c88: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x133c88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_133c8c:
    // 0x133c8c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x133c8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_133c90:
    // 0x133c90: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x133c90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_133c94:
    // 0x133c94: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x133c94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_133c98:
    // 0x133c98: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x133c98u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_133c9c:
    // 0x133c9c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x133c9cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_133ca0:
    // 0x133ca0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x133ca0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_133ca4:
    // 0x133ca4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x133ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_133ca8:
    // 0x133ca8: 0x268600e0  addiu       $a2, $s4, 0xE0
    ctx->pc = 0x133ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
label_133cac:
    // 0x133cac: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x133cacu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_133cb0:
    // 0x133cb0: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x133cb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_133cb4:
    // 0x133cb4: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x133cb4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_133cb8:
    // 0x133cb8: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x133cb8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_133cbc:
    // 0x133cbc: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x133cbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_133cc0:
    // 0x133cc0: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x133cc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_133cc4:
    // 0x133cc4: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x133cc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_133cc8:
    // 0x133cc8: 0xfa080000  sqc2        $vf8, 0x0($s0)
    ctx->pc = 0x133cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[8]));
label_133ccc:
    // 0x133ccc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x133cccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_133cd0:
    // 0x133cd0: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x133cd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_133cd4:
    // 0x133cd4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x133cd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_133cd8:
    // 0x133cd8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x133cd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_133cdc:
    // 0x133cdc: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x133cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_133ce0:
    // 0x133ce0: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x133ce0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_133ce4:
    // 0x133ce4: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x133ce4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_133ce8:
    // 0x133ce8: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x133ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_133cec:
    // 0x133cec: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x133cecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_133cf0:
    // 0x133cf0: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x133cf0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_133cf4:
    // 0x133cf4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x133cf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_133cf8:
    // 0x133cf8: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x133cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_133cfc:
    // 0x133cfc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x133cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_133d00:
    // 0x133d00: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x133d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_133d04:
    // 0x133d04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x133d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133d08:
    // 0x133d08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x133d08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133d0c:
    // 0x133d0c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x133d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_133d10:
    // 0x133d10: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x133d10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_133d14:
    // 0x133d14: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x133d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_133d18:
    // 0x133d18: 0x40f809  jalr        $v0
label_133d1c:
    if (ctx->pc == 0x133D1Cu) {
        ctx->pc = 0x133D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D18u;
        // 0x133d1c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D20u;
        goto label_133d20;
    }
    ctx->pc = 0x133D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133D20u);
        ctx->pc = 0x133D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D18u;
        // 0x133d1c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133D18u, 0x133D20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x133D20u;
label_133d20:
    // 0x133d20: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_133d24:
    if (ctx->pc == 0x133D24u) {
        ctx->pc = 0x133D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D20u;
        // 0x133d24: 0x96630000  lhu         $v1, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D28u;
        goto label_133d28;
    }
    ctx->pc = 0x133D20u;
    {
        const bool branch_taken_0x133d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133d20) {
            ctx->pc = 0x133D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133D20u;
            // 0x133d24: 0x96630000  lhu         $v1, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133D70u;
            return;
        }
    }
    ctx->pc = 0x133D28u;
label_133d28:
    // 0x133d28: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x133d28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_133d2c:
    // 0x133d2c: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x133d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_133d30:
    // 0x133d30: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x133d30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_133d34:
    // 0x133d34: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x133d34u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_133d38:
    // 0x133d38: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x133d38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_133d3c:
    // 0x133d3c: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x133d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_133d40:
    // 0x133d40: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x133d40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_133d44:
    // 0x133d44: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x133d44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_133d48:
    // 0x133d48: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x133d48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_133d4c:
    // 0x133d4c: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x133d4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_133d50:
    // 0x133d50: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x133d50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_133d54:
    // 0x133d54: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x133d54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_133d58:
    // 0x133d58: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x133d58u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_133d5c:
    // 0x133d5c: 0x4a0003bf  vwaitq
    ctx->pc = 0x133d5cu;
    // VWAITQ (Q already resolved in this runtime)
label_133d60:
    // 0x133d60: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x133d60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_133d64:
    // 0x133d64: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x133d64u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
label_133d68:
    // 0x133d68: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x133d68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_133d6c:
    // 0x133d6c: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x133d6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->pc = 0x133d70u;
}
