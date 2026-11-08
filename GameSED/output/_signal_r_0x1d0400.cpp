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

// Function: _signal_r
// Address: 0x1d0400 - 0x1d0480
void _signal_r_0x1d0400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_signal_r_0x1d0400");
#endif

    switch (ctx->pc) {
        case 0x1d044cu: goto label_1d044c;
        default: break;
    }

    ctx->pc = 0x1d0400u;

    // 0x1d0400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0404: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0408: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d0408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d040c: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x1d040cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d0410: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0414: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d0414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d0418: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d0418u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d041c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d041cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d0420: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0420u;
    {
        const bool branch_taken_0x1d0420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0420u;
        // 0x1d0424: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0420) {
            ctx->pc = 0x1D0438u;
            goto label_1d0438;
        }
    }
    ctx->pc = 0x1D0428u;
    // 0x1d0428: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x1d0428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1d042c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d042cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0430: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D0430u;
    {
        const bool branch_taken_0x1d0430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0430u;
        // 0x1d0434: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0430) {
            ctx->pc = 0x1D0468u;
            goto label_1d0468;
        }
    }
    ctx->pc = 0x1D0438u;
label_1d0438:
    // 0x1d0438: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x1d0438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x1d043c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D043Cu;
    {
        const bool branch_taken_0x1d043c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D043Cu;
        // 0x1d0440: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d043c) {
            ctx->pc = 0x1D045Cu;
            goto label_1d045c;
        }
    }
    ctx->pc = 0x1D0444u;
    // 0x1d0444: 0xc0740e4  jal         func_1D0390
    ctx->pc = 0x1D0444u;
    SET_GPR_U32(ctx, 31, 0x1D044Cu);
    ctx->pc = 0x1D0390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0390u, 0x1D0444u, 0x1D044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D044Cu;
label_1d044c:
    // 0x1d044c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D044Cu;
    {
        const bool branch_taken_0x1d044c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D044Cu;
        // 0x1d0450: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d044c) {
            ctx->pc = 0x1D0468u;
            goto label_1d0468;
        }
    }
    ctx->pc = 0x1D0454u;
    // 0x1d0454: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x1d0454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x1d0458: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1d0458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1d045c:
    // 0x1d045c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d045cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d0460: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d0460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d0464: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x1d0464u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_1d0468:
    // 0x1d0468: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d046c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d046cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0470: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d0470u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0474: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d0474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d0478: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0478u;
        // 0x1d047c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0480u;
}
