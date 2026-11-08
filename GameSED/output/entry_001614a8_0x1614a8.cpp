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

// Function: entry_001614a8
// Address: 0x1614a8 - 0x1614ac
void entry_001614a8_0x1614a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001614a8_0x1614a8");
#endif

    ctx->pc = 0x1614a8u;

    // 0x1614a8: 0x24901a60  addiu       $s0, $a0, 0x1A60
    ctx->pc = 0x1614a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 6752));
    ctx->pc = 0x1614acu;
}
