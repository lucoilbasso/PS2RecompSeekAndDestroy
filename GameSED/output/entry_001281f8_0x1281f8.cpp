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

// Function: entry_001281f8
// Address: 0x1281f8 - 0x128200
void entry_001281f8_0x1281f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001281f8_0x1281f8");
#endif

    ctx->pc = 0x1281f8u;

    // 0x1281f8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1281f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1281fc: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1281fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x128200u;
}
