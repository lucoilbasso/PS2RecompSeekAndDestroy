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

// Function: entry_001d469c
// Address: 0x1d469c - 0x1d46b0
void entry_001d469c_0x1d469c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d469c_0x1d469c");
#endif

    ctx->pc = 0x1d469cu;

    // 0x1d469c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d469cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d46a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d46a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d46a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d46a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d46a8: 0x8074086  j           func_1D0218
    ctx->pc = 0x1D46A8u;
    ctx->pc = 0x1D46ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46A8u;
    // 0x1d46ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0218u;
    ps2___malloc_unlock_0x1d0218(rdram, ctx, runtime); return;
    ctx->pc = 0x1D46B0u;
}
