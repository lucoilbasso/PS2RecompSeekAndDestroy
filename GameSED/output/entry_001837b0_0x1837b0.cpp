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

// Function: entry_001837b0
// Address: 0x1837b0 - 0x1837b4
void entry_001837b0_0x1837b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001837b0_0x1837b0");
#endif

    ctx->pc = 0x1837b0u;

    // 0x1837b0: 0xa620002a  sh          $zero, 0x2A($s1)
    ctx->pc = 0x1837b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1837b4u;
}
