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

// Function: entry_00141a0c
// Address: 0x141a0c - 0x141a10
void entry_00141a0c_0x141a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141a0c_0x141a0c");
#endif

    ctx->pc = 0x141a0cu;

    // 0x141a0c: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x141a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    ctx->pc = 0x141a10u;
}
