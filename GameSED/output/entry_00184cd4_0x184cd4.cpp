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

// Function: entry_00184cd4
// Address: 0x184cd4 - 0x184cf0
void entry_00184cd4_0x184cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184cd4_0x184cd4");
#endif

    switch (ctx->pc) {
        case 0x184cecu: goto label_184cec;
        default: break;
    }

    ctx->pc = 0x184cd4u;

label_184cd4:
    // 0x184cd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x184cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184cd8:
    // 0x184cd8: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x184cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_184cdc:
    // 0x184cdc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x184cdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_184ce0:
    // 0x184ce0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x184ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_184ce4:
    // 0x184ce4: 0x60f809  jalr        $v1
label_184ce8:
    if (ctx->pc == 0x184CE8u) {
        ctx->pc = 0x184CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184CE4u;
        // 0x184ce8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184CECu;
        goto label_184cec;
    }
    ctx->pc = 0x184CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x184CECu);
        ctx->pc = 0x184CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184CE4u;
        // 0x184ce8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184CE4u, 0x184CECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x184CECu;
label_184cec:
    // 0x184cec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x184cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x184cf0u;
}
