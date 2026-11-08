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

// Function: entry_00173a80
// Address: 0x173a80 - 0x173a84
void entry_00173a80_0x173a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173a80_0x173a80");
#endif

    ctx->pc = 0x173a80u;

    // 0x173a80: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x173a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    ctx->pc = 0x173a84u;
}
