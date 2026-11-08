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

// Function: entry_001b58dc
// Address: 0x1b58dc - 0x1b58f4
void entry_001b58dc_0x1b58dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b58dc_0x1b58dc");
#endif

    ctx->pc = 0x1b58dcu;

    // 0x1b58dc: 0x55020005  bnel        $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B58DCu;
    {
        const bool branch_taken_0x1b58dc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b58dc) {
            ctx->pc = 0x1B58E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B58DCu;
            // 0x1b58e0: 0xace5b300  sw          $a1, -0x4D00($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 4294947584), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B58F4u;
            return;
        }
    }
    ctx->pc = 0x1B58E4u;
    // 0x1b58e4: 0x24e2b300  addiu       $v0, $a3, -0x4D00
    ctx->pc = 0x1b58e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947584));
    // 0x1b58e8: 0x240800fb  addiu       $t0, $zero, 0xFB
    ctx->pc = 0x1b58e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
    // 0x1b58ec: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x1b58ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b58f0: 0xace5b300  sw          $a1, -0x4D00($a3)
    ctx->pc = 0x1b58f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294947584), GPR_U32(ctx, 5));
    ctx->pc = 0x1b58f4u;
}
