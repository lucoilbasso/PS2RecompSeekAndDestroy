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

// Function: entry_001719cc
// Address: 0x1719cc - 0x1719d0
void entry_001719cc_0x1719cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001719cc_0x1719cc");
#endif

    ctx->pc = 0x1719ccu;

    // 0x1719cc: 0x26240048  addiu       $a0, $s1, 0x48
    ctx->pc = 0x1719ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    ctx->pc = 0x1719d0u;
}
