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

// Function: entry_001b3030
// Address: 0x1b3030 - 0x1b3038
void entry_001b3030_0x1b3030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3030_0x1b3030");
#endif

    ctx->pc = 0x1b3030u;

    // 0x1b3030: 0x3c1e0041  lui         $fp, 0x41
    ctx->pc = 0x1b3030u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65 << 16));
    // 0x1b3034: 0x3c152000  lui         $s5, 0x2000
    ctx->pc = 0x1b3034u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)8192 << 16));
    ctx->pc = 0x1b3038u;
}
