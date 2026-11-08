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

// Function: entry_001c7b3c
// Address: 0x1c7b3c - 0x1c7b40
void entry_001c7b3c_0x1c7b3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7b3c_0x1c7b3c");
#endif

    ctx->pc = 0x1c7b3cu;

    // 0x1c7b3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c7b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1c7b40u;
}
