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

// Function: entry_00157848
// Address: 0x157848 - 0x15784c
void entry_00157848_0x157848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157848_0x157848");
#endif

    ctx->pc = 0x157848u;

    // 0x157848: 0x2e530002  sltiu       $s3, $s2, 0x2
    ctx->pc = 0x157848u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    ctx->pc = 0x15784cu;
}
