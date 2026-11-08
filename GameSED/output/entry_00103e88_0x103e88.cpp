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

// Function: entry_00103e88
// Address: 0x103e88 - 0x103eac
void entry_00103e88_0x103e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103e88_0x103e88");
#endif

    ctx->pc = 0x103e88u;

    // 0x103e88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103e8c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x103e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x103e90: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x103e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x103e94: 0x458021  addu        $s0, $v0, $a1
    ctx->pc = 0x103e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x103e98: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x103e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x103e9c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x103E9Cu;
    {
        const bool branch_taken_0x103e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x103EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E9Cu;
        // 0x103ea0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e9c) {
            ctx->pc = 0x103EACu;
            return;
        }
    }
    ctx->pc = 0x103EA4u;
    // 0x103ea4: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x103EA4u;
    SET_GPR_U32(ctx, 31, 0x103EACu);
    ctx->pc = 0x103EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103EA4u;
    // 0x103ea8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x103EA4u, 0x103EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103EACu;
}
