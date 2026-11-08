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

// Function: entry_001907a4
// Address: 0x1907a4 - 0x1907a8
void entry_001907a4_0x1907a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001907a4_0x1907a4");
#endif

    ctx->pc = 0x1907a4u;

    // 0x1907a4: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x1907a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->pc = 0x1907a8u;
}
