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

// Function: Cmd_PANEL_PUTC_Entry__FP15BsSCDEntControl
// Address: 0x10cb80 - 0x10cc24
void Cmd_PANEL_PUTC_Entry__FP15BsSCDEntControl_0x10cb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PANEL_PUTC_Entry__FP15BsSCDEntControl_0x10cb80");
#endif

    switch (ctx->pc) {
        case 0x10cbb0u: goto label_10cbb0;
        case 0x10cbdcu: goto label_10cbdc;
        case 0x10cbe8u: goto label_10cbe8;
        case 0x10cbf4u: goto label_10cbf4;
        case 0x10cc08u: goto label_10cc08;
        default: break;
    }

    ctx->pc = 0x10cb80u;

    // 0x10cb80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10cb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10cb84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10cb84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10cb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10cb8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10cb8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10cb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10cb94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10cb94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10cb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10cb9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10cb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10cba0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10cba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10cba4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x10cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10cba8: 0xc04110c  jal         func_104430
    ctx->pc = 0x10CBA8u;
    SET_GPR_U32(ctx, 31, 0x10CBB0u);
    ctx->pc = 0x10CBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CBA8u;
    // 0x10cbac: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10CBA8u, 0x10CBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CBB0u;
label_10cbb0:
    // 0x10cbb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10cbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cbb4: 0x24030166  addiu       $v1, $zero, 0x166
    ctx->pc = 0x10cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x10cbb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10CBB8u;
    {
        const bool branch_taken_0x10cbb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CBB8u;
        // 0x10cbbc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cbb8) {
            ctx->pc = 0x10CBD0u;
            goto label_10cbd0;
        }
    }
    ctx->pc = 0x10CBC0u;
    // 0x10cbc0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10cbc4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10cbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10cbc8: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10CBC8u;
    {
        const bool branch_taken_0x10cbc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10cbc8) {
            ctx->pc = 0x10CBD4u;
            goto label_10cbd4;
        }
    }
    ctx->pc = 0x10CBD0u;
label_10cbd0:
    // 0x10cbd0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10cbd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10cbd4:
    // 0x10cbd4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10CBD4u;
    SET_GPR_U32(ctx, 31, 0x10CBDCu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10CBD4u, 0x10CBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CBDCu;
label_10cbdc:
    // 0x10cbdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10cbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cbe0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10CBE0u;
    SET_GPR_U32(ctx, 31, 0x10CBE8u);
    ctx->pc = 0x10CBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CBE0u;
    // 0x10cbe4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10CBE0u, 0x10CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CBE8u;
label_10cbe8:
    // 0x10cbe8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10cbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cbec: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10CBECu;
    SET_GPR_U32(ctx, 31, 0x10CBF4u);
    ctx->pc = 0x10CBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CBECu;
    // 0x10cbf0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10CBECu, 0x10CBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CBF4u;
label_10cbf4:
    // 0x10cbf4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10cbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cbf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10cbf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cbfc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10cbfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc00: 0xc063b02  jal         func_18EC08
    ctx->pc = 0x10CC00u;
    SET_GPR_U32(ctx, 31, 0x10CC08u);
    ctx->pc = 0x10CC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CC00u;
    // 0x10cc04: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EC08u, 0x10CC00u, 0x10CC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CC08u;
label_10cc08:
    // 0x10cc08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10cc08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cc0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10cc0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10cc10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10cc10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cc14: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10cc14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10cc18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10cc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cc1c: 0x3e00008  jr          $ra
    ctx->pc = 0x10CC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CC1Cu;
        // 0x10cc20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CC24u;
}
