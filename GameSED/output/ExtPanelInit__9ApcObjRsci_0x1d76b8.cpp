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

// Function: ExtPanelInit__9ApcObjRsci
// Address: 0x1d76b8 - 0x1d773c
void ExtPanelInit__9ApcObjRsci_0x1d76b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExtPanelInit__9ApcObjRsci_0x1d76b8");
#endif

    switch (ctx->pc) {
        case 0x1d76e4u: goto label_1d76e4;
        case 0x1d7700u: goto label_1d7700;
        case 0x1d7710u: goto label_1d7710;
        default: break;
    }

    ctx->pc = 0x1d76b8u;

    // 0x1d76b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d76b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d76bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d76bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d76c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d76c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d76c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d76c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d76c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d76c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d76cc: 0xae050044  sw          $a1, 0x44($s0)
    ctx->pc = 0x1d76ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 5));
    // 0x1d76d0: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D76D0u;
    {
        const bool branch_taken_0x1d76d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D76D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D76D0u;
        // 0x1d76d4: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d76d0) {
            ctx->pc = 0x1D76DCu;
            goto label_1d76dc;
        }
    }
    ctx->pc = 0x1D76D8u;
    // 0x1d76d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d76d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d76dc:
    // 0x1d76dc: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1D76DCu;
    SET_GPR_U32(ctx, 31, 0x1D76E4u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1D76DCu, 0x1D76E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D76E4u;
label_1d76e4:
    // 0x1d76e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D76E4u;
    {
        const bool branch_taken_0x1d76e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D76E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D76E4u;
        // 0x1d76e8: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d76e4) {
            ctx->pc = 0x1D7700u;
            goto label_1d7700;
        }
    }
    ctx->pc = 0x1D76ECu;
    // 0x1d76ec: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d76ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d76f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d76f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d76f4: 0x24a51be0  addiu       $a1, $a1, 0x1BE0
    ctx->pc = 0x1d76f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7136));
    // 0x1d76f8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1D76F8u;
    SET_GPR_U32(ctx, 31, 0x1D7700u);
    ctx->pc = 0x1D76FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D76F8u;
    // 0x1d76fc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1D76F8u, 0x1D7700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7700u;
label_1d7700:
    // 0x1d7700: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1d7700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1d7704: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D7704u;
    {
        const bool branch_taken_0x1d7704 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d7704) {
            ctx->pc = 0x1D7708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7704u;
            // 0x1d7708: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7730u;
            goto label_1d7730;
        }
    }
    ctx->pc = 0x1D770Cu;
    // 0x1d770c: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x1d770cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1d7710:
    // 0x1d7710: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d7710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d7714: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d7714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d7718: 0x0  nop
    ctx->pc = 0x1d7718u;
    // NOP
    // 0x1d771c: 0x0  nop
    ctx->pc = 0x1d771cu;
    // NOP
    // 0x1d7720: 0x0  nop
    ctx->pc = 0x1d7720u;
    // NOP
    // 0x1d7724: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D7724u;
    {
        const bool branch_taken_0x1d7724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7724u;
        // 0x1d7728: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7724) {
            ctx->pc = 0x1D7710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7710;
        }
    }
    ctx->pc = 0x1D772Cu;
    // 0x1d772c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d772cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7730:
    // 0x1d7730: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7734: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7734u;
        // 0x1d7738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D773Cu;
}
