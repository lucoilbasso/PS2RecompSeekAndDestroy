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

// Function: entry_00110cc8
// Address: 0x110cc8 - 0x110d08
void entry_00110cc8_0x110cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110cc8_0x110cc8");
#endif

    switch (ctx->pc) {
        case 0x110cd4u: goto label_110cd4;
        default: break;
    }

    ctx->pc = 0x110cc8u;

label_110cc8:
    // 0x110cc8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x110cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_110ccc:
    // 0x110ccc: 0xc06a26e  jal         func_1A89B8
label_110cd0:
    if (ctx->pc == 0x110CD0u) {
        ctx->pc = 0x110CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CCCu;
        // 0x110cd0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110CD4u;
        goto label_110cd4;
    }
    ctx->pc = 0x110CCCu;
    SET_GPR_U32(ctx, 31, 0x110CD4u);
    ctx->pc = 0x110CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110CCCu;
    // 0x110cd0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x110CCCu, 0x110CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110CD4u;
label_110cd4:
    // 0x110cd4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x110cd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_110cd8:
    // 0x110cd8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x110cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_110cdc:
    // 0x110cdc: 0x8c52b830  lw          $s2, -0x47D0($v0)
    ctx->pc = 0x110cdcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_110ce0:
    // 0x110ce0: 0x2e830021  sltiu       $v1, $s4, 0x21
    ctx->pc = 0x110ce0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
label_110ce4:
    // 0x110ce4: 0x8f918d10  lw          $s1, -0x72F0($gp)
    ctx->pc = 0x110ce4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_110ce8:
    // 0x110ce8: 0x106000ef  beqz        $v1, . + 4 + (0xEF << 2)
label_110cec:
    if (ctx->pc == 0x110CECu) {
        ctx->pc = 0x110CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CE8u;
        // 0x110cec: 0x8e500040  lw          $s0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110CF0u;
        goto label_110cf0;
    }
    ctx->pc = 0x110CE8u;
    {
        const bool branch_taken_0x110ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x110CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CE8u;
        // 0x110cec: 0x8e500040  lw          $s0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ce8) {
            ctx->pc = 0x1110A8u;
            return;
        }
    }
    ctx->pc = 0x110CF0u;
label_110cf0:
    // 0x110cf0: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x110cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_110cf4:
    // 0x110cf4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x110cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_110cf8:
    // 0x110cf8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x110cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_110cfc:
    // 0x110cfc: 0x8c633f00  lw          $v1, 0x3F00($v1)
    ctx->pc = 0x110cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16128)));
label_110d00:
    // 0x110d00: 0x600008  jr          $v1
label_110d04:
    if (ctx->pc == 0x110D04u) {
        ctx->pc = 0x110D08u;
        goto label_fallthrough_0x110d00;
    }
    ctx->pc = 0x110D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110D00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x110d00:
    ctx->pc = 0x110D08u;
}
