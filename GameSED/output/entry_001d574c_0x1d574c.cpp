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

// Function: entry_001d574c
// Address: 0x1d574c - 0x1d5750
void entry_001d574c_0x1d574c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d574c_0x1d574c");
#endif

    ctx->pc = 0x1d574cu;

    // 0x1d574c: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x1d574cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1d5750u;
}
