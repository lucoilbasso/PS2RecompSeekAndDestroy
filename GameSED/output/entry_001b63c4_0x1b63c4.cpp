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

// Function: entry_001b63c4
// Address: 0x1b63c4 - 0x1b6410
void entry_001b63c4_0x1b63c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b63c4_0x1b63c4");
#endif

    switch (ctx->pc) {
        case 0x1b63d8u: goto label_1b63d8;
        default: break;
    }

    ctx->pc = 0x1b63c4u;

    // 0x1b63c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b63c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b63c8: 0x2451b408  addiu       $s1, $v0, -0x4BF8
    ctx->pc = 0x1b63c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947848));
    // 0x1b63cc: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x1b63ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x1b63d0: 0xc07434a  jal         func_1D0D28
    ctx->pc = 0x1B63D0u;
    SET_GPR_U32(ctx, 31, 0x1B63D8u);
    ctx->pc = 0x1B63D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B63D0u;
    // 0x1b63d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D28u, 0x1B63D0u, 0x1B63D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B63D8u;
label_1b63d8:
    // 0x1b63d8: 0x2622fff8  addiu       $v0, $s1, -0x8
    ctx->pc = 0x1b63d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x1b63dc: 0x1200004c  beqz        $s0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1B63DCu;
    {
        const bool branch_taken_0x1b63dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B63E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B63DCu;
        // 0x1b63e0: 0xa0400103  sb          $zero, 0x103($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 259), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b63dc) {
            ctx->pc = 0x1B6510u;
            return;
        }
    }
    ctx->pc = 0x1B63E4u;
    // 0x1b63e4: 0x2a4200fd  slti        $v0, $s2, 0xFD
    ctx->pc = 0x1b63e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)253) ? 1 : 0);
    // 0x1b63e8: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1B63E8u;
    {
        const bool branch_taken_0x1b63e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B63ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B63E8u;
        // 0x1b63ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b63e8) {
            ctx->pc = 0x1B64F8u;
            return;
        }
    }
    ctx->pc = 0x1B63F0u;
    // 0x1b63f0: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x1b63f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
    // 0x1b63f4: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x1b63f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x1b63f8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1b63f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1b63fc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B63FCu;
    {
        const bool branch_taken_0x1b63fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B63FCu;
        // 0x1b6400: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b63fc) {
            ctx->pc = 0x1B646Cu;
            return;
        }
    }
    ctx->pc = 0x1B6404u;
    // 0x1b6404: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1b6404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1b6408: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b6408u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b640c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1b640cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x1b6410u;
}
