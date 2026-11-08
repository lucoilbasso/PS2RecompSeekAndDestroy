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

// Function: entry_0017c87c
// Address: 0x17c87c - 0x17c8b0
void entry_0017c87c_0x17c87c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c87c_0x17c87c");
#endif

    ctx->pc = 0x17c87cu;

    // 0x17c87c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17c87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17c880: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x17c880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x17c884: 0x0  nop
    ctx->pc = 0x17c884u;
    // NOP
    // 0x17c888: 0x0  nop
    ctx->pc = 0x17c888u;
    // NOP
    // 0x17c88c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17C88Cu;
    {
        const bool branch_taken_0x17c88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C88Cu;
        // 0x17c890: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c88c) {
            ctx->pc = 0x17C870u;
            return;
        }
    }
    ctx->pc = 0x17C894u;
    // 0x17c894: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17c894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17c898: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17C898u;
    {
        const bool branch_taken_0x17c898 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x17C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C898u;
        // 0x17c89c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c898) {
            ctx->pc = 0x17C8B0u;
            return;
        }
    }
    ctx->pc = 0x17C8A0u;
    // 0x17c8a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17c8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c8a4: 0x24a57b40  addiu       $a1, $a1, 0x7B40
    ctx->pc = 0x17c8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31552));
    // 0x17c8a8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17C8A8u;
    SET_GPR_U32(ctx, 31, 0x17C8B0u);
    ctx->pc = 0x17C8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C8A8u;
    // 0x17c8ac: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17C8A8u, 0x17C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C8B0u;
}
