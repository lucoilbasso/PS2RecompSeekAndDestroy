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

// Function: entry_001428f8
// Address: 0x1428f8 - 0x1428fc
void entry_001428f8_0x1428f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001428f8_0x1428f8");
#endif

    ctx->pc = 0x1428f8u;

    // 0x1428f8: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x1428f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->pc = 0x1428fcu;
}
