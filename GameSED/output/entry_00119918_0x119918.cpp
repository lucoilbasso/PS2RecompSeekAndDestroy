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

// Function: entry_00119918
// Address: 0x119918 - 0x11991c
void entry_00119918_0x119918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119918_0x119918");
#endif

    ctx->pc = 0x119918u;

    // 0x119918: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x119918u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    ctx->pc = 0x11991cu;
}
