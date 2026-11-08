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

// Function: entry_0017c49c
// Address: 0x17c49c - 0x17c4a0
void entry_0017c49c_0x17c49c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c49c_0x17c49c");
#endif

    ctx->pc = 0x17c49cu;

    // 0x17c49c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x17c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    ctx->pc = 0x17c4a0u;
}
