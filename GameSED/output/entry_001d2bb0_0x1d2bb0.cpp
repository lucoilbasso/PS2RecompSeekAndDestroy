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

// Function: entry_001d2bb0
// Address: 0x1d2bb0 - 0x1d2bb4
void entry_001d2bb0_0x1d2bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2bb0_0x1d2bb0");
#endif

    ctx->pc = 0x1d2bb0u;

    // 0x1d2bb0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1d2bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x1d2bb4u;
}
