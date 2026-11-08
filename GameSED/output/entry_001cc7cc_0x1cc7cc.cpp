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

// Function: entry_001cc7cc
// Address: 0x1cc7cc - 0x1cc7d0
void entry_001cc7cc_0x1cc7cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc7cc_0x1cc7cc");
#endif

    ctx->pc = 0x1cc7ccu;

    // 0x1cc7cc: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1cc7ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cc7d0u;
}
