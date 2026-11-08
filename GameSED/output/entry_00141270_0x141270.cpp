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

// Function: entry_00141270
// Address: 0x141270 - 0x141274
void entry_00141270_0x141270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141270_0x141270");
#endif

    ctx->pc = 0x141270u;

    // 0x141270: 0x26740030  addiu       $s4, $s3, 0x30
    ctx->pc = 0x141270u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    ctx->pc = 0x141274u;
}
