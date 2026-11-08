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

// Function: entry_00105e14
// Address: 0x105e14 - 0x105e18
void entry_00105e14_0x105e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105e14_0x105e14");
#endif

    ctx->pc = 0x105e14u;

    // 0x105e14: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x105e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    ctx->pc = 0x105e18u;
}
