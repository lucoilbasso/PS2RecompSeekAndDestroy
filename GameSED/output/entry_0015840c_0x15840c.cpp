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

// Function: entry_0015840c
// Address: 0x15840c - 0x158430
void entry_0015840c_0x15840c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015840c_0x15840c");
#endif

    switch (ctx->pc) {
        case 0x15842cu: goto label_15842c;
        default: break;
    }

    ctx->pc = 0x15840cu;

label_15840c:
    // 0x15840c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15840cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_158410:
    // 0x158410: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x158410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158414:
    // 0x158414: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x158414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_158418:
    // 0x158418: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x158418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_15841c:
    // 0x15841c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15841cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_158420:
    // 0x158420: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x158420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_158424:
    // 0x158424: 0x60f809  jalr        $v1
label_158428:
    if (ctx->pc == 0x158428u) {
        ctx->pc = 0x158428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158424u;
        // 0x158428: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15842Cu;
        goto label_15842c;
    }
    ctx->pc = 0x158424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15842Cu);
        ctx->pc = 0x158428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158424u;
        // 0x158428: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158424u, 0x15842Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15842Cu;
label_15842c:
    // 0x15842c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15842cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x158430u;
}
