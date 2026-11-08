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

// Function: entry_00146348
// Address: 0x146348 - 0x146360
void entry_00146348_0x146348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146348_0x146348");
#endif

    ctx->pc = 0x146348u;

    // 0x146348: 0x28c2e000  slti        $v0, $a2, -0x2000
    ctx->pc = 0x146348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294959104) ? 1 : 0);
    // 0x14634c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14634Cu;
    {
        const bool branch_taken_0x14634c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14634Cu;
        // 0x146350: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14634c) {
            ctx->pc = 0x146360u;
            return;
        }
    }
    ctx->pc = 0x146354u;
    // 0x146354: 0x2403c000  addiu       $v1, $zero, -0x4000
    ctx->pc = 0x146354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x146358: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x146358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x14635c: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x14635cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    ctx->pc = 0x146360u;
}
