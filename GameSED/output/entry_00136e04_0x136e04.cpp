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

// Function: entry_00136e04
// Address: 0x136e04 - 0x136e08
void entry_00136e04_0x136e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136e04_0x136e04");
#endif

    ctx->pc = 0x136e04u;

    // 0x136e04: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x136e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    ctx->pc = 0x136e08u;
}
