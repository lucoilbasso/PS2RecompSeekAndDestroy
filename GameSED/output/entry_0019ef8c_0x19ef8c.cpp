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

// Function: entry_0019ef8c
// Address: 0x19ef8c - 0x19ef90
void entry_0019ef8c_0x19ef8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ef8c_0x19ef8c");
#endif

    ctx->pc = 0x19ef8cu;

    // 0x19ef8c: 0x33000  sll         $a2, $v1, 0
    ctx->pc = 0x19ef8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    ctx->pc = 0x19ef90u;
}
