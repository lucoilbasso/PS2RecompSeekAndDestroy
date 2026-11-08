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

// Function: entry_0011fcd4
// Address: 0x11fcd4 - 0x11fce0
void entry_0011fcd4_0x11fcd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fcd4_0x11fcd4");
#endif

    ctx->pc = 0x11fcd4u;

    // 0x11fcd4: 0x3e00008  jr          $ra
    ctx->pc = 0x11FCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCD4u;
        // 0x11fcd8: 0xe4a30098  swc1        $f3, 0x98($a1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FCD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FCDCu;
    // 0x11fcdc: 0x0  nop
    ctx->pc = 0x11fcdcu;
    // NOP
    ctx->pc = 0x11fce0u;
}
