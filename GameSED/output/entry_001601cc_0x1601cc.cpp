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

// Function: entry_001601cc
// Address: 0x1601cc - 0x1601dc
void entry_001601cc_0x1601cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001601cc_0x1601cc");
#endif

    ctx->pc = 0x1601ccu;

    // 0x1601cc: 0x723610c8  pmaxw       $v0, $s1, $s6
    ctx->pc = 0x1601ccu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 17), GPR_VEC(ctx, 22)));
    // 0x1601d0: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1601d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1601d4: 0x705510e8  pminw       $v0, $v0, $s5
    ctx->pc = 0x1601d4u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 21)));
    // 0x1601d8: 0x28800  sll         $s1, $v0, 0
    ctx->pc = 0x1601d8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    ctx->pc = 0x1601dcu;
}
