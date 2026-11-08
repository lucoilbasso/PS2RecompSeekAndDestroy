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

// Function: entry_001a4fa8
// Address: 0x1a4fa8 - 0x1a4fc8
void entry_001a4fa8_0x1a4fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4fa8_0x1a4fa8");
#endif

    ctx->pc = 0x1a4fa8u;

    // 0x1a4fa8: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1a4fa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a4fac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A4FACu;
    {
        const bool branch_taken_0x1a4fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FACu;
        // 0x1a4fb0: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4fac) {
            ctx->pc = 0x1A4FC8u;
            return;
        }
    }
    ctx->pc = 0x1A4FB4u;
    // 0x1a4fb4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a4fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a4fb8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1a4fb8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1a4fbc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A4FBCu;
    {
        const bool branch_taken_0x1a4fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FBCu;
        // 0x1a4fc0: 0xe44c0000  swc1        $f12, 0x0($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4fbc) {
            ctx->pc = 0x1A4FD8u;
            return;
        }
    }
    ctx->pc = 0x1A4FC4u;
    // 0x1a4fc4: 0x0  nop
    ctx->pc = 0x1a4fc4u;
    // NOP
    ctx->pc = 0x1a4fc8u;
}
