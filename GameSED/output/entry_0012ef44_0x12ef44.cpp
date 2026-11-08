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

// Function: entry_0012ef44
// Address: 0x12ef44 - 0x12ef48
void entry_0012ef44_0x12ef44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ef44_0x12ef44");
#endif

    ctx->pc = 0x12ef44u;

    // 0x12ef44: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x12ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    ctx->pc = 0x12ef48u;
}
