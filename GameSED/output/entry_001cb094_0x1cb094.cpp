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

// Function: entry_001cb094
// Address: 0x1cb094 - 0x1cb0a4
void entry_001cb094_0x1cb094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb094_0x1cb094");
#endif

    ctx->pc = 0x1cb094u;

    // 0x1cb094: 0x10d580b  movn        $t3, $t0, $t5
    ctx->pc = 0x1cb094u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 8));
    // 0x1cb098: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1cb098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1cb09c: 0x183102b  sltu        $v0, $t4, $v1
    ctx->pc = 0x1cb09cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1cb0a0: 0x62600b  movn        $t4, $v1, $v0
    ctx->pc = 0x1cb0a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 3));
    ctx->pc = 0x1cb0a4u;
}
