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

// Function: entry_00197220
// Address: 0x197220 - 0x197254
void entry_00197220_0x197220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197220_0x197220");
#endif

    switch (ctx->pc) {
        case 0x197228u: goto label_197228;
        case 0x197230u: goto label_197230;
        default: break;
    }

    ctx->pc = 0x197220u;

    // 0x197220: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x197220u;
    SET_GPR_U32(ctx, 31, 0x197228u);
    ctx->pc = 0x197224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197220u;
    // 0x197224: 0x8e840084  lw          $a0, 0x84($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x197220u, 0x197228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197228u;
label_197228:
    // 0x197228: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x197228u;
    SET_GPR_U32(ctx, 31, 0x197230u);
    ctx->pc = 0x19722Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197228u;
    // 0x19722c: 0x8e840088  lw          $a0, 0x88($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x197228u, 0x197230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197230u;
label_197230:
    // 0x197230: 0x8e90008c  lw          $s0, 0x8C($s4)
    ctx->pc = 0x197230u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x197234: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x197234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x197238: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x197238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19723c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x19723cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x197240: 0x8e840088  lw          $a0, 0x88($s4)
    ctx->pc = 0x197240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x197244: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x197244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x197248: 0xae85008c  sw          $a1, 0x8C($s4)
    ctx->pc = 0x197248u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 5));
    // 0x19724c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x19724Cu;
    SET_GPR_U32(ctx, 31, 0x197254u);
    ctx->pc = 0x197250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19724Cu;
    // 0x197250: 0xae820080  sw          $v0, 0x80($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x19724Cu, 0x197254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197254u;
}
