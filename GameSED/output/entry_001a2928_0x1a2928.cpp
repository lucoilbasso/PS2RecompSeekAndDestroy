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

// Function: entry_001a2928
// Address: 0x1a2928 - 0x1a2948
void entry_001a2928_0x1a2928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2928_0x1a2928");
#endif

    ctx->pc = 0x1a2928u;

    // 0x1a2928: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1a2928u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a292c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A292Cu;
    {
        const bool branch_taken_0x1a292c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A292Cu;
        // 0x1a2930: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a292c) {
            ctx->pc = 0x1A2948u;
            return;
        }
    }
    ctx->pc = 0x1A2934u;
    // 0x1a2934: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a2934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a2938: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1a2938u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x1a293c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A293Cu;
    {
        const bool branch_taken_0x1a293c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A293Cu;
        // 0x1a2940: 0xe4540000  swc1        $f20, 0x0($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a293c) {
            ctx->pc = 0x1A2958u;
            return;
        }
    }
    ctx->pc = 0x1A2944u;
    // 0x1a2944: 0x0  nop
    ctx->pc = 0x1a2944u;
    // NOP
    ctx->pc = 0x1a2948u;
}
