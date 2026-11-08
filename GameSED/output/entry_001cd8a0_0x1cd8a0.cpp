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

// Function: entry_001cd8a0
// Address: 0x1cd8a0 - 0x1cd8d0
void entry_001cd8a0_0x1cd8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd8a0_0x1cd8a0");
#endif

    switch (ctx->pc) {
        case 0x1cd8bcu: goto label_1cd8bc;
        default: break;
    }

    ctx->pc = 0x1cd8a0u;

label_1cd8a0:
    // 0x1cd8a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cd8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cd8a4:
    // 0x1cd8a4: 0x8fc60648  lw          $a2, 0x648($fp)
    ctx->pc = 0x1cd8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_1cd8a8:
    // 0x1cd8a8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1cd8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1cd8ac:
    // 0x1cd8ac: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1cd8acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1cd8b0:
    // 0x1cd8b0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1cd8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cd8b4:
    // 0x1cd8b4: 0x60f809  jalr        $v1
label_1cd8b8:
    if (ctx->pc == 0x1CD8B8u) {
        ctx->pc = 0x1CD8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD8B4u;
        // 0x1cd8b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD8BCu;
        goto label_1cd8bc;
    }
    ctx->pc = 0x1CD8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CD8BCu);
        ctx->pc = 0x1CD8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD8B4u;
        // 0x1cd8b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD8B4u, 0x1CD8BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD8BCu;
label_1cd8bc:
    // 0x1cd8bc: 0x8fc30648  lw          $v1, 0x648($fp)
    ctx->pc = 0x1cd8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_1cd8c0:
    // 0x1cd8c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cd8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cd8c4:
    // 0x1cd8c4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1cd8c8:
    if (ctx->pc == 0x1CD8C8u) {
        ctx->pc = 0x1CD8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD8C4u;
        // 0x1cd8c8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD8CCu;
        goto label_1cd8cc;
    }
    ctx->pc = 0x1CD8C4u;
    {
        const bool branch_taken_0x1cd8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD8C4u;
        // 0x1cd8c8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd8c4) {
            ctx->pc = 0x1CD8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd8a0;
        }
    }
    ctx->pc = 0x1CD8CCu;
label_1cd8cc:
    // 0x1cd8cc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1cd8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    ctx->pc = 0x1cd8d0u;
}
