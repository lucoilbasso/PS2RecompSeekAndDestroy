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

// Function: entry_00159ac8
// Address: 0x159ac8 - 0x159ae8
void entry_00159ac8_0x159ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159ac8_0x159ac8");
#endif

    ctx->pc = 0x159ac8u;

label_159ac8:
    // 0x159ac8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x159ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_159acc:
    // 0x159acc: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x159accu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_159ad0:
    // 0x159ad0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x159ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_159ad4:
    // 0x159ad4: 0x8e650120  lw          $a1, 0x120($s3)
    ctx->pc = 0x159ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
label_159ad8:
    // 0x159ad8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x159ad8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_159adc:
    // 0x159adc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x159adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_159ae0:
    // 0x159ae0: 0x60f809  jalr        $v1
label_159ae4:
    if (ctx->pc == 0x159AE4u) {
        ctx->pc = 0x159AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AE0u;
        // 0x159ae4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159AE8u;
        goto label_fallthrough_0x159ae0;
    }
    ctx->pc = 0x159AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x159AE8u);
        ctx->pc = 0x159AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AE0u;
        // 0x159ae4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159AE0u, 0x159AE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x159ae0:
    ctx->pc = 0x159AE8u;
}
