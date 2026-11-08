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

// Function: Val_Count2Time__FUiP7TimeStr
// Address: 0x19b810 - 0x19b8f8
void Val_Count2Time__FUiP7TimeStr_0x19b810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Val_Count2Time__FUiP7TimeStr_0x19b810");
#endif

    switch (ctx->pc) {
        case 0x19b820u: goto label_19b820;
        case 0x19b830u: goto label_19b830;
        case 0x19b888u: goto label_19b888;
        default: break;
    }

    ctx->pc = 0x19b810u;

    // 0x19b810: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19b810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19b814: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x19b814u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b818: 0x2449efd0  addiu       $t1, $v0, -0x1030
    ctx->pc = 0x19b818u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963152));
    // 0x19b81c: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x19b81cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_19b820:
    // 0x19b820: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x19b820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19b824: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x19b824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19b828: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19B828u;
    {
        const bool branch_taken_0x19b828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B828u;
        // 0x19b82c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b828) {
            ctx->pc = 0x19B84Cu;
            goto label_19b84c;
        }
    }
    ctx->pc = 0x19B830u;
label_19b830:
    // 0x19b830: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19b830u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19b834: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x19b834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19b838: 0x0  nop
    ctx->pc = 0x19b838u;
    // NOP
    // 0x19b83c: 0x0  nop
    ctx->pc = 0x19b83cu;
    // NOP
    // 0x19b840: 0x0  nop
    ctx->pc = 0x19b840u;
    // NOP
    // 0x19b844: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B844u;
    {
        const bool branch_taken_0x19b844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B844u;
        // 0x19b848: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b844) {
            ctx->pc = 0x19B830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b830;
        }
    }
    ctx->pc = 0x19B84Cu;
label_19b84c:
    // 0x19b84c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x19b84cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x19b850: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x19b850u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x19b854: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x19b854u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x19b858: 0x501fff1  bgez        $t0, . + 4 + (-0xF << 2)
    ctx->pc = 0x19B858u;
    {
        const bool branch_taken_0x19b858 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x19B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B858u;
        // 0x19b85c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b858) {
            ctx->pc = 0x19B820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b820;
        }
    }
    ctx->pc = 0x19B860u;
    // 0x19b860: 0xa4a40010  sh          $a0, 0x10($a1)
    ctx->pc = 0x19b860u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x19b864: 0x24a40014  addiu       $a0, $a1, 0x14
    ctx->pc = 0x19b864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x19b868: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x19b868u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19b86c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19b86cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b870: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x19b870u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b874: 0x240d0020  addiu       $t5, $zero, 0x20
    ctx->pc = 0x19b874u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19b878: 0x2408003a  addiu       $t0, $zero, 0x3A
    ctx->pc = 0x19b878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x19b87c: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x19b87cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b880: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x19b880u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19b884: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x19b884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19b888:
    // 0x19b888: 0x10c90003  beq         $a2, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B888u;
    {
        const bool branch_taken_0x19b888 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        ctx->pc = 0x19B88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B888u;
        // 0x19b88c: 0x94e20000  lhu         $v0, 0x0($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b888) {
            ctx->pc = 0x19B898u;
            goto label_19b898;
        }
    }
    ctx->pc = 0x19B890u;
    // 0x19b890: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B890u;
    {
        const bool branch_taken_0x19b890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B890u;
        // 0x19b894: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b890) {
            ctx->pc = 0x19B8A0u;
            goto label_19b8a0;
        }
    }
    ctx->pc = 0x19B898u;
label_19b898:
    // 0x19b898: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19b898u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b89c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x19b89cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19b8a0:
    // 0x19b8a0: 0x15400005  bnez        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B8A0u;
    {
        const bool branch_taken_0x19b8a0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8A0u;
        // 0x19b8a4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b8a0) {
            ctx->pc = 0x19B8B8u;
            goto label_19b8b8;
        }
    }
    ctx->pc = 0x19B8A8u;
    // 0x19b8a8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x19b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19b8ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19B8ACu;
    {
        const bool branch_taken_0x19b8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8ACu;
        // 0x19b8b0: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b8ac) {
            ctx->pc = 0x19B8BCu;
            goto label_19b8bc;
        }
    }
    ctx->pc = 0x19B8B4u;
    // 0x19b8b4: 0x0  nop
    ctx->pc = 0x19b8b4u;
    // NOP
label_19b8b8:
    // 0x19b8b8: 0xa06d0000  sb          $t5, 0x0($v1)
    ctx->pc = 0x19b8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 13));
label_19b8bc:
    // 0x19b8bc: 0x50c90006  beql        $a2, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B8BCu;
    {
        const bool branch_taken_0x19b8bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x19b8bc) {
            ctx->pc = 0x19B8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B8BCu;
            // 0x19b8c0: 0xa0880000  sb          $t0, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B8D8u;
            goto label_19b8d8;
        }
    }
    ctx->pc = 0x19B8C4u;
    // 0x19b8c4: 0x50cc0004  beql        $a2, $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B8C4u;
    {
        const bool branch_taken_0x19b8c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 12));
        if (branch_taken_0x19b8c4) {
            ctx->pc = 0x19B8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B8C4u;
            // 0x19b8c8: 0xa0880000  sb          $t0, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B8D8u;
            goto label_19b8d8;
        }
    }
    ctx->pc = 0x19B8CCu;
    // 0x19b8cc: 0x54cb0004  bnel        $a2, $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B8CCu;
    {
        const bool branch_taken_0x19b8cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 11));
        if (branch_taken_0x19b8cc) {
            ctx->pc = 0x19B8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B8CCu;
            // 0x19b8d0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B8E0u;
            goto label_19b8e0;
        }
    }
    ctx->pc = 0x19B8D4u;
    // 0x19b8d4: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x19b8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
label_19b8d8:
    // 0x19b8d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19b8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19b8dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19b8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_19b8e0:
    // 0x19b8e0: 0x28c20009  slti        $v0, $a2, 0x9
    ctx->pc = 0x19b8e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x19b8e4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x19B8E4u;
    {
        const bool branch_taken_0x19b8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8E4u;
        // 0x19b8e8: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b8e4) {
            ctx->pc = 0x19B888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b888;
        }
    }
    ctx->pc = 0x19B8ECu;
    // 0x19b8ec: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x19b8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x19B8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8F0u;
        // 0x19b8f4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B8F8u;
}
