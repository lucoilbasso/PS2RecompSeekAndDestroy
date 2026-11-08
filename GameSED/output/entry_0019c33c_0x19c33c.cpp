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

// Function: entry_0019c33c
// Address: 0x19c33c - 0x19c370
void entry_0019c33c_0x19c33c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c33c_0x19c33c");
#endif

    ctx->pc = 0x19c33cu;

    // 0x19c33c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c33cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c340: 0x2443f0f0  addiu       $v1, $v0, -0xF10
    ctx->pc = 0x19c340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19c344: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x19c344u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19c348: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19c348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19c34c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x19c34cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c350: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x19c350u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19c354: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x19c354u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c358: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19C358u;
    {
        const bool branch_taken_0x19c358 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C358u;
        // 0x19c35c: 0xe7ae0008  swc1        $f14, 0x8($sp) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c358) {
            ctx->pc = 0x19C3A0u;
            return;
        }
    }
    ctx->pc = 0x19C360u;
    // 0x19c360: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19c360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19c364: 0x24680008  addiu       $t0, $v1, 0x8
    ctx->pc = 0x19c364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19c368: 0x24478670  addiu       $a3, $v0, -0x7990
    ctx->pc = 0x19c368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936176));
    // 0x19c36c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19c370u;
}
