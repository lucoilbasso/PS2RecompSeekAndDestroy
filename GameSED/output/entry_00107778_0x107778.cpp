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

// Function: entry_00107778
// Address: 0x107778 - 0x107790
void entry_00107778_0x107778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107778_0x107778");
#endif

    ctx->pc = 0x107778u;

label_107778:
    // 0x107778: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x107778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_10777c:
    // 0x10777c: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x10777cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
label_107780:
    // 0x107780: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x107780u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_107784:
    // 0x107784: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x107784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_107788:
    // 0x107788: 0x60f809  jalr        $v1
label_10778c:
    if (ctx->pc == 0x10778Cu) {
        ctx->pc = 0x10778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107788u;
        // 0x10778c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107790u;
        goto label_fallthrough_0x107788;
    }
    ctx->pc = 0x107788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x107790u);
        ctx->pc = 0x10778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107788u;
        // 0x10778c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107788u, 0x107790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x107788:
    ctx->pc = 0x107790u;
}
