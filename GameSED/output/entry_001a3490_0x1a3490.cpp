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

// Function: entry_001a3490
// Address: 0x1a3490 - 0x1a3494
void entry_001a3490_0x1a3490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3490_0x1a3490");
#endif

    ctx->pc = 0x1a3490u;

    // 0x1a3490: 0x84e30008  lh          $v1, 0x8($a3)
    ctx->pc = 0x1a3490u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    ctx->pc = 0x1a3494u;
}
