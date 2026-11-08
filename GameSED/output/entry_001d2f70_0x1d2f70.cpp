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

// Function: entry_001d2f70
// Address: 0x1d2f70 - 0x1d2f74
void entry_001d2f70_0x1d2f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2f70_0x1d2f70");
#endif

    ctx->pc = 0x1d2f70u;

    // 0x1d2f70: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d2f70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x1d2f74u;
}
