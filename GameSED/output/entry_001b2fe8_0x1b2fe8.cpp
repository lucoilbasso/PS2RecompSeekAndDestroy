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

// Function: entry_001b2fe8
// Address: 0x1b2fe8 - 0x1b2fec
void entry_001b2fe8_0x1b2fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2fe8_0x1b2fe8");
#endif

    ctx->pc = 0x1b2fe8u;

    // 0x1b2fe8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b2fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x1b2fecu;
}
