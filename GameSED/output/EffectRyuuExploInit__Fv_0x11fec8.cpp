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

// Function: EffectRyuuExploInit__Fv
// Address: 0x11fec8 - 0x12012c
void EffectRyuuExploInit__Fv_0x11fec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectRyuuExploInit__Fv_0x11fec8");
#endif

    switch (ctx->pc) {
        case 0x11ff30u: goto label_11ff30;
        case 0x11ff3cu: goto label_11ff3c;
        case 0x11ffb8u: goto label_11ffb8;
        case 0x11ffc4u: goto label_11ffc4;
        case 0x120040u: goto label_120040;
        case 0x12004cu: goto label_12004c;
        case 0x1200c8u: goto label_1200c8;
        case 0x1200d4u: goto label_1200d4;
        default: break;
    }

    ctx->pc = 0x11fec8u;

    // 0x11fec8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11fec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11fecc: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11feccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11fed0: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x11fed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x11fed4: 0x24517260  addiu       $s1, $v0, 0x7260
    ctx->pc = 0x11fed4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29280));
    // 0x11fed8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x11fed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x11fedc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x11fedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11fee0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x11fee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x11fee4: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x11fee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x11fee8: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x11fee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x11feec: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x11feecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x11fef0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11fef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fef4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11fef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11fef8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11fef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11fefc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x11fefcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11ff00: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x11ff00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11ff04: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x11ff04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x11ff08: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x11ff08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x11ff0c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x11ff0cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x11ff10: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x11ff10u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x11ff14: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x11ff14u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x11ff18: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x11ff18u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x11ff1c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x11ff1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff20: 0x24142000  addiu       $s4, $zero, 0x2000
    ctx->pc = 0x11ff20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x11ff24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11ff24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff28: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x11ff28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11ff2c: 0x0  nop
    ctx->pc = 0x11ff2cu;
    // NOP
label_11ff30:
    // 0x11ff30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11ff30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff34: 0xc067b12  jal         func_19EC48
    ctx->pc = 0x11FF34u;
    SET_GPR_U32(ctx, 31, 0x11FF3Cu);
    ctx->pc = 0x11FF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FF34u;
    // 0x11ff38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC48u, 0x11FF34u, 0x11FF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FF3Cu;
label_11ff3c:
    // 0x11ff3c: 0xda680000  lqc2        $vf8, 0x0($s3)
    ctx->pc = 0x11ff3cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x11ff40: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x11ff40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ff44: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x11ff44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ff48: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x11ff48u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ff4c: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x11ff4cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ff50: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x11ff50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11ff54: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x11ff54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11ff58: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x11ff58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11ff5c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x11ff5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x11ff60: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x11ff60u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x11ff64: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x11ff64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x11ff68: 0x2549021  addu        $s2, $s2, $s4
    ctx->pc = 0x11ff68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x11ff6c: 0x601fff0  bgez        $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11FF6Cu;
    {
        const bool branch_taken_0x11ff6c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF6Cu;
        // 0x11ff70: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ff6c) {
            ctx->pc = 0x11FF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ff30;
        }
    }
    ctx->pc = 0x11FF74u;
    // 0x11ff74: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x11ff74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11ff78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11ff78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ff7c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x11ff7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x11ff80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11ff80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ff84: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x11ff84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11ff88: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x11ff88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11ff8c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x11ff8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x11ff90: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x11ff90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x11ff94: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x11ff94u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x11ff98: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x11ff98u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x11ff9c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x11ff9cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x11ffa0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x11ffa0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x11ffa4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x11ffa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffa8: 0x24141000  addiu       $s4, $zero, 0x1000
    ctx->pc = 0x11ffa8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x11ffac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11ffacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffb0: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x11ffb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x11ffb4: 0x0  nop
    ctx->pc = 0x11ffb4u;
    // NOP
label_11ffb8:
    // 0x11ffb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11ffb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffbc: 0xc067b12  jal         func_19EC48
    ctx->pc = 0x11FFBCu;
    SET_GPR_U32(ctx, 31, 0x11FFC4u);
    ctx->pc = 0x11FFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FFBCu;
    // 0x11ffc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC48u, 0x11FFBCu, 0x11FFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FFC4u;
label_11ffc4:
    // 0x11ffc4: 0xda680000  lqc2        $vf8, 0x0($s3)
    ctx->pc = 0x11ffc4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x11ffc8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x11ffc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ffcc: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x11ffccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ffd0: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x11ffd0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ffd4: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x11ffd4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ffd8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x11ffd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11ffdc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x11ffdcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11ffe0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x11ffe0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11ffe4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x11ffe4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x11ffe8: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x11ffe8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x11ffec: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x11ffecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x11fff0: 0x2549021  addu        $s2, $s2, $s4
    ctx->pc = 0x11fff0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x11fff4: 0x601fff0  bgez        $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11FFF4u;
    {
        const bool branch_taken_0x11fff4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFF4u;
        // 0x11fff8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fff4) {
            ctx->pc = 0x11FFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ffb8;
        }
    }
    ctx->pc = 0x11FFFCu;
    // 0x11fffc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x11fffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x120000: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x120000u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120004: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x120004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x120008: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x120008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12000c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12000cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x120010: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x120010u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x120014: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x120014u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x120018: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x120018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12001c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12001cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x120020: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x120020u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x120024: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x120024u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x120028: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x120028u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x12002c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12002cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120030: 0x24140aaa  addiu       $s4, $zero, 0xAAA
    ctx->pc = 0x120030u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2730));
    // 0x120034: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x120034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120038: 0x2410000b  addiu       $s0, $zero, 0xB
    ctx->pc = 0x120038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x12003c: 0x0  nop
    ctx->pc = 0x12003cu;
    // NOP
label_120040:
    // 0x120040: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x120040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120044: 0xc067b12  jal         func_19EC48
    ctx->pc = 0x120044u;
    SET_GPR_U32(ctx, 31, 0x12004Cu);
    ctx->pc = 0x120048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120044u;
    // 0x120048: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC48u, 0x120044u, 0x12004Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12004Cu;
label_12004c:
    // 0x12004c: 0xda680000  lqc2        $vf8, 0x0($s3)
    ctx->pc = 0x12004cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x120050: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x120050u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120054: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x120054u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120058: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x120058u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12005c: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x12005cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x120060: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x120060u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x120064: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x120064u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x120068: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x120068u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12006c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12006cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x120070: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x120070u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x120074: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x120074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x120078: 0x2549021  addu        $s2, $s2, $s4
    ctx->pc = 0x120078u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x12007c: 0x601fff0  bgez        $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x12007Cu;
    {
        const bool branch_taken_0x12007c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x120080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12007Cu;
        // 0x120080: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12007c) {
            ctx->pc = 0x120040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120040;
        }
    }
    ctx->pc = 0x120084u;
    // 0x120084: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x120084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x120088: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x120088u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12008c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x12008cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x120090: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x120090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x120094: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x120094u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x120098: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x120098u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12009c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x12009cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1200a0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1200a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1200a4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1200a4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1200a8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1200a8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1200ac: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1200acu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1200b0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1200b0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1200b4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1200b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200b8: 0x24140800  addiu       $s4, $zero, 0x800
    ctx->pc = 0x1200b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1200bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1200bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200c0: 0x2410000f  addiu       $s0, $zero, 0xF
    ctx->pc = 0x1200c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1200c4: 0x0  nop
    ctx->pc = 0x1200c4u;
    // NOP
label_1200c8:
    // 0x1200c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1200c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200cc: 0xc067b12  jal         func_19EC48
    ctx->pc = 0x1200CCu;
    SET_GPR_U32(ctx, 31, 0x1200D4u);
    ctx->pc = 0x1200D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1200CCu;
    // 0x1200d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC48u, 0x1200CCu, 0x1200D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1200D4u;
label_1200d4:
    // 0x1200d4: 0xda680000  lqc2        $vf8, 0x0($s3)
    ctx->pc = 0x1200d4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1200d8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1200d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1200dc: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x1200dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1200e0: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x1200e0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1200e4: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x1200e4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1200e8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1200e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1200ec: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1200ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1200f0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1200f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1200f4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1200f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1200f8: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x1200f8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1200fc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1200fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x120100: 0x2549021  addu        $s2, $s2, $s4
    ctx->pc = 0x120100u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x120104: 0x601fff0  bgez        $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x120104u;
    {
        const bool branch_taken_0x120104 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x120108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120104u;
        // 0x120108: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120104) {
            ctx->pc = 0x1200C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1200c8;
        }
    }
    ctx->pc = 0x12010Cu;
    // 0x12010c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x12010cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x120110: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x120110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x120114: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x120114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x120118: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x120118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12011c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x12011cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x120120: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x120120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120124: 0x3e00008  jr          $ra
    ctx->pc = 0x120124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120124u;
        // 0x120128: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12012Cu;
}
