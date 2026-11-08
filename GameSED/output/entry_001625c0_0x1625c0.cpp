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

// Function: entry_001625c0
// Address: 0x1625c0 - 0x1625e4
void entry_001625c0_0x1625c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001625c0_0x1625c0");
#endif

    ctx->pc = 0x1625c0u;

    // 0x1625c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1625c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1625c4: 0xe6b40000  swc1        $f20, 0x0($s5)
    ctx->pc = 0x1625c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x1625c8: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x1625c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1625cc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1625ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1625d0: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x1625d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1625d4: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1625d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1625d8: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x1625d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1625dc: 0x1440ff36  bnez        $v0, . + 4 + (-0xCA << 2)
    ctx->pc = 0x1625DCu;
    {
        const bool branch_taken_0x1625dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1625E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1625DCu;
        // 0x1625e0: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1625dc) {
            ctx->pc = 0x1622B8u;
            return;
        }
    }
    ctx->pc = 0x1625E4u;
}
