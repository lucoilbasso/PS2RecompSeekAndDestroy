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

// Function: entry_001a56d8
// Address: 0x1a56d8 - 0x1a56dc
void entry_001a56d8_0x1a56d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a56d8_0x1a56d8");
#endif

    ctx->pc = 0x1a56d8u;

    // 0x1a56d8: 0x24463918  addiu       $a2, $v0, 0x3918
    ctx->pc = 0x1a56d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 14616));
    ctx->pc = 0x1a56dcu;
}
