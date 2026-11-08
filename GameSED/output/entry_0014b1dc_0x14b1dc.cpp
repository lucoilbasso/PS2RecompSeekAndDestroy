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

// Function: entry_0014b1dc
// Address: 0x14b1dc - 0x14b210
void entry_0014b1dc_0x14b1dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b1dc_0x14b1dc");
#endif

    switch (ctx->pc) {
        case 0x14b1e4u: goto label_14b1e4;
        case 0x14b208u: goto label_14b208;
        default: break;
    }

    ctx->pc = 0x14b1dcu;

    // 0x14b1dc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14B1DCu;
    SET_GPR_U32(ctx, 31, 0x14B1E4u);
    ctx->pc = 0x14B1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B1DCu;
    // 0x14b1e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14B1DCu, 0x14B1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B1E4u;
label_14b1e4:
    // 0x14b1e4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14b1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14b1e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14b1e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1ec: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x14b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x14b1f0: 0x24a56bd8  addiu       $a1, $a1, 0x6BD8
    ctx->pc = 0x14b1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27608));
    // 0x14b1f4: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x14b1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x14b1f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B1F8u;
    {
        const bool branch_taken_0x14b1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B1F8u;
        // 0x14b1fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b1f8) {
            ctx->pc = 0x14B210u;
            return;
        }
    }
    ctx->pc = 0x14B200u;
    // 0x14b200: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14B200u;
    SET_GPR_U32(ctx, 31, 0x14B208u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14B200u, 0x14B208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B208u;
label_14b208:
    // 0x14b208: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14B208u;
    {
        const bool branch_taken_0x14b208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B208u;
        // 0x14b20c: 0x8e1001c0  lw          $s0, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b208) {
            ctx->pc = 0x14B238u;
            return;
        }
    }
    ctx->pc = 0x14B210u;
}
