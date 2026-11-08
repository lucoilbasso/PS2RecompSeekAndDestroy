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

// Function: entry_00182fb4
// Address: 0x182fb4 - 0x182fb8
void entry_00182fb4_0x182fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182fb4_0x182fb4");
#endif

    ctx->pc = 0x182fb4u;

    // 0x182fb4: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x182fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x182fb8u;
}
