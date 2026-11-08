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

// Function: BMotionVectorTwoPointPeriodBezierSetup__FP5BcObjP11BMotionCtrlG9FVector32T2ifff
// Address: 0x1a53f8 - 0x1a54c8
void BMotionVectorTwoPointPeriodBezierSetup__FP5BcObjP11BMotionCtrlG9FVector32T2ifff_0x1a53f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionVectorTwoPointPeriodBezierSetup__FP5BcObjP11BMotionCtrlG9FVector32T2ifff_0x1a53f8");
#endif

    switch (ctx->pc) {
        case 0x1a5468u: goto label_1a5468;
        case 0x1a54a8u: goto label_1a54a8;
        default: break;
    }

    ctx->pc = 0x1a53f8u;

    // 0x1a53f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a53f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a53fc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1a53fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1a5400: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1a5400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5404: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1a5404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1a5408: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1a5408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a540c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a540cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a5410: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1a5410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5414: 0xe7b60068  swc1        $f22, 0x68($sp)
    ctx->pc = 0x1a5414u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1a5418: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x1a5418u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x1a541c: 0xe7b50060  swc1        $f21, 0x60($sp)
    ctx->pc = 0x1a541cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1a5420: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1a5420u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1a5424: 0xe7b40058  swc1        $f20, 0x58($sp)
    ctx->pc = 0x1a5424u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1a5428: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1a5428u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1a542c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a542cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5430: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1a5430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5434: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x1a5434u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a5438: 0x24070110  addiu       $a3, $zero, 0x110
    ctx->pc = 0x1a5438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x1a543c: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x1a543cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a5440: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a5440u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a5444: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1a5444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1a5448: 0x24c62cb8  addiu       $a2, $a2, 0x2CB8
    ctx->pc = 0x1a5448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11448));
    // 0x1a544c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1a544cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x1a5450: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x1a5450u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a5454: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1a5454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x1a5458: 0xde220008  ld          $v0, 0x8($s1)
    ctx->pc = 0x1a5458u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a545c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1a545cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a5460: 0xc068866  jal         func_1A2198
    ctx->pc = 0x1A5460u;
    SET_GPR_U32(ctx, 31, 0x1A5468u);
    ctx->pc = 0x1A5464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5460u;
    // 0x1a5464: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A5460u, 0x1A5468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5468u;
label_1a5468:
    // 0x1a5468: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x1a5468u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a546c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1a546cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1a5470: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x1a5470u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a5474: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a5474u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5478: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x1a5478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x1a547c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a547cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a5480: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x1a5480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    // 0x1a5484: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1a5484u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1a5488: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x1a5488u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a548c: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x1a548cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x1a5490: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x1a5490u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a5494: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1a5494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a5498: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1a5498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a549c: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x1a549cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
    // 0x1a54a0: 0xc06a610  jal         func_1A9840
    ctx->pc = 0x1A54A0u;
    SET_GPR_U32(ctx, 31, 0x1A54A8u);
    ctx->pc = 0x1A54A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A54A0u;
    // 0x1a54a4: 0xffa20030  sd          $v0, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9840u, 0x1A54A0u, 0x1A54A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A54A8u;
label_1a54a8:
    // 0x1a54a8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1a54a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a54ac: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1a54acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a54b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a54b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a54b4: 0xc7b60068  lwc1        $f22, 0x68($sp)
    ctx->pc = 0x1a54b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1a54b8: 0xc7b50060  lwc1        $f21, 0x60($sp)
    ctx->pc = 0x1a54b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a54bc: 0xc7b40058  lwc1        $f20, 0x58($sp)
    ctx->pc = 0x1a54bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a54c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A54C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A54C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54C0u;
        // 0x1a54c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A54C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A54C8u;
}
