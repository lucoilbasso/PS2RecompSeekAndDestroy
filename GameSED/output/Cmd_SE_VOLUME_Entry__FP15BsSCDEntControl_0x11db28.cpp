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

// Function: Cmd_SE_VOLUME_Entry__FP15BsSCDEntControl
// Address: 0x11db28 - 0x11db94
void Cmd_SE_VOLUME_Entry__FP15BsSCDEntControl_0x11db28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SE_VOLUME_Entry__FP15BsSCDEntControl_0x11db28");
#endif

    switch (ctx->pc) {
        case 0x11db40u: goto label_11db40;
        case 0x11db60u: goto label_11db60;
        case 0x11db80u: goto label_11db80;
        default: break;
    }

    ctx->pc = 0x11db28u;

    // 0x11db28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11db28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11db2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11db2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11db30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11db30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11db34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11db34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11db38: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11DB38u;
    SET_GPR_U32(ctx, 31, 0x11DB40u);
    ctx->pc = 0x11DB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DB38u;
    // 0x11db3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11DB38u, 0x11DB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB40u;
label_11db40:
    // 0x11db40: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x11db40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11db44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11db44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db48: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x11db48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x11db4c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x11db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11db50: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DB50u;
    {
        const bool branch_taken_0x11db50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB50u;
        // 0x11db54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db50) {
            ctx->pc = 0x11DB68u;
            goto label_11db68;
        }
    }
    ctx->pc = 0x11DB58u;
    // 0x11db58: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11DB58u;
    SET_GPR_U32(ctx, 31, 0x11DB60u);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11DB58u, 0x11DB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB60u;
label_11db60:
    // 0x11db60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11DB60u;
    {
        const bool branch_taken_0x11db60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB60u;
        // 0x11db64: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db60) {
            ctx->pc = 0x11DB70u;
            goto label_11db70;
        }
    }
    ctx->pc = 0x11DB68u;
label_11db68:
    // 0x11db68: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x11db68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x11db6c: 0x8c4600c4  lw          $a2, 0xC4($v0)
    ctx->pc = 0x11db6cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x2400C4u));
label_11db70:
    // 0x11db70: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11db70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11db74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11db74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db78: 0xc0477d4  jal         func_11DF50
    ctx->pc = 0x11DB78u;
    SET_GPR_U32(ctx, 31, 0x11DB80u);
    ctx->pc = 0x11DB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DB78u;
    // 0x11db7c: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF50u, 0x11DB78u, 0x11DB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB80u;
label_11db80:
    // 0x11db80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11db80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11db84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11db84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11db88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11db88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11db8c: 0x3e00008  jr          $ra
    ctx->pc = 0x11DB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB8Cu;
        // 0x11db90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DB94u;
}
