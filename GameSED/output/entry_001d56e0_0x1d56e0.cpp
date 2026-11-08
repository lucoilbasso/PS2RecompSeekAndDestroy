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

// Function: entry_001d56e0
// Address: 0x1d56e0 - 0x1d56e4
void entry_001d56e0_0x1d56e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d56e0_0x1d56e0");
#endif

    ctx->pc = 0x1d56e0u;

    // 0x1d56e0: 0x51882  srl         $v1, $a1, 2
    ctx->pc = 0x1d56e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    ctx->pc = 0x1d56e4u;
}
