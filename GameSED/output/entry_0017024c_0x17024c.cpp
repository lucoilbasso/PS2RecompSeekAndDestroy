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

// Function: entry_0017024c
// Address: 0x17024c - 0x17026c
void entry_0017024c_0x17024c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017024c_0x17024c");
#endif

    ctx->pc = 0x17024cu;

    // 0x17024c: 0x16e2000c  bne         $s7, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17024Cu;
    {
        const bool branch_taken_0x17024c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x170250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17024Cu;
        // 0x170250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17024c) {
            ctx->pc = 0x170280u;
            return;
        }
    }
    ctx->pc = 0x170254u;
    // 0x170254: 0x26b5ff9c  addiu       $s5, $s5, -0x64
    ctx->pc = 0x170254u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967196));
    // 0x170258: 0x1ea00004  bgtz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x170258u;
    {
        const bool branch_taken_0x170258 = (GPR_S32(ctx, 21) > 0);
        ctx->pc = 0x17025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170258u;
        // 0x17025c: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170258) {
            ctx->pc = 0x17026Cu;
            return;
        }
    }
    ctx->pc = 0x170260u;
    // 0x170260: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x170260u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170264: 0xc05c5fa  jal         func_1717E8
    ctx->pc = 0x170264u;
    SET_GPR_U32(ctx, 31, 0x17026Cu);
    ctx->pc = 0x170268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170264u;
    // 0x170268: 0x24441368  addiu       $a0, $v0, 0x1368 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1717E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717E8u, 0x170264u, 0x17026Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17026Cu;
}
