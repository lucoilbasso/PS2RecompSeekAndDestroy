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

// Function: Cmd_PANEL_INFO_Entry__FP15BsSCDEntControl
// Address: 0x10cd30 - 0x10cdd8
void Cmd_PANEL_INFO_Entry__FP15BsSCDEntControl_0x10cd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PANEL_INFO_Entry__FP15BsSCDEntControl_0x10cd30");
#endif

    switch (ctx->pc) {
        case 0x10cd58u: goto label_10cd58;
        case 0x10cd84u: goto label_10cd84;
        case 0x10cd94u: goto label_10cd94;
        case 0x10cdc4u: goto label_10cdc4;
        default: break;
    }

    ctx->pc = 0x10cd30u;

    // 0x10cd30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10cd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10cd34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10cd34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10cd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10cd3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10cd3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10cd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10cd44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10cd44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10cd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10cd4c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10cd50: 0xc04110c  jal         func_104430
    ctx->pc = 0x10CD50u;
    SET_GPR_U32(ctx, 31, 0x10CD58u);
    ctx->pc = 0x10CD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CD50u;
    // 0x10cd54: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10CD50u, 0x10CD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD58u;
label_10cd58:
    // 0x10cd58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd5c: 0x24030166  addiu       $v1, $zero, 0x166
    ctx->pc = 0x10cd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x10cd60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10CD60u;
    {
        const bool branch_taken_0x10cd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD60u;
        // 0x10cd64: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cd60) {
            ctx->pc = 0x10CD78u;
            goto label_10cd78;
        }
    }
    ctx->pc = 0x10CD68u;
    // 0x10cd68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10cd6c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10cd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10cd70: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10CD70u;
    {
        const bool branch_taken_0x10cd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10cd70) {
            ctx->pc = 0x10CD7Cu;
            goto label_10cd7c;
        }
    }
    ctx->pc = 0x10CD78u;
label_10cd78:
    // 0x10cd78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10cd78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10cd7c:
    // 0x10cd7c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10CD7Cu;
    SET_GPR_U32(ctx, 31, 0x10CD84u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10CD7Cu, 0x10CD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD84u;
label_10cd84:
    // 0x10cd84: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x10CD84u;
    {
        const bool branch_taken_0x10cd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10cd84) {
            ctx->pc = 0x10CD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CD84u;
            // 0x10cd88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CDC8u;
            goto label_10cdc8;
        }
    }
    ctx->pc = 0x10CD8Cu;
    // 0x10cd8c: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x10CD8Cu;
    SET_GPR_U32(ctx, 31, 0x10CD94u);
    ctx->pc = 0x10CD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CD8Cu;
    // 0x10cd90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x10CD8Cu, 0x10CD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD94u;
label_10cd94:
    // 0x10cd94: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10cd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10cd98: 0x8e23024c  lw          $v1, 0x24C($s1)
    ctx->pc = 0x10cd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x10cd9c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10cd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10cda0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10cda0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10cda4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10cda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10cda8: 0x50450007  beql        $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10CDA8u;
    {
        const bool branch_taken_0x10cda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x10cda8) {
            ctx->pc = 0x10CDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CDA8u;
            // 0x10cdac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CDC8u;
            goto label_10cdc8;
        }
    }
    ctx->pc = 0x10CDB0u;
    // 0x10cdb0: 0x8e22024c  lw          $v0, 0x24C($s1)
    ctx->pc = 0x10cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x10cdb4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CDB4u;
    {
        const bool branch_taken_0x10cdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cdb4) {
            ctx->pc = 0x10CDB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CDB4u;
            // 0x10cdb8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CDC8u;
            goto label_10cdc8;
        }
    }
    ctx->pc = 0x10CDBCu;
    // 0x10cdbc: 0xc063b5e  jal         func_18ED78
    ctx->pc = 0x10CDBCu;
    SET_GPR_U32(ctx, 31, 0x10CDC4u);
    ctx->pc = 0x10CDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CDBCu;
    // 0x10cdc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ED78u, 0x10CDBCu, 0x10CDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CDC4u;
label_10cdc4:
    // 0x10cdc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10cdc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10cdc8:
    // 0x10cdc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10cdc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10cdcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10cdccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cdd0: 0x3e00008  jr          $ra
    ctx->pc = 0x10CDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CDD0u;
        // 0x10cdd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CDD8u;
}
