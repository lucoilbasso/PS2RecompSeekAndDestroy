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

// Function: entry_001501e4
// Address: 0x1501e4 - 0x150210
void entry_001501e4_0x1501e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001501e4_0x1501e4");
#endif

    ctx->pc = 0x1501e4u;

    // 0x1501e4: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1501E4u;
    {
        const bool branch_taken_0x1501e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1501E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1501E4u;
        // 0x1501e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1501e4) {
            ctx->pc = 0x150278u;
            return;
        }
    }
    ctx->pc = 0x1501ECu;
    // 0x1501ec: 0x12220016  beq         $s1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1501ECu;
    {
        const bool branch_taken_0x1501ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1501F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1501ECu;
        // 0x1501f0: 0x2a220003  slti        $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1501ec) {
            ctx->pc = 0x150248u;
            return;
        }
    }
    ctx->pc = 0x1501F4u;
    // 0x1501f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1501F4u;
    {
        const bool branch_taken_0x1501f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1501F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1501F4u;
        // 0x1501f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1501f4) {
            ctx->pc = 0x150210u;
            return;
        }
    }
    ctx->pc = 0x1501FCu;
    // 0x1501fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1501fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150200: 0x52220007  beql        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x150200u;
    {
        const bool branch_taken_0x150200 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x150200) {
            ctx->pc = 0x150204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150200u;
            // 0x150204: 0x8e0303b0  lw          $v1, 0x3B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150220u;
            return;
        }
    }
    ctx->pc = 0x150208u;
    // 0x150208: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x150208u;
    {
        const bool branch_taken_0x150208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150208u;
        // 0x15020c: 0xae110840  sw          $s1, 0x840($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150208) {
            ctx->pc = 0x150278u;
            return;
        }
    }
    ctx->pc = 0x150210u;
}
