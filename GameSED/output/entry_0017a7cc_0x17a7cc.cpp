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

// Function: entry_0017a7cc
// Address: 0x17a7cc - 0x17a7d0
void entry_0017a7cc_0x17a7cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a7cc_0x17a7cc");
#endif

    ctx->pc = 0x17a7ccu;

    // 0x17a7cc: 0x24a5003f  addiu       $a1, $a1, 0x3F
    ctx->pc = 0x17a7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    ctx->pc = 0x17a7d0u;
}
