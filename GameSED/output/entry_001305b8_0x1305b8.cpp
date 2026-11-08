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

// Function: entry_001305b8
// Address: 0x1305b8 - 0x1305bc
void entry_001305b8_0x1305b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001305b8_0x1305b8");
#endif

    ctx->pc = 0x1305b8u;

    // 0x1305b8: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x1305b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    ctx->pc = 0x1305bcu;
}
