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

// Function: entry_0017514c
// Address: 0x17514c - 0x175150
void entry_0017514c_0x17514c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017514c_0x17514c");
#endif

    ctx->pc = 0x17514cu;

    // 0x17514c: 0x752c0  sll         $t2, $a3, 11
    ctx->pc = 0x17514cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    ctx->pc = 0x175150u;
}
