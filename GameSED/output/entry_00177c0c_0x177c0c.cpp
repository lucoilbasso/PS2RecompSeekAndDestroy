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

// Function: entry_00177c0c
// Address: 0x177c0c - 0x177c24
void entry_00177c0c_0x177c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177c0c_0x177c0c");
#endif

    switch (ctx->pc) {
        case 0x177c20u: goto label_177c20;
        default: break;
    }

    ctx->pc = 0x177c0cu;

    // 0x177c0c: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x177C0Cu;
    {
        const bool branch_taken_0x177c0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x177C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C0Cu;
        // 0x177c10: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c0c) {
            ctx->pc = 0x177C24u;
            return;
        }
    }
    ctx->pc = 0x177C14u;
    // 0x177c14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c18: 0xc05dd52  jal         func_177548
    ctx->pc = 0x177C18u;
    SET_GPR_U32(ctx, 31, 0x177C20u);
    ctx->pc = 0x177C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177C18u;
    // 0x177c1c: 0x2666e87c  addiu       $a2, $s3, -0x1784 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177548u, 0x177C18u, 0x177C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177C20u;
label_177c20:
    // 0x177c20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x177c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177c24u;
}
