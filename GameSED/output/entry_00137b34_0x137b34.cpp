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

// Function: entry_00137b34
// Address: 0x137b34 - 0x137b64
void entry_00137b34_0x137b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137b34_0x137b34");
#endif

    switch (ctx->pc) {
        case 0x137b58u: goto label_137b58;
        default: break;
    }

    ctx->pc = 0x137b34u;

label_137b34:
    // 0x137b34: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x137b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_137b38:
    // 0x137b38: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_137b3c:
    if (ctx->pc == 0x137B3Cu) {
        ctx->pc = 0x137B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B38u;
        // 0x137b3c: 0x8e420400  lw          $v0, 0x400($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1024)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137B40u;
        goto label_137b40;
    }
    ctx->pc = 0x137B38u;
    {
        const bool branch_taken_0x137b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137b38) {
            ctx->pc = 0x137B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137B38u;
            // 0x137b3c: 0x8e420400  lw          $v0, 0x400($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1024)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137B64u;
            return;
        }
    }
    ctx->pc = 0x137B40u;
label_137b40:
    // 0x137b40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x137b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_137b44:
    // 0x137b44: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x137b44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_137b48:
    // 0x137b48: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x137b48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_137b4c:
    // 0x137b4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x137b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_137b50:
    // 0x137b50: 0x2a0f809  jalr        $s5
label_137b54:
    if (ctx->pc == 0x137B54u) {
        ctx->pc = 0x137B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B50u;
        // 0x137b54: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137B58u;
        goto label_137b58;
    }
    ctx->pc = 0x137B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x137B58u);
        ctx->pc = 0x137B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B50u;
        // 0x137b54: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137B50u, 0x137B58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x137B58u;
label_137b58:
    // 0x137b58: 0x5040fff5  beql        $v0, $zero, . + 4 + (-0xB << 2)
label_137b5c:
    if (ctx->pc == 0x137B5Cu) {
        ctx->pc = 0x137B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B58u;
        // 0x137b5c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137B60u;
        goto label_137b60;
    }
    ctx->pc = 0x137B58u;
    {
        const bool branch_taken_0x137b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137b58) {
            ctx->pc = 0x137B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137B58u;
            // 0x137b5c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137B30u;
            return;
        }
    }
    ctx->pc = 0x137B60u;
label_137b60:
    // 0x137b60: 0x8e420400  lw          $v0, 0x400($s2)
    ctx->pc = 0x137b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1024)));
    ctx->pc = 0x137b64u;
}
