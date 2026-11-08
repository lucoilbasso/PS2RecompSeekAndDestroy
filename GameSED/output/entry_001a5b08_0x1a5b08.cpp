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

// Function: entry_001a5b08
// Address: 0x1a5b08 - 0x1a5b30
void entry_001a5b08_0x1a5b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5b08_0x1a5b08");
#endif

    switch (ctx->pc) {
        case 0x1a5b28u: goto label_1a5b28;
        default: break;
    }

    ctx->pc = 0x1a5b08u;

    // 0x1a5b08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a5b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5b0c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a5b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a5b10: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a5b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1a5b14: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x1a5b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a5b18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5B18u;
    {
        const bool branch_taken_0x1a5b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B18u;
        // 0x1a5b1c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b18) {
            ctx->pc = 0x1A5B30u;
            return;
        }
    }
    ctx->pc = 0x1A5B20u;
    // 0x1a5b20: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A5B20u;
    SET_GPR_U32(ctx, 31, 0x1A5B28u);
    ctx->pc = 0x1A5B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5B20u;
    // 0x1a5b24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A5B20u, 0x1A5B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5B28u;
label_1a5b28:
    // 0x1a5b28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5B28u;
    {
        const bool branch_taken_0x1a5b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B28u;
        // 0x1a5b2c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b28) {
            ctx->pc = 0x1A5B34u;
            return;
        }
    }
    ctx->pc = 0x1A5B30u;
}
