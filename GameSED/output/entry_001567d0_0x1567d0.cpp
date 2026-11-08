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

// Function: entry_001567d0
// Address: 0x1567d0 - 0x1567d4
void entry_001567d0_0x1567d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001567d0_0x1567d0");
#endif

    ctx->pc = 0x1567d0u;

    // 0x1567d0: 0x651026  xor         $v0, $v1, $a1
    ctx->pc = 0x1567d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    ctx->pc = 0x1567d4u;
}
