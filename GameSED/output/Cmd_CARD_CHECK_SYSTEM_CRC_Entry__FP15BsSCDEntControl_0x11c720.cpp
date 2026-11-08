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

// Function: Cmd_CARD_CHECK_SYSTEM_CRC_Entry__FP15BsSCDEntControl
// Address: 0x11c720 - 0x11c7d8
void Cmd_CARD_CHECK_SYSTEM_CRC_Entry__FP15BsSCDEntControl_0x11c720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CARD_CHECK_SYSTEM_CRC_Entry__FP15BsSCDEntControl_0x11c720");
#endif

    switch (ctx->pc) {
        case 0x11c740u: goto label_11c740;
        case 0x11c778u: goto label_11c778;
        case 0x11c7a0u: goto label_11c7a0;
        case 0x11c7b4u: goto label_11c7b4;
        default: break;
    }

    ctx->pc = 0x11c720u;

    // 0x11c720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11c720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11c724: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11c724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11c728: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11c728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11c72c: 0x8f908d10  lw          $s0, -0x72F0($gp)
    ctx->pc = 0x11c72cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11c730: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11c730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11c734: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11c734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11c738: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11C738u;
    SET_GPR_U32(ctx, 31, 0x11C740u);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11C738u, 0x11C740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C740u;
label_11c740:
    // 0x11c740: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11c740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11c744: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11c744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11c748: 0x8c520048  lw          $s2, 0x48($v0)
    ctx->pc = 0x11c748u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x11c74c: 0x8e424064  lw          $v0, 0x4064($s2)
    ctx->pc = 0x11c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16484)));
    // 0x11c750: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C750u;
    {
        const bool branch_taken_0x11c750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C750u;
        // 0x11c754: 0x26514600  addiu       $s1, $s2, 0x4600 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 17920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c750) {
            ctx->pc = 0x11C768u;
            goto label_11c768;
        }
    }
    ctx->pc = 0x11C758u;
    // 0x11c758: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x11c758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x11c75c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c760: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x11C760u;
    {
        const bool branch_taken_0x11c760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C760u;
        // 0x11c764: 0xac6200b0  sw          $v0, 0xB0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c760) {
            ctx->pc = 0x11C7C0u;
            goto label_11c7c0;
        }
    }
    ctx->pc = 0x11C768u;
label_11c768:
    // 0x11c768: 0x240503c0  addiu       $a1, $zero, 0x3C0
    ctx->pc = 0x11c768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x11c76c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c770: 0xc045352  jal         func_114D48
    ctx->pc = 0x11C770u;
    SET_GPR_U32(ctx, 31, 0x11C778u);
    ctx->pc = 0x11C774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C770u;
    // 0x11c774: 0x3c100024  lui         $s0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)36 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D48u, 0x11C770u, 0x11C778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C778u;
label_11c778:
    // 0x11c778: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11c778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c77c: 0x2610fcb0  addiu       $s0, $s0, -0x350
    ctx->pc = 0x11c77cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966448));
    // 0x11c780: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x11c780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x11c784: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x11C784u;
    {
        const bool branch_taken_0x11c784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C784u;
        // 0x11c788: 0xae020400  sw          $v0, 0x400($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c784) {
            ctx->pc = 0x11C7C0u;
            goto label_11c7c0;
        }
    }
    ctx->pc = 0x11C78Cu;
    // 0x11c78c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c790: 0x26514e00  addiu       $s1, $s2, 0x4E00
    ctx->pc = 0x11c790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 19968));
    // 0x11c794: 0x26504604  addiu       $s0, $s2, 0x4604
    ctx->pc = 0x11c794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 17924));
    // 0x11c798: 0xc046104  jal         func_118410
    ctx->pc = 0x11C798u;
    SET_GPR_U32(ctx, 31, 0x11C7A0u);
    ctx->pc = 0x11C79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C798u;
    // 0x11c79c: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x11C798u, 0x11C7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C7A0u;
label_11c7a0:
    // 0x11c7a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c7a4: 0x26313000  addiu       $s1, $s1, 0x3000
    ctx->pc = 0x11c7a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12288));
    // 0x11c7a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11c7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c7ac: 0xc046116  jal         func_118458
    ctx->pc = 0x11C7ACu;
    SET_GPR_U32(ctx, 31, 0x11C7B4u);
    ctx->pc = 0x11C7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C7ACu;
    // 0x11c7b0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118458u, 0x11C7ACu, 0x11C7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C7B4u;
label_11c7b4:
    // 0x11c7b4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x11c7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x11c7b8: 0x641fff9  bgez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11C7B8u;
    {
        const bool branch_taken_0x11c7b8 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x11C7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7B8u;
        // 0x11c7bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c7b8) {
            ctx->pc = 0x11C7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c7a0;
        }
    }
    ctx->pc = 0x11C7C0u;
label_11c7c0:
    // 0x11c7c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11c7c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c7c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11c7c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11c7c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11c7c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c7cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11c7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x11C7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7D0u;
        // 0x11c7d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C7D8u;
}
