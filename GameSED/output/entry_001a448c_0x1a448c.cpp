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

// Function: entry_001a448c
// Address: 0x1a448c - 0x1a4490
void entry_001a448c_0x1a448c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a448c_0x1a448c");
#endif

    ctx->pc = 0x1a448cu;

    // 0x1a448c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1a448cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->pc = 0x1a4490u;
}
