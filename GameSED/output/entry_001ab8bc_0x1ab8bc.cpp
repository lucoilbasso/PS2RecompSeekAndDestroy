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

// Function: entry_001ab8bc
// Address: 0x1ab8bc - 0x1ab8ec
void entry_001ab8bc_0x1ab8bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab8bc_0x1ab8bc");
#endif

    switch (ctx->pc) {
        case 0x1ab8c8u: goto label_1ab8c8;
        default: break;
    }

    ctx->pc = 0x1ab8bcu;

    // 0x1ab8bc: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1ab8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1ab8c0: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1AB8C0u;
    SET_GPR_U32(ctx, 31, 0x1AB8C8u);
    ctx->pc = 0x1AB8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB8C0u;
    // 0x1ab8c4: 0x248497e8  addiu       $a0, $a0, -0x6818 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1AB8C0u, 0x1AB8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB8C8u;
label_1ab8c8:
    // 0x1ab8c8: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1ab8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1ab8cc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1ab8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab8d0: 0x244208f0  addiu       $v0, $v0, 0x8F0
    ctx->pc = 0x1ab8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2288));
    // 0x1ab8d4: 0x34845000  ori         $a0, $a0, 0x5000
    ctx->pc = 0x1ab8d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
    // 0x1ab8d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1ab8d8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x2408F0u));
    // 0x1ab8dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ab8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ab8e0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1ab8e0u;
    runtime->Store128(rdram, ctx, 0x10005000u, GPR_VEC(ctx, 3));
    // 0x1ab8e4: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1AB8E4u;
    {
        const bool branch_taken_0x1ab8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8E4u;
        // 0x1ab8e8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8e4) {
            ctx->pc = 0x1ABB68u;
            return;
        }
    }
    ctx->pc = 0x1AB8ECu;
}
