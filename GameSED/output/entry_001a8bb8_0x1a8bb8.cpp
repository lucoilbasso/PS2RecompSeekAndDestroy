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

// Function: entry_001a8bb8
// Address: 0x1a8bb8 - 0x1a8bf8
void entry_001a8bb8_0x1a8bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8bb8_0x1a8bb8");
#endif

    ctx->pc = 0x1a8bb8u;

    // 0x1a8bb8: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x1a8bb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1a8bbc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1a8bbcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a8bc0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1a8bc0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a8bc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a8bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8bc8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1a8bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1a8bcc: 0x1620ffee  bnez        $s1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1A8BCCu;
    {
        const bool branch_taken_0x1a8bcc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BCCu;
        // 0x1a8bd0: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8bcc) {
            ctx->pc = 0x1A8B88u;
            return;
        }
    }
    ctx->pc = 0x1A8BD4u;
    // 0x1a8bd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8bd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8bd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a8bd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8bdc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a8bdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8be0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a8be0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a8be4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a8be4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8be8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a8be8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a8bec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a8becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BF0u;
        // 0x1a8bf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8BF8u;
}
