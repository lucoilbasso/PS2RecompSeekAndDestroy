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

// Function: entry_001b29ac
// Address: 0x1b29ac - 0x1b29b0
void entry_001b29ac_0x1b29ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b29ac_0x1b29ac");
#endif

    ctx->pc = 0x1b29acu;

    // 0x1b29ac: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1b29acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->pc = 0x1b29b0u;
}
