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

// Function: entry_0019b948
// Address: 0x19b948 - 0x19b970
void entry_0019b948_0x19b948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b948_0x19b948");
#endif

    ctx->pc = 0x19b948u;

label_19b948:
    // 0x19b948: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19b948u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b94c: 0x0  nop
    ctx->pc = 0x19b94cu;
    // NOP
    // 0x19b950: 0x0  nop
    ctx->pc = 0x19b950u;
    // NOP
    // 0x19b954: 0x0  nop
    ctx->pc = 0x19b954u;
    // NOP
    // 0x19b958: 0x0  nop
    ctx->pc = 0x19b958u;
    // NOP
    // 0x19b95c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B95Cu;
    {
        const bool branch_taken_0x19b95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b95c) {
            ctx->pc = 0x19B960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B95Cu;
            // 0x19b960: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b948;
        }
    }
    ctx->pc = 0x19B964u;
    // 0x19b964: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19B964u;
    {
        const bool branch_taken_0x19b964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B964u;
        // 0x19b968: 0x80620000  lb          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b964) {
            ctx->pc = 0x19B980u;
            return;
        }
    }
    ctx->pc = 0x19B96Cu;
    // 0x19b96c: 0x0  nop
    ctx->pc = 0x19b96cu;
    // NOP
    ctx->pc = 0x19b970u;
}
