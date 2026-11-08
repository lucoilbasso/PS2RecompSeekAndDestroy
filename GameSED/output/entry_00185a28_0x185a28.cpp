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

// Function: entry_00185a28
// Address: 0x185a28 - 0x185a64
void entry_00185a28_0x185a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185a28_0x185a28");
#endif

    switch (ctx->pc) {
        case 0x185a58u: goto label_185a58;
        default: break;
    }

    ctx->pc = 0x185a28u;

    // 0x185a28: 0x26020148  addiu       $v0, $s0, 0x148
    ctx->pc = 0x185a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    // 0x185a2c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x185a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x185a30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x185a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185a34: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x185a34u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x185a38: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x185a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x185a3c: 0xae840008  sw          $a0, 0x8($s4)
    ctx->pc = 0x185a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 4));
    // 0x185a40: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x185A40u;
    {
        const bool branch_taken_0x185a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x185A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A40u;
        // 0x185a44: 0xac540000  sw          $s4, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a40) {
            ctx->pc = 0x185A64u;
            return;
        }
    }
    ctx->pc = 0x185A48u;
    // 0x185a48: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x185a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x185a4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x185a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a50: 0xc068584  jal         func_1A1610
    ctx->pc = 0x185A50u;
    SET_GPR_U32(ctx, 31, 0x185A58u);
    ctx->pc = 0x185A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185A50u;
    // 0x185a54: 0x24841590  addiu       $a0, $a0, 0x1590 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x185A50u, 0x185A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185A58u;
label_185a58:
    // 0x185a58: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x185a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x185a5c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x185a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x185a60: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x185a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x185a64u;
}
