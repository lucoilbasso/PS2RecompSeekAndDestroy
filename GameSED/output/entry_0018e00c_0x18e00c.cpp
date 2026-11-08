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

// Function: entry_0018e00c
// Address: 0x18e00c - 0x18e014
void entry_0018e00c_0x18e00c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e00c_0x18e00c");
#endif

    ctx->pc = 0x18e00cu;

    // 0x18e00c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x18e00cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18e010: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18e010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x18e014u;
}
