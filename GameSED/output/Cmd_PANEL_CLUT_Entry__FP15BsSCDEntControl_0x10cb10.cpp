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

// Function: Cmd_PANEL_CLUT_Entry__FP15BsSCDEntControl
// Address: 0x10cb10 - 0x10cb7c
void Cmd_PANEL_CLUT_Entry__FP15BsSCDEntControl_0x10cb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PANEL_CLUT_Entry__FP15BsSCDEntControl_0x10cb10");
#endif

    switch (ctx->pc) {
        case 0x10cb34u: goto label_10cb34;
        case 0x10cb60u: goto label_10cb60;
        case 0x10cb6cu: goto label_10cb6c;
        default: break;
    }

    ctx->pc = 0x10cb10u;

    // 0x10cb10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10cb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10cb14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10cb14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10cb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10cb1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10cb1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10cb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10cb24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10cb24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb28: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10cb2c: 0xc04110c  jal         func_104430
    ctx->pc = 0x10CB2Cu;
    SET_GPR_U32(ctx, 31, 0x10CB34u);
    ctx->pc = 0x10CB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CB2Cu;
    // 0x10cb30: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10CB2Cu, 0x10CB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CB34u;
label_10cb34:
    // 0x10cb34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb38: 0x24030166  addiu       $v1, $zero, 0x166
    ctx->pc = 0x10cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x10cb3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10CB3Cu;
    {
        const bool branch_taken_0x10cb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB3Cu;
        // 0x10cb40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cb3c) {
            ctx->pc = 0x10CB54u;
            goto label_10cb54;
        }
    }
    ctx->pc = 0x10CB44u;
    // 0x10cb44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10cb48: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10cb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10cb4c: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10CB4Cu;
    {
        const bool branch_taken_0x10cb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10cb4c) {
            ctx->pc = 0x10CB58u;
            goto label_10cb58;
        }
    }
    ctx->pc = 0x10CB54u;
label_10cb54:
    // 0x10cb54: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10cb54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10cb58:
    // 0x10cb58: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10CB58u;
    SET_GPR_U32(ctx, 31, 0x10CB60u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10CB58u, 0x10CB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CB60u;
label_10cb60:
    // 0x10cb60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb64: 0xc063a90  jal         func_18EA40
    ctx->pc = 0x10CB64u;
    SET_GPR_U32(ctx, 31, 0x10CB6Cu);
    ctx->pc = 0x10CB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CB64u;
    // 0x10cb68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA40u, 0x10CB64u, 0x10CB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CB6Cu;
label_10cb6c:
    // 0x10cb6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10cb6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cb70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10cb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10cb74: 0x3e00008  jr          $ra
    ctx->pc = 0x10CB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB74u;
        // 0x10cb78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CB7Cu;
}
