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

// Function: _SetupRadius__8ApcMinen
// Address: 0x1db9a8 - 0x1db9f4
void ps2__SetupRadius__8ApcMinen_0x1db9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SetupRadius__8ApcMinen_0x1db9a8");
#endif

    ctx->pc = 0x1db9a8u;

    // 0x1db9a8: 0xc48202cc  lwc1        $f2, 0x2CC($a0)
    ctx->pc = 0x1db9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1db9ac: 0xc7838514  lwc1        $f3, -0x7AEC($gp)
    ctx->pc = 0x1db9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1db9b0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1db9b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x1db9b4: 0xc48002c0  lwc1        $f0, 0x2C0($a0)
    ctx->pc = 0x1db9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db9b8: 0xc48402c4  lwc1        $f4, 0x2C4($a0)
    ctx->pc = 0x1db9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1db9bc: 0xc48102c8  lwc1        $f1, 0x2C8($a0)
    ctx->pc = 0x1db9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db9c0: 0x0  nop
    ctx->pc = 0x1db9c0u;
    // NOP
    // 0x1db9c4: 0x0  nop
    ctx->pc = 0x1db9c4u;
    // NOP
    // 0x1db9c8: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x1db9c8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x1db9cc: 0x0  nop
    ctx->pc = 0x1db9ccu;
    // NOP
    // 0x1db9d0: 0x0  nop
    ctx->pc = 0x1db9d0u;
    // NOP
    // 0x1db9d4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1db9d4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x1db9d8: 0xe48002d0  swc1        $f0, 0x2D0($a0)
    ctx->pc = 0x1db9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 720), bits); }
    // 0x1db9dc: 0x0  nop
    ctx->pc = 0x1db9dcu;
    // NOP
    // 0x1db9e0: 0x0  nop
    ctx->pc = 0x1db9e0u;
    // NOP
    // 0x1db9e4: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x1db9e4u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[4]); }
    // 0x1db9e8: 0xe48102d8  swc1        $f1, 0x2D8($a0)
    ctx->pc = 0x1db9e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 728), bits); }
    // 0x1db9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB9ECu;
        // 0x1db9f0: 0xe48302d4  swc1        $f3, 0x2D4($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 724), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB9ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB9F4u;
}
