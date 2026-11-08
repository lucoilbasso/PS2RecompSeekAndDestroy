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

// Function: entry_00178a78
// Address: 0x178a78 - 0x178a7c
void entry_00178a78_0x178a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178a78_0x178a78");
#endif

    ctx->pc = 0x178a78u;

    // 0x178a78: 0x8e021040  lw          $v0, 0x1040($s0)
    ctx->pc = 0x178a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
    ctx->pc = 0x178a7cu;
}
