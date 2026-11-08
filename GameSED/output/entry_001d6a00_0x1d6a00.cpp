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

// Function: entry_001d6a00
// Address: 0x1d6a00 - 0x1d6a28
void entry_001d6a00_0x1d6a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6a00_0x1d6a00");
#endif

    ctx->pc = 0x1d6a00u;

    // 0x1d6a00: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1d6a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1d6a04: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x1d6a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1d6a08: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d6a08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d6a0c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1d6a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d6a10: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1d6a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d6a14: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1d6a14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6a18: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6A18u;
    {
        const bool branch_taken_0x1d6a18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A18u;
        // 0x1d6a1c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6a18) {
            ctx->pc = 0x1D6A28u;
            return;
        }
    }
    ctx->pc = 0x1D6A20u;
    // 0x1d6a20: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1D6A20u;
    SET_GPR_U32(ctx, 31, 0x1D6A28u);
    ctx->pc = 0x1D6A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6A20u;
    // 0x1d6a24: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D6A20u, 0x1D6A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6A28u;
}
