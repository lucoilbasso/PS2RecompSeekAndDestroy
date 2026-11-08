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

// Function: entry_0011a558
// Address: 0x11a558 - 0x11a560
void entry_0011a558_0x11a558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a558_0x11a558");
#endif

    ctx->pc = 0x11a558u;

    // 0x11a558: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x11a558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x11a55c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x11a55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    ctx->pc = 0x11a560u;
}
