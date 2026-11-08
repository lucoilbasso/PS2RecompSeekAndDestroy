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

// Function: entry_001d040c
// Address: 0x1d040c - 0x1d0410
void entry_001d040c_0x1d040c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d040c_0x1d040c");
#endif

    ctx->pc = 0x1d040cu;

    // 0x1d040c: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x1d040cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    ctx->pc = 0x1d0410u;
}
