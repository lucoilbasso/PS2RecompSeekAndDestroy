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

// Function: entry_001a10e4
// Address: 0x1a10e4 - 0x1a10e8
void entry_001a10e4_0x1a10e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a10e4_0x1a10e4");
#endif

    ctx->pc = 0x1a10e4u;

    // 0x1a10e4: 0x2447e530  addiu       $a3, $v0, -0x1AD0
    ctx->pc = 0x1a10e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960432));
    ctx->pc = 0x1a10e8u;
}
