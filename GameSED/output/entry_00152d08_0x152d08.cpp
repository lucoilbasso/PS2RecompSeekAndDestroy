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

// Function: entry_00152d08
// Address: 0x152d08 - 0x152d38
void entry_00152d08_0x152d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152d08_0x152d08");
#endif

    switch (ctx->pc) {
        case 0x152d34u: goto label_152d34;
        default: break;
    }

    ctx->pc = 0x152d08u;

    // 0x152d08: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x152D08u;
    {
        const bool branch_taken_0x152d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x152D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D08u;
        // 0x152d0c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d08) {
            ctx->pc = 0x152D38u;
            return;
        }
    }
    ctx->pc = 0x152D10u;
    // 0x152d10: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x152D10u;
    {
        const bool branch_taken_0x152d10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x152d10) {
            ctx->pc = 0x152D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152D10u;
            // 0x152d14: 0xdfb10058  ld          $s1, 0x58($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152D3Cu;
            return;
        }
    }
    ctx->pc = 0x152D18u;
    // 0x152d18: 0x8c820c04  lw          $v0, 0xC04($a0)
    ctx->pc = 0x152d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3076)));
    // 0x152d1c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x152d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x152d20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x152D20u;
    {
        const bool branch_taken_0x152d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D20u;
        // 0x152d24: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d20) {
            ctx->pc = 0x152D38u;
            return;
        }
    }
    ctx->pc = 0x152D28u;
    // 0x152d28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x152d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d2c: 0xc0596d8  jal         func_165B60
    ctx->pc = 0x152D2Cu;
    SET_GPR_U32(ctx, 31, 0x152D34u);
    ctx->pc = 0x152D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152D2Cu;
    // 0x152d30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165B60u, 0x152D2Cu, 0x152D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D34u;
label_152d34:
    // 0x152d34: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x152d34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->pc = 0x152d38u;
}
