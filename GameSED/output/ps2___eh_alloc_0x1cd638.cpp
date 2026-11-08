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

// Function: __eh_alloc
// Address: 0x1cd638 - 0x1cd718
void ps2___eh_alloc_0x1cd638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___eh_alloc_0x1cd638");
#endif

    switch (ctx->pc) {
        case 0x1cd654u: goto label_1cd654;
        case 0x1cd660u: goto label_1cd660;
        case 0x1cd670u: goto label_1cd670;
        case 0x1cd698u: goto label_1cd698;
        case 0x1cd6c0u: goto label_1cd6c0;
        case 0x1cd6ecu: goto label_1cd6ec;
        default: break;
    }

    ctx->pc = 0x1cd638u;

    // 0x1cd638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd63c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cd640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd644: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD644u;
    {
        const bool branch_taken_0x1cd644 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD644u;
        // 0x1cd648: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd644) {
            ctx->pc = 0x1CD658u;
            goto label_1cd658;
        }
    }
    ctx->pc = 0x1CD64Cu;
    // 0x1cd64c: 0xc073d1a  jal         func_1CF468
    ctx->pc = 0x1CD64Cu;
    SET_GPR_U32(ctx, 31, 0x1CD654u);
    ctx->pc = 0x1CF468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF468u, 0x1CD64Cu, 0x1CD654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD654u;
label_1cd654:
    // 0x1cd654: 0x0  nop
    ctx->pc = 0x1cd654u;
    // NOP
label_1cd658:
    // 0x1cd658: 0xc073d5c  jal         func_1CF570
    ctx->pc = 0x1CD658u;
    SET_GPR_U32(ctx, 31, 0x1CD660u);
    ctx->pc = 0x1CF570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF570u, 0x1CD658u, 0x1CD660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD660u;
label_1cd660:
    // 0x1cd660: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1CD660u;
    {
        const bool branch_taken_0x1cd660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd660) {
            ctx->pc = 0x1CD664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD660u;
            // 0x1cd664: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD70Cu;
            goto label_1cd70c;
        }
    }
    ctx->pc = 0x1CD668u;
    // 0x1cd668: 0xc07349c  jal         func_1CD270
    ctx->pc = 0x1CD668u;
    SET_GPR_U32(ctx, 31, 0x1CD670u);
    ctx->pc = 0x1CD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD270u, 0x1CD668u, 0x1CD670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD670u;
label_1cd670:
    // 0x1cd670: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1cd670u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd674: 0x2602000f  addiu       $v0, $s0, 0xF
    ctx->pc = 0x1cd674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x1cd678: 0x8ce600d0  lw          $a2, 0xD0($a3)
    ctx->pc = 0x1cd678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 208)));
    // 0x1cd67c: 0x22902  srl         $a1, $v0, 4
    ctx->pc = 0x1cd67cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1cd680: 0x2ca3000d  sltiu       $v1, $a1, 0xD
    ctx->pc = 0x1cd680u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x1cd684: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1cd684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1cd688: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD688u;
    {
        const bool branch_taken_0x1cd688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD688u;
        // 0x1cd68c: 0xc24025  or          $t0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd688) {
            ctx->pc = 0x1CD698u;
            goto label_1cd698;
        }
    }
    ctx->pc = 0x1CD690u;
    // 0x1cd690: 0xc073468  jal         func_1CD1A0
    ctx->pc = 0x1CD690u;
    SET_GPR_U32(ctx, 31, 0x1CD698u);
    ctx->pc = 0x1CD1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1A0u, 0x1CD690u, 0x1CD698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD698u;
label_1cd698:
    // 0x1cd698: 0x38a20001  xori        $v0, $a1, 0x1
    ctx->pc = 0x1cd698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x1cd69c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cd69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd6a0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1cd6a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1cd6a4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1cd6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cd6a8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1cd6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1cd6ac: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x1cd6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x1cd6b0: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1cd6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1cd6b4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CD6B4u;
    {
        const bool branch_taken_0x1cd6b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD6B4u;
        // 0x1cd6b8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd6b4) {
            ctx->pc = 0x1CD6E4u;
            goto label_1cd6e4;
        }
    }
    ctx->pc = 0x1CD6BCu;
    // 0x1cd6bc: 0x881006  srlv        $v0, $t0, $a0
    ctx->pc = 0x1cd6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
label_1cd6c0:
    // 0x1cd6c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1cd6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1cd6c4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1CD6C4u;
    {
        const bool branch_taken_0x1cd6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd6c4) {
            ctx->pc = 0x1CD6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD6C4u;
            // 0x1cd6c8: 0x31842  srl         $v1, $v1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD6F0u;
            goto label_1cd6f0;
        }
    }
    ctx->pc = 0x1CD6CCu;
    // 0x1cd6cc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1cd6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1cd6d0: 0x0  nop
    ctx->pc = 0x1cd6d0u;
    // NOP
    // 0x1cd6d4: 0x0  nop
    ctx->pc = 0x1cd6d4u;
    // NOP
    // 0x1cd6d8: 0x0  nop
    ctx->pc = 0x1cd6d8u;
    // NOP
    // 0x1cd6dc: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1CD6DCu;
    {
        const bool branch_taken_0x1cd6dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD6DCu;
        // 0x1cd6e0: 0x881006  srlv        $v0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd6dc) {
            ctx->pc = 0x1CD6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd6c0;
        }
    }
    ctx->pc = 0x1CD6E4u;
label_1cd6e4:
    // 0x1cd6e4: 0xc073468  jal         func_1CD1A0
    ctx->pc = 0x1CD6E4u;
    SET_GPR_U32(ctx, 31, 0x1CD6ECu);
    ctx->pc = 0x1CD1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1A0u, 0x1CD6E4u, 0x1CD6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD6ECu;
label_1cd6ec:
    // 0x1cd6ec: 0x0  nop
    ctx->pc = 0x1cd6ecu;
    // NOP
label_1cd6f0:
    // 0x1cd6f0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1cd6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1cd6f4: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1cd6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1cd6f8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1cd6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1cd6fc: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1cd6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1cd700: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1cd700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1cd704: 0xace300d0  sw          $v1, 0xD0($a3)
    ctx->pc = 0x1cd704u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 208), GPR_U32(ctx, 3));
    // 0x1cd708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cd70c:
    // 0x1cd70c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cd70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd710: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD710u;
        // 0x1cd714: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD718u;
}
