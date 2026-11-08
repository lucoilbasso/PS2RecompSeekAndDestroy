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

// Function: entry_0013ca08
// Address: 0x13ca08 - 0x13ca10
void entry_0013ca08_0x13ca08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ca08_0x13ca08");
#endif

    ctx->pc = 0x13ca08u;

    // 0x13ca08: 0xc05dd18  jal         func_177460
    ctx->pc = 0x13CA08u;
    SET_GPR_U32(ctx, 31, 0x13CA10u);
    ctx->pc = 0x13CA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CA08u;
    // 0x13ca0c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x13CA08u, 0x13CA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA10u;
}
