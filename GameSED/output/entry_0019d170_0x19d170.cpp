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

// Function: entry_0019d170
// Address: 0x19d170 - 0x19d184
void entry_0019d170_0x19d170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d170_0x19d170");
#endif

    ctx->pc = 0x19d170u;

    // 0x19d170: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19d170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19d174: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19d174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19d178: 0x9042f2d8  lbu         $v0, -0xD28($v0)
    ctx->pc = 0x19d178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294963928)));
    // 0x19d17c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D17Cu;
    {
        const bool branch_taken_0x19d17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D17Cu;
        // 0x19d180: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d17c) {
            ctx->pc = 0x19D18Cu;
            return;
        }
    }
    ctx->pc = 0x19D184u;
}
