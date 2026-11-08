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

// Function: entry_001a7930
// Address: 0x1a7930 - 0x1a7960
void entry_001a7930_0x1a7930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7930_0x1a7930");
#endif

    switch (ctx->pc) {
        case 0x1a7958u: goto label_1a7958;
        default: break;
    }

    ctx->pc = 0x1a7930u;

    // 0x1a7930: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a7930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a7934: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a7934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a7938: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1a7938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a793c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a793cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a7940: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1a7940u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1a7944: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1a7944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a7948: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7948u;
    {
        const bool branch_taken_0x1a7948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7948u;
        // 0x1a794c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7948) {
            ctx->pc = 0x1A7960u;
            return;
        }
    }
    ctx->pc = 0x1A7950u;
    // 0x1a7950: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7950u;
    SET_GPR_U32(ctx, 31, 0x1A7958u);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7950u, 0x1A7958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7958u;
label_1a7958:
    // 0x1a7958: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7958u;
    {
        const bool branch_taken_0x1a7958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7958u;
        // 0x1a795c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7958) {
            ctx->pc = 0x1A7964u;
            return;
        }
    }
    ctx->pc = 0x1A7960u;
}
