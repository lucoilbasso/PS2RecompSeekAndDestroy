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

// Function: entry_001953bc
// Address: 0x1953bc - 0x1953dc
void entry_001953bc_0x1953bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001953bc_0x1953bc");
#endif

    ctx->pc = 0x1953bcu;

    // 0x1953bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1953bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1953c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1953c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1953c4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x1953c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x1953c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1953C8u;
    {
        const bool branch_taken_0x1953c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1953CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953C8u;
        // 0x1953cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1953c8) {
            ctx->pc = 0x1953E8u;
            return;
        }
    }
    ctx->pc = 0x1953D0u;
    // 0x1953d0: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x1953d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x1953d4: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1953D4u;
    SET_GPR_U32(ctx, 31, 0x1953DCu);
    ctx->pc = 0x1953D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1953D4u;
    // 0x1953d8: 0x2484de50  addiu       $a0, $a0, -0x21B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1953D4u, 0x1953DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1953DCu;
}
