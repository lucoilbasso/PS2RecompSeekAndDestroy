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

// Function: entry_001708e8
// Address: 0x1708e8 - 0x170900
void entry_001708e8_0x1708e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001708e8_0x1708e8");
#endif

    ctx->pc = 0x1708e8u;

    // 0x1708e8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1708e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1708ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1708ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1708f0: 0x24841438  addiu       $a0, $a0, 0x1438
    ctx->pc = 0x1708f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5176));
    // 0x1708f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1708f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1708f8: 0x805d3c0  j           func_174F00
    ctx->pc = 0x1708F8u;
    ctx->pc = 0x1708FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1708F8u;
    // 0x1708fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F00u;
    strFileClose_0x174f00(rdram, ctx, runtime); return;
    ctx->pc = 0x170900u;
}
