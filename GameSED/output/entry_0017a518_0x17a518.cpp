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

// Function: entry_0017a518
// Address: 0x17a518 - 0x17a524
void entry_0017a518_0x17a518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a518_0x17a518");
#endif

    switch (ctx->pc) {
        case 0x17a520u: goto label_17a520;
        default: break;
    }

    ctx->pc = 0x17a518u;

    // 0x17a518: 0xc05e936  jal         func_17A4D8
    ctx->pc = 0x17A518u;
    SET_GPR_U32(ctx, 31, 0x17A520u);
    ctx->pc = 0x17A4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A4D8u, 0x17A518u, 0x17A520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A520u;
label_17a520:
    // 0x17a520: 0xdfb00400  ld          $s0, 0x400($sp)
    ctx->pc = 0x17a520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    ctx->pc = 0x17a524u;
}
