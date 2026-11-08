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

// Function: entry_001825ec
// Address: 0x1825ec - 0x182610
void entry_001825ec_0x1825ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001825ec_0x1825ec");
#endif

    ctx->pc = 0x1825ecu;

    // 0x1825ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1825ECu;
    {
        const bool branch_taken_0x1825ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1825F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825ECu;
        // 0x1825f0: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1825ec) {
            ctx->pc = 0x182610u;
            return;
        }
    }
    ctx->pc = 0x1825F4u;
    // 0x1825f4: 0xae540054  sw          $s4, 0x54($s2)
    ctx->pc = 0x1825f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 20));
    // 0x1825f8: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x1825f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x1825fc: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x1825fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
    // 0x182600: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x182600u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x182604: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x182604u;
    {
        const bool branch_taken_0x182604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182604u;
        // 0x182608: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182604) {
            ctx->pc = 0x182614u;
            return;
        }
    }
    ctx->pc = 0x18260Cu;
    // 0x18260c: 0x0  nop
    ctx->pc = 0x18260cu;
    // NOP
    ctx->pc = 0x182610u;
}
