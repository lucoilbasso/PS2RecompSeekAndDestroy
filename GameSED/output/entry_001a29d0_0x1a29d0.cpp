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

// Function: entry_001a29d0
// Address: 0x1a29d0 - 0x1a29e8
void entry_001a29d0_0x1a29d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a29d0_0x1a29d0");
#endif

    ctx->pc = 0x1a29d0u;

    // 0x1a29d0: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x1a29d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a29d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A29D4u;
    {
        const bool branch_taken_0x1a29d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A29D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29D4u;
        // 0x1a29d8: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a29d4) {
            ctx->pc = 0x1A29E8u;
            return;
        }
    }
    ctx->pc = 0x1A29DCu;
    // 0x1a29dc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1a29dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1a29e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A29E0u;
    {
        const bool branch_taken_0x1a29e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A29E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29E0u;
        // 0x1a29e4: 0xc4420000  lwc1        $f2, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a29e0) {
            ctx->pc = 0x1A29FCu;
            return;
        }
    }
    ctx->pc = 0x1A29E8u;
}
