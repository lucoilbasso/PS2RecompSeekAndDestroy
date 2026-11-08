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

// Function: entry_001beea4
// Address: 0x1beea4 - 0x1beed8
void entry_001beea4_0x1beea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001beea4_0x1beea4");
#endif

    ctx->pc = 0x1beea4u;

    // 0x1beea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1beea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beea8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1beea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1beeac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1beeacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beeb0: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x1beeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1beeb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1beeb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beeb8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1beeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1beebc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1beebcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beec0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1beec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1beec4: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1beec4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1beec8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1beec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1beecc: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1beeccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beed0: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x1BEED0u;
    {
        const bool branch_taken_0x1beed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEED0u;
        // 0x1beed4: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beed0) {
            ctx->pc = 0x1BF2C0u;
            return;
        }
    }
    ctx->pc = 0x1BEED8u;
}
