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

// Function: entry_0011c730
// Address: 0x11c730 - 0x11c768
void entry_0011c730_0x11c730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c730_0x11c730");
#endif

    switch (ctx->pc) {
        case 0x11c740u: goto label_11c740;
        default: break;
    }

    ctx->pc = 0x11c730u;

    // 0x11c730: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11c730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11c734: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11c734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11c738: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11C738u;
    SET_GPR_U32(ctx, 31, 0x11C740u);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11C738u, 0x11C740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C740u;
label_11c740:
    // 0x11c740: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11c740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11c744: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11c744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11c748: 0x8c520048  lw          $s2, 0x48($v0)
    ctx->pc = 0x11c748u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x11c74c: 0x8e424064  lw          $v0, 0x4064($s2)
    ctx->pc = 0x11c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16484)));
    // 0x11c750: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C750u;
    {
        const bool branch_taken_0x11c750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C750u;
        // 0x11c754: 0x26514600  addiu       $s1, $s2, 0x4600 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 17920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c750) {
            ctx->pc = 0x11C768u;
            return;
        }
    }
    ctx->pc = 0x11C758u;
    // 0x11c758: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x11c758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x11c75c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c760: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x11C760u;
    {
        const bool branch_taken_0x11c760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C760u;
        // 0x11c764: 0xac6200b0  sw          $v0, 0xB0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c760) {
            ctx->pc = 0x11C7C0u;
            return;
        }
    }
    ctx->pc = 0x11C768u;
}
