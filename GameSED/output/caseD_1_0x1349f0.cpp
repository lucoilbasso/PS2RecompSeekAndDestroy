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

// Function: caseD_1
// Address: 0x1349f0 - 0x134a18
void caseD_1_0x1349f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1349f0");
#endif

    switch (ctx->pc) {
        case 0x1349fcu: goto label_1349fc;
        default: break;
    }

    ctx->pc = 0x1349f0u;

    // 0x1349f0: 0x8e900070  lw          $s0, 0x70($s4)
    ctx->pc = 0x1349f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x1349f4: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x1349F4u;
    SET_GPR_U32(ctx, 31, 0x1349FCu);
    ctx->pc = 0x1349F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1349F4u;
    // 0x1349f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x1349F4u, 0x1349FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1349FCu;
label_1349fc:
    // 0x1349fc: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1349fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x134a00: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x134a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x134a04: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x134a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x134a08: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x134a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x134a0c: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x134A0Cu;
    {
        const bool branch_taken_0x134a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A0Cu;
        // 0x134a10: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a0c) {
            ctx->pc = 0x134E44u;
            return;
        }
    }
    ctx->pc = 0x134A14u;
    // 0x134a14: 0x0  nop
    ctx->pc = 0x134a14u;
    // NOP
    ctx->pc = 0x134a18u;
}
