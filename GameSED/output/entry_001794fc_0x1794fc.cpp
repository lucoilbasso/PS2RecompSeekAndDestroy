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

// Function: entry_001794fc
// Address: 0x1794fc - 0x179500
void entry_001794fc_0x1794fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001794fc_0x1794fc");
#endif

    ctx->pc = 0x1794fcu;

    // 0x1794fc: 0x26114010  addiu       $s1, $s0, 0x4010
    ctx->pc = 0x1794fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16400));
    ctx->pc = 0x179500u;
}
