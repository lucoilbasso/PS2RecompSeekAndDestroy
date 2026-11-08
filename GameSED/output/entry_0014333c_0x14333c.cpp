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

// Function: entry_0014333c
// Address: 0x14333c - 0x143340
void entry_0014333c_0x14333c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014333c_0x14333c");
#endif

    ctx->pc = 0x14333cu;

    // 0x14333c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x14333cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    ctx->pc = 0x143340u;
}
