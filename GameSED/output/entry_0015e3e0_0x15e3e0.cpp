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

// Function: entry_0015e3e0
// Address: 0x15e3e0 - 0x15e410
void entry_0015e3e0_0x15e3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e3e0_0x15e3e0");
#endif

    switch (ctx->pc) {
        case 0x15e404u: goto label_15e404;
        default: break;
    }

    ctx->pc = 0x15e3e0u;

label_15e3e0:
    // 0x15e3e0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15e3e4:
    // 0x15e3e4: 0x10c0005a  beqz        $a2, . + 4 + (0x5A << 2)
label_15e3e8:
    if (ctx->pc == 0x15E3E8u) {
        ctx->pc = 0x15E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3E4u;
        // 0x15e3e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E3ECu;
        goto label_15e3ec;
    }
    ctx->pc = 0x15E3E4u;
    {
        const bool branch_taken_0x15e3e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3E4u;
        // 0x15e3e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e3e4) {
            ctx->pc = 0x15E550u;
            return;
        }
    }
    ctx->pc = 0x15E3ECu;
label_15e3ec:
    // 0x15e3ec: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e3f0:
    // 0x15e3f0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e3f4:
    // 0x15e3f4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e3f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e3f8:
    // 0x15e3f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e3fc:
    // 0x15e3fc: 0x60f809  jalr        $v1
label_15e400:
    if (ctx->pc == 0x15E400u) {
        ctx->pc = 0x15E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3FCu;
        // 0x15e400: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E404u;
        goto label_15e404;
    }
    ctx->pc = 0x15E3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E404u);
        ctx->pc = 0x15E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3FCu;
        // 0x15e400: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E3FCu, 0x15E404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E404u;
label_15e404:
    // 0x15e404: 0x10000053  b           . + 4 + (0x53 << 2)
label_15e408:
    if (ctx->pc == 0x15E408u) {
        ctx->pc = 0x15E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E404u;
        // 0x15e408: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E40Cu;
        goto label_15e40c;
    }
    ctx->pc = 0x15E404u;
    {
        const bool branch_taken_0x15e404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E404u;
        // 0x15e408: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e404) {
            ctx->pc = 0x15E554u;
            return;
        }
    }
    ctx->pc = 0x15E40Cu;
label_15e40c:
    // 0x15e40c: 0x0  nop
    ctx->pc = 0x15e40cu;
    // NOP
    ctx->pc = 0x15e410u;
}
