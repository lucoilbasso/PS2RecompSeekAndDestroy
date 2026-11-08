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

// Function: entry_00108fd0
// Address: 0x108fd0 - 0x108ff0
void entry_00108fd0_0x108fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108fd0_0x108fd0");
#endif

    switch (ctx->pc) {
        case 0x108fe4u: goto label_108fe4;
        default: break;
    }

    ctx->pc = 0x108fd0u;

    // 0x108fd0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108fd4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x108fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x108fd8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x108fd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108fdc: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x108FDCu;
    SET_GPR_U32(ctx, 31, 0x108FE4u);
    ctx->pc = 0x108FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108FDCu;
    // 0x108fe0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x108FDCu, 0x108FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108FE4u;
label_108fe4:
    // 0x108fe4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x108FE4u;
    {
        const bool branch_taken_0x108fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FE4u;
        // 0x108fe8: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108fe4) {
            ctx->pc = 0x109104u;
            return;
        }
    }
    ctx->pc = 0x108FECu;
    // 0x108fec: 0x0  nop
    ctx->pc = 0x108fecu;
    // NOP
    ctx->pc = 0x108ff0u;
}
