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

// Function: entry_0016d004
// Address: 0x16d004 - 0x16d054
void entry_0016d004_0x16d004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d004_0x16d004");
#endif

    switch (ctx->pc) {
        case 0x16d044u: goto label_16d044;
        default: break;
    }

    ctx->pc = 0x16d004u;

label_16d004:
    // 0x16d004: 0xc780848c  lwc1        $f0, -0x7B74($gp)
    ctx->pc = 0x16d004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16d008:
    // 0x16d008: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x16d008u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_16d00c:
    // 0x16d00c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16d00cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16d010:
    // 0x16d010: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16d010u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_16d014:
    // 0x16d014: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x16d014u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_16d018:
    // 0x16d018: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x16d018u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_16d01c:
    // 0x16d01c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16d01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16d020:
    // 0x16d020: 0x8e280150  lw          $t0, 0x150($s1)
    ctx->pc = 0x16d020u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_16d024:
    // 0x16d024: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16d024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d028:
    // 0x16d028: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16d028u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d02c:
    // 0x16d02c: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x16d02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_16d030:
    // 0x16d030: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x16d030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_16d034:
    // 0x16d034: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x16d034u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_16d038:
    // 0x16d038: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x16d038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_16d03c:
    // 0x16d03c: 0x40f809  jalr        $v0
label_16d040:
    if (ctx->pc == 0x16D040u) {
        ctx->pc = 0x16D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D03Cu;
        // 0x16d040: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D044u;
        goto label_16d044;
    }
    ctx->pc = 0x16D03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16D044u);
        ctx->pc = 0x16D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D03Cu;
        // 0x16d040: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D03Cu, 0x16D044u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16D044u;
label_16d044:
    // 0x16d044: 0x8e240154  lw          $a0, 0x154($s1)
    ctx->pc = 0x16d044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_16d048:
    // 0x16d048: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16d048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d04c:
    // 0x16d04c: 0xc0618c2  jal         func_186308
label_16d050:
    if (ctx->pc == 0x16D050u) {
        ctx->pc = 0x16D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D04Cu;
        // 0x16d050: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D054u;
        goto label_fallthrough_0x16d04c;
    }
    ctx->pc = 0x16D04Cu;
    SET_GPR_U32(ctx, 31, 0x16D054u);
    ctx->pc = 0x16D050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D04Cu;
    // 0x16d050: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x16D04Cu, 0x16D054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x16d04c:
    ctx->pc = 0x16D054u;
}
