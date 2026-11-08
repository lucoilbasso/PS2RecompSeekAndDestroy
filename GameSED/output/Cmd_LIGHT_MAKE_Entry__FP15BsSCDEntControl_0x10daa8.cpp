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

// Function: Cmd_LIGHT_MAKE_Entry__FP15BsSCDEntControl
// Address: 0x10daa8 - 0x10db44
void Cmd_LIGHT_MAKE_Entry__FP15BsSCDEntControl_0x10daa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LIGHT_MAKE_Entry__FP15BsSCDEntControl_0x10daa8");
#endif

    switch (ctx->pc) {
        case 0x10dad0u: goto label_10dad0;
        case 0x10dadcu: goto label_10dadc;
        case 0x10dae8u: goto label_10dae8;
        case 0x10daf0u: goto label_10daf0;
        case 0x10db0cu: goto label_10db0c;
        case 0x10db18u: goto label_10db18;
        case 0x10db28u: goto label_10db28;
        default: break;
    }

    ctx->pc = 0x10daa8u;

    // 0x10daa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10daa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10daac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10daacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10dab0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10dab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dab4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10dab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10dab8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10dab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10dabc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10dabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10dac0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10dac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10dac4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10dac8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10DAC8u;
    SET_GPR_U32(ctx, 31, 0x10DAD0u);
    ctx->pc = 0x10DACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DAC8u;
    // 0x10dacc: 0x8c530044  lw          $s3, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10DAC8u, 0x10DAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DAD0u;
label_10dad0:
    // 0x10dad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10dad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dad4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10DAD4u;
    SET_GPR_U32(ctx, 31, 0x10DADCu);
    ctx->pc = 0x10DAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DAD4u;
    // 0x10dad8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10DAD4u, 0x10DADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DADCu;
label_10dadc:
    // 0x10dadc: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x10dadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x10dae0: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x10DAE0u;
    SET_GPR_U32(ctx, 31, 0x10DAE8u);
    ctx->pc = 0x10DAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DAE0u;
    // 0x10dae4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x10DAE0u, 0x10DAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DAE8u;
label_10dae8:
    // 0x10dae8: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x10DAE8u;
    SET_GPR_U32(ctx, 31, 0x10DAF0u);
    ctx->pc = 0x10DAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DAE8u;
    // 0x10daec: 0x24040250  addiu       $a0, $zero, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x10DAE8u, 0x10DAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DAF0u;
label_10daf0:
    // 0x10daf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10daf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10daf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10daf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10daf8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x10daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x10dafc: 0x2442ffb0  addiu       $v0, $v0, -0x50
    ctx->pc = 0x10dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
    // 0x10db00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10db00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10db04: 0xc0624a8  jal         func_1892A0
    ctx->pc = 0x10DB04u;
    SET_GPR_U32(ctx, 31, 0x10DB0Cu);
    ctx->pc = 0x10DB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DB04u;
    // 0x10db08: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1892A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892A0u, 0x10DB04u, 0x10DB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DB0Cu;
label_10db0c:
    // 0x10db0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10db0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10db10: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x10DB10u;
    SET_GPR_U32(ctx, 31, 0x10DB18u);
    ctx->pc = 0x10DB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DB10u;
    // 0x10db14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x10DB10u, 0x10DB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DB18u;
label_10db18:
    // 0x10db18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10db18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10db1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10db1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10db20: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x10DB20u;
    SET_GPR_U32(ctx, 31, 0x10DB28u);
    ctx->pc = 0x10DB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DB20u;
    // 0x10db24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x10DB20u, 0x10DB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DB28u;
label_10db28:
    // 0x10db28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10db28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10db2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10db2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10db30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10db30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10db34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10db34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10db38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10db38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10db3c: 0x3e00008  jr          $ra
    ctx->pc = 0x10DB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB3Cu;
        // 0x10db40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DB44u;
}
