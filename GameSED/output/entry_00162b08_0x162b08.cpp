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

// Function: entry_00162b08
// Address: 0x162b08 - 0x162b4c
void entry_00162b08_0x162b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162b08_0x162b08");
#endif

    switch (ctx->pc) {
        case 0x162b3cu: goto label_162b3c;
        default: break;
    }

    ctx->pc = 0x162b08u;

label_162b08:
    // 0x162b08: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x162b08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_162b0c:
    // 0x162b0c: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x162b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_162b10:
    // 0x162b10: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x162b10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_162b14:
    // 0x162b14: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x162b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_162b18:
    // 0x162b18: 0x8e051a2c  lw          $a1, 0x1A2C($s0)
    ctx->pc = 0x162b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6700)));
label_162b1c:
    // 0x162b1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x162b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_162b20:
    // 0x162b20: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x162b20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_162b24:
    // 0x162b24: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x162b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_162b28:
    // 0x162b28: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x162b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_162b2c:
    // 0x162b2c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x162b2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_162b30:
    // 0x162b30: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x162b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_162b34:
    // 0x162b34: 0x60f809  jalr        $v1
label_162b38:
    if (ctx->pc == 0x162B38u) {
        ctx->pc = 0x162B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B34u;
        // 0x162b38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162B3Cu;
        goto label_162b3c;
    }
    ctx->pc = 0x162B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x162B3Cu);
        ctx->pc = 0x162B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B34u;
        // 0x162b38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162B34u, 0x162B3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162B3Cu;
label_162b3c:
    // 0x162b3c: 0x8e020ccc  lw          $v0, 0xCCC($s0)
    ctx->pc = 0x162b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3276)));
label_162b40:
    // 0x162b40: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x162b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_162b44:
    // 0x162b44: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
label_162b48:
    if (ctx->pc == 0x162B48u) {
        ctx->pc = 0x162B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B44u;
        // 0x162b48: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162B4Cu;
        goto label_fallthrough_0x162b44;
    }
    ctx->pc = 0x162B44u;
    {
        const bool branch_taken_0x162b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162b44) {
            ctx->pc = 0x162B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162B44u;
            // 0x162b48: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162b08;
        }
    }
label_fallthrough_0x162b44:
    ctx->pc = 0x162B4Cu;
}
