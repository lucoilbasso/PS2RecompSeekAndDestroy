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

// Function: entry_00141058
// Address: 0x141058 - 0x14105c
void entry_00141058_0x141058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141058_0x141058");
#endif

    ctx->pc = 0x141058u;

    // 0x141058: 0x26b200f0  addiu       $s2, $s5, 0xF0
    ctx->pc = 0x141058u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
    ctx->pc = 0x14105cu;
}
