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

// Function: entry_0015b458
// Address: 0x15b458 - 0x15b45c
void entry_0015b458_0x15b458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b458_0x15b458");
#endif

    ctx->pc = 0x15b458u;

    // 0x15b458: 0x2484a358  addiu       $a0, $a0, -0x5CA8
    ctx->pc = 0x15b458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943576));
    ctx->pc = 0x15b45cu;
}
