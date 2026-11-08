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

// Function: entry_001a680c
// Address: 0x1a680c - 0x1a6818
void entry_001a680c_0x1a680c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a680c_0x1a680c");
#endif

    ctx->pc = 0x1a680cu;

    // 0x1a680c: 0x725010c8  pmaxw       $v0, $s2, $s0
    ctx->pc = 0x1a680cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 18), GPR_VEC(ctx, 16)));
    // 0x1a6810: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1a6810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1a6814: 0x704510e8  pminw       $v0, $v0, $a1
    ctx->pc = 0x1a6814u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    ctx->pc = 0x1a6818u;
}
