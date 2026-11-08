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

// Function: entry_001a6214
// Address: 0x1a6214 - 0x1a6218
void entry_001a6214_0x1a6214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6214_0x1a6214");
#endif

    ctx->pc = 0x1a6214u;

    // 0x1a6214: 0x2630001c  addiu       $s0, $s1, 0x1C
    ctx->pc = 0x1a6214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    ctx->pc = 0x1a6218u;
}
