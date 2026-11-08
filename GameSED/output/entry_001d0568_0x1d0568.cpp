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

// Function: entry_001d0568
// Address: 0x1d0568 - 0x1d056c
void entry_001d0568_0x1d0568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0568_0x1d0568");
#endif

    ctx->pc = 0x1d0568u;

    // 0x1d0568: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x1d0568u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    ctx->pc = 0x1d056cu;
}
