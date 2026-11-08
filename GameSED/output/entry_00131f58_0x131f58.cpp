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

// Function: entry_00131f58
// Address: 0x131f58 - 0x131f5c
void entry_00131f58_0x131f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131f58_0x131f58");
#endif

    ctx->pc = 0x131f58u;

    // 0x131f58: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x131f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->pc = 0x131f5cu;
}
