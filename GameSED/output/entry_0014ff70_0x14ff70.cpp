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

// Function: entry_0014ff70
// Address: 0x14ff70 - 0x14ff74
void entry_0014ff70_0x14ff70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ff70_0x14ff70");
#endif

    ctx->pc = 0x14ff70u;

    // 0x14ff70: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x14ff70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    ctx->pc = 0x14ff74u;
}
