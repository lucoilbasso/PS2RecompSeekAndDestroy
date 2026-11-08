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

// Function: entry_00177cb0
// Address: 0x177cb0 - 0x177cec
void entry_00177cb0_0x177cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177cb0_0x177cb0");
#endif

    switch (ctx->pc) {
        case 0x177cc4u: goto label_177cc4;
        case 0x177cccu: goto label_177ccc;
        case 0x177ce4u: goto label_177ce4;
        default: break;
    }

    ctx->pc = 0x177cb0u;

    // 0x177cb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x177cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x177cb4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x177CB4u;
    {
        const bool branch_taken_0x177cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177CB4u;
        // 0x177cb8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177cb4) {
            ctx->pc = 0x177D3Cu;
            return;
        }
    }
    ctx->pc = 0x177CBCu;
    // 0x177cbc: 0xc05ddbc  jal         func_1776F0
    ctx->pc = 0x177CBCu;
    SET_GPR_U32(ctx, 31, 0x177CC4u);
    ctx->pc = 0x1776F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1776F0u, 0x177CBCu, 0x177CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CC4u;
label_177cc4:
    // 0x177cc4: 0xc05ddbc  jal         func_1776F0
    ctx->pc = 0x177CC4u;
    SET_GPR_U32(ctx, 31, 0x177CCCu);
    ctx->pc = 0x177CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177CC4u;
    // 0x177cc8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1776F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1776F0u, 0x177CC4u, 0x177CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CCCu;
label_177ccc:
    // 0x177ccc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x177cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x177cd0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x177cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x177cd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177CD4u;
    {
        const bool branch_taken_0x177cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177CD4u;
        // 0x177cd8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177cd4) {
            ctx->pc = 0x177CECu;
            return;
        }
    }
    ctx->pc = 0x177CDCu;
    // 0x177cdc: 0xc05df54  jal         func_177D50
    ctx->pc = 0x177CDCu;
    SET_GPR_U32(ctx, 31, 0x177CE4u);
    ctx->pc = 0x177D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177D50u, 0x177CDCu, 0x177CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CE4u;
label_177ce4:
    // 0x177ce4: 0xc05df54  jal         func_177D50
    ctx->pc = 0x177CE4u;
    SET_GPR_U32(ctx, 31, 0x177CECu);
    ctx->pc = 0x177CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177CE4u;
    // 0x177ce8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177D50u, 0x177CE4u, 0x177CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CECu;
}
