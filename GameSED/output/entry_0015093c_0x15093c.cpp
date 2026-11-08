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

// Function: entry_0015093c
// Address: 0x15093c - 0x1509c4
void entry_0015093c_0x15093c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015093c_0x15093c");
#endif

    switch (ctx->pc) {
        case 0x150994u: goto label_150994;
        default: break;
    }

    ctx->pc = 0x15093cu;

    // 0x15093c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x15093cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x150940: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x150940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x150944: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x150944u;
    {
        const bool branch_taken_0x150944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150944u;
        // 0x150948: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150944) {
            ctx->pc = 0x150860u;
            return;
        }
    }
    ctx->pc = 0x15094Cu;
    // 0x15094c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15094cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150950: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x150950u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150954: 0x4501003c  bc1t        . + 4 + (0x3C << 2)
    ctx->pc = 0x150954u;
    {
        const bool branch_taken_0x150954 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x150954) {
            ctx->pc = 0x150A48u;
            return;
        }
    }
    ctx->pc = 0x15095Cu;
    // 0x15095c: 0xc780822c  lwc1        $f0, -0x7DD4($gp)
    ctx->pc = 0x15095cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150960: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x150960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x150964: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x150964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150968: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x150968u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x15096c: 0x46010569  min.s       $f21, $f0, $f1
    ctx->pc = 0x15096cu;
    ctx->f[21] = std::min(ctx->f[0], ctx->f[1]);
    // 0x150970: 0xc78c8230  lwc1        $f12, -0x7DD0($gp)
    ctx->pc = 0x150970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x150974: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x150974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x150978: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x150978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x15097c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15097cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150980: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x150980u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x150984: 0x8e440170  lw          $a0, 0x170($s2)
    ctx->pc = 0x150984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
    // 0x150988: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x150988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15098c: 0xc05185a  jal         func_146168
    ctx->pc = 0x15098Cu;
    SET_GPR_U32(ctx, 31, 0x150994u);
    ctx->pc = 0x150990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15098Cu;
    // 0x150990: 0x24c600d0  addiu       $a2, $a2, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146168u, 0x15098Cu, 0x150994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150994u;
label_150994:
    // 0x150994: 0x8e4501ac  lw          $a1, 0x1AC($s2)
    ctx->pc = 0x150994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x150998: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x150998u;
    {
        const bool branch_taken_0x150998 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x150998) {
            ctx->pc = 0x1509C4u;
            return;
        }
    }
    ctx->pc = 0x1509A0u;
    // 0x1509a0: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x1509a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1509a4: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1509a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1509a8: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x1509a8u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1509ac: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x1509acu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1509b0: 0x42000  sll         $a0, $a0, 0
    ctx->pc = 0x1509b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x1509b4: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x1509b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x1509b8: 0x706418c8  pmaxw       $v1, $v1, $a0
    ctx->pc = 0x1509b8u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1509bc: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x1509bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x1509c0: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x1509c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
    ctx->pc = 0x1509c4u;
}
