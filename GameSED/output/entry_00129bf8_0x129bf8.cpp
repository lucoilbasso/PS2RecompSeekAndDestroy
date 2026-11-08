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

// Function: entry_00129bf8
// Address: 0x129bf8 - 0x129c10
void entry_00129bf8_0x129bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129bf8_0x129bf8");
#endif

    ctx->pc = 0x129bf8u;

    // 0x129bf8: 0x16000021  bnez        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x129BF8u;
    {
        const bool branch_taken_0x129bf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x129bf8) {
            ctx->pc = 0x129C80u;
            return;
        }
    }
    ctx->pc = 0x129C00u;
    // 0x129c00: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x129C00u;
    {
        const bool branch_taken_0x129c00 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x129C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C00u;
        // 0x129c04: 0x8fa40080  lw          $a0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c00) {
            ctx->pc = 0x129C10u;
            return;
        }
    }
    ctx->pc = 0x129C08u;
    // 0x129c08: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x129c08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c0c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x129c0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->pc = 0x129c10u;
}
