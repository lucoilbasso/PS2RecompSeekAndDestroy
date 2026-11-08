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

// Function: entry_00114e4c
// Address: 0x114e4c - 0x114e94
void entry_00114e4c_0x114e4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114e4c_0x114e4c");
#endif

    switch (ctx->pc) {
        case 0x114e78u: goto label_114e78;
        case 0x114e90u: goto label_114e90;
        default: break;
    }

    ctx->pc = 0x114e4cu;

    // 0x114e4c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x114e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x114e50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x114e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x114e54: 0x8442c0a8  lh          $v0, -0x3F58($v0)
    ctx->pc = 0x114e54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294951080)));
    // 0x114e58: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x114e58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x114e5c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x114E5Cu;
    {
        const bool branch_taken_0x114e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114e5c) {
            ctx->pc = 0x114E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114E5Cu;
            // 0x114e60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114E94u;
            return;
        }
    }
    ctx->pc = 0x114E64u;
    // 0x114e64: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x114e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x114e68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x114e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114e6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x114e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114e70: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x114E70u;
    SET_GPR_U32(ctx, 31, 0x114E78u);
    ctx->pc = 0x114E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114E70u;
    // 0x114e74: 0x24844348  addiu       $a0, $a0, 0x4348 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x114E70u, 0x114E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E78u;
label_114e78:
    // 0x114e78: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x114e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x114e7c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x114e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x114e80: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x114e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x114e84: 0x24a54380  addiu       $a1, $a1, 0x4380
    ctx->pc = 0x114e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17280));
    // 0x114e88: 0xc068186  jal         func_1A0618
    ctx->pc = 0x114E88u;
    SET_GPR_U32(ctx, 31, 0x114E90u);
    ctx->pc = 0x114E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114E88u;
    // 0x114e8c: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x114E88u, 0x114E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E90u;
label_114e90:
    // 0x114e90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x114e90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x114e94u;
}
