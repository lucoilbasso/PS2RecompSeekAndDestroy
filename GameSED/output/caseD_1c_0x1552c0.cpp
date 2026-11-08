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

// Function: caseD_1c
// Address: 0x1552c0 - 0x1552e8
void caseD_1c_0x1552c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1c_0x1552c0");
#endif

    switch (ctx->pc) {
        case 0x1552c8u: goto label_1552c8;
        default: break;
    }

    ctx->pc = 0x1552c0u;

    // 0x1552c0: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x1552C0u;
    SET_GPR_U32(ctx, 31, 0x1552C8u);
    ctx->pc = 0x1552C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1552C0u;
    // 0x1552c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x1552C0u, 0x1552C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1552C8u;
label_1552c8:
    // 0x1552c8: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x1552c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x1552cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1552ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1552d0: 0x312c3  sra         $v0, $v1, 11
    ctx->pc = 0x1552d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
    // 0x1552d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1552d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1552d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1552D8u;
    {
        const bool branch_taken_0x1552d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1552DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552D8u;
        // 0x1552dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1552d8) {
            ctx->pc = 0x1552E8u;
            return;
        }
    }
    ctx->pc = 0x1552E0u;
    // 0x1552e0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1552E0u;
    {
        const bool branch_taken_0x1552e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1552E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552E0u;
        // 0x1552e4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1552e0) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x1552E8u;
}
