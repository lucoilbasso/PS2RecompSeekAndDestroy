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

// Function: entry_00115310
// Address: 0x115310 - 0x115314
void entry_00115310_0x115310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115310_0x115310");
#endif

    ctx->pc = 0x115310u;

    // 0x115310: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x115310u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    ctx->pc = 0x115314u;
}
