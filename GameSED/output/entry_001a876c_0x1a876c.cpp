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

// Function: entry_001a876c
// Address: 0x1a876c - 0x1a8770
void entry_001a876c_0x1a876c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a876c_0x1a876c");
#endif

    ctx->pc = 0x1a876cu;

    // 0x1a876c: 0x28830c00  slti        $v1, $a0, 0xC00
    ctx->pc = 0x1a876cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3072) ? 1 : 0);
    ctx->pc = 0x1a8770u;
}
