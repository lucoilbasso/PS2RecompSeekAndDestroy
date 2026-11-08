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

// Function: iSuspendThread
// Address: 0x1b7690 - 0x1b7728
void iSuspendThread_0x1b7690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iSuspendThread_0x1b7690");
#endif

    switch (ctx->pc) {
        case 0x1b76a4u: goto label_1b76a4;
        case 0x1b76b8u: goto label_1b76b8;
        case 0x1b7714u: goto label_1b7714;
        default: break;
    }

    ctx->pc = 0x1b7690u;

    // 0x1b7690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b7694: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7698: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b769c: 0x2403ffd1  addiu       $v1, $zero, -0x2F
    ctx->pc = 0x1b769cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x1b76a0: 0xc  syscall     0
    ctx->pc = 0x1b76a0u;
    ctx->pc = 0x1B76A4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1b76a4:
    // 0x1b76a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b76a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b76a8: 0x12040005  beq         $s0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B76A8u;
    {
        const bool branch_taken_0x1b76a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B76ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76A8u;
        // 0x1b76ac: 0x2e020100  sltiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b76a8) {
            ctx->pc = 0x1B76C0u;
            goto label_1b76c0;
        }
    }
    ctx->pc = 0x1B76B0u;
    // 0x1b76b0: 0xc06bcf8  jal         func_1AF3E0
    ctx->pc = 0x1B76B0u;
    SET_GPR_U32(ctx, 31, 0x1B76B8u);
    ctx->pc = 0x1AF3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF3E0u, 0x1B76B0u, 0x1B76B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B76B8u;
label_1b76b8:
    // 0x1b76b8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B76B8u;
    {
        const bool branch_taken_0x1b76b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B76BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76B8u;
        // 0x1b76bc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b76b8) {
            ctx->pc = 0x1B771Cu;
            goto label_1b771c;
        }
    }
    ctx->pc = 0x1B76C0u;
label_1b76c0:
    // 0x1b76c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B76C0u;
    {
        const bool branch_taken_0x1b76c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B76C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76C0u;
        // 0x1b76c4: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b76c0) {
            ctx->pc = 0x1B76D4u;
            goto label_1b76d4;
        }
    }
    ctx->pc = 0x1B76C8u;
    // 0x1b76c8: 0x8c43b9b8  lw          $v1, -0x4648($v0)
    ctx->pc = 0x1b76c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949304)));
    // 0x1b76cc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B76CCu;
    {
        const bool branch_taken_0x1b76cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76CCu;
        // 0x1b76d0: 0x3c030041  lui         $v1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b76cc) {
            ctx->pc = 0x1B76DCu;
            goto label_1b76dc;
        }
    }
    ctx->pc = 0x1B76D4u;
label_1b76d4:
    // 0x1b76d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B76D4u;
    {
        const bool branch_taken_0x1b76d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B76D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76D4u;
        // 0x1b76d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b76d4) {
            ctx->pc = 0x1B7718u;
            goto label_1b7718;
        }
    }
    ctx->pc = 0x1B76DCu;
label_1b76dc:
    // 0x1b76dc: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1b76dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1b76e0: 0x2463bab8  addiu       $v1, $v1, -0x4548
    ctx->pc = 0x1b76e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949560));
    // 0x1b76e4: 0x8ca4bab0  lw          $a0, -0x4550($a1)
    ctx->pc = 0x1b76e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x40BAB0u));
    // 0x1b76e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1b76e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b76ec: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1b76ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b76f0: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x1b76f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x1b76f4: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1b76f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1b76f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b76f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b76fc: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1b76fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1b7700: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b7700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1b7704: 0xa0a70008  sb          $a3, 0x8($a1)
    ctx->pc = 0x1b7704u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x1b7708: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1b7708u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b770c: 0xc06bd24  jal         func_1AF490
    ctx->pc = 0x1B770Cu;
    SET_GPR_U32(ctx, 31, 0x1B7714u);
    ctx->pc = 0x1B7710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B770Cu;
    // 0x1b7710: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF490u, 0x1B770Cu, 0x1B7714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7714u;
label_1b7714:
    // 0x1b7714: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b7714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b7718:
    // 0x1b7718: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b771c:
    // 0x1b771c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b771cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7720: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7720u;
        // 0x1b7724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7728u;
}
