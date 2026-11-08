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

// Function: SeMotionExec__7WcSeStd
// Address: 0x17b5f0 - 0x17b6b8
void SeMotionExec__7WcSeStd_0x17b5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeMotionExec__7WcSeStd_0x17b5f0");
#endif

    switch (ctx->pc) {
        case 0x17b600u: goto label_17b600;
        default: break;
    }

    ctx->pc = 0x17b5f0u;

    // 0x17b5f0: 0x24870140  addiu       $a3, $a0, 0x140
    ctx->pc = 0x17b5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x17b5f4: 0x24850380  addiu       $a1, $a0, 0x380
    ctx->pc = 0x17b5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    // 0x17b5f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17b5f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b5fc: 0x248401a0  addiu       $a0, $a0, 0x1A0
    ctx->pc = 0x17b5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 416));
label_17b600:
    // 0x17b600: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x17b600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17b604: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x17B604u;
    {
        const bool branch_taken_0x17b604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b604) {
            ctx->pc = 0x17B608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B604u;
            // 0x17b608: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B69Cu;
            goto label_17b69c;
        }
    }
    ctx->pc = 0x17B60Cu;
    // 0x17b60c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17b610: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x17B610u;
    {
        const bool branch_taken_0x17b610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B610u;
        // 0x17b614: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b610) {
            ctx->pc = 0x17B650u;
            goto label_17b650;
        }
    }
    ctx->pc = 0x17B618u;
    // 0x17b618: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B618u;
    {
        const bool branch_taken_0x17b618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B618u;
        // 0x17b61c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b618) {
            ctx->pc = 0x17B628u;
            goto label_17b628;
        }
    }
    ctx->pc = 0x17B620u;
    // 0x17b620: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17B620u;
    {
        const bool branch_taken_0x17b620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B620u;
        // 0x17b624: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b620) {
            ctx->pc = 0x17B634u;
            goto label_17b634;
        }
    }
    ctx->pc = 0x17B628u;
label_17b628:
    // 0x17b628: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x17b628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x17b62c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x17b62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17b630: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17b630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17b634:
    // 0x17b634: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x17b634u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x17b638: 0x4c00005  bltz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B638u;
    {
        const bool branch_taken_0x17b638 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x17B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B638u;
        // 0x17b63c: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b638) {
            ctx->pc = 0x17B650u;
            goto label_17b650;
        }
    }
    ctx->pc = 0x17B640u;
    // 0x17b640: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17b640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17b644: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x17b644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x17b648: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x17b648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x17b64c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x17b64cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_17b650:
    // 0x17b650: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x17b650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x17b654: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17B654u;
    {
        const bool branch_taken_0x17b654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B654u;
        // 0x17b658: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b654) {
            ctx->pc = 0x17B698u;
            goto label_17b698;
        }
    }
    ctx->pc = 0x17B65Cu;
    // 0x17b65c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B65Cu;
    {
        const bool branch_taken_0x17b65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B65Cu;
        // 0x17b660: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b65c) {
            ctx->pc = 0x17B670u;
            goto label_17b670;
        }
    }
    ctx->pc = 0x17B664u;
    // 0x17b664: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17B664u;
    {
        const bool branch_taken_0x17b664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B664u;
        // 0x17b668: 0x8ca2001c  lw          $v0, 0x1C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b664) {
            ctx->pc = 0x17B67Cu;
            goto label_17b67c;
        }
    }
    ctx->pc = 0x17B66Cu;
    // 0x17b66c: 0x0  nop
    ctx->pc = 0x17b66cu;
    // NOP
label_17b670:
    // 0x17b670: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x17b670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x17b674: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x17b674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x17b678: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17b678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17b67c:
    // 0x17b67c: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x17b67cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x17b680: 0x4c00005  bltz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B680u;
    {
        const bool branch_taken_0x17b680 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x17B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B680u;
        // 0x17b684: 0x8ca30018  lw          $v1, 0x18($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b680) {
            ctx->pc = 0x17B698u;
            goto label_17b698;
        }
    }
    ctx->pc = 0x17B688u;
    // 0x17b688: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17b688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17b68c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x17b68cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x17b690: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x17b690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x17b694: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x17b694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_17b698:
    // 0x17b698: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x17b698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_17b69c:
    // 0x17b69c: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x17b69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x17b6a0: 0x28c2000c  slti        $v0, $a2, 0xC
    ctx->pc = 0x17b6a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x17b6a4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x17b6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x17b6a8: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x17B6A8u;
    {
        const bool branch_taken_0x17b6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6A8u;
        // 0x17b6ac: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b6a8) {
            ctx->pc = 0x17B600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b600;
        }
    }
    ctx->pc = 0x17B6B0u;
    // 0x17b6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x17B6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B6B8u;
}
