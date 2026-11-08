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

// Function: entry_0011d104
// Address: 0x11d104 - 0x11d108
void entry_0011d104_0x11d104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d104_0x11d104");
#endif

    ctx->pc = 0x11d104u;

    // 0x11d104: 0x2652fcb0  addiu       $s2, $s2, -0x350
    ctx->pc = 0x11d104u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966448));
    ctx->pc = 0x11d108u;
}
