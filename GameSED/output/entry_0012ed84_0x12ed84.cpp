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

// Function: entry_0012ed84
// Address: 0x12ed84 - 0x12ed88
void entry_0012ed84_0x12ed84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ed84_0x12ed84");
#endif

    ctx->pc = 0x12ed84u;

    // 0x12ed84: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x12ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->pc = 0x12ed88u;
}
