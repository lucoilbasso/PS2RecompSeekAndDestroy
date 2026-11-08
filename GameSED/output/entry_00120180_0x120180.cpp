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

// Function: entry_00120180
// Address: 0x120180 - 0x1201b0
void entry_00120180_0x120180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120180_0x120180");
#endif

    ctx->pc = 0x120180u;

    // 0x120180: 0x2010  mfhi        $a0
    ctx->pc = 0x120180u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x120184: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x120184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x120188: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x120188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12018c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12018cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x120190: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x120190u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
    // 0x120194: 0x250858c0  addiu       $t0, $t0, 0x58C0
    ctx->pc = 0x120194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22720));
    // 0x120198: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x120198u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x12019c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12019Cu;
    {
        const bool branch_taken_0x12019c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1201A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12019Cu;
        // 0x1201a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12019c) {
            ctx->pc = 0x1201B0u;
            return;
        }
    }
    ctx->pc = 0x1201A4u;
    // 0x1201a4: 0xc7808094  lwc1        $f0, -0x7F6C($gp)
    ctx->pc = 0x1201a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1201a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1201A8u;
    {
        const bool branch_taken_0x1201a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1201ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1201A8u;
        // 0x1201ac: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1201a8) {
            ctx->pc = 0x1201F0u;
            return;
        }
    }
    ctx->pc = 0x1201B0u;
}
