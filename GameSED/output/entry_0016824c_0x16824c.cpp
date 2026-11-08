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

// Function: entry_0016824c
// Address: 0x16824c - 0x1682c4
void entry_0016824c_0x16824c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016824c_0x16824c");
#endif

    switch (ctx->pc) {
        case 0x168290u: goto label_168290;
        default: break;
    }

    ctx->pc = 0x16824cu;

    // 0x16824c: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x16824cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x168250: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168250u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168254: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x168254u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168258: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168258u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16825c: 0x4a0002ff  vnop
    ctx->pc = 0x16825cu;
    // NOP operation, no action needed for VU0
    // 0x168260: 0x4a0002ff  vnop
    ctx->pc = 0x168260u;
    // NOP operation, no action needed for VU0
    // 0x168264: 0x4a0002ff  vnop
    ctx->pc = 0x168264u;
    // NOP operation, no action needed for VU0
    // 0x168268: 0x4a0002ff  vnop
    ctx->pc = 0x168268u;
    // NOP operation, no action needed for VU0
    // 0x16826c: 0x4a0002ff  vnop
    ctx->pc = 0x16826cu;
    // NOP operation, no action needed for VU0
    // 0x168270: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168270u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168274: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168278: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x16827c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x16827Cu;
    {
        const bool branch_taken_0x16827c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16827c) {
            ctx->pc = 0x168280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16827Cu;
            // 0x168280: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1682C8u;
            return;
        }
    }
    ctx->pc = 0x168284u;
    // 0x168284: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168288: 0xc06164c  jal         func_185930
    ctx->pc = 0x168288u;
    SET_GPR_U32(ctx, 31, 0x168290u);
    ctx->pc = 0x16828Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168288u;
    // 0x16828c: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168288u, 0x168290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168290u;
label_168290:
    // 0x168290: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168294: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x168294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x168298: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168298u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16829c: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x16829cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1682a0: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1682a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1682a4: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x1682a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x1682a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1682a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1682ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1682acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1682b0: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x1682b0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x1682b4: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1682b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1682b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1682b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1682bc: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x1682BCu;
    SET_GPR_U32(ctx, 31, 0x1682C4u);
    ctx->pc = 0x1682C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1682BCu;
    // 0x1682c0: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x1682BCu, 0x1682C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1682C4u;
}
