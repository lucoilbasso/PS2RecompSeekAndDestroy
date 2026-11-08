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

// Function: entry_00108f24
// Address: 0x108f24 - 0x108f40
void entry_00108f24_0x108f24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108f24_0x108f24");
#endif

    switch (ctx->pc) {
        case 0x108f38u: goto label_108f38;
        default: break;
    }

    ctx->pc = 0x108f24u;

    // 0x108f24: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108f28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x108f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108f2c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x108f2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x108f30: 0xc069592  jal         func_1A5648
    ctx->pc = 0x108F30u;
    SET_GPR_U32(ctx, 31, 0x108F38u);
    ctx->pc = 0x108F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F30u;
    // 0x108f34: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5648u, 0x108F30u, 0x108F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F38u;
label_108f38:
    // 0x108f38: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x108F38u;
    {
        const bool branch_taken_0x108f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F38u;
        // 0x108f3c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f38) {
            ctx->pc = 0x109104u;
            return;
        }
    }
    ctx->pc = 0x108F40u;
}
