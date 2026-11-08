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

// Function: entry_00148904
// Address: 0x148904 - 0x148908
void entry_00148904_0x148904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148904_0x148904");
#endif

    ctx->pc = 0x148904u;

    // 0x148904: 0x2407fff8  addiu       $a3, $zero, -0x8
    ctx->pc = 0x148904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    ctx->pc = 0x148908u;
}
