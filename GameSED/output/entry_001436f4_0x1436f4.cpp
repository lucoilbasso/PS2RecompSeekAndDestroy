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

// Function: entry_001436f4
// Address: 0x1436f4 - 0x143758
void entry_001436f4_0x1436f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001436f4_0x1436f4");
#endif

    switch (ctx->pc) {
        case 0x14372cu: goto label_14372c;
        case 0x143740u: goto label_143740;
        default: break;
    }

    ctx->pc = 0x1436f4u;

    // 0x1436f4: 0x26830040  addiu       $v1, $s4, 0x40
    ctx->pc = 0x1436f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1436f8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1436f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1436fc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1436fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x143700: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x143700u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x143704: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x143704u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x143708: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x143708u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14370c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14370cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143710: 0x8ee50008  lw          $a1, 0x8($s7)
    ctx->pc = 0x143710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x143714: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x143714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143718: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x143718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14371c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x14371cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x143720: 0x2e52821  addu        $a1, $s7, $a1
    ctx->pc = 0x143720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    // 0x143724: 0xc05fcfc  jal         func_17F3F0
    ctx->pc = 0x143724u;
    SET_GPR_U32(ctx, 31, 0x14372Cu);
    ctx->pc = 0x143728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143724u;
    // 0x143728: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F3F0u, 0x143724u, 0x14372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14372Cu;
label_14372c:
    // 0x14372c: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x14372cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x143730: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x143730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143734: 0x8c640154  lw          $a0, 0x154($v1)
    ctx->pc = 0x143734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x143738: 0xc0683b6  jal         func_1A0ED8
    ctx->pc = 0x143738u;
    SET_GPR_U32(ctx, 31, 0x143740u);
    ctx->pc = 0x14373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143738u;
    // 0x14373c: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x143738u, 0x143740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143740u;
label_143740:
    // 0x143740: 0x97b10014  lhu         $s1, 0x14($sp)
    ctx->pc = 0x143740u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x143744: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x143744u;
    {
        const bool branch_taken_0x143744 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x143748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143744u;
        // 0x143748: 0x8fb00018  lw          $s0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143744) {
            ctx->pc = 0x1437D0u;
            return;
        }
    }
    ctx->pc = 0x14374Cu;
    // 0x14374c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x14374cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x143750: 0x2455c520  addiu       $s5, $v0, -0x3AE0
    ctx->pc = 0x143750u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952224));
    // 0x143754: 0x0  nop
    ctx->pc = 0x143754u;
    // NOP
    ctx->pc = 0x143758u;
}
