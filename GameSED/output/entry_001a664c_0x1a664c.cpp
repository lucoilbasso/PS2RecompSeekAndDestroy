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

// Function: entry_001a664c
// Address: 0x1a664c - 0x1a6684
void entry_001a664c_0x1a664c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a664c_0x1a664c");
#endif

    switch (ctx->pc) {
        case 0x1a6664u: goto label_1a6664;
        default: break;
    }

    ctx->pc = 0x1a664cu;

    // 0x1a664c: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x1a664cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1a6650: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1a6650u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a6654: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1a6654u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a6658: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a6658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a665c: 0xc067a02  jal         func_19E808
    ctx->pc = 0x1A665Cu;
    SET_GPR_U32(ctx, 31, 0x1A6664u);
    ctx->pc = 0x1A6660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A665Cu;
    // 0x1a6660: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x1A665Cu, 0x1A6664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6664u;
label_1a6664:
    // 0x1a6664: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a6664u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1a6668: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a666c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a666cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a6670: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a6670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6674: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a6674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a6678: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1a6678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a667c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A667Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A667Cu;
        // 0x1a6680: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A667Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6684u;
}
