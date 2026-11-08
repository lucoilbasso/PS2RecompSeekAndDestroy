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

// Function: entry_00191880
// Address: 0x191880 - 0x191898
void entry_00191880_0x191880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191880_0x191880");
#endif

    ctx->pc = 0x191880u;

    // 0x191880: 0x8e240158  lw          $a0, 0x158($s1)
    ctx->pc = 0x191880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x191884: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x191884u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191888: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x191888u;
    {
        const bool branch_taken_0x191888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191888u;
        // 0x19188c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191888) {
            ctx->pc = 0x1918BCu;
            return;
        }
    }
    ctx->pc = 0x191890u;
    // 0x191890: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x191890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x191894: 0x0  nop
    ctx->pc = 0x191894u;
    // NOP
    ctx->pc = 0x191898u;
}
