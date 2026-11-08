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

// Function: entry_0012142c
// Address: 0x12142c - 0x121430
void entry_0012142c_0x12142c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012142c_0x12142c");
#endif

    ctx->pc = 0x12142cu;

    // 0x12142c: 0x24507100  addiu       $s0, $v0, 0x7100
    ctx->pc = 0x12142cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
    ctx->pc = 0x121430u;
}
