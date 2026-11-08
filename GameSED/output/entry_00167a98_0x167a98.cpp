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

// Function: entry_00167a98
// Address: 0x167a98 - 0x167b14
void entry_00167a98_0x167a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167a98_0x167a98");
#endif

    switch (ctx->pc) {
        case 0x167b10u: goto label_167b10;
        default: break;
    }

    ctx->pc = 0x167a98u;

    // 0x167a98: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x167a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x167a9c: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x167a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x167aa0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167aa4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x167aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167aa8: 0x50800051  beql        $a0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x167AA8u;
    {
        const bool branch_taken_0x167aa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x167aa8) {
            ctx->pc = 0x167AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167AA8u;
            // 0x167aac: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167BF0u;
            return;
        }
    }
    ctx->pc = 0x167AB0u;
    // 0x167ab0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x167ab0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167ab4: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x167ab4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x167ab8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x167ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167abc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x167abcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167ac0: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x167ac0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x167ac4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x167ac4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167ac8: 0x4a0002ff  vnop
    ctx->pc = 0x167ac8u;
    // NOP operation, no action needed for VU0
    // 0x167acc: 0x4a0002ff  vnop
    ctx->pc = 0x167accu;
    // NOP operation, no action needed for VU0
    // 0x167ad0: 0x4a0002ff  vnop
    ctx->pc = 0x167ad0u;
    // NOP operation, no action needed for VU0
    // 0x167ad4: 0x4a0002ff  vnop
    ctx->pc = 0x167ad4u;
    // NOP operation, no action needed for VU0
    // 0x167ad8: 0x4a0002ff  vnop
    ctx->pc = 0x167ad8u;
    // NOP operation, no action needed for VU0
    // 0x167adc: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x167adcu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x167ae0: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x167ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x167ae4: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x167ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x167ae8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x167AE8u;
    {
        const bool branch_taken_0x167ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167AE8u;
        // 0x167aec: 0x26030010  addiu       $v1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ae8) {
            ctx->pc = 0x167B14u;
            return;
        }
    }
    ctx->pc = 0x167AF0u;
    // 0x167af0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x167af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x167af4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x167af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167af8: 0x8ec201b4  lw          $v0, 0x1B4($s6)
    ctx->pc = 0x167af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 436)));
    // 0x167afc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x167afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167b00: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x167b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x167b04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167b08: 0xc0618c2  jal         func_186308
    ctx->pc = 0x167B08u;
    SET_GPR_U32(ctx, 31, 0x167B10u);
    ctx->pc = 0x167B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167B08u;
    // 0x167b0c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x167B08u, 0x167B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167B10u;
label_167b10:
    // 0x167b10: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x167b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x167b14u;
}
