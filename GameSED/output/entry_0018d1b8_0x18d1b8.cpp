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

// Function: entry_0018d1b8
// Address: 0x18d1b8 - 0x18d1e0
void entry_0018d1b8_0x18d1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d1b8_0x18d1b8");
#endif

    ctx->pc = 0x18d1b8u;

    // 0x18d1b8: 0x12020233  beq         $s0, $v0, . + 4 + (0x233 << 2)
    ctx->pc = 0x18D1B8u;
    {
        const bool branch_taken_0x18d1b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18D1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1B8u;
        // 0x18d1bc: 0x2a02007c  slti        $v0, $s0, 0x7C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)124) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1b8) {
            ctx->pc = 0x18DA88u;
            return;
        }
    }
    ctx->pc = 0x18D1C0u;
    // 0x18d1c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18D1C0u;
    {
        const bool branch_taken_0x18d1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1C0u;
        // 0x18d1c4: 0x2402007d  addiu       $v0, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1c0) {
            ctx->pc = 0x18D1E0u;
            return;
        }
    }
    ctx->pc = 0x18D1C8u;
    // 0x18d1c8: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x18d1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x18d1cc: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18D1CCu;
    {
        const bool branch_taken_0x18d1cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1CCu;
        // 0x18d1d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1cc) {
            ctx->pc = 0x18D1F8u;
            return;
        }
    }
    ctx->pc = 0x18D1D4u;
    // 0x18d1d4: 0x10000280  b           . + 4 + (0x280 << 2)
    ctx->pc = 0x18D1D4u;
    {
        const bool branch_taken_0x18d1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1D4u;
        // 0x18d1d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1d4) {
            ctx->pc = 0x18DBD8u;
            return;
        }
    }
    ctx->pc = 0x18D1DCu;
    // 0x18d1dc: 0x0  nop
    ctx->pc = 0x18d1dcu;
    // NOP
    ctx->pc = 0x18d1e0u;
}
