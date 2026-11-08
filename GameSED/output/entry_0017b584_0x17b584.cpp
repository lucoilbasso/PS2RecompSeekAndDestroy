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

// Function: entry_0017b584
// Address: 0x17b584 - 0x17b59c
void entry_0017b584_0x17b584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b584_0x17b584");
#endif

    ctx->pc = 0x17b584u;

    // 0x17b584: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x17b584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x17b588: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B588u;
    {
        const bool branch_taken_0x17b588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B588u;
        // 0x17b58c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b588) {
            ctx->pc = 0x17B59Cu;
            return;
        }
    }
    ctx->pc = 0x17B590u;
    // 0x17b590: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17b590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b594: 0xc05eef6  jal         func_17BBD8
    ctx->pc = 0x17B594u;
    SET_GPR_U32(ctx, 31, 0x17B59Cu);
    ctx->pc = 0x17B598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B594u;
    // 0x17b598: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BBD8u, 0x17B594u, 0x17B59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B59Cu;
}
