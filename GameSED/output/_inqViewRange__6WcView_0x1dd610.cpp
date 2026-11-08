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

// Function: _inqViewRange__6WcView
// Address: 0x1dd610 - 0x1dd620
void _inqViewRange__6WcView_0x1dd610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_inqViewRange__6WcView_0x1dd610");
#endif

    ctx->pc = 0x1dd610u;

    // 0x1dd610: 0xc4810174  lwc1        $f1, 0x174($a0)
    ctx->pc = 0x1dd610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd614: 0xc4800170  lwc1        $f0, 0x170($a0)
    ctx->pc = 0x1dd614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd618: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD618u;
        // 0x1dd61c: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD620u;
}
