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

// Function: Cmd_EXT_CALL_CALLBACK_Entry__FP15BsSCDEntControl
// Address: 0x106590 - 0x10663c
void Cmd_EXT_CALL_CALLBACK_Entry__FP15BsSCDEntControl_0x106590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_EXT_CALL_CALLBACK_Entry__FP15BsSCDEntControl_0x106590");
#endif

    switch (ctx->pc) {
        case 0x1065acu: goto label_1065ac;
        case 0x1065ccu: goto label_1065cc;
        case 0x1065ecu: goto label_1065ec;
        case 0x106604u: goto label_106604;
        case 0x106624u: goto label_106624;
        default: break;
    }

    ctx->pc = 0x106590u;

    // 0x106590: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x106590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x106594: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x106594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x106598: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x106598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x10659c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x10659cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1065a0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1065a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1065a4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1065A4u;
    SET_GPR_U32(ctx, 31, 0x1065ACu);
    ctx->pc = 0x1065A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1065A4u;
    // 0x1065a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1065A4u, 0x1065ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1065ACu;
label_1065ac:
    // 0x1065ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1065acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1065b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1065b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065b4: 0x3c110026  lui         $s1, 0x26
    ctx->pc = 0x1065b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)38 << 16));
    // 0x1065b8: 0x2631ed80  addiu       $s1, $s1, -0x1280
    ctx->pc = 0x1065b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962560));
    // 0x1065bc: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1065bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1065c0: 0xafb00040  sw          $s0, 0x40($sp)
    ctx->pc = 0x1065c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 16));
    // 0x1065c4: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x1065C4u;
    SET_GPR_U32(ctx, 31, 0x1065CCu);
    ctx->pc = 0x1065C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1065C4u;
    // 0x1065c8: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x1065C4u, 0x1065CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1065CCu;
label_1065cc:
    // 0x1065cc: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1065ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1065d0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1065d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1065d4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1065d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1065d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1065d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1065dc: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1065DCu;
    {
        const bool branch_taken_0x1065dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1065E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065DCu;
        // 0x1065e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1065dc) {
            ctx->pc = 0x1065F0u;
            goto label_1065f0;
        }
    }
    ctx->pc = 0x1065E4u;
    // 0x1065e4: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x1065E4u;
    SET_GPR_U32(ctx, 31, 0x1065ECu);
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x1065E4u, 0x1065ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1065ECu;
label_1065ec:
    // 0x1065ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1065ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1065f0:
    // 0x1065f0: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x1065f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1065f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1065f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065f8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1065f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1065fc: 0xc060e24  jal         func_183890
    ctx->pc = 0x1065FCu;
    SET_GPR_U32(ctx, 31, 0x106604u);
    ctx->pc = 0x106600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1065FCu;
    // 0x106600: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183890u, 0x1065FCu, 0x106604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106604u;
label_106604:
    // 0x106604: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x106604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x106608: 0x24639778  addiu       $v1, $v1, -0x6888
    ctx->pc = 0x106608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940536));
    // 0x10660c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10660cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106610: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x106610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x106614: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x106614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106618: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x106618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x10661c: 0xc069626  jal         func_1A5898
    ctx->pc = 0x10661Cu;
    SET_GPR_U32(ctx, 31, 0x106624u);
    ctx->pc = 0x106620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10661Cu;
    // 0x106620: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5898u, 0x10661Cu, 0x106624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106624u;
label_106624:
    // 0x106624: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x106624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106628: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x106628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x10662c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x10662cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106630: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x106630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x106634: 0x3e00008  jr          $ra
    ctx->pc = 0x106634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106634u;
        // 0x106638: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10663Cu;
}
