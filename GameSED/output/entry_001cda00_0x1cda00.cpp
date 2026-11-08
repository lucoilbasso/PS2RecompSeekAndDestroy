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

// Function: entry_001cda00
// Address: 0x1cda00 - 0x1cda30
void entry_001cda00_0x1cda00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cda00_0x1cda00");
#endif

    switch (ctx->pc) {
        case 0x1cda1cu: goto label_1cda1c;
        default: break;
    }

    ctx->pc = 0x1cda00u;

label_1cda00:
    // 0x1cda00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cda00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cda04:
    // 0x1cda04: 0x8fa60644  lw          $a2, 0x644($sp)
    ctx->pc = 0x1cda04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_1cda08:
    // 0x1cda08: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1cda08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1cda0c:
    // 0x1cda0c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1cda0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1cda10:
    // 0x1cda10: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1cda10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cda14:
    // 0x1cda14: 0x60f809  jalr        $v1
label_1cda18:
    if (ctx->pc == 0x1CDA18u) {
        ctx->pc = 0x1CDA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA14u;
        // 0x1cda18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDA1Cu;
        goto label_1cda1c;
    }
    ctx->pc = 0x1CDA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CDA1Cu);
        ctx->pc = 0x1CDA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA14u;
        // 0x1cda18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDA14u, 0x1CDA1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CDA1Cu;
label_1cda1c:
    // 0x1cda1c: 0x8fa30644  lw          $v1, 0x644($sp)
    ctx->pc = 0x1cda1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_1cda20:
    // 0x1cda20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cda20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cda24:
    // 0x1cda24: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1cda28:
    if (ctx->pc == 0x1CDA28u) {
        ctx->pc = 0x1CDA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA24u;
        // 0x1cda28: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDA2Cu;
        goto label_1cda2c;
    }
    ctx->pc = 0x1CDA24u;
    {
        const bool branch_taken_0x1cda24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA24u;
        // 0x1cda28: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cda24) {
            ctx->pc = 0x1CDA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cda00;
        }
    }
    ctx->pc = 0x1CDA2Cu;
label_1cda2c:
    // 0x1cda2c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cda2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1cda30u;
}
