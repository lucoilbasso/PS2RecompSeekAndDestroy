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

// Function: entry_0017ce08
// Address: 0x17ce08 - 0x17ce28
void entry_0017ce08_0x17ce08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ce08_0x17ce08");
#endif

    switch (ctx->pc) {
        case 0x17ce10u: goto label_17ce10;
        default: break;
    }

    ctx->pc = 0x17ce08u;

    // 0x17ce08: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17CE08u;
    SET_GPR_U32(ctx, 31, 0x17CE10u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17CE08u, 0x17CE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE10u;
label_17ce10:
    // 0x17ce10: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x17CE10u;
    {
        const bool branch_taken_0x17ce10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ce10) {
            ctx->pc = 0x17CE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CE10u;
            // 0x17ce14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CE54u;
            return;
        }
    }
    ctx->pc = 0x17CE18u;
    // 0x17ce18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17ce18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce1c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17CE1Cu;
    {
        const bool branch_taken_0x17ce1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CE1Cu;
        // 0x17ce20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ce1c) {
            ctx->pc = 0x17CE28u;
            return;
        }
    }
    ctx->pc = 0x17CE24u;
    // 0x17ce24: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17ce24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x17ce28u;
}
