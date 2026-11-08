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

// Function: entry_0018b444
// Address: 0x18b444 - 0x18b448
void entry_0018b444_0x18b444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b444_0x18b444");
#endif

    ctx->pc = 0x18b444u;

    // 0x18b444: 0x8c830208  lw          $v1, 0x208($a0)
    ctx->pc = 0x18b444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 520)));
    ctx->pc = 0x18b448u;
}
