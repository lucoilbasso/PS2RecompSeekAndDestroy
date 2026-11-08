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

// Function: entry_001cd658
// Address: 0x1cd658 - 0x1cd698
void entry_001cd658_0x1cd658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd658_0x1cd658");
#endif

    switch (ctx->pc) {
        case 0x1cd660u: goto label_1cd660;
        case 0x1cd670u: goto label_1cd670;
        default: break;
    }

    ctx->pc = 0x1cd658u;

    // 0x1cd658: 0xc073d5c  jal         func_1CF570
    ctx->pc = 0x1CD658u;
    SET_GPR_U32(ctx, 31, 0x1CD660u);
    ctx->pc = 0x1CF570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF570u, 0x1CD658u, 0x1CD660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD660u;
label_1cd660:
    // 0x1cd660: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1CD660u;
    {
        const bool branch_taken_0x1cd660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd660) {
            ctx->pc = 0x1CD664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD660u;
            // 0x1cd664: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD70Cu;
            return;
        }
    }
    ctx->pc = 0x1CD668u;
    // 0x1cd668: 0xc07349c  jal         func_1CD270
    ctx->pc = 0x1CD668u;
    SET_GPR_U32(ctx, 31, 0x1CD670u);
    ctx->pc = 0x1CD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD270u, 0x1CD668u, 0x1CD670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD670u;
label_1cd670:
    // 0x1cd670: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1cd670u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd674: 0x2602000f  addiu       $v0, $s0, 0xF
    ctx->pc = 0x1cd674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x1cd678: 0x8ce600d0  lw          $a2, 0xD0($a3)
    ctx->pc = 0x1cd678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 208)));
    // 0x1cd67c: 0x22902  srl         $a1, $v0, 4
    ctx->pc = 0x1cd67cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1cd680: 0x2ca3000d  sltiu       $v1, $a1, 0xD
    ctx->pc = 0x1cd680u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x1cd684: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1cd684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1cd688: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD688u;
    {
        const bool branch_taken_0x1cd688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD688u;
        // 0x1cd68c: 0xc24025  or          $t0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd688) {
            ctx->pc = 0x1CD698u;
            return;
        }
    }
    ctx->pc = 0x1CD690u;
    // 0x1cd690: 0xc073468  jal         func_1CD1A0
    ctx->pc = 0x1CD690u;
    SET_GPR_U32(ctx, 31, 0x1CD698u);
    ctx->pc = 0x1CD1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1A0u, 0x1CD690u, 0x1CD698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD698u;
}
