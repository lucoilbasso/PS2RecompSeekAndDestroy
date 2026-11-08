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

// Function: entry_00144e10
// Address: 0x144e10 - 0x144e28
void entry_00144e10_0x144e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144e10_0x144e10");
#endif

    ctx->pc = 0x144e10u;

    // 0x144e10: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x144E10u;
    {
        const bool branch_taken_0x144e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x144E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E10u;
        // 0x144e14: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e10) {
            ctx->pc = 0x144E28u;
            return;
        }
    }
    ctx->pc = 0x144E18u;
    // 0x144e18: 0x8e420328  lw          $v0, 0x328($s2)
    ctx->pc = 0x144e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x144e1c: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x144E1Cu;
    {
        const bool branch_taken_0x144e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E1Cu;
        // 0x144e20: 0xe4544010  swc1        $f20, 0x4010($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16400), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e1c) {
            ctx->pc = 0x1450BCu;
            return;
        }
    }
    ctx->pc = 0x144E24u;
    // 0x144e24: 0x0  nop
    ctx->pc = 0x144e24u;
    // NOP
    ctx->pc = 0x144e28u;
}
