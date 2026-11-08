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

// Function: chaMemFree
// Address: 0x1ae6b8 - 0x1ae7d0
void chaMemFree_0x1ae6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chaMemFree_0x1ae6b8");
#endif

    switch (ctx->pc) {
        case 0x1ae6f8u: goto label_1ae6f8;
        default: break;
    }

    ctx->pc = 0x1ae6b8u;

    // 0x1ae6b8: 0x3c0c0024  lui         $t4, 0x24
    ctx->pc = 0x1ae6b8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)36 << 16));
    // 0x1ae6bc: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1ae6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1ae6c0: 0x8d850938  lw          $a1, 0x938($t4)
    ctx->pc = 0x1ae6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x240938u));
    // 0x1ae6c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ae6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ae6c8: 0xa21824  and         $v1, $a1, $v0
    ctx->pc = 0x1ae6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1ae6cc: 0x1062003e  beq         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1AE6CCu;
    {
        const bool branch_taken_0x1ae6cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6CCu;
        // 0x1ae6d0: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6cc) {
            ctx->pc = 0x1AE7C8u;
            goto label_1ae7c8;
        }
    }
    ctx->pc = 0x1AE6D4u;
    // 0x1ae6d4: 0x1140003c  beqz        $t2, . + 4 + (0x3C << 2)
    ctx->pc = 0x1AE6D4u;
    {
        const bool branch_taken_0x1ae6d4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6D4u;
        // 0x1ae6d8: 0x51f02  srl         $v1, $a1, 28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6d4) {
            ctx->pc = 0x1AE7C8u;
            goto label_1ae7c8;
        }
    }
    ctx->pc = 0x1AE6DCu;
    // 0x1ae6dc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ae6dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae6e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ae6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae6e4: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1AE6E4u;
    {
        const bool branch_taken_0x1ae6e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6E4u;
        // 0x1ae6e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6e4) {
            ctx->pc = 0x1AE7C8u;
            goto label_1ae7c8;
        }
    }
    ctx->pc = 0x1AE6ECu;
    // 0x1ae6ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae6f0: 0x25890938  addiu       $t1, $t4, 0x938
    ctx->pc = 0x1ae6f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 2360));
    // 0x1ae6f4: 0x0  nop
    ctx->pc = 0x1ae6f4u;
    // NOP
label_1ae6f8:
    // 0x1ae6f8: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x1ae6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x1ae6fc: 0xa94021  addu        $t0, $a1, $t1
    ctx->pc = 0x1ae6fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1ae700: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1ae700u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1ae704: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x1ae704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1ae708: 0x25230004  addiu       $v1, $t1, 0x4
    ctx->pc = 0x1ae708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1ae70c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1ae70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ae710: 0x861024  and         $v0, $a0, $a2
    ctx->pc = 0x1ae710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x1ae714: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1ae714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ae718: 0x15430021  bne         $t2, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1AE718u;
    {
        const bool branch_taken_0x1ae718 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AE71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE718u;
        // 0x1ae71c: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae718) {
            ctx->pc = 0x1AE7A0u;
            goto label_1ae7a0;
        }
    }
    ctx->pc = 0x1AE720u;
    // 0x1ae720: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ae724: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1ae724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1ae728: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ae728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae72c: 0x21f02  srl         $v1, $v0, 28
    ctx->pc = 0x1ae72cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x1ae730: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1AE730u;
    {
        const bool branch_taken_0x1ae730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae730) {
            ctx->pc = 0x1AE734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE730u;
            // 0x1ae734: 0xb1080  sll         $v0, $t3, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE75Cu;
            goto label_1ae75c;
        }
    }
    ctx->pc = 0x1AE738u;
    // 0x1ae738: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1ae738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1ae73c: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x1ae73cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x1ae740: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1ae740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ae744: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ae744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ae748: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1ae748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1ae74c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ae74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ae750: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1ae750u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1ae754: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1ae754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae758: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x1ae758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_1ae75c:
    // 0x1ae75c: 0x493821  addu        $a3, $v0, $t1
    ctx->pc = 0x1ae75cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1ae760: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1ae760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ae764: 0x51702  srl         $v0, $a1, 28
    ctx->pc = 0x1ae764u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 28));
    // 0x1ae768: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AE768u;
    {
        const bool branch_taken_0x1ae768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE768u;
        // 0x1ae76c: 0x861024  and         $v0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae768) {
            ctx->pc = 0x1AE798u;
            goto label_1ae798;
        }
    }
    ctx->pc = 0x1AE770u;
    // 0x1ae770: 0xa61024  and         $v0, $a1, $a2
    ctx->pc = 0x1ae770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x1ae774: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x1ae774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x1ae778: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ae778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ae77c: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x1ae77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x1ae780: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ae780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ae784: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1ae784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1ae788: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1ae788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1ae78c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ae78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ae790: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE790u;
        // 0x1ae794: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE798u;
label_1ae798:
    // 0x1ae798: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE798u;
        // 0x1ae79c: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE7A0u;
label_1ae7a0:
    // 0x1ae7a0: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x1ae7a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ae7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae7a8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ae7a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7ac: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1ae7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1ae7b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ae7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7b4: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x1ae7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1ae7b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ae7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ae7bc: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x1ae7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x1ae7c0: 0x1444ffcd  bne         $v0, $a0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1AE7C0u;
    {
        const bool branch_taken_0x1ae7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1AE7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE7C0u;
        // 0x1ae7c4: 0x25890938  addiu       $t1, $t4, 0x938 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 2360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae7c0) {
            ctx->pc = 0x1AE6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae6f8;
        }
    }
    ctx->pc = 0x1AE7C8u;
label_1ae7c8:
    // 0x1ae7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE7D0u;
}
