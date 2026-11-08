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

// Function: Cmd_PANEL_ATTR_REVERSE_Entry__FP15BsSCDEntControl
// Address: 0x10c9a8 - 0x10ca54
void Cmd_PANEL_ATTR_REVERSE_Entry__FP15BsSCDEntControl_0x10c9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PANEL_ATTR_REVERSE_Entry__FP15BsSCDEntControl_0x10c9a8");
#endif

    switch (ctx->pc) {
        case 0x10c9d4u: goto label_10c9d4;
        case 0x10ca00u: goto label_10ca00;
        case 0x10ca28u: goto label_10ca28;
        case 0x10ca3cu: goto label_10ca3c;
        default: break;
    }

    ctx->pc = 0x10c9a8u;

    // 0x10c9a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10c9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10c9ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10c9acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c9b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10c9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10c9b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c9b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c9b8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x10c9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10c9bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c9c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10c9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10c9c4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10c9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10c9c8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10c9cc: 0xc04110c  jal         func_104430
    ctx->pc = 0x10C9CCu;
    SET_GPR_U32(ctx, 31, 0x10C9D4u);
    ctx->pc = 0x10C9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C9CCu;
    // 0x10c9d0: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10C9CCu, 0x10C9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C9D4u;
label_10c9d4:
    // 0x10c9d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c9d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10c9d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c9dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C9DCu;
    {
        const bool branch_taken_0x10c9dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C9DCu;
        // 0x10c9e0: 0x24050166  addiu       $a1, $zero, 0x166 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c9dc) {
            ctx->pc = 0x10C9F4u;
            goto label_10c9f4;
        }
    }
    ctx->pc = 0x10C9E4u;
    // 0x10c9e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10c9e8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10c9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10c9ec: 0x10450002  beq         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10C9ECu;
    {
        const bool branch_taken_0x10c9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x10C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C9ECu;
        // 0x10c9f0: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c9ec) {
            ctx->pc = 0x10C9F8u;
            goto label_10c9f8;
        }
    }
    ctx->pc = 0x10C9F4u;
label_10c9f4:
    // 0x10c9f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10c9f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10c9f8:
    // 0x10c9f8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10C9F8u;
    SET_GPR_U32(ctx, 31, 0x10CA00u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10C9F8u, 0x10CA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CA00u;
label_10ca00:
    // 0x10ca00: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x10ca00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10ca04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10ca04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca08: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x10ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10ca0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10ca0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ca10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca14: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x10ca14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10ca18: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CA18u;
    {
        const bool branch_taken_0x10ca18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA18u;
        // 0x10ca1c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ca18) {
            ctx->pc = 0x10CA2Cu;
            goto label_10ca2c;
        }
    }
    ctx->pc = 0x10CA20u;
    // 0x10ca20: 0xc06a324  jal         func_1A8C90
    ctx->pc = 0x10CA20u;
    SET_GPR_U32(ctx, 31, 0x10CA28u);
    ctx->pc = 0x1A8C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8C90u, 0x10CA20u, 0x10CA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CA28u;
label_10ca28:
    // 0x10ca28: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x10ca28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_10ca2c:
    // 0x10ca2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ca2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10ca30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca34: 0xc063822  jal         func_18E088
    ctx->pc = 0x10CA34u;
    SET_GPR_U32(ctx, 31, 0x10CA3Cu);
    ctx->pc = 0x10CA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CA34u;
    // 0x10ca38: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E088u, 0x10CA34u, 0x10CA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CA3Cu;
label_10ca3c:
    // 0x10ca3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10ca3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ca40: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x10ca40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10ca44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10ca44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ca48: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10ca48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10ca4c: 0x3e00008  jr          $ra
    ctx->pc = 0x10CA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA4Cu;
        // 0x10ca50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CA54u;
}
