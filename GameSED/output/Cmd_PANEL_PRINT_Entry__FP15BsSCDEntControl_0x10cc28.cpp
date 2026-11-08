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

// Function: Cmd_PANEL_PRINT_Entry__FP15BsSCDEntControl
// Address: 0x10cc28 - 0x10ccac
void Cmd_PANEL_PRINT_Entry__FP15BsSCDEntControl_0x10cc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PANEL_PRINT_Entry__FP15BsSCDEntControl_0x10cc28");
#endif

    switch (ctx->pc) {
        case 0x10cc50u: goto label_10cc50;
        case 0x10cc8cu: goto label_10cc8c;
        case 0x10cc98u: goto label_10cc98;
        default: break;
    }

    ctx->pc = 0x10cc28u;

    // 0x10cc28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10cc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10cc2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10cc2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10cc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10cc34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10cc34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10cc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10cc3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10cc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10cc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10cc44: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10cc48: 0xc04110c  jal         func_104430
    ctx->pc = 0x10CC48u;
    SET_GPR_U32(ctx, 31, 0x10CC50u);
    ctx->pc = 0x10CC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CC48u;
    // 0x10cc4c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10CC48u, 0x10CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CC50u;
label_10cc50:
    // 0x10cc50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc54: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10cc54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc58: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x10cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x10cc5c: 0x2451f290  addiu       $s1, $v0, -0xD70
    ctx->pc = 0x10cc5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963856));
    // 0x10cc60: 0x24060166  addiu       $a2, $zero, 0x166
    ctx->pc = 0x10cc60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x10cc64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10cc64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc68: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10CC68u;
    {
        const bool branch_taken_0x10cc68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CC68u;
        // 0x10cc6c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cc68) {
            ctx->pc = 0x10CC80u;
            goto label_10cc80;
        }
    }
    ctx->pc = 0x10CC70u;
    // 0x10cc70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10cc74: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10cc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10cc78: 0x10460002  beq         $v0, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x10CC78u;
    {
        const bool branch_taken_0x10cc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x10cc78) {
            ctx->pc = 0x10CC84u;
            goto label_10cc84;
        }
    }
    ctx->pc = 0x10CC80u;
label_10cc80:
    // 0x10cc80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10cc80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10cc84:
    // 0x10cc84: 0xc06a396  jal         func_1A8E58
    ctx->pc = 0x10CC84u;
    SET_GPR_U32(ctx, 31, 0x10CC8Cu);
    ctx->pc = 0x1A8E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E58u, 0x10CC84u, 0x10CC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CC8Cu;
label_10cc8c:
    // 0x10cc8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc90: 0xc063b2e  jal         func_18ECB8
    ctx->pc = 0x10CC90u;
    SET_GPR_U32(ctx, 31, 0x10CC98u);
    ctx->pc = 0x10CC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CC90u;
    // 0x10cc94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ECB8u, 0x10CC90u, 0x10CC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CC98u;
label_10cc98:
    // 0x10cc98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10cc98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cc9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10cc9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10cca0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10cca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cca4: 0x3e00008  jr          $ra
    ctx->pc = 0x10CCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CCA4u;
        // 0x10cca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CCA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CCACu;
}
