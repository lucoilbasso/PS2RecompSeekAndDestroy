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

// Function: entry_0018d248
// Address: 0x18d248 - 0x18d278
void entry_0018d248_0x18d248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d248_0x18d248");
#endif

    ctx->pc = 0x18d248u;

label_18d248:
    // 0x18d248: 0x80a40000  lb          $a0, 0x0($a1)
    ctx->pc = 0x18d248u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18d24c: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x18d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x18d250: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x18d250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x18d254: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D254u;
    {
        const bool branch_taken_0x18d254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D254u;
        // 0x18d258: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d254) {
            ctx->pc = 0x18D278u;
            return;
        }
    }
    ctx->pc = 0x18D25Cu;
    // 0x18d25c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18d260: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d264: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x18d264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18d268: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d26c: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x18D26Cu;
    {
        const bool branch_taken_0x18d26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D26Cu;
        // 0x18d270: 0x2463ffd0  addiu       $v1, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d26c) {
            ctx->pc = 0x18D248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d248;
        }
    }
    ctx->pc = 0x18D274u;
    // 0x18d274: 0x0  nop
    ctx->pc = 0x18d274u;
    // NOP
    ctx->pc = 0x18d278u;
}
