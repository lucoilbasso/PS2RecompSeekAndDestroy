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

// Function: _initSeqAgain
// Address: 0x1be080 - 0x1be08c
void _initSeqAgain_0x1be080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_initSeqAgain_0x1be080");
#endif

    ctx->pc = 0x1be080u;

    // 0x1be080: 0xac800848  sw          $zero, 0x848($a0)
    ctx->pc = 0x1be080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2120), GPR_U32(ctx, 0));
    // 0x1be084: 0x807023e  j           func_1C08F8
    ctx->pc = 0x1BE084u;
    ctx->pc = 0x1BE088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE084u;
    // 0x1be088: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C08F8u;
    _ipuSetMPEG1_0x1c08f8(rdram, ctx, runtime); return;
    ctx->pc = 0x1BE08Cu;
}
