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

// Function: Exit
// Address: 0x1b7210 - 0x1b7238
void Exit_0x1b7210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Exit_0x1b7210");
#endif

    switch (ctx->pc) {
        case 0x1b7224u: goto label_1b7224;
        default: break;
    }

    ctx->pc = 0x1b7210u;

    // 0x1b7210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b7214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7218: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b721c: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1B721Cu;
    SET_GPR_U32(ctx, 31, 0x1B7224u);
    ctx->pc = 0x1B7220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B721Cu;
    // 0x1b7220: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1B721Cu, 0x1B7224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7224u;
label_1b7224:
    // 0x1b7224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b722c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b722cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7230: 0x806bc20  j           func_1AF080
    ctx->pc = 0x1B7230u;
    ctx->pc = 0x1B7234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7230u;
    // 0x1b7234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF080u;
    ps2__Exit_0x1af080(rdram, ctx, runtime); return;
    ctx->pc = 0x1B7238u;
}
