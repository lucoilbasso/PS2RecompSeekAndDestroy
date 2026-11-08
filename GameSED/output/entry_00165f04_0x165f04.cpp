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

// Function: entry_00165f04
// Address: 0x165f04 - 0x165f28
void entry_00165f04_0x165f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165f04_0x165f04");
#endif

    switch (ctx->pc) {
        case 0x165f1cu: goto label_165f1c;
        default: break;
    }

    ctx->pc = 0x165f04u;

    // 0x165f04: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x165f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x165f08: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x165f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165f0c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x165f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x165f10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x165f10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165f14: 0xc0596d8  jal         func_165B60
    ctx->pc = 0x165F14u;
    SET_GPR_U32(ctx, 31, 0x165F1Cu);
    ctx->pc = 0x165F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165F14u;
    // 0x165f18: 0xae020c04  sw          $v0, 0xC04($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 3076), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165B60u, 0x165F14u, 0x165F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165F1Cu;
label_165f1c:
    // 0x165f1c: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x165F1Cu;
    {
        const bool branch_taken_0x165f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F1Cu;
        // 0x165f20: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f1c) {
            ctx->pc = 0x166238u;
            return;
        }
    }
    ctx->pc = 0x165F24u;
    // 0x165f24: 0x0  nop
    ctx->pc = 0x165f24u;
    // NOP
    ctx->pc = 0x165f28u;
}
