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

// Function: entry_00107d2c
// Address: 0x107d2c - 0x107d34
void entry_00107d2c_0x107d2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107d2c_0x107d2c");
#endif

    ctx->pc = 0x107d2cu;

    // 0x107d2c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x107d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x107d30: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x107d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x107d34u;
}
