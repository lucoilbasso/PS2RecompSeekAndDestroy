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

// Function: entry_0017414c
// Address: 0x17414c - 0x174154
void entry_0017414c_0x17414c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017414c_0x17414c");
#endif

    ctx->pc = 0x17414cu;

    // 0x17414c: 0x806aa42  j           func_1AA908
    ctx->pc = 0x17414Cu;
    ctx->pc = 0x174150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17414Cu;
    // 0x174150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA908u;
    sceGsPutDispEnv_0x1aa908(rdram, ctx, runtime); return;
    ctx->pc = 0x174154u;
}
