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

// Function: entry_001ae328
// Address: 0x1ae328 - 0x1ae3a8
void entry_001ae328_0x1ae328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae328_0x1ae328");
#endif

    switch (ctx->pc) {
        case 0x1ae380u: goto label_1ae380;
        default: break;
    }

    ctx->pc = 0x1ae328u;

label_1ae328:
    // 0x1ae328: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1ae328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1ae32c: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x1ae32cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x1ae330: 0x24c39a38  addiu       $v1, $a2, -0x65C8
    ctx->pc = 0x1ae330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941240));
    // 0x1ae334: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1ae334u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1ae338: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ae338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ae33c: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x1ae33cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1ae340: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ae344: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ae344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ae348: 0x151c3a  dsrl        $v1, $s5, 16
    ctx->pc = 0x1ae348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) >> 16);
    // 0x1ae34c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1ae34cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ae350: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ae350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ae354: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ae354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ae358: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ae358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae35c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1ae35cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1ae360: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1ae360u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae364: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x1ae364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1ae368: 0x8e490014  lw          $t1, 0x14($s2)
    ctx->pc = 0x1ae368u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1ae36c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1ae36cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae370: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1ae370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae374: 0x2769821  addu        $s3, $s3, $s6
    ctx->pc = 0x1ae374u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x1ae378: 0xc06b83e  jal         func_1AE0F8
    ctx->pc = 0x1AE378u;
    SET_GPR_U32(ctx, 31, 0x1AE380u);
    ctx->pc = 0x1AE37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE378u;
    // 0x1ae37c: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE0F8u, 0x1AE378u, 0x1AE380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE380u;
label_1ae380:
    // 0x1ae380: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1ae380u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1ae384: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ae384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ae388: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ae388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ae38c: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE38Cu;
    {
        const bool branch_taken_0x1ae38c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE38Cu;
        // 0x1ae390: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae38c) {
            ctx->pc = 0x1AE3ACu;
            return;
        }
    }
    ctx->pc = 0x1AE394u;
    // 0x1ae394: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1ae394u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ae398: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1ae398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1ae39c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1ae39cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ae3a0: 0x14a0ffe1  bnez        $a1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1AE3A0u;
    {
        const bool branch_taken_0x1ae3a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE3A0u;
        // 0x1ae3a4: 0x21a02  srl         $v1, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae3a0) {
            ctx->pc = 0x1AE328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae328;
        }
    }
    ctx->pc = 0x1AE3A8u;
}
