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

// Function: entry_00176460
// Address: 0x176460 - 0x176490
void entry_00176460_0x176460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176460_0x176460");
#endif

    switch (ctx->pc) {
        case 0x176480u: goto label_176480;
        default: break;
    }

    ctx->pc = 0x176460u;

label_176460:
    // 0x176460: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x176460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176464: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x176464u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x176468: 0x26647888  addiu       $a0, $s3, 0x7888
    ctx->pc = 0x176468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 30856));
    // 0x17646c: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x17646cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x176470: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x176470u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x176474: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x176474u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176478: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x176478u;
    SET_GPR_U32(ctx, 31, 0x176480u);
    ctx->pc = 0x17647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176478u;
    // 0x17647c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x176478u, 0x176480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176480u;
label_176480:
    // 0x176480: 0x251182b  sltu        $v1, $s2, $s1
    ctx->pc = 0x176480u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x176484: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x176484u;
    {
        const bool branch_taken_0x176484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x176484) {
            ctx->pc = 0x176488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176484u;
            // 0x176488: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176460;
        }
    }
    ctx->pc = 0x17648Cu;
    // 0x17648c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17648cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x176490u;
}
