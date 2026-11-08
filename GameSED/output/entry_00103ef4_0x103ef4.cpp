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

// Function: entry_00103ef4
// Address: 0x103ef4 - 0x103ef8
void entry_00103ef4_0x103ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103ef4_0x103ef4");
#endif

    ctx->pc = 0x103ef4u;

    // 0x103ef4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x103ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    ctx->pc = 0x103ef8u;
}
