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

// Function: entry_0014b734
// Address: 0x14b734 - 0x14b740
void entry_0014b734_0x14b734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b734_0x14b734");
#endif

    switch (ctx->pc) {
        case 0x14b73cu: goto label_14b73c;
        default: break;
    }

    ctx->pc = 0x14b734u;

    // 0x14b734: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x14B734u;
    SET_GPR_U32(ctx, 31, 0x14B73Cu);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x14B734u, 0x14B73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B73Cu;
label_14b73c:
    // 0x14b73c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14b73cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x14b740u;
}
