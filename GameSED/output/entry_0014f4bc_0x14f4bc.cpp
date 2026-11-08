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

// Function: entry_0014f4bc
// Address: 0x14f4bc - 0x14f4cc
void entry_0014f4bc_0x14f4bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f4bc_0x14f4bc");
#endif

    ctx->pc = 0x14f4bcu;

    // 0x14f4bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F4BCu;
    {
        const bool branch_taken_0x14f4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4BCu;
        // 0x14f4c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4bc) {
            ctx->pc = 0x14F4CCu;
            return;
        }
    }
    ctx->pc = 0x14F4C4u;
    // 0x14f4c4: 0xc0549fa  jal         func_1527E8
    ctx->pc = 0x14F4C4u;
    SET_GPR_U32(ctx, 31, 0x14F4CCu);
    ctx->pc = 0x14F4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F4C4u;
    // 0x14f4c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1527E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1527E8u, 0x14F4C4u, 0x14F4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F4CCu;
}
