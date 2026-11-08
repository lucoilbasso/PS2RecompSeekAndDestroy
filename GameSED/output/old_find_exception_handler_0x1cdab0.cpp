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

// Function: old_find_exception_handler
// Address: 0x1cdab0 - 0x1cdb80
void old_find_exception_handler_0x1cdab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("old_find_exception_handler_0x1cdab0");
#endif

    switch (ctx->pc) {
        case 0x1cdad0u: goto label_1cdad0;
        default: break;
    }

    ctx->pc = 0x1cdab0u;

    // 0x1cdab0: 0x10a00031  beqz        $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1CDAB0u;
    {
        const bool branch_taken_0x1cdab0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAB0u;
        // 0x1cdab4: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdab0) {
            ctx->pc = 0x1CDB78u;
            goto label_1cdb78;
        }
    }
    ctx->pc = 0x1CDAB8u;
    // 0x1cdab8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1cdab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cdabc: 0x10490026  beq         $v0, $t1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CDABCu;
    {
        const bool branch_taken_0x1cdabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x1CDAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDABCu;
        // 0x1cdac0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdabc) {
            ctx->pc = 0x1CDB58u;
            goto label_1cdb58;
        }
    }
    ctx->pc = 0x1CDAC4u;
    // 0x1cdac4: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1cdac4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cdac8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1cdac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdacc: 0x0  nop
    ctx->pc = 0x1cdaccu;
    // NOP
label_1cdad0:
    // 0x1cdad0: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x1cdad0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cdad4: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1cdad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1cdad8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CDAD8u;
    {
        const bool branch_taken_0x1cdad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdad8) {
            ctx->pc = 0x1CDB30u;
            goto label_1cdb30;
        }
    }
    ctx->pc = 0x1CDAE0u;
    // 0x1cdae0: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x1cdae0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1cdae4: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1cdae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1cdae8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CDAE8u;
    {
        const bool branch_taken_0x1cdae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdae8) {
            ctx->pc = 0x1CDB30u;
            goto label_1cdb30;
        }
    }
    ctx->pc = 0x1CDAF0u;
    // 0x1cdaf0: 0x112b000c  beq         $t1, $t3, . + 4 + (0xC << 2)
    ctx->pc = 0x1CDAF0u;
    {
        const bool branch_taken_0x1cdaf0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 11));
        ctx->pc = 0x1CDAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAF0u;
        // 0x1cdaf4: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdaf0) {
            ctx->pc = 0x1CDB24u;
            goto label_1cdb24;
        }
    }
    ctx->pc = 0x1CDAF8u;
    // 0x1cdaf8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1cdaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1cdafc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cdafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cdb00: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1cdb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cdb04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1cdb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cdb08: 0x67182b  sltu        $v1, $v1, $a3
    ctx->pc = 0x1cdb08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1cdb0c: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1CDB0Cu;
    {
        const bool branch_taken_0x1cdb0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdb0c) {
            ctx->pc = 0x1CDB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDB0Cu;
            // 0x1cdb10: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDB4Cu;
            goto label_1cdb4c;
        }
    }
    ctx->pc = 0x1CDB14u;
    // 0x1cdb14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cdb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cdb18: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x1cdb18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cdb1c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1CDB1Cu;
    {
        const bool branch_taken_0x1cdb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdb1c) {
            ctx->pc = 0x1CDB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDB1Cu;
            // 0x1cdb20: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDB4Cu;
            goto label_1cdb4c;
        }
    }
    ctx->pc = 0x1CDB24u;
label_1cdb24:
    // 0x1cdb24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CDB24u;
    {
        const bool branch_taken_0x1cdb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB24u;
        // 0x1cdb28: 0x140482d  daddu       $t1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb24) {
            ctx->pc = 0x1CDB48u;
            goto label_1cdb48;
        }
    }
    ctx->pc = 0x1CDB2Cu;
    // 0x1cdb2c: 0x0  nop
    ctx->pc = 0x1cdb2cu;
    // NOP
label_1cdb30:
    // 0x1cdb30: 0x5220006  bltzl       $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CDB30u;
    {
        const bool branch_taken_0x1cdb30 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x1cdb30) {
            ctx->pc = 0x1CDB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDB30u;
            // 0x1cdb34: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDB4Cu;
            goto label_1cdb4c;
        }
    }
    ctx->pc = 0x1CDB38u;
    // 0x1cdb38: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1cdb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cdb3c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1cdb3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cdb40: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CDB40u;
    {
        const bool branch_taken_0x1cdb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB40u;
        // 0x1cdb44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb40) {
            ctx->pc = 0x1CDB5Cu;
            goto label_1cdb5c;
        }
    }
    ctx->pc = 0x1CDB48u;
label_1cdb48:
    // 0x1cdb48: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x1cdb48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_1cdb4c:
    // 0x1cdb4c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1cdb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cdb50: 0x144bffdf  bne         $v0, $t3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1CDB50u;
    {
        const bool branch_taken_0x1cdb50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        ctx->pc = 0x1CDB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB50u;
        // 0x1cdb54: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb50) {
            ctx->pc = 0x1CDAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdad0;
        }
    }
    ctx->pc = 0x1CDB58u;
label_1cdb58:
    // 0x1cdb58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cdb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cdb5c:
    // 0x1cdb5c: 0x11220006  beq         $t1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CDB5Cu;
    {
        const bool branch_taken_0x1cdb5c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CDB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB5Cu;
        // 0x1cdb60: 0x91840  sll         $v1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb5c) {
            ctx->pc = 0x1CDB78u;
            goto label_1cdb78;
        }
    }
    ctx->pc = 0x1CDB64u;
    // 0x1cdb64: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1cdb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1cdb68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cdb68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cdb6c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1cdb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cdb70: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB70u;
        // 0x1cdb74: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDB78u;
label_1cdb78:
    // 0x1cdb78: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB78u;
        // 0x1cdb7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDB80u;
}
