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

// Function: entry_00123554
// Address: 0x123554 - 0x12359c
void entry_00123554_0x123554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123554_0x123554");
#endif

    switch (ctx->pc) {
        case 0x123570u: goto label_123570;
        case 0x123580u: goto label_123580;
        default: break;
    }

    ctx->pc = 0x123554u;

    // 0x123554: 0xc60000dc  lwc1        $f0, 0xDC($s0)
    ctx->pc = 0x123554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x123558: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x123558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12355c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x12355Cu;
    {
        const bool branch_taken_0x12355c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x123560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12355Cu;
        // 0x123560: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12355c) {
            ctx->pc = 0x12359Cu;
            return;
        }
    }
    ctx->pc = 0x123564u;
    // 0x123564: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x123564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123568: 0xc04844a  jal         func_121128
    ctx->pc = 0x123568u;
    SET_GPR_U32(ctx, 31, 0x123570u);
    ctx->pc = 0x12356Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123568u;
    // 0x12356c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x123568u, 0x123570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123570u;
label_123570:
    // 0x123570: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x123570u;
    {
        const bool branch_taken_0x123570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123570) {
            ctx->pc = 0x123574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123570u;
            // 0x123574: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12359Cu;
            return;
        }
    }
    ctx->pc = 0x123578u;
    // 0x123578: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x123578u;
    SET_GPR_U32(ctx, 31, 0x123580u);
    ctx->pc = 0x12357Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123578u;
    // 0x12357c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x123578u, 0x123580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123580u;
label_123580:
    // 0x123580: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x123580u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123584: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x123584u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x123588: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x123588u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12358c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12358cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x123590: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x123590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x123594: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x123594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x123598: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x123598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12359cu;
}
