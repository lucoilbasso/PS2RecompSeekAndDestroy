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

// Function: entry_001b7f50
// Address: 0x1b7f50 - 0x1b7f84
void entry_001b7f50_0x1b7f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7f50_0x1b7f50");
#endif

    switch (ctx->pc) {
        case 0x1b7f50u: goto label_1b7f50;
        case 0x1b7f54u: goto label_1b7f54;
        case 0x1b7f58u: goto label_1b7f58;
        case 0x1b7f5cu: goto label_1b7f5c;
        case 0x1b7f60u: goto label_1b7f60;
        case 0x1b7f64u: goto label_1b7f64;
        case 0x1b7f68u: goto label_1b7f68;
        case 0x1b7f6cu: goto label_1b7f6c;
        case 0x1b7f70u: goto label_1b7f70;
        case 0x1b7f74u: goto label_1b7f74;
        case 0x1b7f78u: goto label_1b7f78;
        case 0x1b7f7cu: goto label_1b7f7c;
        case 0x1b7f80u: goto label_1b7f80;
        default: break;
    }

    ctx->pc = 0x1b7f50u;

label_1b7f50:
    // 0x1b7f50: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1b7f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1b7f54:
    // 0x1b7f54: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1b7f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1b7f58:
    // 0x1b7f58: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1b7f58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b7f5c:
    // 0x1b7f5c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1b7f60:
    if (ctx->pc == 0x1B7F60u) {
        ctx->pc = 0x1B7F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F5Cu;
        // 0x1b7f60: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7F64u;
        goto label_1b7f64;
    }
    ctx->pc = 0x1B7F5Cu;
    {
        const bool branch_taken_0x1b7f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F5Cu;
        // 0x1b7f60: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f5c) {
            ctx->pc = 0x1B7F84u;
            return;
        }
    }
    ctx->pc = 0x1B7F64u;
label_1b7f64:
    // 0x1b7f64: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1b7f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b7f68:
    // 0x1b7f68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b7f6c:
    // 0x1b7f6c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1b7f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b7f70:
    // 0x1b7f70: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_1b7f74:
    if (ctx->pc == 0x1B7F74u) {
        ctx->pc = 0x1B7F78u;
        goto label_1b7f78;
    }
    ctx->pc = 0x1B7F70u;
    {
        const bool branch_taken_0x1b7f70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7f70) {
            ctx->pc = 0x1B7F84u;
            return;
        }
    }
    ctx->pc = 0x1B7F78u;
label_1b7f78:
    // 0x1b7f78: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1b7f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b7f7c:
    // 0x1b7f7c: 0xc0f809  jalr        $a2
label_1b7f80:
    if (ctx->pc == 0x1B7F80u) {
        ctx->pc = 0x1B7F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F7Cu;
        // 0x1b7f80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7F84u;
        goto label_fallthrough_0x1b7f7c;
    }
    ctx->pc = 0x1B7F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1B7F84u);
        ctx->pc = 0x1B7F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F7Cu;
        // 0x1b7f80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7F7Cu, 0x1B7F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1b7f7c:
    ctx->pc = 0x1B7F84u;
}
