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

// Function: entry_0018ee80
// Address: 0x18ee80 - 0x18eeb4
void entry_0018ee80_0x18ee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ee80_0x18ee80");
#endif

    switch (ctx->pc) {
        case 0x18eea0u: goto label_18eea0;
        default: break;
    }

    ctx->pc = 0x18ee80u;

    // 0x18ee80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18ee80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18ee84: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18ee84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x18ee88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18ee88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ee8c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18EE8Cu;
    {
        const bool branch_taken_0x18ee8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE8Cu;
        // 0x18ee90: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee8c) {
            ctx->pc = 0x18EEB4u;
            return;
        }
    }
    ctx->pc = 0x18EE94u;
    // 0x18ee94: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x18ee94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x18ee98: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x18EE98u;
    SET_GPR_U32(ctx, 31, 0x18EEA0u);
    ctx->pc = 0x18EE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EE98u;
    // 0x18ee9c: 0x24848140  addiu       $a0, $a0, -0x7EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x18EE98u, 0x18EEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EEA0u;
label_18eea0:
    // 0x18eea0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18eea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18eea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18eea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eea8: 0x24a58158  addiu       $a1, $a1, -0x7EA8
    ctx->pc = 0x18eea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934872));
    // 0x18eeac: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18EEACu;
    SET_GPR_U32(ctx, 31, 0x18EEB4u);
    ctx->pc = 0x18EEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EEACu;
    // 0x18eeb0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18EEACu, 0x18EEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EEB4u;
}
