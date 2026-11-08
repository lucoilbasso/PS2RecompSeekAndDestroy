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

// Function: entry_00156d08
// Address: 0x156d08 - 0x156d0c
void entry_00156d08_0x156d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156d08_0x156d08");
#endif

    ctx->pc = 0x156d08u;

    // 0x156d08: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x156d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x156d0cu;
}
