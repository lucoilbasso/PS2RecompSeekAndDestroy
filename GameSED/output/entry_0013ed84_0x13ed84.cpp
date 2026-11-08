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

// Function: entry_0013ed84
// Address: 0x13ed84 - 0x13edac
void entry_0013ed84_0x13ed84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ed84_0x13ed84");
#endif

    switch (ctx->pc) {
        case 0x13ed9cu: goto label_13ed9c;
        default: break;
    }

    ctx->pc = 0x13ed84u;

    // 0x13ed84: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x13ED84u;
    {
        const bool branch_taken_0x13ed84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED84u;
        // 0x13ed88: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ed84) {
            ctx->pc = 0x13EDBCu;
            return;
        }
    }
    ctx->pc = 0x13ED8Cu;
    // 0x13ed8c: 0x8f848c54  lw          $a0, -0x73AC($gp)
    ctx->pc = 0x13ed8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
    // 0x13ed90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13ed90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed94: 0xc06b1f6  jal         func_1AC7D8
    ctx->pc = 0x13ED94u;
    SET_GPR_U32(ctx, 31, 0x13ED9Cu);
    ctx->pc = 0x13ED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ED94u;
    // 0x13ed98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC7D8u, 0x13ED94u, 0x13ED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED9Cu;
label_13ed9c:
    // 0x13ed9c: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x13ed9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x13eda0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13eda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eda4: 0xc04f604  jal         func_13D810
    ctx->pc = 0x13EDA4u;
    SET_GPR_U32(ctx, 31, 0x13EDACu);
    ctx->pc = 0x13EDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EDA4u;
    // 0x13eda8: 0x24a5da28  addiu       $a1, $a1, -0x25D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D810u, 0x13EDA4u, 0x13EDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EDACu;
}
