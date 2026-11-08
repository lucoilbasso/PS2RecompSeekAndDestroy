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

// Function: entry_001cf86c
// Address: 0x1cf86c - 0x1cf874
void entry_001cf86c_0x1cf86c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf86c_0x1cf86c");
#endif

    ctx->pc = 0x1cf86cu;

    // 0x1cf86c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cf86cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cf870: 0x2c62001f  sltiu       $v0, $v1, 0x1F
    ctx->pc = 0x1cf870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    ctx->pc = 0x1cf874u;
}
