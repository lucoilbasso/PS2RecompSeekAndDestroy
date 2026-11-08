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

// Function: entry_00147204
// Address: 0x147204 - 0x147220
void entry_00147204_0x147204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147204_0x147204");
#endif

    ctx->pc = 0x147204u;

    // 0x147204: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x147204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x147208: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x147208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x14720c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x14720Cu;
    {
        const bool branch_taken_0x14720c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14720c) {
            ctx->pc = 0x147210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14720Cu;
            // 0x147210: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1471E0u;
            return;
        }
    }
    ctx->pc = 0x147214u;
    // 0x147214: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x147214u;
    {
        const bool branch_taken_0x147214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147214u;
        // 0x147218: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147214) {
            ctx->pc = 0x14724Cu;
            return;
        }
    }
    ctx->pc = 0x14721Cu;
    // 0x14721c: 0x0  nop
    ctx->pc = 0x14721cu;
    // NOP
    ctx->pc = 0x147220u;
}
