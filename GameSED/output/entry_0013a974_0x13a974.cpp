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

// Function: entry_0013a974
// Address: 0x13a974 - 0x13a998
void entry_0013a974_0x13a974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a974_0x13a974");
#endif

    ctx->pc = 0x13a974u;

    // 0x13a974: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13a974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a978: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x13A978u;
    {
        const bool branch_taken_0x13a978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a978) {
            ctx->pc = 0x13A97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A978u;
            // 0x13a97c: 0x2603079c  addiu       $v1, $s0, 0x79C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1948));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A99Cu;
            return;
        }
    }
    ctx->pc = 0x13A980u;
    // 0x13a980: 0x2622075c  addiu       $v0, $s1, 0x75C
    ctx->pc = 0x13a980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1884));
    // 0x13a984: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A984u;
    {
        const bool branch_taken_0x13a984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A984u;
        // 0x13a988: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a984) {
            ctx->pc = 0x13A998u;
            return;
        }
    }
    ctx->pc = 0x13A98Cu;
    // 0x13a98c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x13a98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13a990: 0xc04e9f2  jal         func_13A7C8
    ctx->pc = 0x13A990u;
    SET_GPR_U32(ctx, 31, 0x13A998u);
    ctx->pc = 0x13A994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A990u;
    // 0x13a994: 0x8c650010  lw          $a1, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A7C8u, 0x13A990u, 0x13A998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A998u;
}
