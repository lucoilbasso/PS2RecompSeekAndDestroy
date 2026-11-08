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

// Function: entry_0013ad44
// Address: 0x13ad44 - 0x13ad48
void entry_0013ad44_0x13ad44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ad44_0x13ad44");
#endif

    ctx->pc = 0x13ad44u;

    // 0x13ad44: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x13ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->pc = 0x13ad48u;
}
