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

// Function: entry_0016989c
// Address: 0x16989c - 0x1698dc
void entry_0016989c_0x16989c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016989c_0x16989c");
#endif

    switch (ctx->pc) {
        case 0x1698d8u: goto label_1698d8;
        default: break;
    }

    ctx->pc = 0x16989cu;

label_16989c:
    // 0x16989c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x16989cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1698a0:
    // 0x1698a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1698a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1698a4:
    // 0x1698a4: 0x8e2401b4  lw          $a0, 0x1B4($s1)
    ctx->pc = 0x1698a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_1698a8:
    // 0x1698a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1698a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1698ac:
    // 0x1698ac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1698acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1698b0:
    // 0x1698b0: 0x8c421108  lw          $v0, 0x1108($v0)
    ctx->pc = 0x1698b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4360)));
label_1698b4:
    // 0x1698b4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1698b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1698b8:
    // 0x1698b8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1698b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1698bc:
    // 0x1698bc: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1698bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1698c0:
    // 0x1698c0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1698c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1698c4:
    // 0x1698c4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1698c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1698c8:
    // 0x1698c8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1698c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1698cc:
    // 0x1698cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1698ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1698d0:
    // 0x1698d0: 0x60f809  jalr        $v1
label_1698d4:
    if (ctx->pc == 0x1698D4u) {
        ctx->pc = 0x1698D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1698D0u;
        // 0x1698d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1698D8u;
        goto label_1698d8;
    }
    ctx->pc = 0x1698D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1698D8u);
        ctx->pc = 0x1698D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1698D0u;
        // 0x1698d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1698D0u, 0x1698D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1698D8u;
label_1698d8:
    // 0x1698d8: 0x2605111c  addiu       $a1, $s0, 0x111C
    ctx->pc = 0x1698d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
    ctx->pc = 0x1698dcu;
}
