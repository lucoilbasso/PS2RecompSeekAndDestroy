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

// Function: entry_0011ca0c
// Address: 0x11ca0c - 0x11ca10
void entry_0011ca0c_0x11ca0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ca0c_0x11ca0c");
#endif

    ctx->pc = 0x11ca0cu;

    // 0x11ca0c: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x11ca0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    ctx->pc = 0x11ca10u;
}
