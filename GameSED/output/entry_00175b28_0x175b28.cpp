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

// Function: entry_00175b28
// Address: 0x175b28 - 0x175b2c
void entry_00175b28_0x175b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175b28_0x175b28");
#endif

    ctx->pc = 0x175b28u;

    // 0x175b28: 0x118ac0  sll         $s1, $s1, 11
    ctx->pc = 0x175b28u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    ctx->pc = 0x175b2cu;
}
