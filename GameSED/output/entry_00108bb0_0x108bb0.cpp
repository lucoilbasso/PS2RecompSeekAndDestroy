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

// Function: entry_00108bb0
// Address: 0x108bb0 - 0x108bd0
void entry_00108bb0_0x108bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108bb0_0x108bb0");
#endif

    switch (ctx->pc) {
        case 0x108bc4u: goto label_108bc4;
        default: break;
    }

    ctx->pc = 0x108bb0u;

    // 0x108bb0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108bb4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x108bb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x108bb8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x108bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108bbc: 0xc06945c  jal         func_1A5170
    ctx->pc = 0x108BBCu;
    SET_GPR_U32(ctx, 31, 0x108BC4u);
    ctx->pc = 0x108BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108BBCu;
    // 0x108bc0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5170u, 0x108BBCu, 0x108BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108BC4u;
label_108bc4:
    // 0x108bc4: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x108BC4u;
    {
        const bool branch_taken_0x108bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BC4u;
        // 0x108bc8: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108bc4) {
            ctx->pc = 0x109104u;
            return;
        }
    }
    ctx->pc = 0x108BCCu;
    // 0x108bcc: 0x0  nop
    ctx->pc = 0x108bccu;
    // NOP
    ctx->pc = 0x108bd0u;
}
