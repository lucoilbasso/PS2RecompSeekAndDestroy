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

// Function: entry_0012bc98
// Address: 0x12bc98 - 0x12bc9c
void entry_0012bc98_0x12bc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bc98_0x12bc98");
#endif

    ctx->pc = 0x12bc98u;

    // 0x12bc98: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x12bc98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x12bc9cu;
}
