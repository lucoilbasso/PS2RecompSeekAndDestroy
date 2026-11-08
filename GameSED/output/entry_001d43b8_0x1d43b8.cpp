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

// Function: entry_001d43b8
// Address: 0x1d43b8 - 0x1d43c0
void entry_001d43b8_0x1d43b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d43b8_0x1d43b8");
#endif

    ctx->pc = 0x1d43b8u;

    // 0x1d43b8: 0x128040  sll         $s0, $s2, 1
    ctx->pc = 0x1d43b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d43bc: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x1d43bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    ctx->pc = 0x1d43c0u;
}
