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

// Function: entry_001d6e40
// Address: 0x1d6e40 - 0x1d6e60
void entry_001d6e40_0x1d6e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6e40_0x1d6e40");
#endif

    ctx->pc = 0x1d6e40u;

    // 0x1d6e40: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1d6e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d6e44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d6e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6e48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d6e48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d6e4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d6e50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d6e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6e54: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6E54u;
    {
        const bool branch_taken_0x1d6e54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6E54u;
        // 0x1d6e58: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e54) {
            ctx->pc = 0x1D6E60u;
            return;
        }
    }
    ctx->pc = 0x1D6E5Cu;
    // 0x1d6e5c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d6e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1d6e60u;
}
