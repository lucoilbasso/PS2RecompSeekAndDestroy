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

// Function: entry_001b32b4
// Address: 0x1b32b4 - 0x1b32c0
void entry_001b32b4_0x1b32b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b32b4_0x1b32b4");
#endif

    ctx->pc = 0x1b32b4u;

    // 0x1b32b4: 0x2623fff0  addiu       $v1, $s1, -0x10
    ctx->pc = 0x1b32b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x1b32b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b32b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b32bc: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x1b32bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1b32c0u;
}
