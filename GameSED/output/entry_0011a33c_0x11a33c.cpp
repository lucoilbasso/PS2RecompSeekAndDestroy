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

// Function: entry_0011a33c
// Address: 0x11a33c - 0x11a340
void entry_0011a33c_0x11a33c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a33c_0x11a33c");
#endif

    ctx->pc = 0x11a33cu;

    // 0x11a33c: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x11a33cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    ctx->pc = 0x11a340u;
}
