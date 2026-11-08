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

// Function: entry_001632ec
// Address: 0x1632ec - 0x163308
void entry_001632ec_0x1632ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001632ec_0x1632ec");
#endif

    ctx->pc = 0x1632ecu;

    // 0x1632ec: 0x8e040c10  lw          $a0, 0xC10($s0)
    ctx->pc = 0x1632ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3088)));
    // 0x1632f0: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1632F0u;
    {
        const bool branch_taken_0x1632f0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1632F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632F0u;
        // 0x1632f4: 0xae420154  sw          $v0, 0x154($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1632f0) {
            ctx->pc = 0x163308u;
            return;
        }
    }
    ctx->pc = 0x1632F8u;
    // 0x1632f8: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x1632f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1632fc: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x1632fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x163300: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x163300u;
    {
        const bool branch_taken_0x163300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163300u;
        // 0x163304: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163300) {
            ctx->pc = 0x16330Cu;
            return;
        }
    }
    ctx->pc = 0x163308u;
}
