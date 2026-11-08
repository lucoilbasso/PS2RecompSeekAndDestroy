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

// Function: entry_0017b85c
// Address: 0x17b85c - 0x17b860
void entry_0017b85c_0x17b85c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b85c_0x17b85c");
#endif

    ctx->pc = 0x17b85cu;

    // 0x17b85c: 0x24830140  addiu       $v1, $a0, 0x140
    ctx->pc = 0x17b85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->pc = 0x17b860u;
}
