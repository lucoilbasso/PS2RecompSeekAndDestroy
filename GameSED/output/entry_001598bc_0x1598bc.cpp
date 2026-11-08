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

// Function: entry_001598bc
// Address: 0x1598bc - 0x1598f0
void entry_001598bc_0x1598bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001598bc_0x1598bc");
#endif

    switch (ctx->pc) {
        case 0x1598dcu: goto label_1598dc;
        default: break;
    }

    ctx->pc = 0x1598bcu;

label_1598bc:
    // 0x1598bc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1598bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1598c0:
    // 0x1598c0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1598c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1598c4:
    // 0x1598c4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1598c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1598c8:
    // 0x1598c8: 0x8e450120  lw          $a1, 0x120($s2)
    ctx->pc = 0x1598c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
label_1598cc:
    // 0x1598cc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1598ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1598d0:
    // 0x1598d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1598d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1598d4:
    // 0x1598d4: 0x60f809  jalr        $v1
label_1598d8:
    if (ctx->pc == 0x1598D8u) {
        ctx->pc = 0x1598D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598D4u;
        // 0x1598d8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1598DCu;
        goto label_1598dc;
    }
    ctx->pc = 0x1598D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1598DCu);
        ctx->pc = 0x1598D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598D4u;
        // 0x1598d8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1598D4u, 0x1598DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1598DCu;
label_1598dc:
    // 0x1598dc: 0x56c0ffbc  bnel        $s6, $zero, . + 4 + (-0x44 << 2)
label_1598e0:
    if (ctx->pc == 0x1598E0u) {
        ctx->pc = 0x1598E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598DCu;
        // 0x1598e0: 0x8ee20160  lw          $v0, 0x160($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1598E4u;
        goto label_1598e4;
    }
    ctx->pc = 0x1598DCu;
    {
        const bool branch_taken_0x1598dc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1598dc) {
            ctx->pc = 0x1598E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1598DCu;
            // 0x1598e0: 0x8ee20160  lw          $v0, 0x160($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1597D0u;
            return;
        }
    }
    ctx->pc = 0x1598E4u;
label_1598e4:
    // 0x1598e4: 0x10000081  b           . + 4 + (0x81 << 2)
label_1598e8:
    if (ctx->pc == 0x1598E8u) {
        ctx->pc = 0x1598E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598E4u;
        // 0x1598e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1598ECu;
        goto label_1598ec;
    }
    ctx->pc = 0x1598E4u;
    {
        const bool branch_taken_0x1598e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1598E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598E4u;
        // 0x1598e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598e4) {
            ctx->pc = 0x159AECu;
            return;
        }
    }
    ctx->pc = 0x1598ECu;
label_1598ec:
    // 0x1598ec: 0x0  nop
    ctx->pc = 0x1598ecu;
    // NOP
    ctx->pc = 0x1598f0u;
}
