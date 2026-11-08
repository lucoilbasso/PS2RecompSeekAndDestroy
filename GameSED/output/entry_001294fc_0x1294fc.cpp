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

// Function: entry_001294fc
// Address: 0x1294fc - 0x129500
void entry_001294fc_0x1294fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001294fc_0x1294fc");
#endif

    ctx->pc = 0x1294fcu;

    // 0x1294fc: 0x24150888  addiu       $s5, $zero, 0x888
    ctx->pc = 0x1294fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2184));
    ctx->pc = 0x129500u;
}
