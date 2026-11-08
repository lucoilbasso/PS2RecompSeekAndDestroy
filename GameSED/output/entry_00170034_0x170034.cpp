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

// Function: entry_00170034
// Address: 0x170034 - 0x170040
void entry_00170034_0x170034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170034_0x170034");
#endif

    switch (ctx->pc) {
        case 0x17003cu: goto label_17003c;
        default: break;
    }

    ctx->pc = 0x170034u;

    // 0x170034: 0xc05c24e  jal         func_170938
    ctx->pc = 0x170034u;
    SET_GPR_U32(ctx, 31, 0x17003Cu);
    ctx->pc = 0x170938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170938u, 0x170034u, 0x17003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17003Cu;
label_17003c:
    // 0x17003c: 0x0  nop
    ctx->pc = 0x17003cu;
    // NOP
    ctx->pc = 0x170040u;
}
