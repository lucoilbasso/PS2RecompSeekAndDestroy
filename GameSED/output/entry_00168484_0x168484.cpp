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

// Function: entry_00168484
// Address: 0x168484 - 0x1684fc
void entry_00168484_0x168484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168484_0x168484");
#endif

    switch (ctx->pc) {
        case 0x1684c8u: goto label_1684c8;
        default: break;
    }

    ctx->pc = 0x168484u;

    // 0x168484: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x168484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x168488: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168488u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16848c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16848cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168490: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168490u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168494: 0x4a0002ff  vnop
    ctx->pc = 0x168494u;
    // NOP operation, no action needed for VU0
    // 0x168498: 0x4a0002ff  vnop
    ctx->pc = 0x168498u;
    // NOP operation, no action needed for VU0
    // 0x16849c: 0x4a0002ff  vnop
    ctx->pc = 0x16849cu;
    // NOP operation, no action needed for VU0
    // 0x1684a0: 0x4a0002ff  vnop
    ctx->pc = 0x1684a0u;
    // NOP operation, no action needed for VU0
    // 0x1684a4: 0x4a0002ff  vnop
    ctx->pc = 0x1684a4u;
    // NOP operation, no action needed for VU0
    // 0x1684a8: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x1684a8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x1684ac: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x1684acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x1684b0: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x1684b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x1684b4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1684B4u;
    {
        const bool branch_taken_0x1684b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1684b4) {
            ctx->pc = 0x1684B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1684B4u;
            // 0x1684b8: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168500u;
            return;
        }
    }
    ctx->pc = 0x1684BCu;
    // 0x1684bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1684bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684c0: 0xc06164c  jal         func_185930
    ctx->pc = 0x1684C0u;
    SET_GPR_U32(ctx, 31, 0x1684C8u);
    ctx->pc = 0x1684C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1684C0u;
    // 0x1684c4: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1684C0u, 0x1684C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1684C8u;
label_1684c8:
    // 0x1684c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1684c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684cc: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1684ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1684d0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1684d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1684d4: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1684d4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1684d8: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1684d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1684dc: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x1684dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x1684e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1684e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684e4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1684e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1684e8: 0x3c7100b  movn        $v0, $fp, $a3
    ctx->pc = 0x1684e8u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x1684ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1684ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1684f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1684f4: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x1684F4u;
    SET_GPR_U32(ctx, 31, 0x1684FCu);
    ctx->pc = 0x1684F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1684F4u;
    // 0x1684f8: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1684F4u, 0x1684FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1684FCu;
}
