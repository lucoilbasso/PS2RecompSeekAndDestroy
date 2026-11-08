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

// Function: entry_0019b6e8
// Address: 0x19b6e8 - 0x19b6ec
void entry_0019b6e8_0x19b6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b6e8_0x19b6e8");
#endif

    ctx->pc = 0x19b6e8u;

    // 0x19b6e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19b6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x19b6ecu;
}
