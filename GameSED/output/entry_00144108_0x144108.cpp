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

// Function: entry_00144108
// Address: 0x144108 - 0x144130
void entry_00144108_0x144108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144108_0x144108");
#endif

    switch (ctx->pc) {
        case 0x144114u: goto label_144114;
        case 0x144124u: goto label_144124;
        default: break;
    }

    ctx->pc = 0x144108u;

    // 0x144108: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14410c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14410Cu;
    SET_GPR_U32(ctx, 31, 0x144114u);
    ctx->pc = 0x144110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14410Cu;
    // 0x144110: 0x3c100026  lui         $s0, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14410Cu, 0x144114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144114u;
label_144114:
    // 0x144114: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144118: 0x26102680  addiu       $s0, $s0, 0x2680
    ctx->pc = 0x144118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9856));
    // 0x14411c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14411Cu;
    SET_GPR_U32(ctx, 31, 0x144124u);
    ctx->pc = 0x144120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14411Cu;
    // 0x144120: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14411Cu, 0x144124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144124u;
label_144124:
    // 0x144124: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x144124u;
    {
        const bool branch_taken_0x144124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144124u;
        // 0x144128: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144124) {
            ctx->pc = 0x144160u;
            return;
        }
    }
    ctx->pc = 0x14412Cu;
    // 0x14412c: 0x0  nop
    ctx->pc = 0x14412cu;
    // NOP
    ctx->pc = 0x144130u;
}
