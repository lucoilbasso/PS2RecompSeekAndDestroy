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

// Function: entry_0012e0fc
// Address: 0x12e0fc - 0x12e100
void entry_0012e0fc_0x12e0fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e0fc_0x12e0fc");
#endif

    ctx->pc = 0x12e0fcu;

    // 0x12e0fc: 0xa4e00118  sh          $zero, 0x118($a3)
    ctx->pc = 0x12e0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 280), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x12e100u;
}
