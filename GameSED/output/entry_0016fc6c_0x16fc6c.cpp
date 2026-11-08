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

// Function: entry_0016fc6c
// Address: 0x16fc6c - 0x16fc70
void entry_0016fc6c_0x16fc6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fc6c_0x16fc6c");
#endif

    ctx->pc = 0x16fc6cu;

    // 0x16fc6c: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x16fc6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    ctx->pc = 0x16fc70u;
}
