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

// Function: entry_0018b340
// Address: 0x18b340 - 0x18b344
void entry_0018b340_0x18b340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b340_0x18b340");
#endif

    ctx->pc = 0x18b340u;

    // 0x18b340: 0x26080150  addiu       $t0, $s0, 0x150
    ctx->pc = 0x18b340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->pc = 0x18b344u;
}
