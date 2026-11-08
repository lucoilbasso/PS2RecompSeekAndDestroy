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

// Function: entry_001b0bcc
// Address: 0x1b0bcc - 0x1b0bd0
void entry_001b0bcc_0x1b0bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0bcc_0x1b0bcc");
#endif

    ctx->pc = 0x1b0bccu;

    // 0x1b0bcc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b0bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1b0bd0u;
}
