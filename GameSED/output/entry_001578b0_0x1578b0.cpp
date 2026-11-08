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

// Function: entry_001578b0
// Address: 0x1578b0 - 0x1578d0
void entry_001578b0_0x1578b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001578b0_0x1578b0");
#endif

    ctx->pc = 0x1578b0u;

    // 0x1578b0: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1578b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1578b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1578b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1578b8: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x1578b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x1578bc: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1578bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1578c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1578C0u;
    {
        const bool branch_taken_0x1578c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1578C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578C0u;
        // 0x1578c4: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578c0) {
            ctx->pc = 0x1578D0u;
            return;
        }
    }
    ctx->pc = 0x1578C8u;
    // 0x1578c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1578c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1578cc: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1578ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    ctx->pc = 0x1578d0u;
}
