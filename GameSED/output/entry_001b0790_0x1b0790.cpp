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

// Function: entry_001b0790
// Address: 0x1b0790 - 0x1b079c
void entry_001b0790_0x1b0790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0790_0x1b0790");
#endif

    ctx->pc = 0x1b0790u;

    // 0x1b0790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0794: 0x806c1a0  j           func_1B0680
    ctx->pc = 0x1B0794u;
    ctx->pc = 0x1B0798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0794u;
    // 0x1b0798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0680u;
    kputchar_0x1b0680(rdram, ctx, runtime); return;
    ctx->pc = 0x1B079Cu;
}
