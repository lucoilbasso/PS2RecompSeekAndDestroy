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

// Function: entry_00173c04
// Address: 0x173c04 - 0x173c08
void entry_00173c04_0x173c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173c04_0x173c04");
#endif

    ctx->pc = 0x173c04u;

    // 0x173c04: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x173c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    ctx->pc = 0x173c08u;
}
