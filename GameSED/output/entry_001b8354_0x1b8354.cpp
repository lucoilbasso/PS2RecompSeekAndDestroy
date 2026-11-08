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

// Function: entry_001b8354
// Address: 0x1b8354 - 0x1b8360
void entry_001b8354_0x1b8354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8354_0x1b8354");
#endif

    switch (ctx->pc) {
        case 0x1b835cu: goto label_1b835c;
        default: break;
    }

    ctx->pc = 0x1b8354u;

    // 0x1b8354: 0xc06be34  jal         func_1AF8D0
    ctx->pc = 0x1B8354u;
    SET_GPR_U32(ctx, 31, 0x1B835Cu);
    ctx->pc = 0x1AF8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF8D0u, 0x1B8354u, 0x1B835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B835Cu;
label_1b835c:
    // 0x1b835c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b835cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1b8360u;
}
