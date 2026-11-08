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

// Function: ApUnitSetOptionLocal__FP7ApcUniti
// Address: 0x14aaf0 - 0x14abac
void ApUnitSetOptionLocal__FP7ApcUniti_0x14aaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUnitSetOptionLocal__FP7ApcUniti_0x14aaf0");
#endif

    switch (ctx->pc) {
        case 0x14ab30u: goto label_14ab30;
        case 0x14ab58u: goto label_14ab58;
        case 0x14ab78u: goto label_14ab78;
        case 0x14ab8cu: goto label_14ab8c;
        default: break;
    }

    ctx->pc = 0x14aaf0u;

    // 0x14aaf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14aaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14aaf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14aaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14aaf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14aaf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aafc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14aafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14ab00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14ab00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14ab04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14ab08: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x14ab08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14ab0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14ab10: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x14ab10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14ab14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14ab18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14ab18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab1c: 0x8e0201b4  lw          $v0, 0x1B4($s0)
    ctx->pc = 0x14ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x14ab20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AB20u;
    {
        const bool branch_taken_0x14ab20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AB20u;
        // 0x14ab24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab20) {
            ctx->pc = 0x14AB30u;
            goto label_14ab30;
        }
    }
    ctx->pc = 0x14AB28u;
    // 0x14ab28: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x14AB28u;
    SET_GPR_U32(ctx, 31, 0x14AB30u);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x14AB28u, 0x14AB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB30u;
label_14ab30:
    // 0x14ab30: 0xae0001b4  sw          $zero, 0x1B4($s0)
    ctx->pc = 0x14ab30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
    // 0x14ab34: 0x1a200016  blez        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x14AB34u;
    {
        const bool branch_taken_0x14ab34 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x14AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AB34u;
        // 0x14ab38: 0xa21101a9  sb          $s1, 0x1A9($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 425), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab34) {
            ctx->pc = 0x14AB90u;
            goto label_14ab90;
        }
    }
    ctx->pc = 0x14AB3Cu;
    // 0x14ab3c: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x14ab3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x14ab40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14ab40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab44: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14AB44u;
    {
        const bool branch_taken_0x14ab44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AB44u;
        // 0x14ab48: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab44) {
            ctx->pc = 0x14AB50u;
            goto label_14ab50;
        }
    }
    ctx->pc = 0x14AB4Cu;
    // 0x14ab4c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14ab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14ab50:
    // 0x14ab50: 0xc068086  jal         func_1A0218
    ctx->pc = 0x14AB50u;
    SET_GPR_U32(ctx, 31, 0x14AB58u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x14AB50u, 0x14AB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB58u;
label_14ab58:
    // 0x14ab58: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14ab58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14ab5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14ab5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14ab60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab64: 0x24a56ba8  addiu       $a1, $a1, 0x6BA8
    ctx->pc = 0x14ab64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27560));
    // 0x14ab68: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AB68u;
    {
        const bool branch_taken_0x14ab68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AB68u;
        // 0x14ab6c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab68) {
            ctx->pc = 0x14AB78u;
            goto label_14ab78;
        }
    }
    ctx->pc = 0x14AB70u;
    // 0x14ab70: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14AB70u;
    SET_GPR_U32(ctx, 31, 0x14AB78u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14AB70u, 0x14AB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB78u;
label_14ab78:
    // 0x14ab78: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x14ab78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x14ab7c: 0x123080  sll         $a2, $s2, 2
    ctx->pc = 0x14ab7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x14ab80: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x14ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x14ab84: 0xc067294  jal         func_19CA50
    ctx->pc = 0x14AB84u;
    SET_GPR_U32(ctx, 31, 0x14AB8Cu);
    ctx->pc = 0x14AB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AB84u;
    // 0x14ab88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CA50u, 0x14AB84u, 0x14AB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB8Cu;
label_14ab8c:
    // 0x14ab8c: 0xae1101b4  sw          $s1, 0x1B4($s0)
    ctx->pc = 0x14ab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 17));
label_14ab90:
    // 0x14ab90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14ab90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ab94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14ab94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14ab98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14ab98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ab9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14ab9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14aba0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14aba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14aba4: 0x3e00008  jr          $ra
    ctx->pc = 0x14ABA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ABA4u;
        // 0x14aba8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14ABA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14ABACu;
}
