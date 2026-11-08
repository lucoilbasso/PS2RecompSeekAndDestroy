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

// Function: entry_00132d50
// Address: 0x132d50 - 0x132d98
void entry_00132d50_0x132d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132d50_0x132d50");
#endif

    switch (ctx->pc) {
        case 0x132d68u: goto label_132d68;
        case 0x132d74u: goto label_132d74;
        default: break;
    }

    ctx->pc = 0x132d50u;

label_132d50:
    // 0x132d50: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x132d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_132d54:
    // 0x132d54: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x132d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_132d58:
    // 0x132d58: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x132d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_132d5c:
    // 0x132d5c: 0x8e120024  lw          $s2, 0x24($s0)
    ctx->pc = 0x132d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_132d60:
    // 0x132d60: 0xc06a26e  jal         func_1A89B8
label_132d64:
    if (ctx->pc == 0x132D64u) {
        ctx->pc = 0x132D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132D60u;
        // 0x132d64: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132D68u;
        goto label_132d68;
    }
    ctx->pc = 0x132D60u;
    SET_GPR_U32(ctx, 31, 0x132D68u);
    ctx->pc = 0x132D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132D60u;
    // 0x132d64: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x132D60u, 0x132D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D68u;
label_132d68:
    // 0x132d68: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x132d68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132d6c:
    // 0x132d6c: 0xc06a26e  jal         func_1A89B8
label_132d70:
    if (ctx->pc == 0x132D70u) {
        ctx->pc = 0x132D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132D6Cu;
        // 0x132d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132D74u;
        goto label_132d74;
    }
    ctx->pc = 0x132D6Cu;
    SET_GPR_U32(ctx, 31, 0x132D74u);
    ctx->pc = 0x132D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132D6Cu;
    // 0x132d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x132D6Cu, 0x132D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D74u;
label_132d74:
    // 0x132d74: 0x2e630005  sltiu       $v1, $s3, 0x5
    ctx->pc = 0x132d74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_132d78:
    // 0x132d78: 0x10600086  beqz        $v1, . + 4 + (0x86 << 2)
label_132d7c:
    if (ctx->pc == 0x132D7Cu) {
        ctx->pc = 0x132D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132D78u;
        // 0x132d7c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132D80u;
        goto label_132d80;
    }
    ctx->pc = 0x132D78u;
    {
        const bool branch_taken_0x132d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x132D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132D78u;
        // 0x132d7c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132d78) {
            ctx->pc = 0x132F94u;
            return;
        }
    }
    ctx->pc = 0x132D80u;
label_132d80:
    // 0x132d80: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x132d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_132d84:
    // 0x132d84: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x132d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_132d88:
    // 0x132d88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x132d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_132d8c:
    // 0x132d8c: 0x8c6363d0  lw          $v1, 0x63D0($v1)
    ctx->pc = 0x132d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25552)));
label_132d90:
    // 0x132d90: 0x600008  jr          $v1
label_132d94:
    if (ctx->pc == 0x132D94u) {
        ctx->pc = 0x132D98u;
        goto label_fallthrough_0x132d90;
    }
    ctx->pc = 0x132D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132D90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x132d90:
    ctx->pc = 0x132D98u;
}
