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

// Function: entry_001740f8
// Address: 0x1740f8 - 0x174104
void entry_001740f8_0x1740f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001740f8_0x1740f8");
#endif

    ctx->pc = 0x1740f8u;

    // 0x1740f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1740f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1740fc: 0x806ab98  j           func_1AAE60
    ctx->pc = 0x1740FCu;
    ctx->pc = 0x174100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1740FCu;
    // 0x174100: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    sceGsSyncPath_0x1aae60(rdram, ctx, runtime); return;
    ctx->pc = 0x174104u;
}
