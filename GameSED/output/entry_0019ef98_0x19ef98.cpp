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

// Function: entry_0019ef98
// Address: 0x19ef98 - 0x19ef9c
void entry_0019ef98_0x19ef98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ef98_0x19ef98");
#endif

    ctx->pc = 0x19ef98u;

    // 0x19ef98: 0x23000  sll         $a2, $v0, 0
    ctx->pc = 0x19ef98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    ctx->pc = 0x19ef9cu;
}
