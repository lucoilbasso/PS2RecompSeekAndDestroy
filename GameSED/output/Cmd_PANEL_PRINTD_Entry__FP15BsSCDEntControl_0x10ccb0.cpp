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

// Function: Cmd_PANEL_PRINTD_Entry__FP15BsSCDEntControl
// Address: 0x10ccb0 - 0x10cd30
void Cmd_PANEL_PRINTD_Entry__FP15BsSCDEntControl_0x10ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PANEL_PRINTD_Entry__FP15BsSCDEntControl_0x10ccb0");
#endif

    switch (ctx->pc) {
        case 0x10ccd8u: goto label_10ccd8;
        case 0x10cd04u: goto label_10cd04;
        case 0x10cd10u: goto label_10cd10;
        case 0x10cd1cu: goto label_10cd1c;
        default: break;
    }

    ctx->pc = 0x10ccb0u;

    // 0x10ccb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ccb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ccb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10ccb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ccb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ccb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ccbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10ccbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ccc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10ccc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10ccc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10ccc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ccc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ccc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10cccc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10ccd0: 0xc04110c  jal         func_104430
    ctx->pc = 0x10CCD0u;
    SET_GPR_U32(ctx, 31, 0x10CCD8u);
    ctx->pc = 0x10CCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CCD0u;
    // 0x10ccd4: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10CCD0u, 0x10CCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CCD8u;
label_10ccd8:
    // 0x10ccd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ccd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ccdc: 0x24030166  addiu       $v1, $zero, 0x166
    ctx->pc = 0x10ccdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x10cce0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10CCE0u;
    {
        const bool branch_taken_0x10cce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CCE0u;
        // 0x10cce4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cce0) {
            ctx->pc = 0x10CCF8u;
            goto label_10ccf8;
        }
    }
    ctx->pc = 0x10CCE8u;
    // 0x10cce8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10ccec: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10ccecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10ccf0: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10CCF0u;
    {
        const bool branch_taken_0x10ccf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10ccf0) {
            ctx->pc = 0x10CCFCu;
            goto label_10ccfc;
        }
    }
    ctx->pc = 0x10CCF8u;
label_10ccf8:
    // 0x10ccf8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10ccf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ccfc:
    // 0x10ccfc: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x10CCFCu;
    SET_GPR_U32(ctx, 31, 0x10CD04u);
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x10CCFCu, 0x10CD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD04u;
label_10cd04:
    // 0x10cd04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd08: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x10CD08u;
    SET_GPR_U32(ctx, 31, 0x10CD10u);
    ctx->pc = 0x10CD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CD08u;
    // 0x10cd0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x10CD08u, 0x10CD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD10u;
label_10cd10:
    // 0x10cd10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10cd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd14: 0xc063b2e  jal         func_18ECB8
    ctx->pc = 0x10CD14u;
    SET_GPR_U32(ctx, 31, 0x10CD1Cu);
    ctx->pc = 0x10CD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CD14u;
    // 0x10cd18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ECB8u, 0x10CD14u, 0x10CD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD1Cu;
label_10cd1c:
    // 0x10cd1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10cd1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cd20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10cd20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10cd24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10cd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cd28: 0x3e00008  jr          $ra
    ctx->pc = 0x10CD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD28u;
        // 0x10cd2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CD30u;
}
