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

// Function: entry_001837b4
// Address: 0x1837b4 - 0x1837b8
void entry_001837b4_0x1837b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001837b4_0x1837b4");
#endif

    ctx->pc = 0x1837b4u;

    // 0x1837b4: 0xa620002c  sh          $zero, 0x2C($s1)
    ctx->pc = 0x1837b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1837b8u;
}
