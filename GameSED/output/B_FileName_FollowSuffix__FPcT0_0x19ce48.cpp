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

// Function: B_FileName_FollowSuffix__FPcT0
// Address: 0x19ce48 - 0x19cec8
void B_FileName_FollowSuffix__FPcT0_0x19ce48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_FileName_FollowSuffix__FPcT0_0x19ce48");
#endif

    switch (ctx->pc) {
        case 0x19ce68u: goto label_19ce68;
        case 0x19cea0u: goto label_19cea0;
        default: break;
    }

    ctx->pc = 0x19ce48u;

    // 0x19ce48: 0x80860000  lb          $a2, 0x0($a0)
    ctx->pc = 0x19ce48u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19ce4c: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x19CE4Cu;
    {
        const bool branch_taken_0x19ce4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE4Cu;
        // 0x19ce50: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce4c) {
            ctx->pc = 0x19CE8Cu;
            goto label_19ce8c;
        }
    }
    ctx->pc = 0x19CE54u;
    // 0x19ce54: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x19ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x19ce58: 0x50c2000d  beql        $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19CE58u;
    {
        const bool branch_taken_0x19ce58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x19ce58) {
            ctx->pc = 0x19CE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CE58u;
            // 0x19ce5c: 0x80620000  lb          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CE90u;
            goto label_19ce90;
        }
    }
    ctx->pc = 0x19CE60u;
    // 0x19ce60: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x19ce60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x19ce64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ce64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19ce68:
    // 0x19ce68: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x19ce68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19ce6c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x19CE6Cu;
    {
        const bool branch_taken_0x19ce6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ce6c) {
            ctx->pc = 0x19CE70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CE6Cu;
            // 0x19ce70: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CEB0u;
            goto label_19ceb0;
        }
    }
    ctx->pc = 0x19CE74u;
    // 0x19ce74: 0x0  nop
    ctx->pc = 0x19ce74u;
    // NOP
    // 0x19ce78: 0x0  nop
    ctx->pc = 0x19ce78u;
    // NOP
    // 0x19ce7c: 0x0  nop
    ctx->pc = 0x19ce7cu;
    // NOP
    // 0x19ce80: 0x0  nop
    ctx->pc = 0x19ce80u;
    // NOP
    // 0x19ce84: 0x5446fff8  bnel        $v0, $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19CE84u;
    {
        const bool branch_taken_0x19ce84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x19ce84) {
            ctx->pc = 0x19CE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CE84u;
            // 0x19ce88: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ce68;
        }
    }
    ctx->pc = 0x19CE8Cu;
label_19ce8c:
    // 0x19ce8c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x19ce8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_19ce90:
    // 0x19ce90: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19CE90u;
    {
        const bool branch_taken_0x19ce90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ce90) {
            ctx->pc = 0x19CEC0u;
            goto label_19cec0;
        }
    }
    ctx->pc = 0x19CE98u;
    // 0x19ce98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19CE98u;
    {
        const bool branch_taken_0x19ce98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE98u;
        // 0x19ce9c: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce98) {
            ctx->pc = 0x19CEB0u;
            goto label_19ceb0;
        }
    }
    ctx->pc = 0x19CEA0u;
label_19cea0:
    // 0x19cea0: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x19cea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x19cea4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19cea8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19cea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19ceac: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19ceacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_19ceb0:
    // 0x19ceb0: 0x0  nop
    ctx->pc = 0x19ceb0u;
    // NOP
    // 0x19ceb4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19CEB4u;
    {
        const bool branch_taken_0x19ceb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEB4u;
        // 0x19ceb8: 0x90a60000  lbu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ceb4) {
            ctx->pc = 0x19CEA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19cea0;
        }
    }
    ctx->pc = 0x19CEBCu;
    // 0x19cebc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x19cebcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_19cec0:
    // 0x19cec0: 0x3e00008  jr          $ra
    ctx->pc = 0x19CEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEC0u;
        // 0x19cec4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CEC8u;
}
