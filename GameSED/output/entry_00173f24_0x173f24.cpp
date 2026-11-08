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

// Function: entry_00173f24
// Address: 0x173f24 - 0x173f28
void entry_00173f24_0x173f24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173f24_0x173f24");
#endif

    ctx->pc = 0x173f24u;

    // 0x173f24: 0x3c110027  lui         $s1, 0x27
    ctx->pc = 0x173f24u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)39 << 16));
    ctx->pc = 0x173f28u;
}
