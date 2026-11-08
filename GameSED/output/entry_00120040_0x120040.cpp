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

// Function: entry_00120040
// Address: 0x120040 - 0x1200c8
void entry_00120040_0x120040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120040_0x120040");
#endif

    switch (ctx->pc) {
        case 0x12004cu: goto label_12004c;
        default: break;
    }

    ctx->pc = 0x120040u;

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
    ctx->pc = 0x1200c8u;
}
