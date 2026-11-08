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

// Function: entry_001c1680
// Address: 0x1c1680 - 0x1c16ac
void entry_001c1680_0x1c1680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1680_0x1c1680");
#endif

    ctx->pc = 0x1c1680u;

    // 0x1c1680: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c1680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c1684: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c1684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c1688: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1688u;
    {
        const bool branch_taken_0x1c1688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1688) {
            ctx->pc = 0x1C168Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1688u;
            // 0x1c168c: 0x8e020180  lw          $v0, 0x180($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C16ACu;
            return;
        }
    }
    ctx->pc = 0x1C1690u;
    // 0x1c1690: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1694: 0xae0301b0  sw          $v1, 0x1B0($s0)
    ctx->pc = 0x1c1694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 3));
    // 0x1c1698: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c1698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c169c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c169cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c16a0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1C16A0u;
    {
        const bool branch_taken_0x1c16a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c16a0) {
            ctx->pc = 0x1C16A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C16A0u;
            // 0x1c16a4: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C16D8u;
            return;
        }
    }
    ctx->pc = 0x1C16A8u;
    // 0x1c16a8: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x1c16a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    ctx->pc = 0x1c16acu;
}
