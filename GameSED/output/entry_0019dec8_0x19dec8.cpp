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

// Function: entry_0019dec8
// Address: 0x19dec8 - 0x19decc
void entry_0019dec8_0x19dec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dec8_0x19dec8");
#endif

    ctx->pc = 0x19dec8u;

    // 0x19dec8: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x19dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    ctx->pc = 0x19deccu;
}
