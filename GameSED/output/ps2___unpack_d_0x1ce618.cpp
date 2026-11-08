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

// Function: __unpack_d
// Address: 0x1ce618 - 0x1ce6d4
void ps2___unpack_d_0x1ce618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___unpack_d_0x1ce618");
#endif

    ctx->pc = 0x1ce618u;

    // 0x1ce618: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1ce618u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ce61c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ce61cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce620: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ce620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce624: 0x52b3a  dsrl        $a1, $a1, 12
    ctx->pc = 0x1ce624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 12);
    // 0x1ce628: 0x21d3e  dsrl32      $v1, $v0, 20
    ctx->pc = 0x1ce628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 20));
    // 0x1ce62c: 0x227fe  dsrl32      $a0, $v0, 31
    ctx->pc = 0x1ce62cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1ce630: 0x306707ff  andi        $a3, $v1, 0x7FF
    ctx->pc = 0x1ce630u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x1ce634: 0x451824  and         $v1, $v0, $a1
    ctx->pc = 0x1ce634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1ce638: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE638u;
    {
        const bool branch_taken_0x1ce638 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE638u;
        // 0x1ce63c: 0xacc40004  sw          $a0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce638) {
            ctx->pc = 0x1CE650u;
            goto label_1ce650;
        }
    }
    ctx->pc = 0x1CE640u;
    // 0x1ce640: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ce640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce644: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE644u;
        // 0x1ce648: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE64Cu;
    // 0x1ce64c: 0x0  nop
    ctx->pc = 0x1ce64cu;
    // NOP
label_1ce650:
    // 0x1ce650: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x1ce650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x1ce654: 0x54e20016  bnel        $a3, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CE654u;
    {
        const bool branch_taken_0x1ce654 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ce654) {
            ctx->pc = 0x1CE658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE654u;
            // 0x1ce658: 0x31a38  dsll        $v1, $v1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE6B0u;
            goto label_1ce6b0;
        }
    }
    ctx->pc = 0x1CE65Cu;
    // 0x1ce65c: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x1ce65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1ce660: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE660u;
    {
        const bool branch_taken_0x1ce660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE660u;
        // 0x1ce664: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce660) {
            ctx->pc = 0x1CE680u;
            goto label_1ce680;
        }
    }
    ctx->pc = 0x1CE668u;
    // 0x1ce668: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ce668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ce66c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1ce66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ce670: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x1ce670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x1ce674: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x1ce674u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x1ce678: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE678u;
        // 0x1ce67c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE680u;
label_1ce680:
    // 0x1ce680: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1ce680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ce684: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1ce684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1ce688: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ce688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ce68c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE68Cu;
    {
        const bool branch_taken_0x1ce68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE68Cu;
        // 0x1ce690: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce68c) {
            ctx->pc = 0x1CE6A0u;
            goto label_1ce6a0;
        }
    }
    ctx->pc = 0x1CE694u;
    // 0x1ce694: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE694u;
    {
        const bool branch_taken_0x1ce694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE694u;
        // 0x1ce698: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce694) {
            ctx->pc = 0x1CE6A4u;
            goto label_1ce6a4;
        }
    }
    ctx->pc = 0x1CE69Cu;
    // 0x1ce69c: 0x0  nop
    ctx->pc = 0x1ce69cu;
    // NOP
label_1ce6a0:
    // 0x1ce6a0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1ce6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_1ce6a4:
    // 0x1ce6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6A4u;
        // 0x1ce6a8: 0xfcc30010  sd          $v1, 0x10($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE6ACu;
    // 0x1ce6ac: 0x0  nop
    ctx->pc = 0x1ce6acu;
    // NOP
label_1ce6b0:
    // 0x1ce6b0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1ce6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ce6b4: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x1ce6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x1ce6b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ce6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ce6bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ce6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ce6c0: 0x24e4fc01  addiu       $a0, $a3, -0x3FF
    ctx->pc = 0x1ce6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966273));
    // 0x1ce6c4: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x1ce6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x1ce6c8: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1ce6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x1ce6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6CCu;
        // 0x1ce6d0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE6D4u;
}
