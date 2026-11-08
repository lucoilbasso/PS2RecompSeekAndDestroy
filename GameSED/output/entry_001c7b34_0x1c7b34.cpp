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

// Function: entry_001c7b34
// Address: 0x1c7b34 - 0x1c7b38
void entry_001c7b34_0x1c7b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7b34_0x1c7b34");
#endif

    ctx->pc = 0x1c7b34u;

    // 0x1c7b34: 0x3c023e3f  lui         $v0, 0x3E3F
    ctx->pc = 0x1c7b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15935 << 16));
    ctx->pc = 0x1c7b38u;
}
