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

// Function: entry_001201f0
// Address: 0x1201f0 - 0x1201f4
void entry_001201f0_0x1201f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001201f0_0x1201f0");
#endif

    ctx->pc = 0x1201f0u;

    // 0x1201f0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1201f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x1201f4u;
}
