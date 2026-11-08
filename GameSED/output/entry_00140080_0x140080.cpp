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

// Function: entry_00140080
// Address: 0x140080 - 0x14008c
void entry_00140080_0x140080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140080_0x140080");
#endif

    switch (ctx->pc) {
        case 0x140088u: goto label_140088;
        default: break;
    }

    ctx->pc = 0x140080u;

    // 0x140080: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x140080u;
    SET_GPR_U32(ctx, 31, 0x140088u);
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x140080u, 0x140088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140088u;
label_140088:
    // 0x140088: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x140088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    ctx->pc = 0x14008cu;
}
