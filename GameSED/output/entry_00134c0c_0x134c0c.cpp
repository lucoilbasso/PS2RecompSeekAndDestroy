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

// Function: entry_00134c0c
// Address: 0x134c0c - 0x134c2c
void entry_00134c0c_0x134c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134c0c_0x134c0c");
#endif

    switch (ctx->pc) {
        case 0x134c24u: goto label_134c24;
        default: break;
    }

    ctx->pc = 0x134c0cu;

    // 0x134c0c: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x134c0cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x134c10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x134c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134c14: 0x50510005  beql        $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x134C14u;
    {
        const bool branch_taken_0x134c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x134c14) {
            ctx->pc = 0x134C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134C14u;
            // 0x134c18: 0x8e62001c  lw          $v0, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134C2Cu;
            return;
        }
    }
    ctx->pc = 0x134C1Cu;
    // 0x134c1c: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134C1Cu;
    SET_GPR_U32(ctx, 31, 0x134C24u);
    ctx->pc = 0x134C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134C1Cu;
    // 0x134c20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134C1Cu, 0x134C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134C24u;
label_134c24:
    // 0x134c24: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x134c24u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x134c28: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x134c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    ctx->pc = 0x134c2cu;
}
