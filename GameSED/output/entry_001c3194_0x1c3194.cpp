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

// Function: entry_001c3194
// Address: 0x1c3194 - 0x1c319c
void entry_001c3194_0x1c3194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3194_0x1c3194");
#endif

    ctx->pc = 0x1c3194u;

    // 0x1c3194: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x1c3194u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c3198: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x1c3198u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1c319cu;
}
