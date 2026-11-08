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

// Function: entry_00182fb8
// Address: 0x182fb8 - 0x182fc0
void entry_00182fb8_0x182fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182fb8_0x182fb8");
#endif

    ctx->pc = 0x182fb8u;

    // 0x182fb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x182fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x182fbc: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x182fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    ctx->pc = 0x182fc0u;
}
