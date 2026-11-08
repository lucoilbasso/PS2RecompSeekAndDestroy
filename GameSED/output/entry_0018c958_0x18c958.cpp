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

// Function: entry_0018c958
// Address: 0x18c958 - 0x18c95c
void entry_0018c958_0x18c958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c958_0x18c958");
#endif

    ctx->pc = 0x18c958u;

    // 0x18c958: 0x8e050238  lw          $a1, 0x238($s0)
    ctx->pc = 0x18c958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    ctx->pc = 0x18c95cu;
}
