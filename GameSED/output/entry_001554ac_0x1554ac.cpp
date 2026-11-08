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

// Function: entry_001554ac
// Address: 0x1554ac - 0x1554b0
void entry_001554ac_0x1554ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001554ac_0x1554ac");
#endif

    ctx->pc = 0x1554acu;

    // 0x1554ac: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1554acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    ctx->pc = 0x1554b0u;
}
