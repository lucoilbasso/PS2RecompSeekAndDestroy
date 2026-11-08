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

// Function: entry_001c65f8
// Address: 0x1c65f8 - 0x1c65fc
void entry_001c65f8_0x1c65f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c65f8_0x1c65f8");
#endif

    ctx->pc = 0x1c65f8u;

    // 0x1c65f8: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1c65f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    ctx->pc = 0x1c65fcu;
}
