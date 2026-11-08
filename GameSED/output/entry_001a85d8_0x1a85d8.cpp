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

// Function: entry_001a85d8
// Address: 0x1a85d8 - 0x1a85e0
void entry_001a85d8_0x1a85d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a85d8_0x1a85d8");
#endif

    ctx->pc = 0x1a85d8u;

    // 0x1a85d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a85d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a85dc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a85dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1a85e0u;
}
