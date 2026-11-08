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

// Function: entry_00131f20
// Address: 0x131f20 - 0x131f34
void entry_00131f20_0x131f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131f20_0x131f20");
#endif

    ctx->pc = 0x131f20u;

    // 0x131f20: 0x5444000e  bnel        $v0, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x131F20u;
    {
        const bool branch_taken_0x131f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x131f20) {
            ctx->pc = 0x131F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131F20u;
            // 0x131f24: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131F5Cu;
            return;
        }
    }
    ctx->pc = 0x131F28u;
    // 0x131f28: 0x8ca200e8  lw          $v0, 0xE8($a1)
    ctx->pc = 0x131f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 232)));
    // 0x131f2c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x131F2Cu;
    {
        const bool branch_taken_0x131f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131f2c) {
            ctx->pc = 0x131F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131F2Cu;
            // 0x131f30: 0xaca200e4  sw          $v0, 0xE4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 228), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131F34u;
            return;
        }
    }
    ctx->pc = 0x131F34u;
}
