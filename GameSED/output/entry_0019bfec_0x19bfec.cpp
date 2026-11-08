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

// Function: entry_0019bfec
// Address: 0x19bfec - 0x19c020
void entry_0019bfec_0x19bfec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bfec_0x19bfec");
#endif

    ctx->pc = 0x19bfecu;

    // 0x19bfec: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19bfecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19bff0: 0x2443f0f0  addiu       $v1, $v0, -0xF10
    ctx->pc = 0x19bff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19bff4: 0xe7ac0008  swc1        $f12, 0x8($sp)
    ctx->pc = 0x19bff4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19bff8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19bff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19bffc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x19bffcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c000: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x19c000u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19c004: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x19c004u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c008: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19C008u;
    {
        const bool branch_taken_0x19c008 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C008u;
        // 0x19c00c: 0xe7ac0004  swc1        $f12, 0x4($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c008) {
            ctx->pc = 0x19C050u;
            return;
        }
    }
    ctx->pc = 0x19C010u;
    // 0x19c010: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19c010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19c014: 0x24680008  addiu       $t0, $v1, 0x8
    ctx->pc = 0x19c014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19c018: 0x24478670  addiu       $a3, $v0, -0x7990
    ctx->pc = 0x19c018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936176));
    // 0x19c01c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19c020u;
}
