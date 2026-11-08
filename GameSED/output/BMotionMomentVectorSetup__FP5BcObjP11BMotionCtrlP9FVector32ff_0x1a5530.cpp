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

// Function: BMotionMomentVectorSetup__FP5BcObjP11BMotionCtrlP9FVector32ff
// Address: 0x1a5530 - 0x1a55a8
void BMotionMomentVectorSetup__FP5BcObjP11BMotionCtrlP9FVector32ff_0x1a5530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionMomentVectorSetup__FP5BcObjP11BMotionCtrlP9FVector32ff_0x1a5530");
#endif

    switch (ctx->pc) {
        case 0x1a556cu: goto label_1a556c;
        default: break;
    }

    ctx->pc = 0x1a5530u;

    // 0x1a5530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a5534: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1a5534u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5538: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a5538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a553c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a553cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5540: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a5540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5544: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a5544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5548: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a5548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a554c: 0x24463208  addiu       $a2, $v0, 0x3208
    ctx->pc = 0x1a554cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12808));
    // 0x1a5550: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x1a5550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1a5554: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x1a5554u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a5558: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1a5558u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a555c: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x1a555cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x1a5560: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a5560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a5564: 0xc068866  jal         func_1A2198
    ctx->pc = 0x1A5564u;
    SET_GPR_U32(ctx, 31, 0x1A556Cu);
    ctx->pc = 0x1A5568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5564u;
    // 0x1a5568: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A5564u, 0x1A556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A556Cu;
label_1a556c:
    // 0x1a556c: 0x8f839070  lw          $v1, -0x6F90($gp)
    ctx->pc = 0x1a556cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938736)));
    // 0x1a5570: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5570u;
    {
        const bool branch_taken_0x1a5570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5570u;
        // 0x1a5574: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5570) {
            ctx->pc = 0x1A557Cu;
            goto label_1a557c;
        }
    }
    ctx->pc = 0x1A5578u;
    // 0x1a5578: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x1a5578u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1a557c:
    // 0x1a557c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1a557cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a5580: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1a5580u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a5584: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1a5584u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a5588: 0xe4540024  swc1        $f20, 0x24($v0)
    ctx->pc = 0x1a5588u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1a558c: 0xe4550020  swc1        $f21, 0x20($v0)
    ctx->pc = 0x1a558cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1a5590: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5594: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a5594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a5598: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x1a5598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a559c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1a559cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a55a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A55A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A55A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55A0u;
        // 0x1a55a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A55A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A55A8u;
}
