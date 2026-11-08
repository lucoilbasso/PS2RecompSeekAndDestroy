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

// Function: entry_00178c08
// Address: 0x178c08 - 0x178c0c
void entry_00178c08_0x178c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178c08_0x178c08");
#endif

    ctx->pc = 0x178c08u;

    // 0x178c08: 0xae021040  sw          $v0, 0x1040($s0)
    ctx->pc = 0x178c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4160), GPR_U32(ctx, 2));
    ctx->pc = 0x178c0cu;
}
