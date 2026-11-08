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

// Function: entry_00182760
// Address: 0x182760 - 0x182778
void entry_00182760_0x182760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182760_0x182760");
#endif

    ctx->pc = 0x182760u;

    // 0x182760: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x182760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x182764: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x182764u;
    {
        const bool branch_taken_0x182764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182764) {
            ctx->pc = 0x182768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182764u;
            // 0x182768: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182788u;
            return;
        }
    }
    ctx->pc = 0x18276Cu;
    // 0x18276c: 0xae100048  sw          $s0, 0x48($s0)
    ctx->pc = 0x18276cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 16));
    // 0x182770: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x182770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182774: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x182774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182778u;
}
