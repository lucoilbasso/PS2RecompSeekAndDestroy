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

// Function: entry_0019e62c
// Address: 0x19e62c - 0x19e638
void entry_0019e62c_0x19e62c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e62c_0x19e62c");
#endif

    ctx->pc = 0x19e62cu;

    // 0x19e62c: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x19e62cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x19e630: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19e630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e634: 0x24a5a8d0  addiu       $a1, $a1, -0x5730
    ctx->pc = 0x19e634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944976));
    ctx->pc = 0x19e638u;
}
