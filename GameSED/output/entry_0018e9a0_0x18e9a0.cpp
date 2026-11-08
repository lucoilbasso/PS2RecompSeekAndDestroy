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

// Function: entry_0018e9a0
// Address: 0x18e9a0 - 0x18e9d0
void entry_0018e9a0_0x18e9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e9a0_0x18e9a0");
#endif

    switch (ctx->pc) {
        case 0x18e9c4u: goto label_18e9c4;
        default: break;
    }

    ctx->pc = 0x18e9a0u;

    // 0x18e9a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18e9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x18e9a4: 0x14e2000a  bne         $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18E9A4u;
    {
        const bool branch_taken_0x18e9a4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x18E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9A4u;
        // 0x18e9a8: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e9a4) {
            ctx->pc = 0x18E9D0u;
            return;
        }
    }
    ctx->pc = 0x18E9ACu;
    // 0x18e9ac: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x18e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18e9b0: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x18e9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x18e9b4: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x18e9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x18e9b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18e9b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e9bc: 0xc063342  jal         func_18CD08
    ctx->pc = 0x18E9BCu;
    SET_GPR_U32(ctx, 31, 0x18E9C4u);
    ctx->pc = 0x18E9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E9BCu;
    // 0x18e9c0: 0xac620048  sw          $v0, 0x48($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CD08u, 0x18E9BCu, 0x18E9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E9C4u;
label_18e9c4:
    // 0x18e9c4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18E9C4u;
    {
        const bool branch_taken_0x18e9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9C4u;
        // 0x18e9c8: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e9c4) {
            ctx->pc = 0x18E9ECu;
            return;
        }
    }
    ctx->pc = 0x18E9CCu;
    // 0x18e9cc: 0x0  nop
    ctx->pc = 0x18e9ccu;
    // NOP
    ctx->pc = 0x18e9d0u;
}
