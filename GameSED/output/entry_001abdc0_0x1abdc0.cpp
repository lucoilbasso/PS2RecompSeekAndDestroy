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

// Function: entry_001abdc0
// Address: 0x1abdc0 - 0x1abdc4
void entry_001abdc0_0x1abdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abdc0_0x1abdc0");
#endif

    ctx->pc = 0x1abdc0u;

    // 0x1abdc0: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x1abdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
    ctx->pc = 0x1abdc4u;
}
