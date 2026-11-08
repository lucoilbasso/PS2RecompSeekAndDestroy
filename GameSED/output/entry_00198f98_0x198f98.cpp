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

// Function: entry_00198f98
// Address: 0x198f98 - 0x198f9c
void entry_00198f98_0x198f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198f98_0x198f98");
#endif

    ctx->pc = 0x198f98u;

    // 0x198f98: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x198f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    ctx->pc = 0x198f9cu;
}
