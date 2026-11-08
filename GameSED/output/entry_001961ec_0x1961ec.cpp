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

// Function: entry_001961ec
// Address: 0x1961ec - 0x1961f0
void entry_001961ec_0x1961ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001961ec_0x1961ec");
#endif

    ctx->pc = 0x1961ecu;

    // 0x1961ec: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1961ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->pc = 0x1961f0u;
}
