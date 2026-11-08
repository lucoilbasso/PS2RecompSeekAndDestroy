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

// Function: entry_0019cda8
// Address: 0x19cda8 - 0x19cdc4
void entry_0019cda8_0x19cda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cda8_0x19cda8");
#endif

    ctx->pc = 0x19cda8u;

label_19cda8:
    // 0x19cda8: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19CDA8u;
    {
        const bool branch_taken_0x19cda8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x19CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDA8u;
        // 0x19cdac: 0x2465ffff  addiu       $a1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cda8) {
            ctx->pc = 0x19CDC4u;
            return;
        }
    }
    ctx->pc = 0x19CDB0u;
    // 0x19cdb0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19cdb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19cdb4: 0x10470003  beq         $v0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CDB4u;
    {
        const bool branch_taken_0x19cdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x19cdb4) {
            ctx->pc = 0x19CDC4u;
            return;
        }
    }
    ctx->pc = 0x19CDBCu;
    // 0x19cdbc: 0x5446fffa  bnel        $v0, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19CDBCu;
    {
        const bool branch_taken_0x19cdbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x19cdbc) {
            ctx->pc = 0x19CDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CDBCu;
            // 0x19cdc0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CDA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19cda8;
        }
    }
    ctx->pc = 0x19CDC4u;
}
