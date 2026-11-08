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

// Function: entry_0018d064
// Address: 0x18d064 - 0x18d074
void entry_0018d064_0x18d064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d064_0x18d064");
#endif

    ctx->pc = 0x18d064u;

    // 0x18d064: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18d064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18d068: 0x5482000b  bnel        $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18D068u;
    {
        const bool branch_taken_0x18d068 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x18d068) {
            ctx->pc = 0x18D06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D068u;
            // 0x18d06c: 0x8e0201a8  lw          $v0, 0x1A8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D098u;
            return;
        }
    }
    ctx->pc = 0x18D070u;
    // 0x18d070: 0x86020246  lh          $v0, 0x246($s0)
    ctx->pc = 0x18d070u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 582)));
    ctx->pc = 0x18d074u;
}
