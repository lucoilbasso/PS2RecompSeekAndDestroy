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

// Function: entry_001a1090
// Address: 0x1a1090 - 0x1a10b8
void entry_001a1090_0x1a1090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1090_0x1a1090");
#endif

    ctx->pc = 0x1a1090u;

    // 0x1a1090: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a1090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a1094: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a1094u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a1098: 0xac202c08  sw          $zero, 0x2C08($at)
    ctx->pc = 0x1a1098u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11272), GPR_U32(ctx, 0));
    // 0x1a109c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A109Cu;
    {
        const bool branch_taken_0x1a109c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A109Cu;
        // 0x1a10a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a109c) {
            ctx->pc = 0x1A10B8u;
            return;
        }
    }
    ctx->pc = 0x1A10A4u;
    // 0x1a10a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a10a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a10a8: 0xac920004  sw          $s2, 0x4($a0)
    ctx->pc = 0x1a10a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 18));
    // 0x1a10ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a10acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a10b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A10B0u;
    {
        const bool branch_taken_0x1a10b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A10B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10B0u;
        // 0x1a10b4: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a10b0) {
            ctx->pc = 0x1A10BCu;
            return;
        }
    }
    ctx->pc = 0x1A10B8u;
}
