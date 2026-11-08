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

// Function: entry_0013783c
// Address: 0x13783c - 0x137848
void entry_0013783c_0x13783c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013783c_0x13783c");
#endif

    ctx->pc = 0x13783cu;

    // 0x13783c: 0x56c0ff5a  bnel        $s6, $zero, . + 4 + (-0xA6 << 2)
    ctx->pc = 0x13783Cu;
    {
        const bool branch_taken_0x13783c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x13783c) {
            ctx->pc = 0x137840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13783Cu;
            // 0x137840: 0x8ed30004  lw          $s3, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1375A8u;
            return;
        }
    }
    ctx->pc = 0x137844u;
    // 0x137844: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x137844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    ctx->pc = 0x137848u;
}
