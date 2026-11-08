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

// Function: entry_00173b14
// Address: 0x173b14 - 0x173b18
void entry_00173b14_0x173b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173b14_0x173b14");
#endif

    ctx->pc = 0x173b14u;

    // 0x173b14: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x173b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    ctx->pc = 0x173b18u;
}
