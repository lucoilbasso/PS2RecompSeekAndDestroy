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

// Function: entry_001d5964
// Address: 0x1d5964 - 0x1d5968
void entry_001d5964_0x1d5964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5964_0x1d5964");
#endif

    ctx->pc = 0x1d5964u;

    // 0x1d5964: 0x1f93821  addu        $a3, $t7, $t9
    ctx->pc = 0x1d5964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
    ctx->pc = 0x1d5968u;
}
