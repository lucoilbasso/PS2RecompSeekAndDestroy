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

// Function: entry_001dd010
// Address: 0x1dd010 - 0x1dd038
void entry_001dd010_0x1dd010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd010_0x1dd010");
#endif

    ctx->pc = 0x1dd010u;

    // 0x1dd010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd014: 0x50c20010  beql        $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DD014u;
    {
        const bool branch_taken_0x1dd014 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dd014) {
            ctx->pc = 0x1DD018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD014u;
            // 0x1dd018: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD058u;
            return;
        }
    }
    ctx->pc = 0x1DD01Cu;
    // 0x1dd01c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1dd01cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1dd020: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD020u;
    {
        const bool branch_taken_0x1dd020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD020u;
        // 0x1dd024: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd020) {
            ctx->pc = 0x1DD038u;
            return;
        }
    }
    ctx->pc = 0x1DD028u;
    // 0x1dd028: 0x50c00007  beql        $a2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DD028u;
    {
        const bool branch_taken_0x1dd028 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd028) {
            ctx->pc = 0x1DD02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD028u;
            // 0x1dd02c: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD048u;
            return;
        }
    }
    ctx->pc = 0x1DD030u;
    // 0x1dd030: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1DD030u;
    {
        const bool branch_taken_0x1dd030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD030u;
        // 0x1dd034: 0x24830020  addiu       $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd030) {
            ctx->pc = 0x1DD074u;
            return;
        }
    }
    ctx->pc = 0x1DD038u;
}
