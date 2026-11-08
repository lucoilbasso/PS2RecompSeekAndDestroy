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

// Function: entry_0017a3dc
// Address: 0x17a3dc - 0x17a3e0
void entry_0017a3dc_0x17a3dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a3dc_0x17a3dc");
#endif

    ctx->pc = 0x17a3dcu;

    // 0x17a3dc: 0x2484a108  addiu       $a0, $a0, -0x5EF8
    ctx->pc = 0x17a3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942984));
    ctx->pc = 0x17a3e0u;
}
