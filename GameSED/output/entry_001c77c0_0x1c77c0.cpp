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

// Function: entry_001c77c0
// Address: 0x1c77c0 - 0x1c77e8
void entry_001c77c0_0x1c77c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c77c0_0x1c77c0");
#endif

    ctx->pc = 0x1c77c0u;

    // 0x1c77c0: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x1c77c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c77c4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C77C4u;
    {
        const bool branch_taken_0x1c77c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c77c4) {
            ctx->pc = 0x1C77C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C77C4u;
            // 0x1c77c8: 0x8fa60238  lw          $a2, 0x238($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C77E8u;
            return;
        }
    }
    ctx->pc = 0x1C77CCu;
    // 0x1c77cc: 0x1ca00026  bgtz        $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1C77CCu;
    {
        const bool branch_taken_0x1c77cc = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1C77D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77CCu;
        // 0x1c77d0: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77cc) {
            ctx->pc = 0x1C7868u;
            return;
        }
    }
    ctx->pc = 0x1C77D4u;
    // 0x1c77d4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C77D4u;
    {
        const bool branch_taken_0x1c77d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77D4u;
        // 0x1c77d8: 0x8fa3024c  lw          $v1, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77d4) {
            ctx->pc = 0x1C7800u;
            return;
        }
    }
    ctx->pc = 0x1C77DCu;
    // 0x1c77dc: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x1C77DCu;
    {
        const bool branch_taken_0x1c77dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77DCu;
        // 0x1c77e0: 0xdfb00270  ld          $s0, 0x270($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77dc) {
            ctx->pc = 0x1C7ACCu;
            return;
        }
    }
    ctx->pc = 0x1C77E4u;
    // 0x1c77e4: 0x0  nop
    ctx->pc = 0x1c77e4u;
    // NOP
    ctx->pc = 0x1c77e8u;
}
