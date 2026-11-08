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

// Function: entry_001544e0
// Address: 0x1544e0 - 0x1544f0
void entry_001544e0_0x1544e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001544e0_0x1544e0");
#endif

    ctx->pc = 0x1544e0u;

    // 0x1544e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1544e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1544e4: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1544E4u;
    {
        const bool branch_taken_0x1544e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1544E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544E4u;
        // 0x1544e8: 0x2683ffff  addiu       $v1, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544e4) {
            ctx->pc = 0x1544F4u;
            return;
        }
    }
    ctx->pc = 0x1544ECu;
    // 0x1544ec: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1544ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    ctx->pc = 0x1544f0u;
}
