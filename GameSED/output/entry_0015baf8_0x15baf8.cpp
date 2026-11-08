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

// Function: entry_0015baf8
// Address: 0x15baf8 - 0x15bafc
void entry_0015baf8_0x15baf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015baf8_0x15baf8");
#endif

    ctx->pc = 0x15baf8u;

    // 0x15baf8: 0x24900060  addiu       $s0, $a0, 0x60
    ctx->pc = 0x15baf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->pc = 0x15bafcu;
}
