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

// Function: entry_0014d208
// Address: 0x14d208 - 0x14d22c
void entry_0014d208_0x14d208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d208_0x14d208");
#endif

    switch (ctx->pc) {
        case 0x14d220u: goto label_14d220;
        default: break;
    }

    ctx->pc = 0x14d208u;

label_14d208:
    // 0x14d208: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x14d208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14d20c:
    // 0x14d20c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x14d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_14d210:
    // 0x14d210: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14d210u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14d214:
    // 0x14d214: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x14d214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14d218:
    // 0x14d218: 0xa0f809  jalr        $a1
label_14d21c:
    if (ctx->pc == 0x14D21Cu) {
        ctx->pc = 0x14D21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D218u;
        // 0x14d21c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D220u;
        goto label_14d220;
    }
    ctx->pc = 0x14D218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x14D220u);
        ctx->pc = 0x14D21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D218u;
        // 0x14d21c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D218u, 0x14D220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14D220u;
label_14d220:
    // 0x14d220: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x14d220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_14d224:
    // 0x14d224: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x14d224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_14d228:
    // 0x14d228: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x14d228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x14d22cu;
}
