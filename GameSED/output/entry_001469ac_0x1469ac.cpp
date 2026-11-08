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

// Function: entry_001469ac
// Address: 0x1469ac - 0x1469b0
void entry_001469ac_0x1469ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001469ac_0x1469ac");
#endif

    ctx->pc = 0x1469acu;

    // 0x1469ac: 0x247226c0  addiu       $s2, $v1, 0x26C0
    ctx->pc = 0x1469acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 9920));
    ctx->pc = 0x1469b0u;
}
