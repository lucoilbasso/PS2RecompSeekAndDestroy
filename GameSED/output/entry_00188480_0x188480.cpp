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

// Function: entry_00188480
// Address: 0x188480 - 0x1884b0
void entry_00188480_0x188480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188480_0x188480");
#endif

    switch (ctx->pc) {
        case 0x188488u: goto label_188488;
        default: break;
    }

    ctx->pc = 0x188480u;

label_188480:
    // 0x188480: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x188480u;
    SET_GPR_U32(ctx, 31, 0x188488u);
    ctx->pc = 0x188484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188480u;
    // 0x188484: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x188480u, 0x188488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188488u;
label_188488:
    // 0x188488: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x188488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x18848c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x18848Cu;
    {
        const bool branch_taken_0x18848c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x188490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18848Cu;
        // 0x188490: 0x13102b  sltu        $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18848c) {
            ctx->pc = 0x188480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188480;
        }
    }
    ctx->pc = 0x188494u;
    // 0x188494: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x188494u;
    {
        const bool branch_taken_0x188494 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x188498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188494u;
        // 0x188498: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188494) {
            ctx->pc = 0x1884B0u;
            return;
        }
    }
    ctx->pc = 0x18849Cu;
    // 0x18849c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x18849cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1884a0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1884a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1884a4: 0x2041824  and         $v1, $s0, $a0
    ctx->pc = 0x1884a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x1884a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1884A8u;
    {
        const bool branch_taken_0x1884a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1884ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884A8u;
        // 0x1884ac: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1884a8) {
            ctx->pc = 0x1884B8u;
            return;
        }
    }
    ctx->pc = 0x1884B0u;
}
