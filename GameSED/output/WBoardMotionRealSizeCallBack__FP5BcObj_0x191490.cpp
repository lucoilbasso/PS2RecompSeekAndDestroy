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

// Function: WBoardMotionRealSizeCallBack__FP5BcObj
// Address: 0x191490 - 0x1914e8
void WBoardMotionRealSizeCallBack__FP5BcObj_0x191490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WBoardMotionRealSizeCallBack__FP5BcObj_0x191490");
#endif

    ctx->pc = 0x191490u;

    // 0x191490: 0xc4800220  lwc1        $f0, 0x220($a0)
    ctx->pc = 0x191490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191494: 0xc4810170  lwc1        $f1, 0x170($a0)
    ctx->pc = 0x191494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191498: 0xc4820174  lwc1        $f2, 0x174($a0)
    ctx->pc = 0x191498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19149c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x19149cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1914a0: 0xc4840178  lwc1        $f4, 0x178($a0)
    ctx->pc = 0x1914a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1914a4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1914a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1914a8: 0xc485017c  lwc1        $f5, 0x17C($a0)
    ctx->pc = 0x1914a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1914ac: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1914acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1914b0: 0xe4800224  swc1        $f0, 0x224($a0)
    ctx->pc = 0x1914b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 548), bits); }
    // 0x1914b4: 0x0  nop
    ctx->pc = 0x1914b4u;
    // NOP
    // 0x1914b8: 0x0  nop
    ctx->pc = 0x1914b8u;
    // NOP
    // 0x1914bc: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x1914bcu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x1914c0: 0xe483023c  swc1        $f3, 0x23C($a0)
    ctx->pc = 0x1914c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 572), bits); }
    // 0x1914c4: 0xe4830228  swc1        $f3, 0x228($a0)
    ctx->pc = 0x1914c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 552), bits); }
    // 0x1914c8: 0xe483022c  swc1        $f3, 0x22C($a0)
    ctx->pc = 0x1914c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 556), bits); }
    // 0x1914cc: 0xe4830238  swc1        $f3, 0x238($a0)
    ctx->pc = 0x1914ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 568), bits); }
    // 0x1914d0: 0x0  nop
    ctx->pc = 0x1914d0u;
    // NOP
    // 0x1914d4: 0x0  nop
    ctx->pc = 0x1914d4u;
    // NOP
    // 0x1914d8: 0x46051083  div.s       $f2, $f2, $f5
    ctx->pc = 0x1914d8u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[5]); }
    // 0x1914dc: 0xe4810230  swc1        $f1, 0x230($a0)
    ctx->pc = 0x1914dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 560), bits); }
    // 0x1914e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1914E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1914E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914E0u;
        // 0x1914e4: 0xe4820234  swc1        $f2, 0x234($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1914E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1914E8u;
}
