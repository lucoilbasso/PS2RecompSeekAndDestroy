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

// Function: caseD_c
// Address: 0x1cb858 - 0x1cb888
void caseD_c_0x1cb858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x1cb858");
#endif

    switch (ctx->pc) {
        case 0x1cb864u: goto label_1cb864;
        case 0x1cb870u: goto label_1cb870;
        default: break;
    }

    ctx->pc = 0x1cb858u;

    // 0x1cb858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb85c: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB85Cu;
    SET_GPR_U32(ctx, 31, 0x1CB864u);
    ctx->pc = 0x1CB860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB85Cu;
    // 0x1cb860: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB85Cu, 0x1CB864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB864u;
label_1cb864:
    // 0x1cb864: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb868: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB868u;
    SET_GPR_U32(ctx, 31, 0x1CB870u);
    ctx->pc = 0x1CB86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB868u;
    // 0x1cb86c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB868u, 0x1CB870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB870u;
label_1cb870:
    // 0x1cb870: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1cb870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb874: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb878: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x1cb878u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1cb87c: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x1cb87cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x1cb880: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1CB880u;
    {
        const bool branch_taken_0x1cb880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB880u;
        // 0x1cb884: 0xa62203f8  sh          $v0, 0x3F8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1016), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb880) {
            ctx->pc = 0x1CBA90u;
            return;
        }
    }
    ctx->pc = 0x1CB888u;
}
