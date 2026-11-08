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

// Function: caseD_2
// Address: 0x181688 - 0x1816b4
void caseD_2_0x181688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x181688");
#endif

    switch (ctx->pc) {
        case 0x18169cu: goto label_18169c;
        default: break;
    }

    ctx->pc = 0x181688u;

    // 0x181688: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x181688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18168c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18168cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181690: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x181690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181694: 0xc0604f4  jal         func_1813D0
    ctx->pc = 0x181694u;
    SET_GPR_U32(ctx, 31, 0x18169Cu);
    ctx->pc = 0x181698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181694u;
    // 0x181698: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1813D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1813D0u, 0x181694u, 0x18169Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18169Cu;
label_18169c:
    // 0x18169c: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x18169Cu;
    {
        const bool branch_taken_0x18169c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1816A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18169Cu;
        // 0x1816a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18169c) {
            ctx->pc = 0x181770u;
            return;
        }
    }
    ctx->pc = 0x1816A4u;
    // 0x1816a4: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1816a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1816a8: 0x2348823  subu        $s1, $s1, $s4
    ctx->pc = 0x1816a8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1816ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1816acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1816b0: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1816b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    ctx->pc = 0x1816b4u;
}
