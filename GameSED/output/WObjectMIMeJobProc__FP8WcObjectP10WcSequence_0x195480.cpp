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

// Function: WObjectMIMeJobProc__FP8WcObjectP10WcSequence
// Address: 0x195480 - 0x1954bc
void WObjectMIMeJobProc__FP8WcObjectP10WcSequence_0x195480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WObjectMIMeJobProc__FP8WcObjectP10WcSequence_0x195480");
#endif

    switch (ctx->pc) {
        case 0x1954b0u: goto label_1954b0;
        default: break;
    }

    ctx->pc = 0x195480u;

    // 0x195480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195484: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x195484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19548c: 0x8c8201a4  lw          $v0, 0x1A4($a0)
    ctx->pc = 0x19548cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x195490: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x195490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195494: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x195494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195498: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x195498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19549c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x19549cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1954a0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1954A0u;
    {
        const bool branch_taken_0x1954a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1954A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954A0u;
        // 0x1954a4: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954a0) {
            ctx->pc = 0x1954B0u;
            goto label_1954b0;
        }
    }
    ctx->pc = 0x1954A8u;
    // 0x1954a8: 0xc064f62  jal         func_193D88
    ctx->pc = 0x1954A8u;
    SET_GPR_U32(ctx, 31, 0x1954B0u);
    ctx->pc = 0x193D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193D88u, 0x1954A8u, 0x1954B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1954B0u;
label_1954b0:
    // 0x1954b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1954b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1954b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1954B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1954B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954B4u;
        // 0x1954b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1954B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1954BCu;
}
