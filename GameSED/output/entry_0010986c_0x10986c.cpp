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

// Function: entry_0010986c
// Address: 0x10986c - 0x109874
void entry_0010986c_0x10986c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010986c_0x10986c");
#endif

    ctx->pc = 0x10986cu;

    // 0x10986c: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x10986cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x109870: 0x23000  sll         $a2, $v0, 0
    ctx->pc = 0x109870u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    ctx->pc = 0x109874u;
}
