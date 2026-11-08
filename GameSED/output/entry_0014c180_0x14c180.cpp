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

// Function: entry_0014c180
// Address: 0x14c180 - 0x14c1a8
void entry_0014c180_0x14c180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c180_0x14c180");
#endif

    switch (ctx->pc) {
        case 0x14c19cu: goto label_14c19c;
        default: break;
    }

    ctx->pc = 0x14c180u;

label_14c180:
    // 0x14c180: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x14c180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14c184:
    // 0x14c184: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x14c184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_14c188:
    // 0x14c188: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x14c188u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14c18c:
    // 0x14c18c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14c18cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14c190:
    // 0x14c190: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14c190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14c194:
    // 0x14c194: 0x60f809  jalr        $v1
label_14c198:
    if (ctx->pc == 0x14C198u) {
        ctx->pc = 0x14C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C194u;
        // 0x14c198: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C19Cu;
        goto label_14c19c;
    }
    ctx->pc = 0x14C194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14C19Cu);
        ctx->pc = 0x14C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C194u;
        // 0x14c198: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C194u, 0x14C19Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C19Cu;
label_14c19c:
    // 0x14c19c: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
label_14c1a0:
    if (ctx->pc == 0x14C1A0u) {
        ctx->pc = 0x14C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C19Cu;
        // 0x14c1a0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C1A4u;
        goto label_14c1a4;
    }
    ctx->pc = 0x14C19Cu;
    {
        const bool branch_taken_0x14c19c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c19c) {
            ctx->pc = 0x14C1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C19Cu;
            // 0x14c1a0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c180;
        }
    }
    ctx->pc = 0x14C1A4u;
label_14c1a4:
    // 0x14c1a4: 0x8e2201f8  lw          $v0, 0x1F8($s1)
    ctx->pc = 0x14c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
    ctx->pc = 0x14c1a8u;
}
