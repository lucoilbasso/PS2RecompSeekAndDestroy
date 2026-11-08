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

// Function: entry_00167dc8
// Address: 0x167dc8 - 0x167e40
void entry_00167dc8_0x167dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167dc8_0x167dc8");
#endif

    switch (ctx->pc) {
        case 0x167e0cu: goto label_167e0c;
        default: break;
    }

    ctx->pc = 0x167dc8u;

    // 0x167dc8: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x167dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x167dcc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x167dccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167dd0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x167dd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167dd4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x167dd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167dd8: 0x4a0002ff  vnop
    ctx->pc = 0x167dd8u;
    // NOP operation, no action needed for VU0
    // 0x167ddc: 0x4a0002ff  vnop
    ctx->pc = 0x167ddcu;
    // NOP operation, no action needed for VU0
    // 0x167de0: 0x4a0002ff  vnop
    ctx->pc = 0x167de0u;
    // NOP operation, no action needed for VU0
    // 0x167de4: 0x4a0002ff  vnop
    ctx->pc = 0x167de4u;
    // NOP operation, no action needed for VU0
    // 0x167de8: 0x4a0002ff  vnop
    ctx->pc = 0x167de8u;
    // NOP operation, no action needed for VU0
    // 0x167dec: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x167decu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x167df0: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x167df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x167df4: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x167df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x167df8: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x167DF8u;
    {
        const bool branch_taken_0x167df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167df8) {
            ctx->pc = 0x167DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167DF8u;
            // 0x167dfc: 0x8fa201ec  lw          $v0, 0x1EC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167E44u;
            return;
        }
    }
    ctx->pc = 0x167E00u;
    // 0x167e00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e04: 0xc06164c  jal         func_185930
    ctx->pc = 0x167E04u;
    SET_GPR_U32(ctx, 31, 0x167E0Cu);
    ctx->pc = 0x167E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167E04u;
    // 0x167e08: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x167E04u, 0x167E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167E0Cu;
label_167e0c:
    // 0x167e0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x167e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e10: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x167e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x167e14: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x167e14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167e18: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x167e18u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x167e1c: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x167e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167e20: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x167e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x167e24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x167e24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167e28: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x167e28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e2c: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x167e2cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x167e30: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x167e30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x167e34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e38: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x167E38u;
    SET_GPR_U32(ctx, 31, 0x167E40u);
    ctx->pc = 0x167E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167E38u;
    // 0x167e3c: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x167E38u, 0x167E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167E40u;
}
