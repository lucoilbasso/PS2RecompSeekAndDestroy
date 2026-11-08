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

// Function: entry_00140b00
// Address: 0x140b00 - 0x140b0c
void entry_00140b00_0x140b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140b00_0x140b00");
#endif

    switch (ctx->pc) {
        case 0x140b08u: goto label_140b08;
        default: break;
    }

    ctx->pc = 0x140b00u;

    // 0x140b00: 0xc05058a  jal         func_141628
    ctx->pc = 0x140B00u;
    SET_GPR_U32(ctx, 31, 0x140B08u);
    ctx->pc = 0x141628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141628u, 0x140B00u, 0x140B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B08u;
label_140b08:
    // 0x140b08: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x140b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->pc = 0x140b0cu;
}
