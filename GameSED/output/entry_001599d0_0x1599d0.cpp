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

// Function: entry_001599d0
// Address: 0x1599d0 - 0x1599f8
void entry_001599d0_0x1599d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001599d0_0x1599d0");
#endif

    switch (ctx->pc) {
        case 0x1599f0u: goto label_1599f0;
        default: break;
    }

    ctx->pc = 0x1599d0u;

label_1599d0:
    // 0x1599d0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1599d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1599d4:
    // 0x1599d4: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x1599d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1599d8:
    // 0x1599d8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1599d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1599dc:
    // 0x1599dc: 0x8e650120  lw          $a1, 0x120($s3)
    ctx->pc = 0x1599dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
label_1599e0:
    // 0x1599e0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1599e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1599e4:
    // 0x1599e4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1599e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1599e8:
    // 0x1599e8: 0x60f809  jalr        $v1
label_1599ec:
    if (ctx->pc == 0x1599ECu) {
        ctx->pc = 0x1599ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599E8u;
        // 0x1599ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1599F0u;
        goto label_1599f0;
    }
    ctx->pc = 0x1599E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1599F0u);
        ctx->pc = 0x1599ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599E8u;
        // 0x1599ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1599E8u, 0x1599F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1599F0u;
label_1599f0:
    // 0x1599f0: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1599f4:
    if (ctx->pc == 0x1599F4u) {
        ctx->pc = 0x1599F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599F0u;
        // 0x1599f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1599F8u;
        goto label_fallthrough_0x1599f0;
    }
    ctx->pc = 0x1599F0u;
    {
        const bool branch_taken_0x1599f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1599F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599F0u;
        // 0x1599f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1599f0) {
            ctx->pc = 0x159AECu;
            return;
        }
    }
label_fallthrough_0x1599f0:
    ctx->pc = 0x1599F8u;
}
