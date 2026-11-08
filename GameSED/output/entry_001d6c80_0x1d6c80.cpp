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

// Function: entry_001d6c80
// Address: 0x1d6c80 - 0x1d6c84
void entry_001d6c80_0x1d6c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6c80_0x1d6c80");
#endif

    ctx->pc = 0x1d6c80u;

    // 0x1d6c80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d6c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1d6c84u;
}
