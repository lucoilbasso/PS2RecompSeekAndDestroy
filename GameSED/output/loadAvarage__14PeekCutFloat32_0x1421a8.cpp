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

// Function: loadAvarage__14PeekCutFloat32
// Address: 0x1421a8 - 0x1421e8
void loadAvarage__14PeekCutFloat32_0x1421a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("loadAvarage__14PeekCutFloat32_0x1421a8");
#endif

    switch (ctx->pc) {
        case 0x1421bcu: goto label_1421bc;
        default: break;
    }

    ctx->pc = 0x1421a8u;

    // 0x1421a8: 0x3c013d00  lui         $at, 0x3D00
    ctx->pc = 0x1421a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15616 << 16));
    // 0x1421ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1421acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1421b0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1421b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1421b4: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1421b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1421b8: 0x460a5019  suba.s      $f10, $f10
    ctx->pc = 0x1421b8u;
    FPU_SET_ACC(ctx, FPU_SUB_S(ctx->f[10], ctx->f[10]));
label_1421bc:
    // 0x1421bc: 0x2042ffff  addi        $v0, $v0, -0x1
    ctx->pc = 0x1421bcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x1421c0: 0xc46a0000  lwc1        $f10, 0x0($v1)
    ctx->pc = 0x1421c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1421c4: 0x20630004  addi        $v1, $v1, 0x4
    ctx->pc = 0x1421c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x1421c8: 0x4600501e  madda.s     $f10, $f0
    ctx->pc = 0x1421c8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[10], ctx->f[0])));
    // 0x1421cc: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1421CCu;
    {
        const bool branch_taken_0x1421cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1421cc) {
            ctx->pc = 0x1421BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1421bc;
        }
    }
    ctx->pc = 0x1421D4u;
    // 0x1421d4: 0x0  nop
    ctx->pc = 0x1421d4u;
    // NOP
    // 0x1421d8: 0xc46a0000  lwc1        $f10, 0x0($v1)
    ctx->pc = 0x1421d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1421dc: 0x4600501c  madd.s      $f0, $f10, $f0
    ctx->pc = 0x1421dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[10], ctx->f[0]));
    // 0x1421e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1421E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1421E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1421E8u;
}
