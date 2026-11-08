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

// Function: entry_00113d98
// Address: 0x113d98 - 0x113db0
void entry_00113d98_0x113d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113d98_0x113d98");
#endif

    ctx->pc = 0x113d98u;

    // 0x113d98: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x113d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x113d9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113da0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x113da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x113da4: 0x24844268  addiu       $a0, $a0, 0x4268
    ctx->pc = 0x113da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17000));
    // 0x113da8: 0x80740b2  j           func_1D02C8
    ctx->pc = 0x113DA8u;
    ctx->pc = 0x113DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113DA8u;
    // 0x113dac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    printf_0x1d02c8(rdram, ctx, runtime); return;
    ctx->pc = 0x113DB0u;
}
