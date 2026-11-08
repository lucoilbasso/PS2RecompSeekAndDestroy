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

// Function: entry_0013c280
// Address: 0x13c280 - 0x13c284
void entry_0013c280_0x13c280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c280_0x13c280");
#endif

    ctx->pc = 0x13c280u;

    // 0x13c280: 0x8ce301e0  lw          $v1, 0x1E0($a3)
    ctx->pc = 0x13c280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
    ctx->pc = 0x13c284u;
}
