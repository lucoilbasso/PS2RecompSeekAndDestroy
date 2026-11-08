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

// Function: entry_001ba038
// Address: 0x1ba038 - 0x1ba040
void entry_001ba038_0x1ba038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba038_0x1ba038");
#endif

    ctx->pc = 0x1ba038u;

    // 0x1ba038: 0x806e75a  j           func_1B9D68
    ctx->pc = 0x1BA038u;
    ctx->pc = 0x1BA03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA038u;
    // 0x1ba03c: 0x2524c0d4  addiu       $a0, $t1, -0x3F2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294951124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D68u;
    _sceCd_cd_callback_0x1b9d68(rdram, ctx, runtime); return;
    ctx->pc = 0x1BA040u;
}
