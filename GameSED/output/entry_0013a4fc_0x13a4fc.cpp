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

// Function: entry_0013a4fc
// Address: 0x13a4fc - 0x13a500
void entry_0013a4fc_0x13a4fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a4fc_0x13a4fc");
#endif

    ctx->pc = 0x13a4fcu;

    // 0x13a4fc: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x13a4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    ctx->pc = 0x13a500u;
}
