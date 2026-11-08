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

// Function: entry_0018d940
// Address: 0x18d940 - 0x18d970
void entry_0018d940_0x18d940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d940_0x18d940");
#endif

    ctx->pc = 0x18d940u;

label_18d940:
    // 0x18d940: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x18d940u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18d944: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x18d944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x18d948: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x18d948u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x18d94c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D94Cu;
    {
        const bool branch_taken_0x18d94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D94Cu;
        // 0x18d950: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d94c) {
            ctx->pc = 0x18D970u;
            return;
        }
    }
    ctx->pc = 0x18D954u;
    // 0x18d954: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x18d954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18d958: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18d958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18d95c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x18d95cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18d960: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18d960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18d964: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x18D964u;
    {
        const bool branch_taken_0x18d964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D964u;
        // 0x18d968: 0x2464ffd0  addiu       $a0, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d964) {
            ctx->pc = 0x18D940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d940;
        }
    }
    ctx->pc = 0x18D96Cu;
    // 0x18d96c: 0x0  nop
    ctx->pc = 0x18d96cu;
    // NOP
    ctx->pc = 0x18d970u;
}
