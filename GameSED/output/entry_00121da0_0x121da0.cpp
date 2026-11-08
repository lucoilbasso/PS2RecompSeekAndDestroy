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

// Function: entry_00121da0
// Address: 0x121da0 - 0x121dc0
void entry_00121da0_0x121da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121da0_0x121da0");
#endif

    ctx->pc = 0x121da0u;

    // 0x121da0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x121da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x121da4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x121DA4u;
    {
        const bool branch_taken_0x121da4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x121DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121DA4u;
        // 0x121da8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121da4) {
            ctx->pc = 0x121DC0u;
            return;
        }
    }
    ctx->pc = 0x121DACu;
    // 0x121dac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x121dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121db0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x121db0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x121db4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x121DB4u;
    {
        const bool branch_taken_0x121db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121db4) {
            ctx->pc = 0x121DD4u;
            return;
        }
    }
    ctx->pc = 0x121DBCu;
    // 0x121dbc: 0x0  nop
    ctx->pc = 0x121dbcu;
    // NOP
    ctx->pc = 0x121dc0u;
}
