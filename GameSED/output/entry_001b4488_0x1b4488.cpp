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

// Function: entry_001b4488
// Address: 0x1b4488 - 0x1b44b0
void entry_001b4488_0x1b4488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4488_0x1b4488");
#endif

    ctx->pc = 0x1b4488u;

label_1b4488:
    // 0x1b4488: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b4488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b448c: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x1b448cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b4490: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B4490u;
    {
        const bool branch_taken_0x1b4490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4490u;
        // 0x1b4494: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4490) {
            ctx->pc = 0x1B44BCu;
            return;
        }
    }
    ctx->pc = 0x1B4498u;
    // 0x1b4498: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x1b4498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1b449c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b449cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b44a0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B44A0u;
    {
        const bool branch_taken_0x1b44a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B44A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44A0u;
        // 0x1b44a4: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44a0) {
            ctx->pc = 0x1B4488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4488;
        }
    }
    ctx->pc = 0x1B44A8u;
    // 0x1b44a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B44A8u;
    {
        const bool branch_taken_0x1b44a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B44ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44A8u;
        // 0x1b44ac: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44a8) {
            ctx->pc = 0x1B44C0u;
            return;
        }
    }
    ctx->pc = 0x1B44B0u;
}
