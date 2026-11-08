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

// Function: entry_00112054
// Address: 0x112054 - 0x112068
void entry_00112054_0x112054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112054_0x112054");
#endif

    ctx->pc = 0x112054u;

    // 0x112054: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x112054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x112058: 0x24110013  addiu       $s1, $zero, 0x13
    ctx->pc = 0x112058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x11205c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11205cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112060: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x112060u;
    {
        const bool branch_taken_0x112060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112060u;
        // 0x112064: 0x8c5e0000  lw          $fp, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112060) {
            ctx->pc = 0x112124u;
            return;
        }
    }
    ctx->pc = 0x112068u;
}
