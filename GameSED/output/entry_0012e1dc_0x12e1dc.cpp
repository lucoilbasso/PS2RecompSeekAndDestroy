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

// Function: entry_0012e1dc
// Address: 0x12e1dc - 0x12e1e0
void entry_0012e1dc_0x12e1dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e1dc_0x12e1dc");
#endif

    ctx->pc = 0x12e1dcu;

    // 0x12e1dc: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x12e1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->pc = 0x12e1e0u;
}
