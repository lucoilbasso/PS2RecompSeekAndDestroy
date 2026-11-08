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

// Function: entry_00176f58
// Address: 0x176f58 - 0x176fa4
void entry_00176f58_0x176f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176f58_0x176f58");
#endif

    switch (ctx->pc) {
        case 0x176f74u: goto label_176f74;
        case 0x176f8cu: goto label_176f8c;
        default: break;
    }

    ctx->pc = 0x176f58u;

label_176f58:
    // 0x176f58: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x176f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x176f5c: 0x3a310001  xori        $s1, $s1, 0x1
    ctx->pc = 0x176f5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x176f60: 0x8f848d0c  lw          $a0, -0x72F4($gp)
    ctx->pc = 0x176f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937868)));
    // 0x176f64: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x176f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x176f68: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x176f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x176f6c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x176F6Cu;
    SET_GPR_U32(ctx, 31, 0x176F74u);
    ctx->pc = 0x176F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176F6Cu;
    // 0x176f70: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x176F6Cu, 0x176F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176F74u;
label_176f74:
    // 0x176f74: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x176f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x176f78: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x176f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x176f7c: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x176f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x176f80: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x176f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x176f84: 0xc05df26  jal         func_177C98
    ctx->pc = 0x176F84u;
    SET_GPR_U32(ctx, 31, 0x176F8Cu);
    ctx->pc = 0x176F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176F84u;
    // 0x176f88: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177C98u, 0x176F84u, 0x176F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176F8Cu;
label_176f8c:
    // 0x176f8c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x176f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x176f90: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x176f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x176f94: 0x94640020  lhu         $a0, 0x20($v1)
    ctx->pc = 0x176f94u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x176f98: 0x30820030  andi        $v0, $a0, 0x30
    ctx->pc = 0x176f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x176f9c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x176F9Cu;
    {
        const bool branch_taken_0x176f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F9Cu;
        // 0x176fa0: 0xa7a40000  sh          $a0, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f9c) {
            ctx->pc = 0x176F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176f58;
        }
    }
    ctx->pc = 0x176FA4u;
}
