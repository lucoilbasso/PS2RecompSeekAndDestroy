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

// Function: entry_001186a8
// Address: 0x1186a8 - 0x1186ac
void entry_001186a8_0x1186a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001186a8_0x1186a8");
#endif

    ctx->pc = 0x1186a8u;

    // 0x1186a8: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x1186a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    ctx->pc = 0x1186acu;
}
