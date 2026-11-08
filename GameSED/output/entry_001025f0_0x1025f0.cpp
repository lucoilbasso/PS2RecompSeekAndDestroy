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

// Function: entry_001025f0
// Address: 0x1025f0 - 0x102618
void entry_001025f0_0x1025f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001025f0_0x1025f0");
#endif

    ctx->pc = 0x1025f0u;

label_1025f0:
    // 0x1025f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1025f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1025f4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1025f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1025f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1025F8u;
    {
        const bool branch_taken_0x1025f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1025FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025F8u;
        // 0x1025fc: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025f8) {
            ctx->pc = 0x102618u;
            return;
        }
    }
    ctx->pc = 0x102600u;
    // 0x102600: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x102600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x102604: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102608: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x102608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10260c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x10260Cu;
    {
        const bool branch_taken_0x10260c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10260c) {
            ctx->pc = 0x102610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10260Cu;
            // 0x102610: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1025F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1025f0;
        }
    }
    ctx->pc = 0x102614u;
    // 0x102614: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x102614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x102618u;
}
