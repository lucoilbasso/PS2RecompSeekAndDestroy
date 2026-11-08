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

// Function: entry_001818a8
// Address: 0x1818a8 - 0x1818c0
void entry_001818a8_0x1818a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001818a8_0x1818a8");
#endif

    ctx->pc = 0x1818a8u;

    // 0x1818a8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1818a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1818ac: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1818ACu;
    {
        const bool branch_taken_0x1818ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1818ac) {
            ctx->pc = 0x1818B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1818ACu;
            // 0x1818b0: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1818D0u;
            return;
        }
    }
    ctx->pc = 0x1818B4u;
    // 0x1818b4: 0xae100048  sw          $s0, 0x48($s0)
    ctx->pc = 0x1818b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 16));
    // 0x1818b8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1818b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1818bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1818bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1818c0u;
}
