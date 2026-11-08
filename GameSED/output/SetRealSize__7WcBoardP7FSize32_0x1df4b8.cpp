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

// Function: SetRealSize__7WcBoardP7FSize32
// Address: 0x1df4b8 - 0x1df51c
void SetRealSize__7WcBoardP7FSize32_0x1df4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRealSize__7WcBoardP7FSize32_0x1df4b8");
#endif

    ctx->pc = 0x1df4b8u;

    // 0x1df4b8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1df4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df4bc: 0xc4840170  lwc1        $f4, 0x170($a0)
    ctx->pc = 0x1df4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1df4c0: 0xe4800220  swc1        $f0, 0x220($a0)
    ctx->pc = 0x1df4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 544), bits); }
    // 0x1df4c4: 0xc4810178  lwc1        $f1, 0x178($a0)
    ctx->pc = 0x1df4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df4c8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1df4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df4cc: 0xac800228  sw          $zero, 0x228($a0)
    ctx->pc = 0x1df4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 552), GPR_U32(ctx, 0));
    // 0x1df4d0: 0xe4800224  swc1        $f0, 0x224($a0)
    ctx->pc = 0x1df4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 548), bits); }
    // 0x1df4d4: 0xac80022c  sw          $zero, 0x22C($a0)
    ctx->pc = 0x1df4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 556), GPR_U32(ctx, 0));
    // 0x1df4d8: 0xc4820174  lwc1        $f2, 0x174($a0)
    ctx->pc = 0x1df4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1df4dc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1df4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df4e0: 0xc483017c  lwc1        $f3, 0x17C($a0)
    ctx->pc = 0x1df4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1df4e4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1df4e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1df4e8: 0x0  nop
    ctx->pc = 0x1df4e8u;
    // NOP
    // 0x1df4ec: 0x0  nop
    ctx->pc = 0x1df4ecu;
    // NOP
    // 0x1df4f0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1df4f0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1df4f4: 0xe4800230  swc1        $f0, 0x230($a0)
    ctx->pc = 0x1df4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 560), bits); }
    // 0x1df4f8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1df4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df4fc: 0xac80023c  sw          $zero, 0x23C($a0)
    ctx->pc = 0x1df4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 572), GPR_U32(ctx, 0));
    // 0x1df500: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1df500u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1df504: 0xac800238  sw          $zero, 0x238($a0)
    ctx->pc = 0x1df504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 568), GPR_U32(ctx, 0));
    // 0x1df508: 0x0  nop
    ctx->pc = 0x1df508u;
    // NOP
    // 0x1df50c: 0x0  nop
    ctx->pc = 0x1df50cu;
    // NOP
    // 0x1df510: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x1df510u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x1df514: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF514u;
        // 0x1df518: 0xe4810234  swc1        $f1, 0x234($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF51Cu;
}
