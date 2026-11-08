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

// Function: entry_00192a7c
// Address: 0x192a7c - 0x192a80
void entry_00192a7c_0x192a7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192a7c_0x192a7c");
#endif

    ctx->pc = 0x192a7cu;

    // 0x192a7c: 0x24020276  addiu       $v0, $zero, 0x276
    ctx->pc = 0x192a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
    ctx->pc = 0x192a80u;
}
