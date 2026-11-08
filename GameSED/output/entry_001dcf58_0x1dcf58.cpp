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

// Function: entry_001dcf58
// Address: 0x1dcf58 - 0x1dcf80
void entry_001dcf58_0x1dcf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcf58_0x1dcf58");
#endif

    ctx->pc = 0x1dcf58u;

    // 0x1dcf58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dcf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcf5c: 0x50a20010  beql        $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DCF5Cu;
    {
        const bool branch_taken_0x1dcf5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dcf5c) {
            ctx->pc = 0x1DCF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCF5Cu;
            // 0x1dcf60: 0xc4e00004  lwc1        $f0, 0x4($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCFA0u;
            return;
        }
    }
    ctx->pc = 0x1DCF64u;
    // 0x1dcf64: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1dcf64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1dcf68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCF68u;
    {
        const bool branch_taken_0x1dcf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF68u;
        // 0x1dcf6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf68) {
            ctx->pc = 0x1DCF80u;
            return;
        }
    }
    ctx->pc = 0x1DCF70u;
    // 0x1dcf70: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DCF70u;
    {
        const bool branch_taken_0x1dcf70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcf70) {
            ctx->pc = 0x1DCF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCF70u;
            // 0x1dcf74: 0xc4e00000  lwc1        $f0, 0x0($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCF90u;
            return;
        }
    }
    ctx->pc = 0x1DCF78u;
    // 0x1dcf78: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1DCF78u;
    {
        const bool branch_taken_0x1dcf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF78u;
        // 0x1dcf7c: 0x24830020  addiu       $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf78) {
            ctx->pc = 0x1DCFBCu;
            return;
        }
    }
    ctx->pc = 0x1DCF80u;
}
