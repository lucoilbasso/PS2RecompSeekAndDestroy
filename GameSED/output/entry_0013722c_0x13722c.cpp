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

// Function: entry_0013722c
// Address: 0x13722c - 0x137260
void entry_0013722c_0x13722c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013722c_0x13722c");
#endif

    ctx->pc = 0x13722cu;

    // 0x13722c: 0x148000ad  bnez        $a0, . + 4 + (0xAD << 2)
    ctx->pc = 0x13722Cu;
    {
        const bool branch_taken_0x13722c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13722c) {
            ctx->pc = 0x1374E4u;
            return;
        }
    }
    ctx->pc = 0x137234u;
    // 0x137234: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x137234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x137238: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x137238u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13723c: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x13723cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x137240: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x137240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x137244: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x137244u;
    {
        const bool branch_taken_0x137244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137244u;
        // 0x137248: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137244) {
            ctx->pc = 0x1372A0u;
            return;
        }
    }
    ctx->pc = 0x13724Cu;
    // 0x13724c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x13724cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x137250: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137250u;
    {
        const bool branch_taken_0x137250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137250) {
            ctx->pc = 0x137260u;
            return;
        }
    }
    ctx->pc = 0x137258u;
    // 0x137258: 0xc061920  jal         func_186480
    ctx->pc = 0x137258u;
    SET_GPR_U32(ctx, 31, 0x137260u);
    ctx->pc = 0x13725Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137258u;
    // 0x13725c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x137258u, 0x137260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137260u;
}
