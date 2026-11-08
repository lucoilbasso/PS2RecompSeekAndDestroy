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

// Function: entry_00147d2c
// Address: 0x147d2c - 0x147d4c
void entry_00147d2c_0x147d2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147d2c_0x147d2c");
#endif

    ctx->pc = 0x147d2cu;

    // 0x147d2c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x147D2Cu;
    {
        const bool branch_taken_0x147d2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D2Cu;
        // 0x147d30: 0x30c30080  andi        $v1, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d2c) {
            ctx->pc = 0x147D4Cu;
            return;
        }
    }
    ctx->pc = 0x147D34u;
    // 0x147d34: 0x63203  sra         $a2, $a2, 8
    ctx->pc = 0x147d34u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 8));
    // 0x147d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x147d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147d3c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x147d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x147d40: 0x3280b  movn        $a1, $zero, $v1
    ctx->pc = 0x147d40u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x147d44: 0xc067c5c  jal         func_19F170
    ctx->pc = 0x147D44u;
    SET_GPR_U32(ctx, 31, 0x147D4Cu);
    ctx->pc = 0x147D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147D44u;
    // 0x147d48: 0x46300a  movz        $a2, $v0, $a2 (Delay Slot)
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F170u, 0x147D44u, 0x147D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147D4Cu;
}
