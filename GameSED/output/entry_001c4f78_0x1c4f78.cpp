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

// Function: entry_001c4f78
// Address: 0x1c4f78 - 0x1c4f7c
void entry_001c4f78_0x1c4f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4f78_0x1c4f78");
#endif

    ctx->pc = 0x1c4f78u;

    // 0x1c4f78: 0x8e820400  lw          $v0, 0x400($s4)
    ctx->pc = 0x1c4f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1024)));
    ctx->pc = 0x1c4f7cu;
}
