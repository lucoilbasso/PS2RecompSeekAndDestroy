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

// Function: entry_0010fac8
// Address: 0x10fac8 - 0x10faf0
void entry_0010fac8_0x10fac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fac8_0x10fac8");
#endif

    ctx->pc = 0x10fac8u;

    // 0x10fac8: 0x32228000  andi        $v0, $s1, 0x8000
    ctx->pc = 0x10fac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
    // 0x10facc: 0x104000cf  beqz        $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x10FACCu;
    {
        const bool branch_taken_0x10facc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FACCu;
        // 0x10fad0: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10facc) {
            ctx->pc = 0x10FE0Cu;
            return;
        }
    }
    ctx->pc = 0x10FAD4u;
    // 0x10fad4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10fad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10fad8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10fad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fadc: 0x2442ff4a  addiu       $v0, $v0, -0xB6
    ctx->pc = 0x10fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967114));
    // 0x10fae0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x10fae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10fae4: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x10FAE4u;
    {
        const bool branch_taken_0x10fae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAE4u;
        // 0x10fae8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fae4) {
            ctx->pc = 0x10FE0Cu;
            return;
        }
    }
    ctx->pc = 0x10FAECu;
    // 0x10faec: 0x0  nop
    ctx->pc = 0x10faecu;
    // NOP
    ctx->pc = 0x10faf0u;
}
