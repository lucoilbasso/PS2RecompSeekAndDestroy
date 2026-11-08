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

// Function: entry_0011ffb8
// Address: 0x11ffb8 - 0x120040
void entry_0011ffb8_0x11ffb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ffb8_0x11ffb8");
#endif

    switch (ctx->pc) {
        case 0x11ffc4u: goto label_11ffc4;
        default: break;
    }

    ctx->pc = 0x11ffb8u;

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
    ctx->pc = 0x120040u;
}
