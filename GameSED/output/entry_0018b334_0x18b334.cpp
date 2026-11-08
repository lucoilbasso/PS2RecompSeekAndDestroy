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

// Function: entry_0018b334
// Address: 0x18b334 - 0x18b338
void entry_0018b334_0x18b334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b334_0x18b334");
#endif

    ctx->pc = 0x18b334u;

    // 0x18b334: 0x3c0a0022  lui         $t2, 0x22
    ctx->pc = 0x18b334u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)34 << 16));
    ctx->pc = 0x18b338u;
}
