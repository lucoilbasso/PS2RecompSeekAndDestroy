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

// Function: entry_0016c11c
// Address: 0x16c11c - 0x16c120
void entry_0016c11c_0x16c11c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c11c_0x16c11c");
#endif

    ctx->pc = 0x16c11cu;

    // 0x16c11c: 0x2cc3000d  sltiu       $v1, $a2, 0xD
    ctx->pc = 0x16c11cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    ctx->pc = 0x16c120u;
}
