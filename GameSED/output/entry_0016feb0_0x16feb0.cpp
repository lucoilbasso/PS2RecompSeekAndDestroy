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

// Function: entry_0016feb0
// Address: 0x16feb0 - 0x16febc
void entry_0016feb0_0x16feb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016feb0_0x16feb0");
#endif

    switch (ctx->pc) {
        case 0x16feb8u: goto label_16feb8;
        default: break;
    }

    ctx->pc = 0x16feb0u;

    // 0x16feb0: 0xc066ea0  jal         func_19BA80
    ctx->pc = 0x16FEB0u;
    SET_GPR_U32(ctx, 31, 0x16FEB8u);
    ctx->pc = 0x19BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA80u, 0x16FEB0u, 0x16FEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FEB8u;
label_16feb8:
    // 0x16feb8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x16feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x16febcu;
}
