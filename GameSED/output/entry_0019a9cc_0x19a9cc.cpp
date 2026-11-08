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

// Function: entry_0019a9cc
// Address: 0x19a9cc - 0x19a9d0
void entry_0019a9cc_0x19a9cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a9cc_0x19a9cc");
#endif

    ctx->pc = 0x19a9ccu;

    // 0x19a9cc: 0x2442a468  addiu       $v0, $v0, -0x5B98
    ctx->pc = 0x19a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943848));
    ctx->pc = 0x19a9d0u;
}
