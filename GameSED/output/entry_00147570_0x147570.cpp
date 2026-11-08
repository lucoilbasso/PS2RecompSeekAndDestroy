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

// Function: entry_00147570
// Address: 0x147570 - 0x147580
void entry_00147570_0x147570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147570_0x147570");
#endif

    ctx->pc = 0x147570u;

    // 0x147570: 0x14c0ffe5  bnez        $a2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x147570u;
    {
        const bool branch_taken_0x147570 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x147574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147570u;
        // 0x147574: 0xe4a20000  swc1        $f2, 0x0($a1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147570) {
            ctx->pc = 0x147508u;
            return;
        }
    }
    ctx->pc = 0x147578u;
    // 0x147578: 0x3e00008  jr          $ra
    ctx->pc = 0x147578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147580u;
}
