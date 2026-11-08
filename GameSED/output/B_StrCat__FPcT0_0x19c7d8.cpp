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

// Function: B_StrCat__FPcT0
// Address: 0x19c7d8 - 0x19c840
void B_StrCat__FPcT0_0x19c7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_StrCat__FPcT0_0x19c7d8");
#endif

    switch (ctx->pc) {
        case 0x19c7e8u: goto label_19c7e8;
        case 0x19c818u: goto label_19c818;
        default: break;
    }

    ctx->pc = 0x19c7d8u;

    // 0x19c7d8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x19c7d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19c7dc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x19C7DCu;
    {
        const bool branch_taken_0x19c7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c7dc) {
            ctx->pc = 0x19C7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C7DCu;
            // 0x19c7e0: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C808u;
            goto label_19c808;
        }
    }
    ctx->pc = 0x19C7E4u;
    // 0x19c7e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19c7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19c7e8:
    // 0x19c7e8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x19c7e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19c7ec: 0x0  nop
    ctx->pc = 0x19c7ecu;
    // NOP
    // 0x19c7f0: 0x0  nop
    ctx->pc = 0x19c7f0u;
    // NOP
    // 0x19c7f4: 0x0  nop
    ctx->pc = 0x19c7f4u;
    // NOP
    // 0x19c7f8: 0x0  nop
    ctx->pc = 0x19c7f8u;
    // NOP
    // 0x19c7fc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19C7FCu;
    {
        const bool branch_taken_0x19c7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c7fc) {
            ctx->pc = 0x19C800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C7FCu;
            // 0x19c800: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c7e8;
        }
    }
    ctx->pc = 0x19C804u;
    // 0x19c804: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19c804u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_19c808:
    // 0x19c808: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x19c808u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c80c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19C80Cu;
    {
        const bool branch_taken_0x19c80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C80Cu;
        // 0x19c810: 0x90a60000  lbu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c80c) {
            ctx->pc = 0x19C834u;
            goto label_19c834;
        }
    }
    ctx->pc = 0x19C814u;
    // 0x19c814: 0x0  nop
    ctx->pc = 0x19c814u;
    // NOP
label_19c818:
    // 0x19c818: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x19c818u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x19c81c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19c81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19c820: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19c820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19c824: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19c824u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c828: 0x0  nop
    ctx->pc = 0x19c828u;
    // NOP
    // 0x19c82c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19C82Cu;
    {
        const bool branch_taken_0x19c82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C82Cu;
        // 0x19c830: 0x90a60000  lbu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c82c) {
            ctx->pc = 0x19C818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c818;
        }
    }
    ctx->pc = 0x19C834u;
label_19c834:
    // 0x19c834: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x19c834u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19c838: 0x3e00008  jr          $ra
    ctx->pc = 0x19C838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C838u;
        // 0x19c83c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C840u;
}
