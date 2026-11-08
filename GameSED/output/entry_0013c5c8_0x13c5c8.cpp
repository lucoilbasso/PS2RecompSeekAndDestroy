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

// Function: entry_0013c5c8
// Address: 0x13c5c8 - 0x13c5e0
void entry_0013c5c8_0x13c5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c5c8_0x13c5c8");
#endif

    ctx->pc = 0x13c5c8u;

    // 0x13c5c8: 0xae2201e0  sw          $v0, 0x1E0($s1)
    ctx->pc = 0x13c5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 2));
    // 0x13c5cc: 0x8ce201e0  lw          $v0, 0x1E0($a3)
    ctx->pc = 0x13c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
    // 0x13c5d0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x13c5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x13c5d4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x13C5D4u;
    {
        const bool branch_taken_0x13c5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C5D4u;
        // 0x13c5d8: 0xace201e0  sw          $v0, 0x1E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c5d4) {
            ctx->pc = 0x13C61Cu;
            return;
        }
    }
    ctx->pc = 0x13C5DCu;
    // 0x13c5dc: 0x0  nop
    ctx->pc = 0x13c5dcu;
    // NOP
    ctx->pc = 0x13c5e0u;
}
