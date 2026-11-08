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

// Function: entry_0010f980
// Address: 0x10f980 - 0x10f984
void entry_0010f980_0x10f980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f980_0x10f980");
#endif

    ctx->pc = 0x10f980u;

    // 0x10f980: 0x26430030  addiu       $v1, $s2, 0x30
    ctx->pc = 0x10f980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->pc = 0x10f984u;
}
