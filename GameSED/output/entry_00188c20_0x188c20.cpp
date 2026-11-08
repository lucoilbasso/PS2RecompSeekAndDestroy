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

// Function: entry_00188c20
// Address: 0x188c20 - 0x188c3c
void entry_00188c20_0x188c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188c20_0x188c20");
#endif

    ctx->pc = 0x188c20u;

    // 0x188c20: 0x8e550150  lw          $s5, 0x150($s2)
    ctx->pc = 0x188c20u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x188c24: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x188c24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x188c28: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x188c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x188c2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188C2Cu;
    {
        const bool branch_taken_0x188c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C2Cu;
        // 0x188c30: 0x2a0b02d  daddu       $s6, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c2c) {
            ctx->pc = 0x188C3Cu;
            return;
        }
    }
    ctx->pc = 0x188C34u;
    // 0x188c34: 0xc061920  jal         func_186480
    ctx->pc = 0x188C34u;
    SET_GPR_U32(ctx, 31, 0x188C3Cu);
    ctx->pc = 0x188C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188C34u;
    // 0x188c38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x188C34u, 0x188C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188C3Cu;
}
