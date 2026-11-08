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

// Function: entry_00119e5c
// Address: 0x119e5c - 0x119e94
void entry_00119e5c_0x119e5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119e5c_0x119e5c");
#endif

    switch (ctx->pc) {
        case 0x119e78u: goto label_119e78;
        case 0x119e90u: goto label_119e90;
        default: break;
    }

    ctx->pc = 0x119e5cu;

    // 0x119e5c: 0x2a02006e  slti        $v0, $s0, 0x6E
    ctx->pc = 0x119e5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x119e60: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x119E60u;
    {
        const bool branch_taken_0x119e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E60u;
        // 0x119e64: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e60) {
            ctx->pc = 0x119E94u;
            return;
        }
    }
    ctx->pc = 0x119E68u;
    // 0x119e68: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x119e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x119e6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x119e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e70: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x119E70u;
    SET_GPR_U32(ctx, 31, 0x119E78u);
    ctx->pc = 0x119E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119E70u;
    // 0x119e74: 0x24844308  addiu       $a0, $a0, 0x4308 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x119E70u, 0x119E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119E78u;
label_119e78:
    // 0x119e78: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x119e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x119e7c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x119e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x119e80: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x119e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x119e84: 0x24a54318  addiu       $a1, $a1, 0x4318
    ctx->pc = 0x119e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17176));
    // 0x119e88: 0xc068186  jal         func_1A0618
    ctx->pc = 0x119E88u;
    SET_GPR_U32(ctx, 31, 0x119E90u);
    ctx->pc = 0x119E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119E88u;
    // 0x119e8c: 0x24060031  addiu       $a2, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x119E88u, 0x119E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119E90u;
label_119e90:
    // 0x119e90: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x119e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->pc = 0x119e94u;
}
