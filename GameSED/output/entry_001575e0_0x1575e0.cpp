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

// Function: entry_001575e0
// Address: 0x1575e0 - 0x1575e4
void entry_001575e0_0x1575e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001575e0_0x1575e0");
#endif

    ctx->pc = 0x1575e0u;

    // 0x1575e0: 0x2e530002  sltiu       $s3, $s2, 0x2
    ctx->pc = 0x1575e0u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    ctx->pc = 0x1575e4u;
}
