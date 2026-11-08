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

// Function: entry_001b5114
// Address: 0x1b5114 - 0x1b5118
void entry_001b5114_0x1b5114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5114_0x1b5114");
#endif

    ctx->pc = 0x1b5114u;

    // 0x1b5114: 0x2e060401  sltiu       $a2, $s0, 0x401
    ctx->pc = 0x1b5114u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    ctx->pc = 0x1b5118u;
}
