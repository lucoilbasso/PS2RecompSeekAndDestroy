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

// Function: caseD_f
// Address: 0x110ea8 - 0x110ed8
void caseD_f_0x110ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x110ea8");
#endif

    switch (ctx->pc) {
        case 0x110ec4u: goto label_110ec4;
        case 0x110ed0u: goto label_110ed0;
        default: break;
    }

    ctx->pc = 0x110ea8u;

    // 0x110ea8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x110ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110eac: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x110eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x110eb0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x110eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x110eb4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x110EB4u;
    {
        const bool branch_taken_0x110eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x110EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EB4u;
        // 0x110eb8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110eb4) {
            ctx->pc = 0x110ED8u;
            return;
        }
    }
    ctx->pc = 0x110EBCu;
    // 0x110ebc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x110EBCu;
    SET_GPR_U32(ctx, 31, 0x110EC4u);
    ctx->pc = 0x110EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110EBCu;
    // 0x110ec0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x110EBCu, 0x110EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110EC4u;
label_110ec4:
    // 0x110ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ec8: 0xc05328a  jal         func_14CA28
    ctx->pc = 0x110EC8u;
    SET_GPR_U32(ctx, 31, 0x110ED0u);
    ctx->pc = 0x110ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110EC8u;
    // 0x110ecc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CA28u, 0x110EC8u, 0x110ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110ED0u;
label_110ed0:
    // 0x110ed0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x110ED0u;
    {
        const bool branch_taken_0x110ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110ED0u;
        // 0x110ed4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ed0) {
            ctx->pc = 0x110EF0u;
            return;
        }
    }
    ctx->pc = 0x110ED8u;
}
