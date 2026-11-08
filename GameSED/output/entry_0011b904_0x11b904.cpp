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

// Function: entry_0011b904
// Address: 0x11b904 - 0x11b910
void entry_0011b904_0x11b904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b904_0x11b904");
#endif

    switch (ctx->pc) {
        case 0x11b90cu: goto label_11b90c;
        default: break;
    }

    ctx->pc = 0x11b904u;

    // 0x11b904: 0xc046c0a  jal         func_11B028
    ctx->pc = 0x11B904u;
    SET_GPR_U32(ctx, 31, 0x11B90Cu);
    ctx->pc = 0x11B028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B028u, 0x11B904u, 0x11B90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B90Cu;
label_11b90c:
    // 0x11b90c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x11b910u;
}
