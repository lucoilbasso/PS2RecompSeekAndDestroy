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

// Function: entry_001d3a28
// Address: 0x1d3a28 - 0x1d3a58
void entry_001d3a28_0x1d3a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3a28_0x1d3a28");
#endif

    ctx->pc = 0x1d3a28u;

label_1d3a28:
    // 0x1d3a28: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x1d3a28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d3a2c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3A2Cu;
    {
        const bool branch_taken_0x1d3a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D3A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A2Cu;
        // 0x1d3a30: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a2c) {
            ctx->pc = 0x1D3A58u;
            return;
        }
    }
    ctx->pc = 0x1D3A34u;
    // 0x1d3a34: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x1d3a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1d3a38: 0x0  nop
    ctx->pc = 0x1d3a38u;
    // NOP
    // 0x1d3a3c: 0x0  nop
    ctx->pc = 0x1d3a3cu;
    // NOP
    // 0x1d3a40: 0x0  nop
    ctx->pc = 0x1d3a40u;
    // NOP
    // 0x1d3a44: 0x56a4fff8  bnel        $s5, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D3A44u;
    {
        const bool branch_taken_0x1d3a44 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        if (branch_taken_0x1d3a44) {
            ctx->pc = 0x1D3A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3A44u;
            // 0x1d3a48: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3a28;
        }
    }
    ctx->pc = 0x1D3A4Cu;
    // 0x1d3a4c: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1d3a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d3a50: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d3a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a54: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1d3a54u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    ctx->pc = 0x1d3a58u;
}
