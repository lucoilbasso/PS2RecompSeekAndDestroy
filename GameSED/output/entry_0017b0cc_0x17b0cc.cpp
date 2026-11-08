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

// Function: entry_0017b0cc
// Address: 0x17b0cc - 0x17b0d0
void entry_0017b0cc_0x17b0cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b0cc_0x17b0cc");
#endif

    ctx->pc = 0x17b0ccu;

    // 0x17b0cc: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x17b0ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->pc = 0x17b0d0u;
}
