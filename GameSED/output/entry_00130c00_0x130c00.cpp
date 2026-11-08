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

// Function: entry_00130c00
// Address: 0x130c00 - 0x130c04
void entry_00130c00_0x130c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130c00_0x130c00");
#endif

    ctx->pc = 0x130c00u;

    // 0x130c00: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x130c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x130c04u;
}
