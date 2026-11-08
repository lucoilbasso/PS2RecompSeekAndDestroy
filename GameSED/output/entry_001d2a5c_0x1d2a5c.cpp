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

// Function: entry_001d2a5c
// Address: 0x1d2a5c - 0x1d2a90
void entry_001d2a5c_0x1d2a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2a5c_0x1d2a5c");
#endif

    switch (ctx->pc) {
        case 0x1d2a6cu: goto label_1d2a6c;
        default: break;
    }

    ctx->pc = 0x1d2a5cu;

    // 0x1d2a5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d2a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a64: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D2A64u;
    SET_GPR_U32(ctx, 31, 0x1D2A6Cu);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D2A64u, 0x1D2A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2A6Cu;
label_1d2a6c:
    // 0x1d2a6c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1d2a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d2a70: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1d2a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1d2a74: 0x202180a  movz        $v1, $s0, $v0
    ctx->pc = 0x1d2a74u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x1d2a78: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x1d2a78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1d2a7c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1d2a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1d2a80: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D2A80u;
    {
        const bool branch_taken_0x1d2a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A80u;
        // 0x1d2a84: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a80) {
            ctx->pc = 0x1D2ABCu;
            return;
        }
    }
    ctx->pc = 0x1D2A88u;
    // 0x1d2a88: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x1d2a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1d2a8c: 0x0  nop
    ctx->pc = 0x1d2a8cu;
    // NOP
    ctx->pc = 0x1d2a90u;
}
