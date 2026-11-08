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

// Function: Cmd_FONT_DATA_FILL_PUT_Entry__FP15BsSCDEntControl
// Address: 0x106768 - 0x1067fc
void Cmd_FONT_DATA_FILL_PUT_Entry__FP15BsSCDEntControl_0x106768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_FONT_DATA_FILL_PUT_Entry__FP15BsSCDEntControl_0x106768");
#endif

    switch (ctx->pc) {
        case 0x106784u: goto label_106784;
        case 0x106790u: goto label_106790;
        case 0x1067a4u: goto label_1067a4;
        case 0x1067b0u: goto label_1067b0;
        case 0x1067bcu: goto label_1067bc;
        case 0x1067c8u: goto label_1067c8;
        default: break;
    }

    ctx->pc = 0x106768u;

    // 0x106768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10676c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10676cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106770: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x106770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x106774: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x106774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x106778: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x106778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10677c: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x10677Cu;
    SET_GPR_U32(ctx, 31, 0x106784u);
    ctx->pc = 0x106780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10677Cu;
    // 0x106780: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x10677Cu, 0x106784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106784u;
label_106784:
    // 0x106784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106788: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x106788u;
    SET_GPR_U32(ctx, 31, 0x106790u);
    ctx->pc = 0x10678Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106788u;
    // 0x10678c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x106788u, 0x106790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106790u;
label_106790:
    // 0x106790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106794: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x106794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106798: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x106798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10679c: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x10679Cu;
    SET_GPR_U32(ctx, 31, 0x1067A4u);
    ctx->pc = 0x1067A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10679Cu;
    // 0x1067a0: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x10679Cu, 0x1067A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1067A4u;
label_1067a4:
    // 0x1067a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1067a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067a8: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x1067A8u;
    SET_GPR_U32(ctx, 31, 0x1067B0u);
    ctx->pc = 0x1067ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1067A8u;
    // 0x1067ac: 0x518821  addu        $s1, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x1067A8u, 0x1067B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1067B0u;
label_1067b0:
    // 0x1067b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1067b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067b4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1067B4u;
    SET_GPR_U32(ctx, 31, 0x1067BCu);
    ctx->pc = 0x1067B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1067B4u;
    // 0x1067b8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1067B4u, 0x1067BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1067BCu;
label_1067bc:
    // 0x1067bc: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1067BCu;
    {
        const bool branch_taken_0x1067bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1067C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067BCu;
        // 0x1067c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067bc) {
            ctx->pc = 0x1067E8u;
            goto label_1067e8;
        }
    }
    ctx->pc = 0x1067C4u;
    // 0x1067c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1067c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1067c8:
    // 0x1067c8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x1067c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1067cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1067ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1067d0: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x1067d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1067d4: 0x0  nop
    ctx->pc = 0x1067d4u;
    // NOP
    // 0x1067d8: 0x0  nop
    ctx->pc = 0x1067d8u;
    // NOP
    // 0x1067dc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1067DCu;
    {
        const bool branch_taken_0x1067dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1067E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067DCu;
        // 0x1067e0: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067dc) {
            ctx->pc = 0x1067C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1067c8;
        }
    }
    ctx->pc = 0x1067E4u;
    // 0x1067e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1067e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1067e8:
    // 0x1067e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1067e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1067ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1067ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1067f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1067f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1067f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1067F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1067F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067F4u;
        // 0x1067f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1067F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1067FCu;
}
