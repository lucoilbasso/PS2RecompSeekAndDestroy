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

// Function: entry_001cd798
// Address: 0x1cd798 - 0x1cd7a8
void entry_001cd798_0x1cd798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd798_0x1cd798");
#endif

    ctx->pc = 0x1cd798u;

    // 0x1cd798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd79c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cd79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd7a0: 0x8073d72  j           func_1CF5C8
    ctx->pc = 0x1CD7A0u;
    ctx->pc = 0x1CD7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD7A0u;
    // 0x1cd7a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF5C8u;
    free_0x1cf5c8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CD7A8u;
}
