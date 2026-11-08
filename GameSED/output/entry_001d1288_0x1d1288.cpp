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

// Function: entry_001d1288
// Address: 0x1d1288 - 0x1d12a4
void entry_001d1288_0x1d1288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1288_0x1d1288");
#endif

    switch (ctx->pc) {
        case 0x1d129cu: goto label_1d129c;
        default: break;
    }

    ctx->pc = 0x1d1288u;

    // 0x1d1288: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x1d1288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1d128c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D128Cu;
    {
        const bool branch_taken_0x1d128c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D128Cu;
        // 0x1d1290: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d128c) {
            ctx->pc = 0x1D12A4u;
            return;
        }
    }
    ctx->pc = 0x1D1294u;
    // 0x1d1294: 0xc075156  jal         func_1D4558
    ctx->pc = 0x1D1294u;
    SET_GPR_U32(ctx, 31, 0x1D129Cu);
    ctx->pc = 0x1D4558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4558u, 0x1D1294u, 0x1D129Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D129Cu;
label_1d129c:
    // 0x1d129c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1d129cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1d12a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d12a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d12a4u;
}
