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

// Function: entry_00147d94
// Address: 0x147d94 - 0x147dc0
void entry_00147d94_0x147d94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147d94_0x147d94");
#endif

    switch (ctx->pc) {
        case 0x147db4u: goto label_147db4;
        default: break;
    }

    ctx->pc = 0x147d94u;

    // 0x147d94: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x147D94u;
    {
        const bool branch_taken_0x147d94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D94u;
        // 0x147d98: 0x30c30080  andi        $v1, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d94) {
            ctx->pc = 0x147DFCu;
            return;
        }
    }
    ctx->pc = 0x147D9Cu;
    // 0x147d9c: 0x63203  sra         $a2, $a2, 8
    ctx->pc = 0x147d9cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 8));
    // 0x147da0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x147da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147da4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x147da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x147da8: 0x3280b  movn        $a1, $zero, $v1
    ctx->pc = 0x147da8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x147dac: 0xc067c5c  jal         func_19F170
    ctx->pc = 0x147DACu;
    SET_GPR_U32(ctx, 31, 0x147DB4u);
    ctx->pc = 0x147DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147DACu;
    // 0x147db0: 0x46300a  movz        $a2, $v0, $a2 (Delay Slot)
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F170u, 0x147DACu, 0x147DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147DB4u;
label_147db4:
    // 0x147db4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x147DB4u;
    {
        const bool branch_taken_0x147db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147db4) {
            ctx->pc = 0x147DFCu;
            return;
        }
    }
    ctx->pc = 0x147DBCu;
    // 0x147dbc: 0x0  nop
    ctx->pc = 0x147dbcu;
    // NOP
    ctx->pc = 0x147dc0u;
}
