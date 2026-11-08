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

// Function: entry_00151cf8
// Address: 0x151cf8 - 0x151cfc
void entry_00151cf8_0x151cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151cf8_0x151cf8");
#endif

    ctx->pc = 0x151cf8u;

    // 0x151cf8: 0x24439ce0  addiu       $v1, $v0, -0x6320
    ctx->pc = 0x151cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941920));
    ctx->pc = 0x151cfcu;
}
