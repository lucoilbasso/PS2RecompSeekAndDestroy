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

// Function: BMotionSmoothVectorSetup__FP5BcObjP11BMotionCtrlP9FVector32ff
// Address: 0x1a54c8 - 0x1a5530
void BMotionSmoothVectorSetup__FP5BcObjP11BMotionCtrlP9FVector32ff_0x1a54c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionSmoothVectorSetup__FP5BcObjP11BMotionCtrlP9FVector32ff_0x1a54c8");
#endif

    switch (ctx->pc) {
        case 0x1a5504u: goto label_1a5504;
        default: break;
    }

    ctx->pc = 0x1a54c8u;

    // 0x1a54c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a54c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a54cc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1a54ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a54d0: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a54d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a54d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a54d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a54d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a54d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a54dc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a54dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a54e0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a54e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a54e4: 0x244630a0  addiu       $a2, $v0, 0x30A0
    ctx->pc = 0x1a54e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12448));
    // 0x1a54e8: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1a54e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1a54ec: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x1a54ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a54f0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1a54f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a54f4: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x1a54f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x1a54f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a54f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a54fc: 0xc068866  jal         func_1A2198
    ctx->pc = 0x1A54FCu;
    SET_GPR_U32(ctx, 31, 0x1A5504u);
    ctx->pc = 0x1A5500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A54FCu;
    // 0x1a5500: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A54FCu, 0x1A5504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5504u;
label_1a5504:
    // 0x1a5504: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1a5504u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a5508: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1a5508u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a550c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1a550cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a5510: 0xe4540014  swc1        $f20, 0x14($v0)
    ctx->pc = 0x1a5510u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1a5514: 0xe4550010  swc1        $f21, 0x10($v0)
    ctx->pc = 0x1a5514u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1a5518: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a551c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a551cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a5520: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x1a5520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a5524: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1a5524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a5528: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5528u;
        // 0x1a552c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5530u;
}
