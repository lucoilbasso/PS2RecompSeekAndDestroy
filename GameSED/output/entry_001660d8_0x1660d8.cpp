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

// Function: entry_001660d8
// Address: 0x1660d8 - 0x1660f8
void entry_001660d8_0x1660d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001660d8_0x1660d8");
#endif

    switch (ctx->pc) {
        case 0x1660ecu: goto label_1660ec;
        default: break;
    }

    ctx->pc = 0x1660d8u;

    // 0x1660d8: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x1660d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1660dc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1660dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1660e0: 0x34420022  ori         $v0, $v0, 0x22
    ctx->pc = 0x1660e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34);
    // 0x1660e4: 0xc05945a  jal         func_165168
    ctx->pc = 0x1660E4u;
    SET_GPR_U32(ctx, 31, 0x1660ECu);
    ctx->pc = 0x1660E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1660E4u;
    // 0x1660e8: 0xae020c04  sw          $v0, 0xC04($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 3076), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165168u, 0x1660E4u, 0x1660ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1660ECu;
label_1660ec:
    // 0x1660ec: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1660ECu;
    {
        const bool branch_taken_0x1660ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1660F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660ECu;
        // 0x1660f0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660ec) {
            ctx->pc = 0x166238u;
            return;
        }
    }
    ctx->pc = 0x1660F4u;
    // 0x1660f4: 0x0  nop
    ctx->pc = 0x1660f4u;
    // NOP
    ctx->pc = 0x1660f8u;
}
