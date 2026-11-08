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

// Function: entry_001117d0
// Address: 0x1117d0 - 0x1117f4
void entry_001117d0_0x1117d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001117d0_0x1117d0");
#endif

    switch (ctx->pc) {
        case 0x1117f0u: goto label_1117f0;
        default: break;
    }

    ctx->pc = 0x1117d0u;

    // 0x1117d0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1117d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1117d4: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x1117d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1117d8: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1117d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1117dc: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1117dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x1117e0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1117E0u;
    {
        const bool branch_taken_0x1117e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1117e0) {
            ctx->pc = 0x1117E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1117E0u;
            // 0x1117e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1117F4u;
            return;
        }
    }
    ctx->pc = 0x1117E8u;
    // 0x1117e8: 0xc061920  jal         func_186480
    ctx->pc = 0x1117E8u;
    SET_GPR_U32(ctx, 31, 0x1117F0u);
    ctx->pc = 0x1117ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1117E8u;
    // 0x1117ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1117E8u, 0x1117F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1117F0u;
label_1117f0:
    // 0x1117f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1117f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1117f4u;
}
