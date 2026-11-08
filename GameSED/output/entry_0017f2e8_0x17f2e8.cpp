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

// Function: entry_0017f2e8
// Address: 0x17f2e8 - 0x17f310
void entry_0017f2e8_0x17f2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f2e8_0x17f2e8");
#endif

    ctx->pc = 0x17f2e8u;

    // 0x17f2e8: 0x85220004  lh          $v0, 0x4($t1)
    ctx->pc = 0x17f2e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x17f2ec: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17F2ECu;
    {
        const bool branch_taken_0x17f2ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x17F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F2ECu;
        // 0x17f2f0: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f2ec) {
            ctx->pc = 0x17F310u;
            return;
        }
    }
    ctx->pc = 0x17F2F4u;
    // 0x17f2f4: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x17f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x17f2f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f2fc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x17f2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f300: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x17f300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x17f304: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x17f304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f308: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17F308u;
    {
        const bool branch_taken_0x17f308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F308u;
        // 0x17f30c: 0xe4e10004  swc1        $f1, 0x4($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f308) {
            ctx->pc = 0x17F314u;
            return;
        }
    }
    ctx->pc = 0x17F310u;
}
