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

// Function: entry_0012e460
// Address: 0x12e460 - 0x12e464
void entry_0012e460_0x12e460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e460_0x12e460");
#endif

    ctx->pc = 0x12e460u;

    // 0x12e460: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x12e460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    ctx->pc = 0x12e464u;
}
