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

// Function: WMCardCommandListProgram__FP7WcMCardP17MCARD_INFORMATION
// Address: 0x179780 - 0x179850
void WMCardCommandListProgram__FP7WcMCardP17MCARD_INFORMATION_0x179780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMCardCommandListProgram__FP7WcMCardP17MCARD_INFORMATION_0x179780");
#endif

    switch (ctx->pc) {
        case 0x1797b8u: goto label_1797b8;
        case 0x1797d0u: goto label_1797d0;
        case 0x1797e0u: goto label_1797e0;
        case 0x1797f4u: goto label_1797f4;
        default: break;
    }

    ctx->pc = 0x179780u;

    // 0x179780: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x179780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x179784: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x179784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x179788: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x179788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x17978c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17978cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179790: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x179790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x179794: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x179794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179798: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x179798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x17979c: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x17979cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1797a0: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x1797a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x1797a4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1797a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1797a8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1797a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1797ac: 0x3c070026  lui         $a3, 0x26
    ctx->pc = 0x1797acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
    // 0x1797b0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1797B0u;
    {
        const bool branch_taken_0x1797b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1797B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1797B0u;
        // 0x1797b4: 0xffbf00a0  sd          $ra, 0xA0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1797b0) {
            ctx->pc = 0x179808u;
            goto label_179808;
        }
    }
    ctx->pc = 0x1797B8u;
label_1797b8:
    // 0x1797b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1797b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797bc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1797bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1797c0: 0x24a5d540  addiu       $a1, $a1, -0x2AC0
    ctx->pc = 0x1797c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956352));
    // 0x1797c4: 0x24e7d548  addiu       $a3, $a3, -0x2AB8
    ctx->pc = 0x1797c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956360));
    // 0x1797c8: 0xc0741de  jal         func_1D0778
    ctx->pc = 0x1797C8u;
    SET_GPR_U32(ctx, 31, 0x1797D0u);
    ctx->pc = 0x1797CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1797C8u;
    // 0x1797cc: 0x26060540  addiu       $a2, $s0, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0778u, 0x1797C8u, 0x1797D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1797D0u;
label_1797d0:
    // 0x1797d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1797d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1797d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797d8: 0xc05e76a  jal         func_179DA8
    ctx->pc = 0x1797D8u;
    SET_GPR_U32(ctx, 31, 0x1797E0u);
    ctx->pc = 0x1797DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1797D8u;
    // 0x1797dc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179DA8u, 0x1797D8u, 0x1797E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1797E0u;
label_1797e0:
    // 0x1797e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1797e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797e4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1797E4u;
    {
        const bool branch_taken_0x1797e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1797E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1797E4u;
        // 0x1797e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1797e4) {
            ctx->pc = 0x179830u;
            goto label_179830;
        }
    }
    ctx->pc = 0x1797ECu;
    // 0x1797ec: 0xc05e796  jal         func_179E58
    ctx->pc = 0x1797ECu;
    SET_GPR_U32(ctx, 31, 0x1797F4u);
    ctx->pc = 0x179E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179E58u, 0x1797ECu, 0x1797F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1797F4u;
label_1797f4:
    // 0x1797f4: 0x5053000e  beql        $v0, $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x1797F4u;
    {
        const bool branch_taken_0x1797f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1797f4) {
            ctx->pc = 0x1797F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1797F4u;
            // 0x1797f8: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179830u;
            goto label_179830;
        }
    }
    ctx->pc = 0x1797FCu;
    // 0x1797fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1797FCu;
    {
        const bool branch_taken_0x1797fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1797fc) {
            ctx->pc = 0x179830u;
            goto label_179830;
        }
    }
    ctx->pc = 0x179804u;
    // 0x179804: 0x0  nop
    ctx->pc = 0x179804u;
    // NOP
label_179808:
    // 0x179808: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x179808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17980c: 0x50520006  beql        $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x17980Cu;
    {
        const bool branch_taken_0x17980c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x17980c) {
            ctx->pc = 0x179810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17980Cu;
            // 0x179810: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179828u;
            goto label_179828;
        }
    }
    ctx->pc = 0x179814u;
    // 0x179814: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x179814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x179818: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x179818u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17981c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x17981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x179820: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x179820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x179824: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x179824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_179828:
    // 0x179828: 0x5460ffe3  bnel        $v1, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x179828u;
    {
        const bool branch_taken_0x179828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x179828) {
            ctx->pc = 0x17982Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179828u;
            // 0x17982c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1797B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1797b8;
        }
    }
    ctx->pc = 0x179830u;
label_179830:
    // 0x179830: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x179830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x179834: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x179834u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x179838: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x179838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17983c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x17983cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x179840: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x179840u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x179844: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x179844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x179848: 0x3e00008  jr          $ra
    ctx->pc = 0x179848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179848u;
        // 0x17984c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179850u;
}
