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

// Function: entry_00138f24
// Address: 0x138f24 - 0x138f28
void entry_00138f24_0x138f24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138f24_0x138f24");
#endif

    ctx->pc = 0x138f24u;

    // 0x138f24: 0x8c62b830  lw          $v0, -0x47D0($v1)
    ctx->pc = 0x138f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948912)));
    ctx->pc = 0x138f28u;
}
