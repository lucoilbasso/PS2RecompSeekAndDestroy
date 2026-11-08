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

// Function: entry_0015d4a0
// Address: 0x15d4a0 - 0x15d4d8
void entry_0015d4a0_0x15d4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d4a0_0x15d4a0");
#endif

    switch (ctx->pc) {
        case 0x15d4d0u: goto label_15d4d0;
        default: break;
    }

    ctx->pc = 0x15d4a0u;

label_15d4a0:
    // 0x15d4a0: 0x27868b40  addiu       $a2, $gp, -0x74C0
    ctx->pc = 0x15d4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937408));
label_15d4a4:
    // 0x15d4a4: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x15d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_15d4a8:
    // 0x15d4a8: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x15d4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_15d4ac:
    // 0x15d4ac: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x15d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_15d4b0:
    // 0x15d4b0: 0x24c50004  addiu       $a1, $a2, 0x4
    ctx->pc = 0x15d4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_15d4b4:
    // 0x15d4b4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15d4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_15d4b8:
    // 0x15d4b8: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x15d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_15d4bc:
    // 0x15d4bc: 0xc3280a  movz        $a1, $a2, $v1
    ctx->pc = 0x15d4bcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
label_15d4c0:
    // 0x15d4c0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d4c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d4c4:
    // 0x15d4c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d4c8:
    // 0x15d4c8: 0x60f809  jalr        $v1
label_15d4cc:
    if (ctx->pc == 0x15D4CCu) {
        ctx->pc = 0x15D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4C8u;
        // 0x15d4cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D4D0u;
        goto label_15d4d0;
    }
    ctx->pc = 0x15D4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D4D0u);
        ctx->pc = 0x15D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4C8u;
        // 0x15d4cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D4C8u, 0x15D4D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D4D0u;
label_15d4d0:
    // 0x15d4d0: 0x1000000c  b           . + 4 + (0xC << 2)
label_15d4d4:
    if (ctx->pc == 0x15D4D4u) {
        ctx->pc = 0x15D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4D0u;
        // 0x15d4d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D4D8u;
        goto label_fallthrough_0x15d4d0;
    }
    ctx->pc = 0x15D4D0u;
    {
        const bool branch_taken_0x15d4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4D0u;
        // 0x15d4d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d4d0) {
            ctx->pc = 0x15D504u;
            return;
        }
    }
label_fallthrough_0x15d4d0:
    ctx->pc = 0x15D4D8u;
}
