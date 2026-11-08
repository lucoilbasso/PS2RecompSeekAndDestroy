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

// Function: entry_0019c73c
// Address: 0x19c73c - 0x19c740
void entry_0019c73c_0x19c73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c73c_0x19c73c");
#endif

    ctx->pc = 0x19c73cu;

    // 0x19c73c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19c73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x19c740u;
}
