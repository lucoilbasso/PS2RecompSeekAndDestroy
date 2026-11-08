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

// Function: entry_00116388
// Address: 0x116388 - 0x116398
void entry_00116388_0x116388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116388_0x116388");
#endif

    ctx->pc = 0x116388u;

    // 0x116388: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x116388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11638c: 0x8ec20400  lw          $v0, 0x400($s6)
    ctx->pc = 0x11638cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1024)));
    // 0x116390: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x116390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x116394: 0xaec20400  sw          $v0, 0x400($s6)
    ctx->pc = 0x116394u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1024), GPR_U32(ctx, 2));
    ctx->pc = 0x116398u;
}
