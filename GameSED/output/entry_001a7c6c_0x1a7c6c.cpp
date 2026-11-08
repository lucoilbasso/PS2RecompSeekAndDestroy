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

// Function: entry_001a7c6c
// Address: 0x1a7c6c - 0x1a7cb0
void entry_001a7c6c_0x1a7c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7c6c_0x1a7c6c");
#endif

    switch (ctx->pc) {
        case 0x1a7ca4u: goto label_1a7ca4;
        default: break;
    }

    ctx->pc = 0x1a7c6cu;

    // 0x1a7c6c: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x1a7c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a7c70: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a7c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a7c74: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a7c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a7c78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a7c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a7c7c: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x1a7c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1a7c80: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a7c80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7c84: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a7c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a7c88: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a7c88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a7c8c: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a7c8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a7c90: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A7C90u;
    {
        const bool branch_taken_0x1a7c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C90u;
        // 0x1a7c94: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c90) {
            ctx->pc = 0x1A7CB0u;
            return;
        }
    }
    ctx->pc = 0x1A7C98u;
    // 0x1a7c98: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a7c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c9c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7C9Cu;
    SET_GPR_U32(ctx, 31, 0x1A7CA4u);
    ctx->pc = 0x1A7CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7C9Cu;
    // 0x1a7ca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7C9Cu, 0x1A7CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7CA4u;
label_1a7ca4:
    // 0x1a7ca4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7CA4u;
    {
        const bool branch_taken_0x1a7ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CA4u;
        // 0x1a7ca8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ca4) {
            ctx->pc = 0x1A7CB4u;
            return;
        }
    }
    ctx->pc = 0x1A7CACu;
    // 0x1a7cac: 0x0  nop
    ctx->pc = 0x1a7cacu;
    // NOP
    ctx->pc = 0x1a7cb0u;
}
