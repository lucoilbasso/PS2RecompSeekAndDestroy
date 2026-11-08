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

// Function: entry_001736b8
// Address: 0x1736b8 - 0x1736c0
void entry_001736b8_0x1736b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001736b8_0x1736b8");
#endif

    ctx->pc = 0x1736b8u;

    // 0x1736b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1736b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1736bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->pc = 0x1736c0u;
}
