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

// Function: entry_00157648
// Address: 0x157648 - 0x1576c0
void entry_00157648_0x157648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157648_0x157648");
#endif

    switch (ctx->pc) {
        case 0x157660u: goto label_157660;
        case 0x157674u: goto label_157674;
        default: break;
    }

    ctx->pc = 0x157648u;

    // 0x157648: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x157648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15764c: 0xace80024  sw          $t0, 0x24($a3)
    ctx->pc = 0x15764cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 8));
    // 0x157650: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x157650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157654: 0xace00028  sw          $zero, 0x28($a3)
    ctx->pc = 0x157654u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
    // 0x157658: 0xc060994  jal         func_182650
    ctx->pc = 0x157658u;
    SET_GPR_U32(ctx, 31, 0x157660u);
    ctx->pc = 0x15765Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157658u;
    // 0x15765c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182650u, 0x157658u, 0x157660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157660u;
label_157660:
    // 0x157660: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x157660u;
    {
        const bool branch_taken_0x157660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157660u;
        // 0x157664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157660) {
            ctx->pc = 0x15773Cu;
            return;
        }
    }
    ctx->pc = 0x157668u;
    // 0x157668: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x157668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15766c: 0xc055d3e  jal         func_1574F8
    ctx->pc = 0x15766Cu;
    SET_GPR_U32(ctx, 31, 0x157674u);
    ctx->pc = 0x157670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15766Cu;
    // 0x157670: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1574F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1574F8u, 0x15766Cu, 0x157674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157674u;
label_157674:
    // 0x157674: 0x12800030  beqz        $s4, . + 4 + (0x30 << 2)
    ctx->pc = 0x157674u;
    {
        const bool branch_taken_0x157674 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x157678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157674u;
        // 0x157678: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157674) {
            ctx->pc = 0x157738u;
            return;
        }
    }
    ctx->pc = 0x15767Cu;
    // 0x15767c: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x15767cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x157680: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x157680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157684: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x157684u;
    {
        const bool branch_taken_0x157684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x157688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157684u;
        // 0x157688: 0x24820070  addiu       $v0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157684) {
            ctx->pc = 0x1576C0u;
            return;
        }
    }
    ctx->pc = 0x15768Cu;
    // 0x15768c: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x15768cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x157690: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x157690u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x157694: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x157694u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157698: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x157698u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15769c: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x15769cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1576a0: 0x26020140  addiu       $v0, $s0, 0x140
    ctx->pc = 0x1576a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x1576a4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1576a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1576a8: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x1576a8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1576ac: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1576acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1576b0: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1576b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1576b4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1576B4u;
    {
        const bool branch_taken_0x1576b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1576B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576B4u;
        // 0x1576b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576b4) {
            ctx->pc = 0x1576ECu;
            return;
        }
    }
    ctx->pc = 0x1576BCu;
    // 0x1576bc: 0x0  nop
    ctx->pc = 0x1576bcu;
    // NOP
    ctx->pc = 0x1576c0u;
}
