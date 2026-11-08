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

// Function: entry_001ca95c
// Address: 0x1ca95c - 0x1ca960
void entry_001ca95c_0x1ca95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca95c_0x1ca95c");
#endif

    ctx->pc = 0x1ca95cu;

    // 0x1ca95c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1ca95cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    ctx->pc = 0x1ca960u;
}
