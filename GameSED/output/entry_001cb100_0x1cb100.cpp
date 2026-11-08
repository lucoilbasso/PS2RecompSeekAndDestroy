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

// Function: entry_001cb100
// Address: 0x1cb100 - 0x1cb104
void entry_001cb100_0x1cb100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb100_0x1cb100");
#endif

    ctx->pc = 0x1cb100u;

    // 0x1cb100: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x1cb100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    ctx->pc = 0x1cb104u;
}
