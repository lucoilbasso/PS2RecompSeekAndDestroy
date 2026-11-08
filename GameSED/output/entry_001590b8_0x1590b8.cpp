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

// Function: entry_001590b8
// Address: 0x1590b8 - 0x1590c0
void entry_001590b8_0x1590b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001590b8_0x1590b8");
#endif

    ctx->pc = 0x1590b8u;

    // 0x1590b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1590b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1590bc: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x1590bcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    ctx->pc = 0x1590c0u;
}
