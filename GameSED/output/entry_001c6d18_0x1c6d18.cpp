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

// Function: entry_001c6d18
// Address: 0x1c6d18 - 0x1c6d1c
void entry_001c6d18_0x1c6d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6d18_0x1c6d18");
#endif

    ctx->pc = 0x1c6d18u;

    // 0x1c6d18: 0x2439024  and         $s2, $s2, $v1
    ctx->pc = 0x1c6d18u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
    ctx->pc = 0x1c6d1cu;
}
