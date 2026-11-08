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

// Function: WMCardOpen__FP7WcMCardP17MCARD_INFORMATIONPci
// Address: 0x179890 - 0x17993c
void WMCardOpen__FP7WcMCardP17MCARD_INFORMATIONPci_0x179890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMCardOpen__FP7WcMCardP17MCARD_INFORMATIONPci_0x179890");
#endif

    switch (ctx->pc) {
        case 0x1798c0u: goto label_1798c0;
        case 0x1798d0u: goto label_1798d0;
        case 0x1798ecu: goto label_1798ec;
        default: break;
    }

    ctx->pc = 0x179890u;

    // 0x179890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x179890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x179894: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x179894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x179898: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x179898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17989c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x17989cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1798a0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1798a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1798a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1798a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1798a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1798a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1798ac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1798acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1798b0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1798b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1798b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1798b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1798b8: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1798b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1798bc: 0x0  nop
    ctx->pc = 0x1798bcu;
    // NOP
label_1798c0:
    // 0x1798c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1798c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1798c4: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x1798c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1798c8: 0xc071466  jal         func_1C5198
    ctx->pc = 0x1798C8u;
    SET_GPR_U32(ctx, 31, 0x1798D0u);
    ctx->pc = 0x1798CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1798C8u;
    // 0x1798cc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5198u, 0x1798C8u, 0x1798D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1798D0u;
label_1798d0:
    // 0x1798d0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1798D0u;
    {
        const bool branch_taken_0x1798d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1798d0) {
            ctx->pc = 0x1798D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1798D0u;
            // 0x1798d4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1798C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1798c0;
        }
    }
    ctx->pc = 0x1798D8u;
    // 0x1798d8: 0x26704030  addiu       $s0, $s3, 0x4030
    ctx->pc = 0x1798d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16432));
    // 0x1798dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1798dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1798e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1798e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1798e4: 0xc071606  jal         func_1C5818
    ctx->pc = 0x1798E4u;
    SET_GPR_U32(ctx, 31, 0x1798ECu);
    ctx->pc = 0x1798E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1798E4u;
    // 0x1798e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5818u, 0x1798E4u, 0x1798ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1798ECu;
label_1798ec:
    // 0x1798ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1798ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1798f0: 0x483000b  bgezl       $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1798F0u;
    {
        const bool branch_taken_0x1798f0 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1798f0) {
            ctx->pc = 0x1798F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1798F0u;
            // 0x1798f4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179920u;
            goto label_179920;
        }
    }
    ctx->pc = 0x1798F8u;
    // 0x1798f8: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1798f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1798fc: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1798FCu;
    {
        const bool branch_taken_0x1798fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x179900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1798FCu;
        // 0x179900: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1798fc) {
            ctx->pc = 0x179918u;
            goto label_179918;
        }
    }
    ctx->pc = 0x179904u;
    // 0x179904: 0x2882fffd  slti        $v0, $a0, -0x3
    ctx->pc = 0x179904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x179908: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x179908u;
    {
        const bool branch_taken_0x179908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179908u;
        // 0x17990c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179908) {
            ctx->pc = 0x179914u;
            goto label_179914;
        }
    }
    ctx->pc = 0x179910u;
    // 0x179910: 0x2402fff9  addiu       $v0, $zero, -0x7
    ctx->pc = 0x179910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_179914:
    // 0x179914: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x179914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_179918:
    // 0x179918: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x179918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x17991c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17991cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_179920:
    // 0x179920: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x179920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179924: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x179924u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179928: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x179928u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17992c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x17992cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x179930: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x179930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179934: 0x3e00008  jr          $ra
    ctx->pc = 0x179934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179934u;
        // 0x179938: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17993Cu;
}
