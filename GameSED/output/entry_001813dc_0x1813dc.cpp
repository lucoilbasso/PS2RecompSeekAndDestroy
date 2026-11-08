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

// Function: entry_001813dc
// Address: 0x1813dc - 0x1813e0
void entry_001813dc_0x1813dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001813dc_0x1813dc");
#endif

    ctx->pc = 0x1813dcu;

    // 0x1813dc: 0x2e420080  sltiu       $v0, $s2, 0x80
    ctx->pc = 0x1813dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    ctx->pc = 0x1813e0u;
}
