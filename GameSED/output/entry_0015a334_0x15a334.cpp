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

// Function: entry_0015a334
// Address: 0x15a334 - 0x15a338
void entry_0015a334_0x15a334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a334_0x15a334");
#endif

    ctx->pc = 0x15a334u;

    // 0x15a334: 0x26700020  addiu       $s0, $s3, 0x20
    ctx->pc = 0x15a334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->pc = 0x15a338u;
}
