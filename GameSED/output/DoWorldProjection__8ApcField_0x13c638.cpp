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

// Function: DoWorldProjection__8ApcField
// Address: 0x13c638 - 0x13c6f8
void DoWorldProjection__8ApcField_0x13c638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DoWorldProjection__8ApcField_0x13c638");
#endif

    switch (ctx->pc) {
        case 0x13c668u: goto label_13c668;
        case 0x13c678u: goto label_13c678;
        case 0x13c684u: goto label_13c684;
        case 0x13c698u: goto label_13c698;
        case 0x13c6a0u: goto label_13c6a0;
        case 0x13c6e0u: goto label_13c6e0;
        default: break;
    }

    ctx->pc = 0x13c638u;

    // 0x13c638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c63c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13c63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13c640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c644: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13c644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13c648: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13c648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13c64c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13c64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13c650: 0x8e0201e8  lw          $v0, 0x1E8($s0)
    ctx->pc = 0x13c650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
    // 0x13c654: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x13C654u;
    {
        const bool branch_taken_0x13c654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c654) {
            ctx->pc = 0x13C6D8u;
            goto label_13c6d8;
        }
    }
    ctx->pc = 0x13C65Cu;
    // 0x13c65c: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x13C65Cu;
    {
        const bool branch_taken_0x13c65c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C65Cu;
        // 0x13c660: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c65c) {
            ctx->pc = 0x13C6E0u;
            goto label_13c6e0;
        }
    }
    ctx->pc = 0x13C664u;
    // 0x13c664: 0x261101ec  addiu       $s1, $s0, 0x1EC
    ctx->pc = 0x13c664u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 492));
label_13c668:
    // 0x13c668: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x13c668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13c66c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c670: 0xc061eb4  jal         func_187AD0
    ctx->pc = 0x13C670u;
    SET_GPR_U32(ctx, 31, 0x13C678u);
    ctx->pc = 0x13C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C670u;
    // 0x13c674: 0xae020164  sw          $v0, 0x164($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187AD0u, 0x13C670u, 0x13C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C678u;
label_13c678:
    // 0x13c678: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13c678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c67c: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x13C67Cu;
    SET_GPR_U32(ctx, 31, 0x13C684u);
    ctx->pc = 0x13C680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C67Cu;
    // 0x13c680: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x13C67Cu, 0x13C684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C684u;
label_13c684:
    // 0x13c684: 0x8e04015c  lw          $a0, 0x15C($s0)
    ctx->pc = 0x13c684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x13c688: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C688u;
    {
        const bool branch_taken_0x13c688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C688u;
        // 0x13c68c: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c688) {
            ctx->pc = 0x13C69Cu;
            goto label_13c69c;
        }
    }
    ctx->pc = 0x13C690u;
    // 0x13c690: 0xc062218  jal         func_188860
    ctx->pc = 0x13C690u;
    SET_GPR_U32(ctx, 31, 0x13C698u);
    ctx->pc = 0x188860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188860u, 0x13C690u, 0x13C698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C698u;
label_13c698:
    // 0x13c698: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x13c698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_13c69c:
    // 0x13c69c: 0x260201b4  addiu       $v0, $s0, 0x1B4
    ctx->pc = 0x13c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
label_13c6a0:
    // 0x13c6a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13c6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13c6a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x13c6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x13c6a8: 0x0  nop
    ctx->pc = 0x13c6a8u;
    // NOP
    // 0x13c6ac: 0x0  nop
    ctx->pc = 0x13c6acu;
    // NOP
    // 0x13c6b0: 0x0  nop
    ctx->pc = 0x13c6b0u;
    // NOP
    // 0x13c6b4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13C6B4u;
    {
        const bool branch_taken_0x13c6b4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x13C6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C6B4u;
        // 0x13c6b8: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c6b4) {
            ctx->pc = 0x13C6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c6a0;
        }
    }
    ctx->pc = 0x13C6BCu;
    // 0x13c6bc: 0x8e0201e8  lw          $v0, 0x1E8($s0)
    ctx->pc = 0x13c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
    // 0x13c6c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x13c6c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x13c6c4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x13c6c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13c6c8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x13C6C8u;
    {
        const bool branch_taken_0x13c6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C6C8u;
        // 0x13c6cc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c6c8) {
            ctx->pc = 0x13C668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c668;
        }
    }
    ctx->pc = 0x13C6D0u;
    // 0x13c6d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13C6D0u;
    {
        const bool branch_taken_0x13c6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C6D0u;
        // 0x13c6d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c6d0) {
            ctx->pc = 0x13C6E4u;
            goto label_13c6e4;
        }
    }
    ctx->pc = 0x13C6D8u;
label_13c6d8:
    // 0x13c6d8: 0xc061eb4  jal         func_187AD0
    ctx->pc = 0x13C6D8u;
    SET_GPR_U32(ctx, 31, 0x13C6E0u);
    ctx->pc = 0x13C6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C6D8u;
    // 0x13c6dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187AD0u, 0x13C6D8u, 0x13C6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C6E0u;
label_13c6e0:
    // 0x13c6e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13c6e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13c6e4:
    // 0x13c6e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13c6e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13c6e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13c6e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c6ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13c6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13c6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x13C6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C6F0u;
        // 0x13c6f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C6F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C6F8u;
}
