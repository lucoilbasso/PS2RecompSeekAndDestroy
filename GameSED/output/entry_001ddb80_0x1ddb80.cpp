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

// Function: entry_001ddb80
// Address: 0x1ddb80 - 0x1ddbbc
void entry_001ddb80_0x1ddb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddb80_0x1ddb80");
#endif

    switch (ctx->pc) {
        case 0x1ddbacu: goto label_1ddbac;
        default: break;
    }

    ctx->pc = 0x1ddb80u;

label_1ddb80:
    // 0x1ddb80: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1ddb80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1ddb84:
    // 0x1ddb84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ddb84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ddb88:
    // 0x1ddb88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ddb88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ddb8c:
    // 0x1ddb8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ddb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ddb90:
    // 0x1ddb90: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1ddb90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ddb94:
    // 0x1ddb94: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1ddb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1ddb98:
    // 0x1ddb98: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ddb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1ddb9c:
    // 0x1ddb9c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1ddb9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1ddba0:
    // 0x1ddba0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ddba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ddba4:
    // 0x1ddba4: 0x60f809  jalr        $v1
label_1ddba8:
    if (ctx->pc == 0x1DDBA8u) {
        ctx->pc = 0x1DDBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBA4u;
        // 0x1ddba8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDBACu;
        goto label_1ddbac;
    }
    ctx->pc = 0x1DDBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DDBACu);
        ctx->pc = 0x1DDBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBA4u;
        // 0x1ddba8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDBA4u, 0x1DDBACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DDBACu;
label_1ddbac:
    // 0x1ddbac: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x1ddbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_1ddbb0:
    // 0x1ddbb0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1ddbb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ddbb4:
    // 0x1ddbb4: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_1ddbb8:
    if (ctx->pc == 0x1DDBB8u) {
        ctx->pc = 0x1DDBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBB4u;
        // 0x1ddbb8: 0x8e0201bc  lw          $v0, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDBBCu;
        goto label_fallthrough_0x1ddbb4;
    }
    ctx->pc = 0x1DDBB4u;
    {
        const bool branch_taken_0x1ddbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ddbb4) {
            ctx->pc = 0x1DDBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDBB4u;
            // 0x1ddbb8: 0x8e0201bc  lw          $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ddb80;
        }
    }
label_fallthrough_0x1ddbb4:
    ctx->pc = 0x1DDBBCu;
}
