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

// Function: entry_0011b56c
// Address: 0x11b56c - 0x11b570
void entry_0011b56c_0x11b56c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b56c_0x11b56c");
#endif

    ctx->pc = 0x11b56cu;

    // 0x11b56c: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x11b56cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    ctx->pc = 0x11b570u;
}
