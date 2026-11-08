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

// Function: entry_0011972c
// Address: 0x11972c - 0x11976c
void entry_0011972c_0x11972c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011972c_0x11972c");
#endif

    ctx->pc = 0x11972cu;

    // 0x11972c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11972cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119730: 0x24040934  addiu       $a0, $zero, 0x934
    ctx->pc = 0x119730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2356));
    // 0x119734: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x119734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x119738: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x119738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x11973c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x11973cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x119740: 0x2470c540  addiu       $s0, $v1, -0x3AC0
    ctx->pc = 0x119740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x119744: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x119744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x119748: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x119748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11974c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11974cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x119750: 0x8c430e30  lw          $v1, 0xE30($v0)
    ctx->pc = 0x119750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3632)));
    // 0x119754: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x119754u;
    {
        const bool branch_taken_0x119754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x119758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119754u;
        // 0x119758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119754) {
            ctx->pc = 0x11976Cu;
            return;
        }
    }
    ctx->pc = 0x11975Cu;
    // 0x11975c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x11975cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x119760: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x119760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x119764: 0xc068186  jal         func_1A0618
    ctx->pc = 0x119764u;
    SET_GPR_U32(ctx, 31, 0x11976Cu);
    ctx->pc = 0x119768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119764u;
    // 0x119768: 0x24a5d1a8  addiu       $a1, $a1, -0x2E58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x119764u, 0x11976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11976Cu;
}
