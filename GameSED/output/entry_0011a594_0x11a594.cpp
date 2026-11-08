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

// Function: entry_0011a594
// Address: 0x11a594 - 0x11a59c
void entry_0011a594_0x11a594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a594_0x11a594");
#endif

    ctx->pc = 0x11a594u;

    // 0x11a594: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x11a594u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x11a598: 0x308400f0  andi        $a0, $a0, 0xF0
    ctx->pc = 0x11a598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
    ctx->pc = 0x11a59cu;
}
