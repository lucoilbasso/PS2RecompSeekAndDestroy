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

// Function: entry_001c6764
// Address: 0x1c6764 - 0x1c6768
void entry_001c6764_0x1c6764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6764_0x1c6764");
#endif

    ctx->pc = 0x1c6764u;

    // 0x1c6764: 0x344221fb  ori         $v0, $v0, 0x21FB
    ctx->pc = 0x1c6764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8699);
    ctx->pc = 0x1c6768u;
}
