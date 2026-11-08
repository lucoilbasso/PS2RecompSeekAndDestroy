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

// Function: ApCMTraceSetRollOffset__FP7WcActorib
// Address: 0x1425e0 - 0x142674
void ApCMTraceSetRollOffset__FP7WcActorib_0x1425e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCMTraceSetRollOffset__FP7WcActorib_0x1425e0");
#endif

    switch (ctx->pc) {
        case 0x14260cu: goto label_14260c;
        default: break;
    }

    ctx->pc = 0x1425e0u;

    // 0x1425e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1425e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1425e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1425e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1425e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1425e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1425ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1425ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1425f0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1425f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1425f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1425f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1425f8: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1425f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x1425fc: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x1425fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x142600: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x142600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x142604: 0xc061a46  jal         func_186918
    ctx->pc = 0x142604u;
    SET_GPR_U32(ctx, 31, 0x14260Cu);
    ctx->pc = 0x142608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142604u;
    // 0x142608: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x142604u, 0x14260Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14260Cu;
label_14260c:
    // 0x14260c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14260cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142610: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x142610u;
    {
        const bool branch_taken_0x142610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x142614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142610u;
        // 0x142614: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142610) {
            ctx->pc = 0x142638u;
            goto label_142638;
        }
    }
    ctx->pc = 0x142618u;
    // 0x142618: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x142618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x14261c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x14261cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x142620: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x142620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x142624: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x142624u;
    {
        const bool branch_taken_0x142624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x142624) {
            ctx->pc = 0x142628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142624u;
            // 0x142628: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14263Cu;
            goto label_14263c;
        }
    }
    ctx->pc = 0x14262Cu;
    // 0x14262c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14262Cu;
    {
        const bool branch_taken_0x14262c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14262Cu;
        // 0x142630: 0x8c83001c  lw          $v1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14262c) {
            ctx->pc = 0x14263Cu;
            goto label_14263c;
        }
    }
    ctx->pc = 0x142634u;
    // 0x142634: 0x0  nop
    ctx->pc = 0x142634u;
    // NOP
label_142638:
    // 0x142638: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x142638u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14263c:
    // 0x14263c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x14263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x142640: 0x54450008  bnel        $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x142640u;
    {
        const bool branch_taken_0x142640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x142640) {
            ctx->pc = 0x142644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142640u;
            // 0x142644: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142664u;
            goto label_142664;
        }
    }
    ctx->pc = 0x142648u;
    // 0x142648: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x142648u;
    {
        const bool branch_taken_0x142648 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x142648) {
            ctx->pc = 0x14264Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142648u;
            // 0x14264c: 0x8c620194  lw          $v0, 0x194($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142658u;
            goto label_142658;
        }
    }
    ctx->pc = 0x142650u;
    // 0x142650: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x142650u;
    {
        const bool branch_taken_0x142650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142650u;
        // 0x142654: 0xac700194  sw          $s0, 0x194($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 404), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142650) {
            ctx->pc = 0x142660u;
            goto label_142660;
        }
    }
    ctx->pc = 0x142658u;
label_142658:
    // 0x142658: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x142658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14265c: 0xac620194  sw          $v0, 0x194($v1)
    ctx->pc = 0x14265cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 404), GPR_U32(ctx, 2));
label_142660:
    // 0x142660: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x142660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_142664:
    // 0x142664: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x142664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x142668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x142668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14266c: 0x3e00008  jr          $ra
    ctx->pc = 0x14266Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14266Cu;
        // 0x142670: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14266Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142674u;
}
