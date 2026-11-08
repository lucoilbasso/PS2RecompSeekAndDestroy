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

// Function: entry_001a758c
// Address: 0x1a758c - 0x1a75c4
void entry_001a758c_0x1a758c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a758c_0x1a758c");
#endif

    switch (ctx->pc) {
        case 0x1a75bcu: goto label_1a75bc;
        default: break;
    }

    ctx->pc = 0x1a758cu;

    // 0x1a758c: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x1a758cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1a7590: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a7590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a7594: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a7594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a7598: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a7598u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a759c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a759cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a75a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a75a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a75a4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a75a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a75a8: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a75a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a75ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A75ACu;
    {
        const bool branch_taken_0x1a75ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A75B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75ACu;
        // 0x1a75b0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75ac) {
            ctx->pc = 0x1A75C4u;
            return;
        }
    }
    ctx->pc = 0x1A75B4u;
    // 0x1a75b4: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A75B4u;
    SET_GPR_U32(ctx, 31, 0x1A75BCu);
    ctx->pc = 0x1A75B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A75B4u;
    // 0x1a75b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A75B4u, 0x1A75BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A75BCu;
label_1a75bc:
    // 0x1a75bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a75bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a75c0: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x1a75c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    ctx->pc = 0x1a75c4u;
}
