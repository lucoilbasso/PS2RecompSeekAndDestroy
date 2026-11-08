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

// Function: entry_001814b0
// Address: 0x1814b0 - 0x1814cc
void entry_001814b0_0x1814b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001814b0_0x1814b0");
#endif

    ctx->pc = 0x1814b0u;

    // 0x1814b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1814b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1814b4: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x1814b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1814b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1814B8u;
    {
        const bool branch_taken_0x1814b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1814BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1814B8u;
        // 0x1814bc: 0x8e080028  lw          $t0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1814b8) {
            ctx->pc = 0x1814CCu;
            return;
        }
    }
    ctx->pc = 0x1814C0u;
    // 0x1814c0: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1814c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1814c4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1814c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1814c8: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x1814c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1814ccu;
}
