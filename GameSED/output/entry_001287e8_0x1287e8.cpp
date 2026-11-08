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

// Function: entry_001287e8
// Address: 0x1287e8 - 0x1287ec
void entry_001287e8_0x1287e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001287e8_0x1287e8");
#endif

    ctx->pc = 0x1287e8u;

    // 0x1287e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1287e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1287ecu;
}
