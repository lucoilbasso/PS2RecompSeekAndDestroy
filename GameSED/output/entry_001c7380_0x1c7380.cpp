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

// Function: entry_001c7380
// Address: 0x1c7380 - 0x1c7384
void entry_001c7380_0x1c7380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7380_0x1c7380");
#endif

    ctx->pc = 0x1c7380u;

    // 0x1c7380: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c7380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    ctx->pc = 0x1c7384u;
}
