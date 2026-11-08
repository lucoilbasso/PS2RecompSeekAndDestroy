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

// Function: entry_001a9d80
// Address: 0x1a9d80 - 0x1a9db8
void entry_001a9d80_0x1a9d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9d80_0x1a9d80");
#endif

    ctx->pc = 0x1a9d80u;

    // 0x1a9d80: 0x8c8700e4  lw          $a3, 0xE4($a0)
    ctx->pc = 0x1a9d80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x1a9d84: 0x14e0000c  bnez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x1A9D84u;
    {
        const bool branch_taken_0x1a9d84 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D84u;
        // 0x1a9d88: 0x8c8300dc  lw          $v1, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d84) {
            ctx->pc = 0x1A9DB8u;
            return;
        }
    }
    ctx->pc = 0x1A9D8Cu;
    // 0x1a9d8c: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x1a9d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a9d90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9d94: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1a9d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9d98: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a9d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a9d9c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1a9d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1a9da0: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1a9da0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1a9da4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1a9da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9da8: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x1a9da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1a9dac: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1a9dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9db0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1A9DB0u;
    {
        const bool branch_taken_0x1a9db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DB0u;
        // 0x1a9db4: 0xe4c10008  swc1        $f1, 0x8($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9db0) {
            ctx->pc = 0x1A9E40u;
            return;
        }
    }
    ctx->pc = 0x1A9DB8u;
}
