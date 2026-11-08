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

// Function: entry_00133070
// Address: 0x133070 - 0x133098
void entry_00133070_0x133070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133070_0x133070");
#endif

    ctx->pc = 0x133070u;

label_133070:
    // 0x133070: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x133070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x133074: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x133074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x133078: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x133078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x13307c: 0x0  nop
    ctx->pc = 0x13307cu;
    // NOP
    // 0x133080: 0x0  nop
    ctx->pc = 0x133080u;
    // NOP
    // 0x133084: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x133084u;
    {
        const bool branch_taken_0x133084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133084u;
        // 0x133088: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133084) {
            ctx->pc = 0x133070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133070;
        }
    }
    ctx->pc = 0x13308Cu;
    // 0x13308c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x13308Cu;
    {
        const bool branch_taken_0x13308c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13308Cu;
        // 0x133090: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13308c) {
            ctx->pc = 0x1331B8u;
            return;
        }
    }
    ctx->pc = 0x133094u;
    // 0x133094: 0x0  nop
    ctx->pc = 0x133094u;
    // NOP
    ctx->pc = 0x133098u;
}
