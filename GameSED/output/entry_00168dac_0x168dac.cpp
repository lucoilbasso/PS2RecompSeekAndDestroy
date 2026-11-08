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

// Function: entry_00168dac
// Address: 0x168dac - 0x168e24
void entry_00168dac_0x168dac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168dac_0x168dac");
#endif

    switch (ctx->pc) {
        case 0x168df0u: goto label_168df0;
        default: break;
    }

    ctx->pc = 0x168dacu;

    // 0x168dac: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x168dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x168db0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168db0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168db4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x168db4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168db8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168db8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168dbc: 0x4a0002ff  vnop
    ctx->pc = 0x168dbcu;
    // NOP operation, no action needed for VU0
    // 0x168dc0: 0x4a0002ff  vnop
    ctx->pc = 0x168dc0u;
    // NOP operation, no action needed for VU0
    // 0x168dc4: 0x4a0002ff  vnop
    ctx->pc = 0x168dc4u;
    // NOP operation, no action needed for VU0
    // 0x168dc8: 0x4a0002ff  vnop
    ctx->pc = 0x168dc8u;
    // NOP operation, no action needed for VU0
    // 0x168dcc: 0x4a0002ff  vnop
    ctx->pc = 0x168dccu;
    // NOP operation, no action needed for VU0
    // 0x168dd0: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168dd0u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168dd4: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168dd8: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x168ddc: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x168DDCu;
    {
        const bool branch_taken_0x168ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168ddc) {
            ctx->pc = 0x168DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168DDCu;
            // 0x168de0: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168E28u;
            return;
        }
    }
    ctx->pc = 0x168DE4u;
    // 0x168de4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168de8: 0xc06164c  jal         func_185930
    ctx->pc = 0x168DE8u;
    SET_GPR_U32(ctx, 31, 0x168DF0u);
    ctx->pc = 0x168DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168DE8u;
    // 0x168dec: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168DE8u, 0x168DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168DF0u;
label_168df0:
    // 0x168df0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168df4: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x168df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x168df8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168df8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168dfc: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x168dfcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x168e00: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x168e00u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168e04: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x168e08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x168e08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e0c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x168e0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x168e10: 0x3c7100b  movn        $v0, $fp, $a3
    ctx->pc = 0x168e10u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x168e14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e18: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x168e18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x168e1c: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x168E1Cu;
    SET_GPR_U32(ctx, 31, 0x168E24u);
    ctx->pc = 0x168E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168E1Cu;
    // 0x168e20: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x168E1Cu, 0x168E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168E24u;
}
