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

// Function: entry_001a1004
// Address: 0x1a1004 - 0x1a1040
void entry_001a1004_0x1a1004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1004_0x1a1004");
#endif

    switch (ctx->pc) {
        case 0x1a1034u: goto label_1a1034;
        default: break;
    }

    ctx->pc = 0x1a1004u;

    // 0x1a1004: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a1004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1008: 0x2450e530  addiu       $s0, $v0, -0x1AD0
    ctx->pc = 0x1a1008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960432));
    // 0x1a100c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a100cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a1010: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a1010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a1014: 0x8c422c08  lw          $v0, 0x2C08($v0)
    ctx->pc = 0x1a1014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11272)));
    // 0x1a1018: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A1018u;
    {
        const bool branch_taken_0x1a1018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1018u;
        // 0x1a101c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1018) {
            ctx->pc = 0x1A1040u;
            return;
        }
    }
    ctx->pc = 0x1A1020u;
    // 0x1a1020: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a1020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a1024: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1028: 0x24a58888  addiu       $a1, $a1, -0x7778
    ctx->pc = 0x1a1028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936712));
    // 0x1a102c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A102Cu;
    SET_GPR_U32(ctx, 31, 0x1A1034u);
    ctx->pc = 0x1A1030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A102Cu;
    // 0x1a1030: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A102Cu, 0x1A1034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1034u;
label_1a1034:
    // 0x1a1034: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A1034u;
    {
        const bool branch_taken_0x1a1034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1034) {
            ctx->pc = 0x1A1050u;
            return;
        }
    }
    ctx->pc = 0x1A103Cu;
    // 0x1a103c: 0x0  nop
    ctx->pc = 0x1a103cu;
    // NOP
    ctx->pc = 0x1a1040u;
}
