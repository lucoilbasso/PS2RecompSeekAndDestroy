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

// Function: _close_r
// Address: 0x1d6648 - 0x1d66a0
void _close_r_0x1d6648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_close_r_0x1d6648");
#endif

    switch (ctx->pc) {
        case 0x1d6670u: goto label_1d6670;
        default: break;
    }

    ctx->pc = 0x1d6648u;

    // 0x1d6648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d664c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d664cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d6650: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d6650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d6654: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6658: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d6658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d665c: 0x2451da40  addiu       $s1, $v0, -0x25C0
    ctx->pc = 0x1d665cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957632));
    // 0x1d6660: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d6660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6664: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d6664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d6668: 0xc06bed2  jal         func_1AFB48
    ctx->pc = 0x1D6668u;
    SET_GPR_U32(ctx, 31, 0x1D6670u);
    ctx->pc = 0x1D666Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6668u;
    // 0x1d666c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFB48u, 0x1D6668u, 0x1D6670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6670u;
label_1d6670:
    // 0x1d6670: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d6670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6674: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d6674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6678: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6678u;
    {
        const bool branch_taken_0x1d6678 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d6678) {
            ctx->pc = 0x1D667Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6678u;
            // 0x1d667c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6690u;
            goto label_1d6690;
        }
    }
    ctx->pc = 0x1D6680u;
    // 0x1d6680: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d6680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d6684: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D6684u;
    {
        const bool branch_taken_0x1d6684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6684) {
            ctx->pc = 0x1D6688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6684u;
            // 0x1d6688: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D668Cu;
            goto label_1d668c;
        }
    }
    ctx->pc = 0x1D668Cu;
label_1d668c:
    // 0x1d668c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d668cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6690:
    // 0x1d6690: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d6690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d6694: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d6694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6698: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6698u;
        // 0x1d669c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D66A0u;
}
