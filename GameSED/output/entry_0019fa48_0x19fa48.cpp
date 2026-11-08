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

// Function: entry_0019fa48
// Address: 0x19fa48 - 0x19fa64
void entry_0019fa48_0x19fa48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fa48_0x19fa48");
#endif

    ctx->pc = 0x19fa48u;

    // 0x19fa48: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x19fa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x19fa4c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x19fa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19fa50: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x19fa50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19fa54: 0xa81024  and         $v0, $a1, $t0
    ctx->pc = 0x19fa54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x19fa58: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x19FA58u;
    {
        const bool branch_taken_0x19fa58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA58u;
        // 0x19fa5c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa58) {
            ctx->pc = 0x19FA28u;
            return;
        }
    }
    ctx->pc = 0x19FA60u;
    // 0x19fa60: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x19fa60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19fa64u;
}
