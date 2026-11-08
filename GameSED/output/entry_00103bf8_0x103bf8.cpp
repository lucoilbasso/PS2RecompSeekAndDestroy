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

// Function: entry_00103bf8
// Address: 0x103bf8 - 0x103bfc
void entry_00103bf8_0x103bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103bf8_0x103bf8");
#endif

    ctx->pc = 0x103bf8u;

    // 0x103bf8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x103bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x103bfcu;
}
