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

// Function: entry_001cc8b0
// Address: 0x1cc8b0 - 0x1cc8b4
void entry_001cc8b0_0x1cc8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc8b0_0x1cc8b0");
#endif

    ctx->pc = 0x1cc8b0u;

    // 0x1cc8b0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1cc8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->pc = 0x1cc8b4u;
}
