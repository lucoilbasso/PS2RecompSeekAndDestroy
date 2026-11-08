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

// Function: entry_00159798
// Address: 0x159798 - 0x1597d0
void entry_00159798_0x159798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159798_0x159798");
#endif

    switch (ctx->pc) {
        case 0x1597b8u: goto label_1597b8;
        default: break;
    }

    ctx->pc = 0x159798u;

label_159798:
    // 0x159798: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x159798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_15979c:
    // 0x15979c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x15979cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1597a0:
    // 0x1597a0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1597a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1597a4:
    // 0x1597a4: 0x8ce50120  lw          $a1, 0x120($a3)
    ctx->pc = 0x1597a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 288)));
label_1597a8:
    // 0x1597a8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1597a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1597ac:
    // 0x1597ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1597acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1597b0:
    // 0x1597b0: 0x60f809  jalr        $v1
label_1597b4:
    if (ctx->pc == 0x1597B4u) {
        ctx->pc = 0x1597B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597B0u;
        // 0x1597b4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1597B8u;
        goto label_1597b8;
    }
    ctx->pc = 0x1597B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1597B8u);
        ctx->pc = 0x1597B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597B0u;
        // 0x1597b4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1597B0u, 0x1597B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1597B8u;
label_1597b8:
    // 0x1597b8: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1597b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_1597bc:
    // 0x1597bc: 0x544000cb  bnel        $v0, $zero, . + 4 + (0xCB << 2)
label_1597c0:
    if (ctx->pc == 0x1597C0u) {
        ctx->pc = 0x1597C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597BCu;
        // 0x1597c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1597C4u;
        goto label_1597c4;
    }
    ctx->pc = 0x1597BCu;
    {
        const bool branch_taken_0x1597bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1597bc) {
            ctx->pc = 0x1597C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1597BCu;
            // 0x1597c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159AECu;
            return;
        }
    }
    ctx->pc = 0x1597C4u;
label_1597c4:
    // 0x1597c4: 0x26b303f0  addiu       $s3, $s5, 0x3F0
    ctx->pc = 0x1597c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 1008));
label_1597c8:
    // 0x1597c8: 0x8ee20160  lw          $v0, 0x160($s7)
    ctx->pc = 0x1597c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 352)));
label_1597cc:
    // 0x1597cc: 0x0  nop
    ctx->pc = 0x1597ccu;
    // NOP
    ctx->pc = 0x1597d0u;
}
