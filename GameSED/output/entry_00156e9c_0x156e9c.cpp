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

// Function: entry_00156e9c
// Address: 0x156e9c - 0x156ea0
void entry_00156e9c_0x156e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156e9c_0x156e9c");
#endif

    ctx->pc = 0x156e9cu;

    // 0x156e9c: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x156e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    ctx->pc = 0x156ea0u;
}
