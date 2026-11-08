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

// Function: entry_00138000
// Address: 0x138000 - 0x1380b0
void entry_00138000_0x138000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138000_0x138000");
#endif

    switch (ctx->pc) {
        case 0x138068u: goto label_138068;
        default: break;
    }

    ctx->pc = 0x138000u;

label_138000:
    // 0x138000: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x138000u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x138004: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x138004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x138008: 0x0  nop
    ctx->pc = 0x138008u;
    // NOP
    // 0x13800c: 0x0  nop
    ctx->pc = 0x13800cu;
    // NOP
    // 0x138010: 0x0  nop
    ctx->pc = 0x138010u;
    // NOP
    // 0x138014: 0x661fffa  bgez        $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x138014u;
    {
        const bool branch_taken_0x138014 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x138018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138014u;
        // 0x138018: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138014) {
            ctx->pc = 0x138000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138000;
        }
    }
    ctx->pc = 0x13801Cu;
    // 0x13801c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13801cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x138020: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x138020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138024: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x138024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x138028: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x138028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13802c: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x13802cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x138030: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x138030u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138034: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x138034u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x138038: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x138038u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x13803c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x13803cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x138040: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x138040u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x138044: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x138044u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x138048: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x138048u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13804c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x13804cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x138050: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x138050u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x138054: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x138054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138058: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x138058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13805c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x13805cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138060: 0xc04dd4a  jal         func_137528
    ctx->pc = 0x138060u;
    SET_GPR_U32(ctx, 31, 0x138068u);
    ctx->pc = 0x138064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138060u;
    // 0x138064: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137528u, 0x138060u, 0x138068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138068u;
label_138068:
    // 0x138068: 0x18400090  blez        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x138068u;
    {
        const bool branch_taken_0x138068 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138068u;
        // 0x13806c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138068) {
            ctx->pc = 0x1382ACu;
            return;
        }
    }
    ctx->pc = 0x138070u;
    // 0x138070: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x138070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x138074: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x138074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x138078: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x138078u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13807c: 0x2463bc50  addiu       $v1, $v1, -0x43B0
    ctx->pc = 0x13807cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949968));
    // 0x138080: 0x8c620400  lw          $v0, 0x400($v1)
    ctx->pc = 0x138080u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC050u));
    // 0x138084: 0x18400087  blez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x138084u;
    {
        const bool branch_taken_0x138084 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x138088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138084u;
        // 0x138088: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138084) {
            ctx->pc = 0x1382A4u;
            return;
        }
    }
    ctx->pc = 0x13808Cu;
    // 0x13808c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x13808cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x138090: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x138090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x138094: 0x245ea390  addiu       $fp, $v0, -0x5C70
    ctx->pc = 0x138094u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943632));
    // 0x138098: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x138098u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13809c: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x13809cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1380a0: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x1380a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1380a4: 0x3c140020  lui         $s4, 0x20
    ctx->pc = 0x1380a4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32 << 16));
    // 0x1380a8: 0x2694bc50  addiu       $s4, $s4, -0x43B0
    ctx->pc = 0x1380a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949968));
    // 0x1380ac: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1380acu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1FBC50u));
    ctx->pc = 0x1380b0u;
}
