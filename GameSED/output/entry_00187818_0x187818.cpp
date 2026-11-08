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

// Function: entry_00187818
// Address: 0x187818 - 0x187824
void entry_00187818_0x187818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187818_0x187818");
#endif

    ctx->pc = 0x187818u;

    // 0x187818: 0x8e230154  lw          $v1, 0x154($s1)
    ctx->pc = 0x187818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x18781c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18781cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187820: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x187820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    ctx->pc = 0x187824u;
}
