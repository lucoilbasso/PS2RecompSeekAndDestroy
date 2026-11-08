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

// Function: entry_0014fb08
// Address: 0x14fb08 - 0x14fb10
void entry_0014fb08_0x14fb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fb08_0x14fb08");
#endif

    ctx->pc = 0x14fb08u;

    // 0x14fb08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14fb0c: 0xae020850  sw          $v0, 0x850($s0)
    ctx->pc = 0x14fb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2128), GPR_U32(ctx, 2));
    ctx->pc = 0x14fb10u;
}
