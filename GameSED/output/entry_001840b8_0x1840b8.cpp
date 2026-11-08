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

// Function: entry_001840b8
// Address: 0x1840b8 - 0x1840e4
void entry_001840b8_0x1840b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001840b8_0x1840b8");
#endif

    ctx->pc = 0x1840b8u;

label_1840b8:
    // 0x1840b8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1840b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1840bc: 0x1067000a  beq         $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x1840BCu;
    {
        const bool branch_taken_0x1840bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x1840C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840BCu;
        // 0x1840c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840bc) {
            ctx->pc = 0x1840E8u;
            return;
        }
    }
    ctx->pc = 0x1840C4u;
    // 0x1840c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1840c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1840c8: 0x10680007  beq         $v1, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1840C8u;
    {
        const bool branch_taken_0x1840c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x1840CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840C8u;
        // 0x1840cc: 0x86102a  slt         $v0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840c8) {
            ctx->pc = 0x1840E8u;
            return;
        }
    }
    ctx->pc = 0x1840D0u;
    // 0x1840d0: 0x0  nop
    ctx->pc = 0x1840d0u;
    // NOP
    // 0x1840d4: 0x0  nop
    ctx->pc = 0x1840d4u;
    // NOP
    // 0x1840d8: 0x0  nop
    ctx->pc = 0x1840d8u;
    // NOP
    // 0x1840dc: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1840DCu;
    {
        const bool branch_taken_0x1840dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1840dc) {
            ctx->pc = 0x1840E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1840DCu;
            // 0x1840e0: 0x94a30004  lhu         $v1, 0x4($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1840B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1840b8;
        }
    }
    ctx->pc = 0x1840E4u;
}
