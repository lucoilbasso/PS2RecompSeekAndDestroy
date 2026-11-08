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

// Function: entry_001c675c
// Address: 0x1c675c - 0x1c6760
void entry_001c675c_0x1c675c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c675c_0x1c675c");
#endif

    ctx->pc = 0x1c675cu;

    // 0x1c675c: 0x3c023fe9  lui         $v0, 0x3FE9
    ctx->pc = 0x1c675cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16361 << 16));
    ctx->pc = 0x1c6760u;
}
