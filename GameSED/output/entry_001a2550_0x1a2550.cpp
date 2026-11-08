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

// Function: entry_001a2550
// Address: 0x1a2550 - 0x1a2570
void entry_001a2550_0x1a2550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2550_0x1a2550");
#endif

    ctx->pc = 0x1a2550u;

    // 0x1a2550: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1a2550u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a2554: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2554u;
    {
        const bool branch_taken_0x1a2554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2554u;
        // 0x1a2558: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2554) {
            ctx->pc = 0x1A2570u;
            return;
        }
    }
    ctx->pc = 0x1A255Cu;
    // 0x1a255c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a255cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a2560: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1a2560u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x1a2564: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2564u;
    {
        const bool branch_taken_0x1a2564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2564u;
        // 0x1a2568: 0xe4540000  swc1        $f20, 0x0($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2564) {
            ctx->pc = 0x1A2580u;
            return;
        }
    }
    ctx->pc = 0x1A256Cu;
    // 0x1a256c: 0x0  nop
    ctx->pc = 0x1a256cu;
    // NOP
    ctx->pc = 0x1a2570u;
}
