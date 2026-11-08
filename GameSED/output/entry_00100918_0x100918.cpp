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

// Function: entry_00100918
// Address: 0x100918 - 0x100930
void entry_00100918_0x100918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100918_0x100918");
#endif

    ctx->pc = 0x100918u;

    // 0x100918: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x100918u;
    {
        const bool branch_taken_0x100918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100918) {
            ctx->pc = 0x10098Cu;
            return;
        }
    }
    ctx->pc = 0x100920u;
    // 0x100920: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x100920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x100924: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x100924u;
    {
        const bool branch_taken_0x100924 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x100928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100924u;
        // 0x100928: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100924) {
            ctx->pc = 0x100978u;
            return;
        }
    }
    ctx->pc = 0x10092Cu;
    // 0x10092c: 0x0  nop
    ctx->pc = 0x10092cu;
    // NOP
    ctx->pc = 0x100930u;
}
