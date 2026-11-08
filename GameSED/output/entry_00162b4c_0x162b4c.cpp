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

// Function: entry_00162b4c
// Address: 0x162b4c - 0x162b60
void entry_00162b4c_0x162b4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162b4c_0x162b4c");
#endif

    ctx->pc = 0x162b4cu;

    // 0x162b4c: 0x8e020cf0  lw          $v0, 0xCF0($s0)
    ctx->pc = 0x162b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3312)));
    // 0x162b50: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x162B50u;
    {
        const bool branch_taken_0x162b50 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x162B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B50u;
        // 0x162b54: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b50) {
            ctx->pc = 0x162BA8u;
            return;
        }
    }
    ctx->pc = 0x162B58u;
    // 0x162b58: 0x26110cf4  addiu       $s1, $s0, 0xCF4
    ctx->pc = 0x162b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3316));
    // 0x162b5c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x162b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x162b60u;
}
