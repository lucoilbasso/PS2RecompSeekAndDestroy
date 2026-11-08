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

// Function: entry_00155c10
// Address: 0x155c10 - 0x155c28
void entry_00155c10_0x155c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155c10_0x155c10");
#endif

    switch (ctx->pc) {
        case 0x155c20u: goto label_155c20;
        default: break;
    }

    ctx->pc = 0x155c10u;

    // 0x155c10: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x155C10u;
    {
        const bool branch_taken_0x155c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x155C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C10u;
        // 0x155c14: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c10) {
            ctx->pc = 0x155C28u;
            return;
        }
    }
    ctx->pc = 0x155C18u;
    // 0x155c18: 0xc053fe6  jal         func_14FF98
    ctx->pc = 0x155C18u;
    SET_GPR_U32(ctx, 31, 0x155C20u);
    ctx->pc = 0x155C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155C18u;
    // 0x155c1c: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF98u, 0x155C18u, 0x155C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C20u;
label_155c20:
    // 0x155c20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x155C20u;
    {
        const bool branch_taken_0x155c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C20u;
        // 0x155c24: 0x8e02037c  lw          $v0, 0x37C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c20) {
            ctx->pc = 0x155C44u;
            return;
        }
    }
    ctx->pc = 0x155C28u;
}
