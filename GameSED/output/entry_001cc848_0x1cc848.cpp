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

// Function: entry_001cc848
// Address: 0x1cc848 - 0x1cc84c
void entry_001cc848_0x1cc848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc848_0x1cc848");
#endif

    ctx->pc = 0x1cc848u;

    // 0x1cc848: 0x2301026  xor         $v0, $s1, $s0
    ctx->pc = 0x1cc848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 16));
    ctx->pc = 0x1cc84cu;
}
