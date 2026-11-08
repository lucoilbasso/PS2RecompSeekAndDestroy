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

// Function: entry_00189300
// Address: 0x189300 - 0x189304
void entry_00189300_0x189300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189300_0x189300");
#endif

    ctx->pc = 0x189300u;

    // 0x189300: 0x24e20090  addiu       $v0, $a3, 0x90
    ctx->pc = 0x189300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
    ctx->pc = 0x189304u;
}
