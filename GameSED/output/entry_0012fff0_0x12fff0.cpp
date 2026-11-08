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

// Function: entry_0012fff0
// Address: 0x12fff0 - 0x130018
void entry_0012fff0_0x12fff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fff0_0x12fff0");
#endif

    switch (ctx->pc) {
        case 0x12fffcu: goto label_12fffc;
        default: break;
    }

    ctx->pc = 0x12fff0u;

    // 0x12fff0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12fff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fff4: 0xc04844a  jal         func_121128
    ctx->pc = 0x12FFF4u;
    SET_GPR_U32(ctx, 31, 0x12FFFCu);
    ctx->pc = 0x12FFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FFF4u;
    // 0x12fff8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12FFF4u, 0x12FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FFFCu;
label_12fffc:
    // 0x12fffc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12fffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130000: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x130000u;
    {
        const bool branch_taken_0x130000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x130004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130000u;
        // 0x130004: 0x2630006c  addiu       $s0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130000) {
            ctx->pc = 0x130018u;
            return;
        }
    }
    ctx->pc = 0x130008u;
    // 0x130008: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x130008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13000c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x13000cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x130010: 0xa6220064  sh          $v0, 0x64($s1)
    ctx->pc = 0x130010u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 2));
    // 0x130014: 0xa6230132  sh          $v1, 0x132($s1)
    ctx->pc = 0x130014u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 306), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x130018u;
}
