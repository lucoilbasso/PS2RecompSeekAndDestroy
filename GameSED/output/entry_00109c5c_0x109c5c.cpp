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

// Function: entry_00109c5c
// Address: 0x109c5c - 0x109c78
void entry_00109c5c_0x109c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109c5c_0x109c5c");
#endif

    ctx->pc = 0x109c5cu;

    // 0x109c5c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x109c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x109c60: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x109c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x109c64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x109c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109c68: 0x10640020  beq         $v1, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x109C68u;
    {
        const bool branch_taken_0x109c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x109C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C68u;
        // 0x109c6c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c68) {
            ctx->pc = 0x109CECu;
            return;
        }
    }
    ctx->pc = 0x109C70u;
    // 0x109c70: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x109c70u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
    // 0x109c74: 0x0  nop
    ctx->pc = 0x109c74u;
    // NOP
    ctx->pc = 0x109c78u;
}
