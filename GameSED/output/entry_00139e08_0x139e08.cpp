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

// Function: entry_00139e08
// Address: 0x139e08 - 0x139e7c
void entry_00139e08_0x139e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139e08_0x139e08");
#endif

    switch (ctx->pc) {
        case 0x139e10u: goto label_139e10;
        case 0x139e6cu: goto label_139e6c;
        case 0x139e78u: goto label_139e78;
        default: break;
    }

    ctx->pc = 0x139e08u;

    // 0x139e08: 0xc069236  jal         func_1A48D8
    ctx->pc = 0x139E08u;
    SET_GPR_U32(ctx, 31, 0x139E10u);
    ctx->pc = 0x139E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139E08u;
    // 0x139e0c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48D8u, 0x139E08u, 0x139E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139E10u;
label_139e10:
    // 0x139e10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x139e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139e14: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x139e14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x139e18: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x139e18u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x139e1c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x139e1cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x139e20: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x139e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x139e24: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x139e24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139e28: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x139e28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x139e2c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x139e2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x139e30: 0x4a0002ff  vnop
    ctx->pc = 0x139e30u;
    // NOP operation, no action needed for VU0
    // 0x139e34: 0x4a0002ff  vnop
    ctx->pc = 0x139e34u;
    // NOP operation, no action needed for VU0
    // 0x139e38: 0x4a0002ff  vnop
    ctx->pc = 0x139e38u;
    // NOP operation, no action needed for VU0
    // 0x139e3c: 0x4a0002ff  vnop
    ctx->pc = 0x139e3cu;
    // NOP operation, no action needed for VU0
    // 0x139e40: 0x4a0002ff  vnop
    ctx->pc = 0x139e40u;
    // NOP operation, no action needed for VU0
    // 0x139e44: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x139e44u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x139e48: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x139e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x139e4c: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x139e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x139e50: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x139E50u;
    {
        const bool branch_taken_0x139e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139e50) {
            ctx->pc = 0x139E7Cu;
            return;
        }
    }
    ctx->pc = 0x139E58u;
    // 0x139e58: 0xc62d0018  lwc1        $f13, 0x18($s1)
    ctx->pc = 0x139e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x139e5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x139e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139e60: 0xc62c001c  lwc1        $f12, 0x1C($s1)
    ctx->pc = 0x139e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x139e64: 0xc067858  jal         func_19E160
    ctx->pc = 0x139E64u;
    SET_GPR_U32(ctx, 31, 0x139E6Cu);
    ctx->pc = 0x139E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139E64u;
    // 0x139e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E160u, 0x139E64u, 0x139E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139E6Cu;
label_139e6c:
    // 0x139e6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x139e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139e70: 0xc06924e  jal         func_1A4938
    ctx->pc = 0x139E70u;
    SET_GPR_U32(ctx, 31, 0x139E78u);
    ctx->pc = 0x139E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139E70u;
    // 0x139e74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4938u, 0x139E70u, 0x139E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139E78u;
label_139e78:
    // 0x139e78: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x139e78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x139e7cu;
}
