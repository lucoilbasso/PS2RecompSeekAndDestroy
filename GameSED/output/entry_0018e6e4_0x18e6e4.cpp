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

// Function: entry_0018e6e4
// Address: 0x18e6e4 - 0x18e6e8
void entry_0018e6e4_0x18e6e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e6e4_0x18e6e4");
#endif

    ctx->pc = 0x18e6e4u;

    // 0x18e6e4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x18e6e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    ctx->pc = 0x18e6e8u;
}
