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

// Function: entry_0011e520
// Address: 0x11e520 - 0x11e538
void entry_0011e520_0x11e520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e520_0x11e520");
#endif

    ctx->pc = 0x11e520u;

    // 0x11e520: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x11e520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e524: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E524u;
    {
        const bool branch_taken_0x11e524 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e524) {
            ctx->pc = 0x11E528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E524u;
            // 0x11e528: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E538u;
            return;
        }
    }
    ctx->pc = 0x11E52Cu;
    // 0x11e52c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11E52Cu;
    {
        const bool branch_taken_0x11e52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E52Cu;
        // 0x11e530: 0xa620001c  sh          $zero, 0x1C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e52c) {
            ctx->pc = 0x11E53Cu;
            return;
        }
    }
    ctx->pc = 0x11E534u;
    // 0x11e534: 0x0  nop
    ctx->pc = 0x11e534u;
    // NOP
    ctx->pc = 0x11e538u;
}
