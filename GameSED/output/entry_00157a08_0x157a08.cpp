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

// Function: entry_00157a08
// Address: 0x157a08 - 0x157a0c
void entry_00157a08_0x157a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157a08_0x157a08");
#endif

    ctx->pc = 0x157a08u;

    // 0x157a08: 0x26430150  addiu       $v1, $s2, 0x150
    ctx->pc = 0x157a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    ctx->pc = 0x157a0cu;
}
