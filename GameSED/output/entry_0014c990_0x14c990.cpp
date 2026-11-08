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

// Function: entry_0014c990
// Address: 0x14c990 - 0x14c994
void entry_0014c990_0x14c990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c990_0x14c990");
#endif

    ctx->pc = 0x14c990u;

    // 0x14c990: 0x119900  sll         $s3, $s1, 4
    ctx->pc = 0x14c990u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    ctx->pc = 0x14c994u;
}
