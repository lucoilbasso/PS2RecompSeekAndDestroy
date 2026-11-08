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

// Function: Move__8WcEntityiib
// Address: 0x184d10 - 0x184d78
void Move__8WcEntityiib_0x184d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Move__8WcEntityiib_0x184d10");
#endif

    ctx->pc = 0x184d10u;

    // 0x184d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x184d14: 0x248800d0  addiu       $t0, $a0, 0xD0
    ctx->pc = 0x184d14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x184d18: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x184d18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x184d1c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x184d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x184d20: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x184d20u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184d24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x184d24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x184d28: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x184d28u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x184d2c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x184d2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x184d30: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x184d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x184d34: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x184D34u;
    {
        const bool branch_taken_0x184d34 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x184D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D34u;
        // 0x184d38: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d34) {
            ctx->pc = 0x184D50u;
            goto label_184d50;
        }
    }
    ctx->pc = 0x184D3Cu;
    // 0x184d3c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x184d3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184d40: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x184d40u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x184d44: 0xf9010000  sqc2        $vf1, 0x0($t0)
    ctx->pc = 0x184d44u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x184d48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x184D48u;
    {
        const bool branch_taken_0x184d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D48u;
        // 0x184d4c: 0x24830020  addiu       $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d48) {
            ctx->pc = 0x184D64u;
            goto label_184d64;
        }
    }
    ctx->pc = 0x184D50u;
label_184d50:
    // 0x184d50: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x184d50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x184d54: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x184d54u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184d58: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x184d58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x184d5c: 0xf9020000  sqc2        $vf2, 0x0($t0)
    ctx->pc = 0x184d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x184d60: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x184d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_184d64:
    // 0x184d64: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x184d64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x184d68: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x184d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x184d6c: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x184d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x184d70: 0x3e00008  jr          $ra
    ctx->pc = 0x184D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D70u;
        // 0x184d74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184D78u;
}
