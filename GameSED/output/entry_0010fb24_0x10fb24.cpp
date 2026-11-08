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

// Function: entry_0010fb24
// Address: 0x10fb24 - 0x10fb48
void entry_0010fb24_0x10fb24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fb24_0x10fb24");
#endif

    ctx->pc = 0x10fb24u;

    // 0x10fb24: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x10FB24u;
    {
        const bool branch_taken_0x10fb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB24u;
        // 0x10fb28: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb24) {
            ctx->pc = 0x10FB7Cu;
            return;
        }
    }
    ctx->pc = 0x10FB2Cu;
    // 0x10fb2c: 0x30447fff  andi        $a0, $v0, 0x7FFF
    ctx->pc = 0x10fb2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x10fb30: 0x2c832000  sltiu       $v1, $a0, 0x2000
    ctx->pc = 0x10fb30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8192) ? 1 : 0);
    // 0x10fb34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FB34u;
    {
        const bool branch_taken_0x10fb34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB34u;
        // 0x10fb38: 0x2c824000  sltiu       $v0, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16384) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb34) {
            ctx->pc = 0x10FB48u;
            return;
        }
    }
    ctx->pc = 0x10FB3Cu;
    // 0x10fb3c: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x10fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x10fb40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10FB40u;
    {
        const bool branch_taken_0x10fb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB40u;
        // 0x10fb44: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb40) {
            ctx->pc = 0x10FB70u;
            return;
        }
    }
    ctx->pc = 0x10FB48u;
}
