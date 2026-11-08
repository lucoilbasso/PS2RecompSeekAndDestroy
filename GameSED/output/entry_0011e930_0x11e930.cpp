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

// Function: entry_0011e930
// Address: 0x11e930 - 0x11e948
void entry_0011e930_0x11e930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e930_0x11e930");
#endif

    ctx->pc = 0x11e930u;

    // 0x11e930: 0x8c860030  lw          $a2, 0x30($a0)
    ctx->pc = 0x11e930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x11e934: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x11e934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x11e938: 0x90c20007  lbu         $v0, 0x7($a2)
    ctx->pc = 0x11e938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x11e93c: 0x90830007  lbu         $v1, 0x7($a0)
    ctx->pc = 0x11e93cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x11e940: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E940u;
    {
        const bool branch_taken_0x11e940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11e940) {
            ctx->pc = 0x11E944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E940u;
            // 0x11e944: 0x90830007  lbu         $v1, 0x7($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E950u;
            return;
        }
    }
    ctx->pc = 0x11E948u;
}
