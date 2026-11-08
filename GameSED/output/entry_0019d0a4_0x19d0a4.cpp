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

// Function: entry_0019d0a4
// Address: 0x19d0a4 - 0x19d0a8
void entry_0019d0a4_0x19d0a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d0a4_0x19d0a4");
#endif

    ctx->pc = 0x19d0a4u;

    // 0x19d0a4: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x19d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x19d0a8u;
}
