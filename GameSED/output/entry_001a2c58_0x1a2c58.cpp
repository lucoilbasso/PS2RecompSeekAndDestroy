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

// Function: entry_001a2c58
// Address: 0x1a2c58 - 0x1a2c78
void entry_001a2c58_0x1a2c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2c58_0x1a2c58");
#endif

    ctx->pc = 0x1a2c58u;

    // 0x1a2c58: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1a2c58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a2c5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2C5Cu;
    {
        const bool branch_taken_0x1a2c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C5Cu;
        // 0x1a2c60: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c5c) {
            ctx->pc = 0x1A2C78u;
            return;
        }
    }
    ctx->pc = 0x1A2C64u;
    // 0x1a2c64: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a2c68: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1a2c68u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1a2c6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2C6Cu;
    {
        const bool branch_taken_0x1a2c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C6Cu;
        // 0x1a2c70: 0xe44c0000  swc1        $f12, 0x0($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c6c) {
            ctx->pc = 0x1A2C88u;
            return;
        }
    }
    ctx->pc = 0x1A2C74u;
    // 0x1a2c74: 0x0  nop
    ctx->pc = 0x1a2c74u;
    // NOP
    ctx->pc = 0x1a2c78u;
}
