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

// Function: entry_00130728
// Address: 0x130728 - 0x130744
void entry_00130728_0x130728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130728_0x130728");
#endif

    switch (ctx->pc) {
        case 0x130730u: goto label_130730;
        default: break;
    }

    ctx->pc = 0x130728u;

    // 0x130728: 0xc04844a  jal         func_121128
    ctx->pc = 0x130728u;
    SET_GPR_U32(ctx, 31, 0x130730u);
    ctx->pc = 0x13072Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130728u;
    // 0x13072c: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130728u, 0x130730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130730u;
label_130730:
    // 0x130730: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x130730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130734: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x130734u;
    {
        const bool branch_taken_0x130734 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130734u;
        // 0x130738: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130734) {
            ctx->pc = 0x130744u;
            return;
        }
    }
    ctx->pc = 0x13073Cu;
    // 0x13073c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x13073cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x130740: 0xa62200c4  sh          $v0, 0xC4($s1)
    ctx->pc = 0x130740u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 196), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x130744u;
}
