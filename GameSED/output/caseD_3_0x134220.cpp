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

// Function: caseD_3
// Address: 0x134220 - 0x134248
void caseD_3_0x134220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x134220");
#endif

    switch (ctx->pc) {
        case 0x134240u: goto label_134240;
        default: break;
    }

    ctx->pc = 0x134220u;

    // 0x134220: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x134220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x134224: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x134224u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x134228: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x134228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x13422c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13422cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134230: 0x50510005  beql        $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x134230u;
    {
        const bool branch_taken_0x134230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x134230) {
            ctx->pc = 0x134234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134230u;
            // 0x134234: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134248u;
            return;
        }
    }
    ctx->pc = 0x134238u;
    // 0x134238: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134238u;
    SET_GPR_U32(ctx, 31, 0x134240u);
    ctx->pc = 0x13423Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134238u;
    // 0x13423c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134238u, 0x134240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134240u;
label_134240:
    // 0x134240: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x134240u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x134244: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x134244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x134248u;
}
