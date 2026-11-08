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

// Function: entry_00137b04
// Address: 0x137b04 - 0x137b30
void entry_00137b04_0x137b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137b04_0x137b04");
#endif

    switch (ctx->pc) {
        case 0x137b24u: goto label_137b24;
        default: break;
    }

    ctx->pc = 0x137b04u;

    // 0x137b04: 0x26420300  addiu       $v0, $s2, 0x300
    ctx->pc = 0x137b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
    // 0x137b08: 0x8e470400  lw          $a3, 0x400($s2)
    ctx->pc = 0x137b08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1024)));
    // 0x137b0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x137b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137b10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x137b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137b14: 0x26460200  addiu       $a2, $s2, 0x200
    ctx->pc = 0x137b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
    // 0x137b18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x137b18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137b1c: 0xc061468  jal         func_1851A0
    ctx->pc = 0x137B1Cu;
    SET_GPR_U32(ctx, 31, 0x137B24u);
    ctx->pc = 0x137B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137B1Cu;
    // 0x137b20: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1851A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1851A0u, 0x137B1Cu, 0x137B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137B24u;
label_137b24:
    // 0x137b24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137B24u;
    {
        const bool branch_taken_0x137b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B24u;
        // 0x137b28: 0x8e420400  lw          $v0, 0x400($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b24) {
            ctx->pc = 0x137B34u;
            return;
        }
    }
    ctx->pc = 0x137B2Cu;
    // 0x137b2c: 0x0  nop
    ctx->pc = 0x137b2cu;
    // NOP
    ctx->pc = 0x137b30u;
}
