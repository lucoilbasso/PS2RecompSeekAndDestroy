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

// Function: entry_00108b30
// Address: 0x108b30 - 0x108b50
void entry_00108b30_0x108b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108b30_0x108b30");
#endif

    switch (ctx->pc) {
        case 0x108b44u: goto label_108b44;
        default: break;
    }

    ctx->pc = 0x108b30u;

    // 0x108b30: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b34: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x108b34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x108b38: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x108b38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b3c: 0xc069402  jal         func_1A5008
    ctx->pc = 0x108B3Cu;
    SET_GPR_U32(ctx, 31, 0x108B44u);
    ctx->pc = 0x108B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108B3Cu;
    // 0x108b40: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5008u, 0x108B3Cu, 0x108B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108B44u;
label_108b44:
    // 0x108b44: 0x1000016f  b           . + 4 + (0x16F << 2)
    ctx->pc = 0x108B44u;
    {
        const bool branch_taken_0x108b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B44u;
        // 0x108b48: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b44) {
            ctx->pc = 0x109104u;
            return;
        }
    }
    ctx->pc = 0x108B4Cu;
    // 0x108b4c: 0x0  nop
    ctx->pc = 0x108b4cu;
    // NOP
    ctx->pc = 0x108b50u;
}
