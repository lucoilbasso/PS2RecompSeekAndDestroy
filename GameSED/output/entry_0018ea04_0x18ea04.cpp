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

// Function: entry_0018ea04
// Address: 0x18ea04 - 0x18ea08
void entry_0018ea04_0x18ea04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ea04_0x18ea04");
#endif

    ctx->pc = 0x18ea04u;

    // 0x18ea04: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x18ea08u;
}
