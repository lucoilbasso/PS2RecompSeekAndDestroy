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

// Function: entry_00173d38
// Address: 0x173d38 - 0x173d3c
void entry_00173d38_0x173d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173d38_0x173d38");
#endif

    ctx->pc = 0x173d38u;

    // 0x173d38: 0x24a50044  addiu       $a1, $a1, 0x44
    ctx->pc = 0x173d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 68));
    ctx->pc = 0x173d3cu;
}
