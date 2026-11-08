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

// Function: entry_0013ec20
// Address: 0x13ec20 - 0x13ec24
void entry_0013ec20_0x13ec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ec20_0x13ec20");
#endif

    ctx->pc = 0x13ec20u;

    // 0x13ec20: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->pc = 0x13ec24u;
}
