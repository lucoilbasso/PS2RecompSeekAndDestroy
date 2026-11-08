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

// Function: entry_001d1578
// Address: 0x1d1578 - 0x1d15a8
void entry_001d1578_0x1d1578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1578_0x1d1578");
#endif

    ctx->pc = 0x1d1578u;

label_1d1578:
    // 0x1d1578: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1d1578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d157c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d157cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d1580: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d1580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d1584: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d1584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d1588: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x1d1588u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d158c: 0x2450ffd0  addiu       $s0, $v0, -0x30
    ctx->pc = 0x1d158cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x1d1590: 0x2622ffd0  addiu       $v0, $s1, -0x30
    ctx->pc = 0x1d1590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
    // 0x1d1594: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1d1594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d1598: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D1598u;
    {
        const bool branch_taken_0x1d1598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1598u;
        // 0x1d159c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1598) {
            ctx->pc = 0x1D1578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1578;
        }
    }
    ctx->pc = 0x1D15A0u;
    // 0x1d15a0: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
    ctx->pc = 0x1D15A0u;
    {
        const bool branch_taken_0x1d15a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D15A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15A0u;
        // 0x1d15a4: 0xafb001f0  sw          $s0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15a0) {
            ctx->pc = 0x1D146Cu;
            return;
        }
    }
    ctx->pc = 0x1D15A8u;
}
