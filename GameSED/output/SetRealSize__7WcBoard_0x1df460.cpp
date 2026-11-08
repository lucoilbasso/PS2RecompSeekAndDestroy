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

// Function: SetRealSize__7WcBoard
// Address: 0x1df460 - 0x1df4b4
void SetRealSize__7WcBoard_0x1df460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRealSize__7WcBoard_0x1df460");
#endif

    ctx->pc = 0x1df460u;

    // 0x1df460: 0xc4820170  lwc1        $f2, 0x170($a0)
    ctx->pc = 0x1df460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1df464: 0xc4810220  lwc1        $f1, 0x220($a0)
    ctx->pc = 0x1df464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df468: 0xc4800224  lwc1        $f0, 0x224($a0)
    ctx->pc = 0x1df468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df46c: 0xc4830174  lwc1        $f3, 0x174($a0)
    ctx->pc = 0x1df46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1df470: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1df470u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1df474: 0xc4840178  lwc1        $f4, 0x178($a0)
    ctx->pc = 0x1df474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1df478: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1df478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1df47c: 0xc482017c  lwc1        $f2, 0x17C($a0)
    ctx->pc = 0x1df47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1df480: 0xac80023c  sw          $zero, 0x23C($a0)
    ctx->pc = 0x1df480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 572), GPR_U32(ctx, 0));
    // 0x1df484: 0x0  nop
    ctx->pc = 0x1df484u;
    // NOP
    // 0x1df488: 0x0  nop
    ctx->pc = 0x1df488u;
    // NOP
    // 0x1df48c: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x1df48cu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x1df490: 0xac800228  sw          $zero, 0x228($a0)
    ctx->pc = 0x1df490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 552), GPR_U32(ctx, 0));
    // 0x1df494: 0xac80022c  sw          $zero, 0x22C($a0)
    ctx->pc = 0x1df494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 556), GPR_U32(ctx, 0));
    // 0x1df498: 0xac800238  sw          $zero, 0x238($a0)
    ctx->pc = 0x1df498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 568), GPR_U32(ctx, 0));
    // 0x1df49c: 0x0  nop
    ctx->pc = 0x1df49cu;
    // NOP
    // 0x1df4a0: 0x0  nop
    ctx->pc = 0x1df4a0u;
    // NOP
    // 0x1df4a4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1df4a4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1df4a8: 0xe4810230  swc1        $f1, 0x230($a0)
    ctx->pc = 0x1df4a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 560), bits); }
    // 0x1df4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF4ACu;
        // 0x1df4b0: 0xe4800234  swc1        $f0, 0x234($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF4B4u;
}
