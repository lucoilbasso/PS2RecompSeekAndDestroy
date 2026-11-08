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

// Function: entry_0019f1bc
// Address: 0x19f1bc - 0x19f1c0
void entry_0019f1bc_0x19f1bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f1bc_0x19f1bc");
#endif

    ctx->pc = 0x19f1bcu;

    // 0x19f1bc: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x19f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    ctx->pc = 0x19f1c0u;
}
