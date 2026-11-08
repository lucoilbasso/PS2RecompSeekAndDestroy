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

// Function: entry_0017498c
// Address: 0x17498c - 0x174990
void entry_0017498c_0x17498c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017498c_0x17498c");
#endif

    ctx->pc = 0x17498cu;

    // 0x17498c: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x17498cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    ctx->pc = 0x174990u;
}
