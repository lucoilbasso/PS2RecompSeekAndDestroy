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

// Function: entry_0018e8ec
// Address: 0x18e8ec - 0x18e8f0
void entry_0018e8ec_0x18e8ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e8ec_0x18e8ec");
#endif

    ctx->pc = 0x18e8ecu;

    // 0x18e8ec: 0x3812  mflo        $a3
    ctx->pc = 0x18e8ecu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    ctx->pc = 0x18e8f0u;
}
