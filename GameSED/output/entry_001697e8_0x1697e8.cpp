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

// Function: entry_001697e8
// Address: 0x1697e8 - 0x1697ec
void entry_001697e8_0x1697e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001697e8_0x1697e8");
#endif

    ctx->pc = 0x1697e8u;

    // 0x1697e8: 0x260310fc  addiu       $v1, $s0, 0x10FC
    ctx->pc = 0x1697e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4348));
    ctx->pc = 0x1697ecu;
}
