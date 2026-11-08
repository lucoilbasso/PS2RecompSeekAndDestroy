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

// Function: entry_001578d0
// Address: 0x1578d0 - 0x157940
void entry_001578d0_0x1578d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001578d0_0x1578d0");
#endif

    switch (ctx->pc) {
        case 0x1578e0u: goto label_1578e0;
        case 0x1578f4u: goto label_1578f4;
        default: break;
    }

    ctx->pc = 0x1578d0u;

    // 0x1578d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1578d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1578d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1578d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1578d8: 0xc0605e6  jal         func_181798
    ctx->pc = 0x1578D8u;
    SET_GPR_U32(ctx, 31, 0x1578E0u);
    ctx->pc = 0x1578DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1578D8u;
    // 0x1578dc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181798u, 0x1578D8u, 0x1578E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1578E0u;
label_1578e0:
    // 0x1578e0: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1578E0u;
    {
        const bool branch_taken_0x1578e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1578E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578E0u;
        // 0x1578e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578e0) {
            ctx->pc = 0x1579BCu;
            return;
        }
    }
    ctx->pc = 0x1578E8u;
    // 0x1578e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1578e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1578ec: 0xc055dd8  jal         func_157760
    ctx->pc = 0x1578ECu;
    SET_GPR_U32(ctx, 31, 0x1578F4u);
    ctx->pc = 0x1578F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1578ECu;
    // 0x1578f0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157760u, 0x1578ECu, 0x1578F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1578F4u;
label_1578f4:
    // 0x1578f4: 0x12800030  beqz        $s4, . + 4 + (0x30 << 2)
    ctx->pc = 0x1578F4u;
    {
        const bool branch_taken_0x1578f4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1578F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578F4u;
        // 0x1578f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578f4) {
            ctx->pc = 0x1579B8u;
            return;
        }
    }
    ctx->pc = 0x1578FCu;
    // 0x1578fc: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x1578fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x157900: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x157900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157904: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x157904u;
    {
        const bool branch_taken_0x157904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x157908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157904u;
        // 0x157908: 0x24820070  addiu       $v0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157904) {
            ctx->pc = 0x157940u;
            return;
        }
    }
    ctx->pc = 0x15790Cu;
    // 0x15790c: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x15790cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x157910: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x157910u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x157914: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x157914u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157918: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x157918u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15791c: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x15791cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x157920: 0x26020140  addiu       $v0, $s0, 0x140
    ctx->pc = 0x157920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x157924: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x157924u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157928: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x157928u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15792c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15792cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x157930: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x157930u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x157934: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x157934u;
    {
        const bool branch_taken_0x157934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157934u;
        // 0x157938: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157934) {
            ctx->pc = 0x15796Cu;
            return;
        }
    }
    ctx->pc = 0x15793Cu;
    // 0x15793c: 0x0  nop
    ctx->pc = 0x15793cu;
    // NOP
    ctx->pc = 0x157940u;
}
