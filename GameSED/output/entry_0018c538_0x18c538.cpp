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

// Function: entry_0018c538
// Address: 0x18c538 - 0x18c558
void entry_0018c538_0x18c538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c538_0x18c538");
#endif

    ctx->pc = 0x18c538u;

label_18c538:
    // 0x18c538: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18c538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18c53c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x18c53cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x18c540: 0x0  nop
    ctx->pc = 0x18c540u;
    // NOP
    // 0x18c544: 0x0  nop
    ctx->pc = 0x18c544u;
    // NOP
    // 0x18c548: 0x0  nop
    ctx->pc = 0x18c548u;
    // NOP
    // 0x18c54c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18C54Cu;
    {
        const bool branch_taken_0x18c54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C54Cu;
        // 0x18c550: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c54c) {
            ctx->pc = 0x18C538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18c538;
        }
    }
    ctx->pc = 0x18C554u;
    // 0x18c554: 0xa620023c  sh          $zero, 0x23C($s1)
    ctx->pc = 0x18c554u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 572), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x18c558u;
}
