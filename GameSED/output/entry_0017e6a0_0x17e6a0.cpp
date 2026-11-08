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

// Function: entry_0017e6a0
// Address: 0x17e6a0 - 0x17e6a4
void entry_0017e6a0_0x17e6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e6a0_0x17e6a0");
#endif

    ctx->pc = 0x17e6a0u;

    // 0x17e6a0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x17e6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    ctx->pc = 0x17e6a4u;
}
