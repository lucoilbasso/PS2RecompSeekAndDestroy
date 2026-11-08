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

// Function: entry_00167b88
// Address: 0x167b88 - 0x167bf0
void entry_00167b88_0x167b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167b88_0x167b88");
#endif

    switch (ctx->pc) {
        case 0x167becu: goto label_167bec;
        default: break;
    }

    ctx->pc = 0x167b88u;

    // 0x167b88: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x167b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x167b8c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x167b8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167b90: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x167b90u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x167b94: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x167b94u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167b98: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x167b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x167b9c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x167b9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x167ba0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x167ba0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167ba4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x167ba4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167ba8: 0x4a0002ff  vnop
    ctx->pc = 0x167ba8u;
    // NOP operation, no action needed for VU0
    // 0x167bac: 0x4a0002ff  vnop
    ctx->pc = 0x167bacu;
    // NOP operation, no action needed for VU0
    // 0x167bb0: 0x4a0002ff  vnop
    ctx->pc = 0x167bb0u;
    // NOP operation, no action needed for VU0
    // 0x167bb4: 0x4a0002ff  vnop
    ctx->pc = 0x167bb4u;
    // NOP operation, no action needed for VU0
    // 0x167bb8: 0x4a0002ff  vnop
    ctx->pc = 0x167bb8u;
    // NOP operation, no action needed for VU0
    // 0x167bbc: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x167bbcu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x167bc0: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x167bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x167bc4: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x167bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x167bc8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x167BC8u;
    {
        const bool branch_taken_0x167bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167bc8) {
            ctx->pc = 0x167BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167BC8u;
            // 0x167bcc: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167BF0u;
            return;
        }
    }
    ctx->pc = 0x167BD0u;
    // 0x167bd0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x167bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x167bd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x167bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167bd8: 0x8ec201b4  lw          $v0, 0x1B4($s6)
    ctx->pc = 0x167bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 436)));
    // 0x167bdc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x167bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x167be0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167be4: 0xc0618f2  jal         func_1863C8
    ctx->pc = 0x167BE4u;
    SET_GPR_U32(ctx, 31, 0x167BECu);
    ctx->pc = 0x167BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167BE4u;
    // 0x167be8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x167BE4u, 0x167BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167BECu;
label_167bec:
    // 0x167bec: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x167becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    ctx->pc = 0x167bf0u;
}
