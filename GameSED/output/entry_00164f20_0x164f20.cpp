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

// Function: entry_00164f20
// Address: 0x164f20 - 0x164f34
void entry_00164f20_0x164f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164f20_0x164f20");
#endif

    ctx->pc = 0x164f20u;

    // 0x164f20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x164f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164f24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164F24u;
    {
        const bool branch_taken_0x164f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F24u;
        // 0x164f28: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f24) {
            ctx->pc = 0x164F34u;
            return;
        }
    }
    ctx->pc = 0x164F2Cu;
    // 0x164f2c: 0xac450134  sw          $a1, 0x134($v0)
    ctx->pc = 0x164f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 5));
    // 0x164f30: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x164f30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x164f34u;
}
