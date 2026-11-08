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

// Function: entry_001907b0
// Address: 0x1907b0 - 0x1907b4
void entry_001907b0_0x1907b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001907b0_0x1907b0");
#endif

    ctx->pc = 0x1907b0u;

    // 0x1907b0: 0x26710150  addiu       $s1, $s3, 0x150
    ctx->pc = 0x1907b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
    ctx->pc = 0x1907b4u;
}
