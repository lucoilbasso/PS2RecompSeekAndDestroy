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

// Function: WTxPanelCellAdrCreate__FP9WcTxPaneli
// Address: 0x18e400 - 0x18e484
void WTxPanelCellAdrCreate__FP9WcTxPaneli_0x18e400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTxPanelCellAdrCreate__FP9WcTxPaneli_0x18e400");
#endif

    switch (ctx->pc) {
        case 0x18e438u: goto label_18e438;
        case 0x18e458u: goto label_18e458;
        case 0x18e468u: goto label_18e468;
        default: break;
    }

    ctx->pc = 0x18e400u;

    // 0x18e400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18e400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18e404: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18e404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18e408: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18e408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e40c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18e40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18e410: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18e410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18e414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18e418: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18e418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e41c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18e41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x18e420: 0x8e220210  lw          $v0, 0x210($s1)
    ctx->pc = 0x18e420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x18e424: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18E424u;
    {
        const bool branch_taken_0x18e424 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E424u;
        // 0x18e428: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e424) {
            ctx->pc = 0x18E430u;
            goto label_18e430;
        }
    }
    ctx->pc = 0x18E42Cu;
    // 0x18e42c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18e42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18e430:
    // 0x18e430: 0xc068086  jal         func_1A0218
    ctx->pc = 0x18E430u;
    SET_GPR_U32(ctx, 31, 0x18E438u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x18E430u, 0x18E438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E438u;
label_18e438:
    // 0x18e438: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18e438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18e43c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e43cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e440: 0x24a580b8  addiu       $a1, $a1, -0x7F48
    ctx->pc = 0x18e440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934712));
    // 0x18e444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e448: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E448u;
    {
        const bool branch_taken_0x18e448 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E448u;
        // 0x18e44c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e448) {
            ctx->pc = 0x18E45Cu;
            goto label_18e45c;
        }
    }
    ctx->pc = 0x18E450u;
    // 0x18e450: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18E450u;
    SET_GPR_U32(ctx, 31, 0x18E458u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18E450u, 0x18E458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E458u;
label_18e458:
    // 0x18e458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18e45c:
    // 0x18e45c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18e45cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e460: 0xc063922  jal         func_18E488
    ctx->pc = 0x18E460u;
    SET_GPR_U32(ctx, 31, 0x18E468u);
    ctx->pc = 0x18E464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E460u;
    // 0x18e464: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E488u, 0x18E460u, 0x18E468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E468u;
label_18e468:
    // 0x18e468: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18e468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e46c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18e46cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18e470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18e470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e474: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18e474u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e478: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18e478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18e47c: 0x3e00008  jr          $ra
    ctx->pc = 0x18E47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E47Cu;
        // 0x18e480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E484u;
}
