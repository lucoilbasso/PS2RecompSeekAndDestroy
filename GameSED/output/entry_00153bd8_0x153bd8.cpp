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

// Function: entry_00153bd8
// Address: 0x153bd8 - 0x153c40
void entry_00153bd8_0x153bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153bd8_0x153bd8");
#endif

    switch (ctx->pc) {
        case 0x153c00u: goto label_153c00;
        case 0x153c14u: goto label_153c14;
        default: break;
    }

    ctx->pc = 0x153bd8u;

    // 0x153bd8: 0xc78182d4  lwc1        $f1, -0x7D2C($gp)
    ctx->pc = 0x153bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153bdc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x153bdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x153be0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x153be0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x153be4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x153be4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x153be8: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x153be8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x153bec: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x153becu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153bf0: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x153bf0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x153bf4: 0x52800  sll         $a1, $a1, 0
    ctx->pc = 0x153bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x153bf8: 0xc056854  jal         func_15A150
    ctx->pc = 0x153BF8u;
    SET_GPR_U32(ctx, 31, 0x153C00u);
    ctx->pc = 0x15A150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A150u, 0x153BF8u, 0x153C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153C00u;
label_153c00:
    // 0x153c00: 0x8e220848  lw          $v0, 0x848($s1)
    ctx->pc = 0x153c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2120)));
    // 0x153c04: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x153C04u;
    {
        const bool branch_taken_0x153c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C04u;
        // 0x153c08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c04) {
            ctx->pc = 0x153CE0u;
            return;
        }
    }
    ctx->pc = 0x153C0Cu;
    // 0x153c0c: 0xc0532f2  jal         func_14CBC8
    ctx->pc = 0x153C0Cu;
    SET_GPR_U32(ctx, 31, 0x153C14u);
    ctx->pc = 0x153C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153C0Cu;
    // 0x153c10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBC8u, 0x153C0Cu, 0x153C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153C14u;
label_153c14:
    // 0x153c14: 0xc62003bc  lwc1        $f0, 0x3BC($s1)
    ctx->pc = 0x153c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153c18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x153c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153c1c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x153c1cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x153c20: 0xc62103c0  lwc1        $f1, 0x3C0($s1)
    ctx->pc = 0x153c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153c24: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x153c24u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x153c28: 0x460100e8  max.s       $f3, $f0, $f1
    ctx->pc = 0x153c28u;
    ctx->f[3] = std::max(ctx->f[0], ctx->f[1]);
    // 0x153c2c: 0x8e2203b0  lw          $v0, 0x3B0($s1)
    ctx->pc = 0x153c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 944)));
    // 0x153c30: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x153c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x153c34: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x153C34u;
    {
        const bool branch_taken_0x153c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153c34) {
            ctx->pc = 0x153C40u;
            return;
        }
    }
    ctx->pc = 0x153C3Cu;
    // 0x153c3c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x153c3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    ctx->pc = 0x153c40u;
}
