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

// Function: entry_001824cc
// Address: 0x1824cc - 0x1824f0
void entry_001824cc_0x1824cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001824cc_0x1824cc");
#endif

    ctx->pc = 0x1824ccu;

    // 0x1824cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1824CCu;
    {
        const bool branch_taken_0x1824cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1824D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1824CCu;
        // 0x1824d0: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1824cc) {
            ctx->pc = 0x1824F0u;
            return;
        }
    }
    ctx->pc = 0x1824D4u;
    // 0x1824d4: 0xae960054  sw          $s6, 0x54($s4)
    ctx->pc = 0x1824d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 22));
    // 0x1824d8: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x1824d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x1824dc: 0xae970050  sw          $s7, 0x50($s4)
    ctx->pc = 0x1824dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 23));
    // 0x1824e0: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x1824e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
    // 0x1824e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1824E4u;
    {
        const bool branch_taken_0x1824e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1824E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1824E4u;
        // 0x1824e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1824e4) {
            ctx->pc = 0x1824F4u;
            return;
        }
    }
    ctx->pc = 0x1824ECu;
    // 0x1824ec: 0x0  nop
    ctx->pc = 0x1824ecu;
    // NOP
    ctx->pc = 0x1824f0u;
}
