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

// Function: entry_00137098
// Address: 0x137098 - 0x1370b0
void entry_00137098_0x137098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137098_0x137098");
#endif

    ctx->pc = 0x137098u;

    // 0x137098: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x137098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13709c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13709Cu;
    {
        const bool branch_taken_0x13709c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1370A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13709Cu;
        // 0x1370a0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13709c) {
            ctx->pc = 0x1370B0u;
            return;
        }
    }
    ctx->pc = 0x1370A4u;
    // 0x1370a4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1370A4u;
    {
        const bool branch_taken_0x1370a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1370A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370A4u;
        // 0x1370a8: 0x34c60040  ori         $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1370a4) {
            ctx->pc = 0x1370CCu;
            return;
        }
    }
    ctx->pc = 0x1370ACu;
    // 0x1370ac: 0x0  nop
    ctx->pc = 0x1370acu;
    // NOP
    ctx->pc = 0x1370b0u;
}
