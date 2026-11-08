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

// Function: entry_0011edf8
// Address: 0x11edf8 - 0x11edfc
void entry_0011edf8_0x11edf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011edf8_0x11edf8");
#endif

    ctx->pc = 0x11edf8u;

    // 0x11edf8: 0x24470790  addiu       $a3, $v0, 0x790
    ctx->pc = 0x11edf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    ctx->pc = 0x11edfcu;
}
