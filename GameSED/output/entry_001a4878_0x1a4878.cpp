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

// Function: entry_001a4878
// Address: 0x1a4878 - 0x1a4898
void entry_001a4878_0x1a4878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4878_0x1a4878");
#endif

    ctx->pc = 0x1a4878u;

    // 0x1a4878: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1a4878u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a487c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A487Cu;
    {
        const bool branch_taken_0x1a487c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A487Cu;
        // 0x1a4880: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a487c) {
            ctx->pc = 0x1A4898u;
            return;
        }
    }
    ctx->pc = 0x1A4884u;
    // 0x1a4884: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a4884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a4888: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1a4888u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1a488c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A488Cu;
    {
        const bool branch_taken_0x1a488c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A488Cu;
        // 0x1a4890: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a488c) {
            ctx->pc = 0x1A48A8u;
            return;
        }
    }
    ctx->pc = 0x1A4894u;
    // 0x1a4894: 0x0  nop
    ctx->pc = 0x1a4894u;
    // NOP
    ctx->pc = 0x1a4898u;
}
