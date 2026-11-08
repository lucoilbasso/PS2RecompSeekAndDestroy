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

// Function: ApTankAimingTargetSearch__FP7ApcTank
// Address: 0x14f6f0 - 0x14f7b4
void ApTankAimingTargetSearch__FP7ApcTank_0x14f6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApTankAimingTargetSearch__FP7ApcTank_0x14f6f0");
#endif

    switch (ctx->pc) {
        case 0x14f77cu: goto label_14f77c;
        case 0x14f78cu: goto label_14f78c;
        case 0x14f79cu: goto label_14f79c;
        default: break;
    }

    ctx->pc = 0x14f6f0u;

    // 0x14f6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14f6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14f6f4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x14f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x14f6f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14f6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14f6fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14f6fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f700: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14f700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14f704: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x14f704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x14f708: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14f708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14f70c: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x14F70Cu;
    {
        const bool branch_taken_0x14f70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f70c) {
            ctx->pc = 0x14F710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F70Cu;
            // 0x14f710: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F7A8u;
            goto label_14f7a8;
        }
    }
    ctx->pc = 0x14F714u;
    // 0x14f714: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x14f714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x14f718: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14f718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14f71c: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x14F71Cu;
    {
        const bool branch_taken_0x14f71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f71c) {
            ctx->pc = 0x14F720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F71Cu;
            // 0x14f720: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F7A8u;
            goto label_14f7a8;
        }
    }
    ctx->pc = 0x14F724u;
    // 0x14f724: 0x8e030690  lw          $v1, 0x690($s0)
    ctx->pc = 0x14f724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x14f728: 0x8c620c0c  lw          $v0, 0xC0C($v1)
    ctx->pc = 0x14f728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3084)));
    // 0x14f72c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F72Cu;
    {
        const bool branch_taken_0x14f72c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F72Cu;
        // 0x14f730: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f72c) {
            ctx->pc = 0x14F740u;
            goto label_14f740;
        }
    }
    ctx->pc = 0x14F734u;
    // 0x14f734: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x14f734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x14f738: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14F738u;
    {
        const bool branch_taken_0x14f738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F738u;
        // 0x14f73c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f738) {
            ctx->pc = 0x14F744u;
            goto label_14f744;
        }
    }
    ctx->pc = 0x14F740u;
label_14f740:
    // 0x14f740: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14f740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f744:
    // 0x14f744: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x14F744u;
    {
        const bool branch_taken_0x14f744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f744) {
            ctx->pc = 0x14F748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F744u;
            // 0x14f748: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F7A8u;
            goto label_14f7a8;
        }
    }
    ctx->pc = 0x14F74Cu;
    // 0x14f74c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x14f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x14f750: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x14F750u;
    {
        const bool branch_taken_0x14f750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f750) {
            ctx->pc = 0x14F754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F750u;
            // 0x14f754: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F7A8u;
            goto label_14f7a8;
        }
    }
    ctx->pc = 0x14F758u;
    // 0x14f758: 0x8e02081c  lw          $v0, 0x81C($s0)
    ctx->pc = 0x14f758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2076)));
    // 0x14f75c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14F75Cu;
    {
        const bool branch_taken_0x14f75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F75Cu;
        // 0x14f760: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f75c) {
            ctx->pc = 0x14F7A0u;
            goto label_14f7a0;
        }
    }
    ctx->pc = 0x14F764u;
    // 0x14f764: 0x8e020818  lw          $v0, 0x818($s0)
    ctx->pc = 0x14f764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2072)));
    // 0x14f768: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14F768u;
    {
        const bool branch_taken_0x14f768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f768) {
            ctx->pc = 0x14F794u;
            goto label_14f794;
        }
    }
    ctx->pc = 0x14F770u;
    // 0x14f770: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14f770u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14f774: 0xc053d7c  jal         func_14F5F0
    ctx->pc = 0x14F774u;
    SET_GPR_U32(ctx, 31, 0x14F77Cu);
    ctx->pc = 0x14F778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F774u;
    // 0x14f778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F5F0u, 0x14F774u, 0x14F77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F77Cu;
label_14f77c:
    // 0x14f77c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F77Cu;
    {
        const bool branch_taken_0x14f77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F77Cu;
        // 0x14f780: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f77c) {
            ctx->pc = 0x14F794u;
            goto label_14f794;
        }
    }
    ctx->pc = 0x14F784u;
    // 0x14f784: 0xc055694  jal         func_155A50
    ctx->pc = 0x14F784u;
    SET_GPR_U32(ctx, 31, 0x14F78Cu);
    ctx->pc = 0x14F788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F784u;
    // 0x14f788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A50u, 0x14F784u, 0x14F78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F78Cu;
label_14f78c:
    // 0x14f78c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x14f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14f790: 0xae020818  sw          $v0, 0x818($s0)
    ctx->pc = 0x14f790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2072), GPR_U32(ctx, 2));
label_14f794:
    // 0x14f794: 0xc066eea  jal         func_19BBA8
    ctx->pc = 0x14F794u;
    SET_GPR_U32(ctx, 31, 0x14F79Cu);
    ctx->pc = 0x14F798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F794u;
    // 0x14f798: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBA8u, 0x14F794u, 0x14F79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F79Cu;
label_14f79c:
    // 0x14f79c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14f7a0:
    // 0x14f7a0: 0xae02081c  sw          $v0, 0x81C($s0)
    ctx->pc = 0x14f7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2076), GPR_U32(ctx, 2));
    // 0x14f7a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14f7a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14f7a8:
    // 0x14f7a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14f7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14f7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x14F7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F7ACu;
        // 0x14f7b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F7B4u;
}
