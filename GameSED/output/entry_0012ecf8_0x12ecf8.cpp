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

// Function: entry_0012ecf8
// Address: 0x12ecf8 - 0x12ecfc
void entry_0012ecf8_0x12ecf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ecf8_0x12ecf8");
#endif

    ctx->pc = 0x12ecf8u;

    // 0x12ecf8: 0xae420150  sw          $v0, 0x150($s2)
    ctx->pc = 0x12ecf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 2));
    ctx->pc = 0x12ecfcu;
}
