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

// Function: entry_001d2c3c
// Address: 0x1d2c3c - 0x1d2c40
void entry_001d2c3c_0x1d2c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2c3c_0x1d2c3c");
#endif

    ctx->pc = 0x1d2c3cu;

    // 0x1d2c3c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d2c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d2c40u;
}
