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

// Function: entry_001913a8
// Address: 0x1913a8 - 0x1913b0
void entry_001913a8_0x1913a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001913a8_0x1913a8");
#endif

    ctx->pc = 0x1913a8u;

    // 0x1913a8: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1913A8u;
    SET_GPR_U32(ctx, 31, 0x1913B0u);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1913A8u, 0x1913B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1913B0u;
}
