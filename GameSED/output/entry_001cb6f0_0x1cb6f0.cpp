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

// Function: entry_001cb6f0
// Address: 0x1cb6f0 - 0x1cb710
void entry_001cb6f0_0x1cb6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb6f0_0x1cb6f0");
#endif

    ctx->pc = 0x1cb6f0u;

    // 0x1cb6f0: 0x30a200c0  andi        $v0, $a1, 0xC0
    ctx->pc = 0x1cb6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)192);
    // 0x1cb6f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CB6F4u;
    {
        const bool branch_taken_0x1cb6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB6F4u;
        // 0x1cb6f8: 0x2ca20030  sltiu       $v0, $a1, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb6f4) {
            ctx->pc = 0x1CB710u;
            return;
        }
    }
    ctx->pc = 0x1CB6FCu;
    // 0x1cb6fc: 0x30a7003f  andi        $a3, $a1, 0x3F
    ctx->pc = 0x1cb6fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x1cb700: 0xf11021  addu        $v0, $a3, $s1
    ctx->pc = 0x1cb700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x1cb704: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x1cb704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x1cb708: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x1CB708u;
    {
        const bool branch_taken_0x1cb708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB708u;
        // 0x1cb70c: 0xa04003fc  sb          $zero, 0x3FC($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1020), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb708) {
            ctx->pc = 0x1CBA90u;
            return;
        }
    }
    ctx->pc = 0x1CB710u;
}
