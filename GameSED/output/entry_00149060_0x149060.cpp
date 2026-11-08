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

// Function: entry_00149060
// Address: 0x149060 - 0x149088
void entry_00149060_0x149060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149060_0x149060");
#endif

    ctx->pc = 0x149060u;

    // 0x149060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149064: 0x28a60003  slti        $a2, $a1, 0x3
    ctx->pc = 0x149064u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x149068: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x149068u;
    {
        const bool branch_taken_0x149068 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x14906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149068u;
        // 0x14906c: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149068) {
            ctx->pc = 0x149094u;
            return;
        }
    }
    ctx->pc = 0x149070u;
    // 0x149070: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x149070u;
    {
        const bool branch_taken_0x149070 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x149070) {
            ctx->pc = 0x149074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149070u;
            // 0x149074: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149088u;
            return;
        }
    }
    ctx->pc = 0x149078u;
    // 0x149078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14907c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14907Cu;
    {
        const bool branch_taken_0x14907c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14907Cu;
        // 0x149080: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14907c) {
            ctx->pc = 0x14908Cu;
            return;
        }
    }
    ctx->pc = 0x149084u;
    // 0x149084: 0x0  nop
    ctx->pc = 0x149084u;
    // NOP
    ctx->pc = 0x149088u;
}
