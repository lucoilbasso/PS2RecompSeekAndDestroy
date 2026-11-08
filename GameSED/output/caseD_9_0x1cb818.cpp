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

// Function: caseD_9
// Address: 0x1cb818 - 0x1cb858
void caseD_9_0x1cb818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1cb818");
#endif

    switch (ctx->pc) {
        case 0x1cb824u: goto label_1cb824;
        case 0x1cb830u: goto label_1cb830;
        default: break;
    }

    ctx->pc = 0x1cb818u;

    // 0x1cb818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb81c: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB81Cu;
    SET_GPR_U32(ctx, 31, 0x1CB824u);
    ctx->pc = 0x1CB820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB81Cu;
    // 0x1cb820: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB81Cu, 0x1CB824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB824u;
label_1cb824:
    // 0x1cb824: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb828: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB828u;
    SET_GPR_U32(ctx, 31, 0x1CB830u);
    ctx->pc = 0x1CB82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB828u;
    // 0x1cb82c: 0x27a50008  addiu       $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB828u, 0x1CB830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB830u;
label_1cb830:
    // 0x1cb830: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cb830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb834: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb838: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1cb838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1cb83c: 0x9fa40008  lwu         $a0, 0x8($sp)
    ctx->pc = 0x1cb83cu;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb840: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cb840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1cb844: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1cb844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cb848: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1cb848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1cb84c: 0xa04503fc  sb          $a1, 0x3FC($v0)
    ctx->pc = 0x1cb84cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1020), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cb850: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x1CB850u;
    {
        const bool branch_taken_0x1cb850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB850u;
        // 0x1cb854: 0xfc640020  sd          $a0, 0x20($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb850) {
            ctx->pc = 0x1CBA90u;
            return;
        }
    }
    ctx->pc = 0x1CB858u;
}
