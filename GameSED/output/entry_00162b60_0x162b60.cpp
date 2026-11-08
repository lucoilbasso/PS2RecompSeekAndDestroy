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

// Function: entry_00162b60
// Address: 0x162b60 - 0x162ba8
void entry_00162b60_0x162b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162b60_0x162b60");
#endif

    switch (ctx->pc) {
        case 0x162b98u: goto label_162b98;
        default: break;
    }

    ctx->pc = 0x162b60u;

label_162b60:
    // 0x162b60: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x162b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_162b64:
    // 0x162b64: 0x8e0201b4  lw          $v0, 0x1B4($s0)
    ctx->pc = 0x162b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_162b68:
    // 0x162b68: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x162b68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_162b6c:
    // 0x162b6c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x162b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_162b70:
    // 0x162b70: 0x8e051a2c  lw          $a1, 0x1A2C($s0)
    ctx->pc = 0x162b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6700)));
label_162b74:
    // 0x162b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x162b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_162b78:
    // 0x162b78: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x162b78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_162b7c:
    // 0x162b7c: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x162b7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_162b80:
    // 0x162b80: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x162b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_162b84:
    // 0x162b84: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x162b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_162b88:
    // 0x162b88: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x162b88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_162b8c:
    // 0x162b8c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x162b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_162b90:
    // 0x162b90: 0x60f809  jalr        $v1
label_162b94:
    if (ctx->pc == 0x162B94u) {
        ctx->pc = 0x162B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B90u;
        // 0x162b94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162B98u;
        goto label_162b98;
    }
    ctx->pc = 0x162B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x162B98u);
        ctx->pc = 0x162B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B90u;
        // 0x162b94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162B90u, 0x162B98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162B98u;
label_162b98:
    // 0x162b98: 0x8e020cf0  lw          $v0, 0xCF0($s0)
    ctx->pc = 0x162b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3312)));
label_162b9c:
    // 0x162b9c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x162b9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_162ba0:
    // 0x162ba0: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_162ba4:
    if (ctx->pc == 0x162BA4u) {
        ctx->pc = 0x162BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BA0u;
        // 0x162ba4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162BA8u;
        goto label_fallthrough_0x162ba0;
    }
    ctx->pc = 0x162BA0u;
    {
        const bool branch_taken_0x162ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162ba0) {
            ctx->pc = 0x162BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162BA0u;
            // 0x162ba4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162b60;
        }
    }
label_fallthrough_0x162ba0:
    ctx->pc = 0x162BA8u;
}
