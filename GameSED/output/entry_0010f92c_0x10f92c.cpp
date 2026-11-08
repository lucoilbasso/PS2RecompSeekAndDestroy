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

// Function: entry_0010f92c
// Address: 0x10f92c - 0x10f940
void entry_0010f92c_0x10f92c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f92c_0x10f92c");
#endif

    ctx->pc = 0x10f92cu;

    // 0x10f92c: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F92Cu;
    {
        const bool branch_taken_0x10f92c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f92c) {
            ctx->pc = 0x10F930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F92Cu;
            // 0x10f930: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F940u;
            return;
        }
    }
    ctx->pc = 0x10F934u;
    // 0x10f934: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x10F934u;
    {
        const bool branch_taken_0x10f934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F934u;
        // 0x10f938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f934) {
            ctx->pc = 0x10FE7Cu;
            return;
        }
    }
    ctx->pc = 0x10F93Cu;
    // 0x10f93c: 0x0  nop
    ctx->pc = 0x10f93cu;
    // NOP
    ctx->pc = 0x10f940u;
}
