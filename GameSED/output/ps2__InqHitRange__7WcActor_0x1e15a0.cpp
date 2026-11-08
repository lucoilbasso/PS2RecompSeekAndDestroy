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

// Function: _InqHitRange__7WcActor
// Address: 0x1e15a0 - 0x1e15b4
void ps2__InqHitRange__7WcActor_0x1e15a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InqHitRange__7WcActor_0x1e15a0");
#endif

    ctx->pc = 0x1e15a0u;

    // 0x1e15a0: 0xc48100e4  lwc1        $f1, 0xE4($a0)
    ctx->pc = 0x1e15a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e15a4: 0xc48000e0  lwc1        $f0, 0xE0($a0)
    ctx->pc = 0x1e15a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e15a8: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1e15a8u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1e15ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E15ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E15ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E15B4u;
}
