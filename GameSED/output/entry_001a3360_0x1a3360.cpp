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

// Function: entry_001a3360
// Address: 0x1a3360 - 0x1a33a8
void entry_001a3360_0x1a3360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3360_0x1a3360");
#endif

    switch (ctx->pc) {
        case 0x1a33a0u: goto label_1a33a0;
        default: break;
    }

    ctx->pc = 0x1a3360u;

label_1a3360:
    // 0x1a3360: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1a3360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a3364:
    // 0x1a3364: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a3368:
    // 0x1a3368: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a336c:
    // 0x1a336c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a336cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1a3370:
    // 0x1a3370: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a3370u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1a3374:
    // 0x1a3374: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a3374u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1a3378:
    // 0x1a3378: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1a3378u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1a337c:
    // 0x1a337c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1a337cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1a3380:
    // 0x1a3380: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a3380u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a3384:
    // 0x1a3384: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1a3384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1a3388:
    // 0x1a3388: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a338c:
    if (ctx->pc == 0x1A338Cu) {
        ctx->pc = 0x1A338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3388u;
        // 0x1a338c: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3390u;
        goto label_1a3390;
    }
    ctx->pc = 0x1A3388u;
    {
        const bool branch_taken_0x1a3388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3388u;
        // 0x1a338c: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3388) {
            ctx->pc = 0x1A33A8u;
            return;
        }
    }
    ctx->pc = 0x1A3390u;
label_1a3390:
    // 0x1a3390: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a3390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3394:
    // 0x1a3394: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a3394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3398:
    // 0x1a3398: 0x40f809  jalr        $v0
label_1a339c:
    if (ctx->pc == 0x1A339Cu) {
        ctx->pc = 0x1A339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3398u;
        // 0x1a339c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A33A0u;
        goto label_1a33a0;
    }
    ctx->pc = 0x1A3398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A33A0u);
        ctx->pc = 0x1A339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3398u;
        // 0x1a339c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3398u, 0x1A33A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A33A0u;
label_1a33a0:
    // 0x1a33a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a33a4:
    if (ctx->pc == 0x1A33A4u) {
        ctx->pc = 0x1A33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33A0u;
        // 0x1a33a4: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A33A8u;
        goto label_fallthrough_0x1a33a0;
    }
    ctx->pc = 0x1A33A0u;
    {
        const bool branch_taken_0x1a33a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33A0u;
        // 0x1a33a4: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a33a0) {
            ctx->pc = 0x1A33C0u;
            return;
        }
    }
label_fallthrough_0x1a33a0:
    ctx->pc = 0x1A33A8u;
}
