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

// Function: entry_00171d08
// Address: 0x171d08 - 0x171d0c
void entry_00171d08_0x171d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171d08_0x171d08");
#endif

    ctx->pc = 0x171d08u;

    // 0x171d08: 0x248413b0  addiu       $a0, $a0, 0x13B0
    ctx->pc = 0x171d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5040));
    ctx->pc = 0x171d0cu;
}
